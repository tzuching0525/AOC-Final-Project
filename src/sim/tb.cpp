#include <verilated.h>  // Include common routines
#include <verilated_vcd_c.h>
#include "VTop.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

#define CYCLE        10
#define MAX_CYCLE    10000
#define IFMAP_WORDS  16        // 8-bit*64 bytes / 4 bytes per word
#define WEIGHT_WORDS 1024      // 8-bit*64*64 bytes / 4 per word
#define BIAS_WORDS   64        // 32-bit*64
#define TOTAL_IFMAP_WORDS  (IFMAP_WORDS*2)
#define TOTAL_WEIGHT_WORDS (WEIGHT_WORDS*2)
#define TOTAL_BIAS_WORDS   (BIAS_WORDS*2)

// Waveform dump step macro
#define step(dut, wave, time)    \
    dut->clk = !dut->clk;        \
    dut->eval();                 \
    wave->dump(time);            \
    time += CYCLE/2;

// Load hex data into generic vector
template<typename T>
void load_hex(const string &fname, vector<T> &mem) {
    ifstream ifs(fname);
    if (!ifs) {
        cerr << "Error opening file: " << fname << endl;
        exit(1);
    }
    string tok;
    size_t idx = 0;
    while (ifs >> tok && idx < mem.size()) {
        mem[idx++] = static_cast<T>(stoul(tok, nullptr, 16));
    }
}

// Load binary mode file (0/1)
void load_mode(const string &fname, vector<bool> &mode) {
    ifstream ifs(fname);
    if (!ifs) {
        cerr << "Error opening file: " << fname << endl;
        exit(1);
    }
    string tok;
    size_t idx = 0;
    while (ifs >> tok && idx < mode.size()) {
        mode[idx++] = (tok == "1");
    }
}

// State machine phases for feeding
enum Phase {
    P_IFMAP1, P_WEIGHT1, P_BIAS1, P_WAIT1,
    P_IFMAP2, P_WEIGHT2, P_BIAS2, P_WAIT2,
    P_DONE
};

// Feed transactions in the specified order per mode
void transaction(VTop *dut,
                 const vector<uint8_t> &ifmap,
                 const vector<uint8_t> &weight,
                 const vector<uint32_t> &bias,
                 const vector<bool> &modeVec,
                 const vector<uint16_t> &scaling,
                 Phase &phase,
                 int &idx_phase) {
    // Only feed during phases P_IFMAP*...P_BIAS*
    if (phase == P_WAIT1 || phase == P_WAIT2 || phase == P_DONE) return;
    uint32_t data_val = 0;
    bool mode0 = (modeVec[0] == false);
    if (phase == P_IFMAP1 || phase == P_IFMAP2) {
        // Pack 4 bytes into one word
        size_t base = 4 * idx_phase + (phase == P_IFMAP2 ? 4*IFMAP_WORDS : 0);
        data_val = (ifmap[base+3]<<24)|(ifmap[base+2]<<16)
                 |(ifmap[base+1]<<8) | ifmap[base];
    } else if (phase == P_WEIGHT1 || phase == P_WEIGHT2) {
        size_t start = (phase == P_WEIGHT1 ? 0 : WEIGHT_WORDS);
        size_t base = 4 * (start + idx_phase);
        data_val = (weight[base+3]<<24)|(weight[base+2]<<16)
                 |(weight[base+1]<<8) | weight[base];
    } else if (phase == P_BIAS1 || phase == P_BIAS2) {
        size_t start = (phase == P_BIAS1 ? 0 : BIAS_WORDS);
        data_val = bias[start + idx_phase];
    }
    // Drive inputs
    dut->data_in = data_val;
    dut->scaling_factor = scaling[0];
    dut->mode = modeVec[0];
    dut->ready = 1;
    dut->eval();

    // Advance index or phase
    idx_phase++;
    bool phase_done = false;
    if ((phase == P_IFMAP1   || phase == P_IFMAP2)   && idx_phase == IFMAP_WORDS)  phase_done = true;
    if ((phase == P_WEIGHT1  || phase == P_WEIGHT2)  && idx_phase == WEIGHT_WORDS) phase_done = true;
    if ((phase == P_BIAS1    || phase == P_BIAS2)    && idx_phase == BIAS_WORDS)   phase_done = true;
    if (phase_done) {
        idx_phase = 0;
        phase = Phase(phase + 1);
    }
}

