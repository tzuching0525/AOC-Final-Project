#include <stdio.h>
#include <stdlib.h>

#include "hardware_dla.h"
#include "runtime.h"

/*  //////////      NOTICE      //////////
    all parameter used to set DLA are send in by function argument
*/

void dla_stop() {
    // set disable
    reg_write(DLA_ENABLE_OFFSET, 0);
}

void dla_init() {
#ifdef DLA_INFO
    fprintf(stdout, "DLA runtime info logging enabled.\n");
    dla_reset_runtime_info();
    create_dla_info_to_csv(DLA_INFO_CSV);
#endif
    hal_init();
}

void dla_final() {
#ifdef DLA_INFO
    fprintf(stdout, "Creating dla info file: %s\n", DLA_INFO_CSV);
#endif
    hal_final();
}

void dla_reset_runtime_info() { reset_runtime_info(); }

void create_dla_info_to_csv(const char *filename) {
    fprintf(stdout, "Creating dla info file: %s\n", filename);
    FILE *file = fopen(filename, "w");
    if (!file) {
        fprintf(stderr, "Create DLA info file failed.\n");
        return;
    }
    fprintf(file,
            "Operation,Cycles,Time(ns),Memory read,Memory write,"
            "TokenCount,TokenDim,OutputDim,Scale\n");
    fclose(file);
}

void dump_dla_info_to_csv(const char *filename, const char *operation_name,
                          uint32_t token_count, uint32_t token_dim, uint32_t output_dim,
                          uint32_t scale) {
    FILE *file = fopen(filename, "a");
    struct runtime_info info = get_runtime_info();
    fprintf(file, "%s,", operation_name);             // Operation
    fprintf(file, "%10d,", info.elapsed_cycle);       // Cycles
    fprintf(file, "%10d,", info.elapsed_time);        // Time (ns)
    fprintf(file, "%10d,", info.memory_read);         // Memory read
    fprintf(file, "%10d,", info.memory_write);        // Memory write
    fprintf(file, "%d,%d,%d,%d\n", token_count, token_dim, output_dim, scale);  // ViT-specific
    fclose(file);
}

int qlinear_relu(int8_t *input_in_DRAM, int8_t *weight_in_DRAM,
                 int32_t *output_in_DRAM, int32_t *bias,
                 uint32_t scale, uint32_t mode) {
#ifdef DLA_INFO
    dla_reset_runtime_info();
#endif
    set_enable(scale, mode);  // undone

    uint32_t ifmap0, ifmap1, weight0, weight1, data_in;
    for (uint32_t i = 0; i < 16 * 2 + 64 * 16 * 2 + 64 * 2; ++i) {
        ifmap0 =    (input_in_DRAM[4 * i + 3]) << 24 |
                    (input_in_DRAM[4 * i + 2]) << 16 |
                    (input_in_DRAM[4 * i + 1]) << 8 |
                    (input_in_DRAM[4 * i + 0]);
        if (mode == 0) {
            weight0 =   (weight_in_DRAM[4 * (i - 16) + 3] << 24) |
                        (weight_in_DRAM[4 * (i - 16) + 2] << 16) |
                        (weight_in_DRAM[4 * (i - 16) + 1] << 8) |
                        (weight_in_DRAM[4 * (i - 16) + 0]);
        }
        else {
            weight0 =   (weight_in_DRAM[4 * (i - 16) + (i - 16) / 16 * 64 + 3] << 24) |
                        (weight_in_DRAM[4 * (i - 16) + (i - 16) / 16 * 64 + 2] << 16) |
                        (weight_in_DRAM[4 * (i - 16) + (i - 16) / 16 * 64 + 1] << 8) |
                        (weight_in_DRAM[4 * (i - 16) + (i - 16) / 16 * 64 + 0]);
        }

        if (mode == 0) {
            ifmap1 =    (input_in_DRAM[4 * (i - 16 - 64 * 16 - 64) + 3]) << 24 |
                        (input_in_DRAM[4 * (i - 16 - 64 * 16 - 64) + 2]) << 16 |
                        (input_in_DRAM[4 * (i - 16 - 64 * 16 - 64) + 1]) << 8 |
                        (input_in_DRAM[4 * (i - 16 - 64 * 16 - 64) + 0]);
        }
        else {
            ifmap1 =    (input_in_DRAM[4 * (i - 16 - 64 * 16 - 64) + 64 + 3]) << 24 |
                        (input_in_DRAM[4 * (i - 16 - 64 * 16 - 64) + 64 + 2]) << 16 |
                        (input_in_DRAM[4 * (i - 16 - 64 * 16 - 64) + 64 + 1]) << 8 |
                        (input_in_DRAM[4 * (i - 16 - 64 * 16 - 64) + 64 + 0]);
        }
        if (mode == 0) {
            weight1 =   (weight_in_DRAM[4 * (i - 16 * 2 - 64) + 3] << 24) |
                        (weight_in_DRAM[4 * (i - 16 * 2 - 64) + 2] << 16) |
                        (weight_in_DRAM[4 * (i - 16 * 2 - 64) + 1] << 8) |
                        (weight_in_DRAM[4 * (i - 16 * 2 - 64) + 0]);
        }
        else {
            weight1 =   (weight_in_DRAM[4 * (i - 16 * 2 - 64 * 16 - 64) + (i - 16 * 2 - 64 * 16 - 6) / 16 * 64 + 3] << 24) |
                        (weight_in_DRAM[4 * (i - 16 * 2 - 64 * 16 - 64) + (i - 16 * 2 - 64 * 16 - 6) / 16 * 64 + 2] << 16) |
                        (weight_in_DRAM[4 * (i - 16 * 2 - 64 * 16 - 64) + (i - 16 * 2 - 64 * 16 - 6) / 16 * 64 + 1] << 8) |
                        (weight_in_DRAM[4 * (i - 16 * 2 - 64 * 16 - 64) + (i - 16 * 2 - 64 * 16 - 6) / 16 * 64 + 0]);
        }

        if(i < 16) { 
            data_in = ifmap0;
        }
        else if(i < 16 + 64 * 16) {
            data_in = weight0;
        } 
        else if(i < 16 + 64 * 16 + 64) {
            data_in = bias[i - 16 - 64 * 16];
        }
        else if(i < 16 * 2 + 64 * 16 + 64) {
            data_in = ifmap1;
        } 
        else if(i < 16 * 2 + 64 * 16 * 2 + 64) {
            data_in = weight1;
        }
        else if(i < 16 * 2 + 64 * 16 * 2 + 64 * 2) {
            data_in = bias[i - 16 * 2 - 64 * 16 * 2];
        }
        else {
            data_in = 0;
        }
        // Write data to the DLA register
        reg_write(DLA_DATA_OFFSET, data_in);
        if (i == 16 + 64 * 16 + 64) {
            wait_for_interrupt();
        }
    }

    wait_for_interrupt();

    // Read data from the DLA register
    for (uint32_t i = 0; i < 64; ++i) {
        uint32_t v = reg_read(DLA_OFMAP_OFFSET);
        output_in_DRAM[i] = v;
    }

    dla_stop();

#ifdef DLA_INFO
    dump_dla_info_to_csv(DLA_INFO_CSV, "qlinear_relu",
                         token_count, token_dim, output_dim, scale);
#endif

    return 0;
}