// Compare outputs and display pass/fail
void check_results(const vector<uint32_t> &captured,
                   const vector<uint32_t> &golden) {
    if (captured.size() != golden.size()) {
        cerr << "Error: captured.size() != golden.size() ("
             << captured.size() << " vs " << golden.size() << ")" << endl;
        return;
    }
    int errs = 0;
    for (size_t i = 0; i < captured.size(); ++i) {
        cout << "Index " << setw(3) << i << ": got 0x"
             << hex << setw(8) << captured[i] << dec;
        if (captured[i] != golden[i]) {
            cout << "  ERROR! expected 0x" << hex << setw(8) << golden[i] << dec;
            errs++;
        } else {
            cout << "  PASS";
        }
        cout << endl;
    }
    cout << "\nTest " << (errs == 0 ? "PASSED" : ("FAILED with " + to_string(errs) + " errors")) << endl;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *wave = new VerilatedVcdC;

    VTop *dut = new VTop;
    dut->trace(wave, 99);
    wave->open("wave_top.vcd");

    // Initialize
    dut->clk = 0;
    dut->rst = 1;
    dut->ready = 0;

    // Load memories
    vector<uint8_t> ifmap(256);      // max size
    vector<uint8_t> weight(65536);
    vector<uint32_t> bias(128);
    vector<uint32_t> golden(128);
    vector<bool> modeVec(1);
    vector<uint16_t> scaling(1);

    load_hex("./sim/data/ifmap.txt", ifmap);
    load_hex("./sim/data/weight.txt", weight);
    load_hex("./sim/data/bias.txt", bias);
    load_hex("./sim/data/golden.txt", golden);
    load_mode("./sim/data/mode.txt", modeVec);
    load_hex("./sim/data/scaling_factor.txt", scaling);

    int time = 0;
    Phase phase = P_IFMAP1;
    int idx_phase = 0;
    vector<uint32_t> captured;

    // Simulation loop
    for (; time < MAX_CYCLE * CYCLE; ) {
        // Release reset after 2 cycles
        if (time == CYCLE*2) dut->rst = 0;
        // Toggle and dump
        step(dut, wave, time);

        // On rising edge: feed
        if (dut->clk && phase != P_DONE) {
            if (dut->done && phase == P_IFMAP1) {
                // start feeding once DUT signals done
                phase = P_IFMAP1;
            }
            if (!dut->rst) transaction(dut, ifmap, weight, bias, modeVec, scaling, phase, idx_phase);
        }

        // On falling edge: capture outputs
        if (!dut->clk && dut->valid) {
            captured.push_back(dut->ofmap);
            if (captured.size() == golden.size()) break;
        }
    }

    // Compare
    check_results(captured, golden);

    wave->close();
    delete dut;
    delete wave;
    return 0;
}


/*
tb execution order

mode0 (layer1)

weight = 8-bit * 64 * 128 (w*h)
ifmap = 8-bit * 64
ofmap(bias) = 32-bit * 128

order : 
1. ifmap(8-bit * 64)
2. weight(8-bit * 64 * [0:63])
3. bias(32-bit * [0:63])
4. ofmap(32-bit * [0:63])
5. ifmap(8-bit * 64)
6. weight(8-bit * 64 * [64:127])
7. bias(32-bit * [64:127])
8. ofmap(32-bit * [64:127])
*/

/*
mode1 (layer3)

weight = 8-bit * 128 * 64 (w*h)
ifmap = 8-bit * 128
ofmap(bias) = 32-bit * 64

order :
1. ifmap(8-bit * [0:63])
2. weight(8-bit * [0:63] * 64)
3. bias(32-bit * 64)
4. ofmap(32-bit * 64)
5. ifmap(8-bit * [64:127])
6. weight(8-bit * [64:127] * 64)
7. previous ofmap(32-bit * 64)
8. ofmap(32-bit * 64)

*/