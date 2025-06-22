#include "hal.hpp"
#include "Vasic_wrapper.h"
#include "verilated_vcd_c.h"
#include "axi.hpp"

/* ========================= VCD handler ========================= */
#ifdef USE_VCD
void HardwareAbstractionLayer::vcd_init() {
    /* VCD */
    Verilated::traceEverOn(true);
    this->VCD_FP = new VerilatedVcdC();
    device->trace(VCD_FP, 1);
    VCD_FP->dumpvars(1, "TOP.asic_wrapper.asic_0.asic_controller_0");
    VCD_FP->dumpvars(1, "TOP.asic_wrapper.GLB_0");
    VCD_FP->dumpvars(1, "TOP.asic_wrapper.asic_0.PPU.post_quant_0");
    fprintf(stdout, "[HAL create] VCD trace\n");
}

void HardwareAbstractionLayer::vcd_final() { delete VCD_FP; }
#endif

/* ========================= HAL ========================= */
/* HAL Constructor */
HardwareAbstractionLayer::HardwareAbstractionLayer(uint32_t baseaddr,
                                                   uint32_t mmio_size) {
    this->vm_addr_h = ((uint64_t)(this) & 0xffffffff00000000);
    this->baseaddr = baseaddr;
    this->mmio_size = mmio_size;
#ifdef DEBUG
    fprintf(stderr, "[HAL create] vm_addr_h = %lx \n", vm_addr_h);
#endif

#ifdef USE_VCD
    vcd_task_id = 0;
#endif
    device = new Vasic_wrapper("TOP");
}

/* HAL Destructor */
HardwareAbstractionLayer::~HardwareAbstractionLayer() {
    if (device != NULL) {
        delete device;
    }
#ifdef DEBUG
    fprintf(stderr, "[HAL is destroyed]\n");
#endif
}

void HardwareAbstractionLayer::init() {
#ifdef USE_VCD
    vcd_init();
#endif

#ifdef DEBUG
    fprintf(stderr, "[HAL init]\n");
#endif
    /* reset stats */
    reset_runtime_info();

    /* reset hardware */
    device->ARESETn = 0;
    for (int i = 0; i < RESET_CYCLE; i++) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    }
    device->ARESETn = 1;
    device->eval();
}

void HardwareAbstractionLayer::final() {
#ifdef USE_VCD
    vcd_final();
#endif
}

/**
 * @brief Writes data to a specific MMIO address.
 */
bool HardwareAbstractionLayer::memory_set(uint32_t addr, uint32_t data) {
    if (device == NULL) {
        fprintf(stderr, "[HAL] device is not init yet.\n");
    }
#ifdef DEBUG
    fprintf(stderr, "[HAL memory_set] (0x%08x) 0x%08x \n", addr, data);
    fflush(stdout);
#endif
    if (addr < baseaddr || addr > baseaddr + mmio_size) {
#ifdef DEBUG
        fprintf(stderr,
                "[HAL ERROR] address 0x%08x is not in device MMIO range.\n",
                addr);
#endif
        return false;
    }

    // send write address
    /*! <<<========= Implement here =========>>>*/
    device->AWID_S = 0;
    device->AWADDR_S = addr;
    //device->AWLEN_S = 0;    // unused
    //device->AWSIZE_S = 0;   // unused
    //device->AWBURST_S = 0;  // unused
    device->AWVALID_S = 1;  // valid
    device->eval();
    // wait for ready (address)
    /*! <<<========= Implement here =========>>>*/
    while (!device->AWREADY_S) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    }
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    //printf("write_cnt2 :%d\n", device->dataout);
    device->AWVALID_S = 0;

    // send write data
    /*! <<<========= Implement here =========>>>*/
    device->WDATA_S = data;
    //device->WSTRB_S = 0;   // unused
    device->WLAST_S = 1;   // single shot, always the last one
    device->WVALID_S = 1;  // valid

    device->eval();
    /*if (device->dataout == 0) {
        
    }*/
    /*fprintf(stderr, "[HAL memory_set] (0x%08x) 0x%08x \n", addr, data);
    fprintf(stderr, "[ifmap0]  = 0x%08x \n", device->ASIC_DATA_n);
    fprintf(stderr,"write_cnt :%d\n", device->dataout);
    fprintf(stderr,"write_cnt_next :%d\n", device->dataout2);
    fprintf(stderr, "current_state  = %d \n", device->current_state);
    fprintf(stderr, "next_state  = %d \n", device->n_state);*/
    // wait for ready (data)
    /*! <<<========= Implement here =========>>>*/
    while (!device->WREADY_S) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    }
    /*fprintf(stderr, "[HAL memory_set] (0x%08x) 0x%08x \n", addr, data);
    fprintf(stderr, "[ifmap0]  = 0x%08x \n", device->ifmap[0]);
    fprintf(stderr, "ASIC_DATA  = 0x%08x \n", device->ASIC_DATA_n);
    fprintf(stderr,"write_cnt :%d\n", device->dataout);
    fprintf(stderr,"write_cnt_next :%d\n", device->dataout2);
    fprintf(stderr, "current_state  = %d \n", device->current_state);
    fprintf(stderr, "next_state  = %d \n", device->n_state);*/

    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);

    /*fprintf(stderr, "  After clock_step\n");
    fprintf(stderr, "[HAL memory_set] (0x%08x) 0x%08x \n", addr, data);
    fprintf(stderr, "[ifmap0]  = 0x%08x \n", device->ifmap[0]);
    fprintf(stderr, "ASIC_DATA  = 0x%08x \n", device->ASIC_DATA_n);
    fprintf(stderr,"write_cnt :%d\n", device->dataout);
    fprintf(stderr,"write_cnt_next :%d\n", device->dataout2);
    fprintf(stderr, "current_state  = %d \n", device->current_state);
    fprintf(stderr, "next_state  = %d \n\n", device->n_state);*/
    /*if (device->dataout == 0) {
        fprintf(stderr, "[HAL memory_set] (0x%08x) 0x%08x \n", addr, data);
        fprintf(stderr, "[ifmap0]  = 0x%08x \n", device->ASIC_DATA_n);
        fprintf(stderr,"write_cnt :%d\n", device->dataout);
        fflush(stdout);
    }*/
    /*if (device->dataout == 0) {
        fprintf(stderr, "[HAL memory_set] (0x%08x) 0x%08x \n", addr, data);
        fprintf(stderr, "[ifmap0]  = 0x%08x \n", device->ifmap[0]);
        printf("write_cnt :%d\n", device->dataout);
        fflush(stdout);
    }*/
    
    device->WVALID_S = 0;

    // wait for write response
    /*! <<<========= Implement here =========>>>*/
    device->BREADY_S = 1;
    //device->eval();
    /*fprintf(stderr, "=DEBUG=\n");
    fprintf(stderr, "current_state  = %d \n", device->current_state);
    fprintf(stderr, "next_state  = %d \n", device->n_state);
    fprintf(stderr, "[HAL memory_set] (0x%08x) 0x%08x \n", addr, data);
    fprintf(stderr, "[ifmap0]  = 0x%08x \n", device->ASIC_DATA_n);
    fprintf(stderr,"write_cnt :%d\n", device->dataout);*/
    
    while (!device->BVALID_S) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
        
    }
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    
    device->BREADY_S = 0;
    int resp = device->BRESP_S;
    device->eval();
    
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);

    /*if (device->dataout == 0) {
        
    }*/
    /*fprintf(stderr, "[HAL memory_set] (0x%08x) 0x%08x \n", addr, data);
    fprintf(stderr, "[ifmap0]  = 0x%08x \n", device->ASIC_DATA_n);
    fprintf(stderr,"write_cnt :%d\n", device->dataout);
    fprintf(stderr, "current_state  = %d \n", device->current_state);
    fprintf(stderr, "next_state  = %d \n", device->n_state);*/

    return resp == AXI_RESP_OKAY;
}

/**
 * @brief Reads data from a specific MMIO address.
 */
bool HardwareAbstractionLayer::memory_get(uint32_t addr, int32_t &data) {
    if (device == NULL) {
        fprintf(stderr, "[HAL] device is not init yet.\n");
    }
#ifdef DEBUG
    fprintf(stderr, "[HAL memory_get] (0x%08x) \n", addr);
    for (int i = 0; i < 16; i++) {
        fprintf(stderr, "[ifmap%d]  = 0x%08x \n", i, device->ifmap[i]);
    }
    for (int i = 0; i < 16; i++) {
        fprintf(stderr, "[weight%d]  = 0x%08x \n", i, device->weight[i]);
    }
    fprintf(stderr, "[bias]  = 0x%08x \n", device->bias);
#endif
    if (addr < baseaddr || addr > baseaddr + mmio_size) {
#ifdef DEBUG
        fprintf(stderr,
                "[HAL ERROR] address 0x%08x is not in device MMIO range.\n",
                addr);
#endif
        return false;
    }

/*for (int i = 0; i < 9; i++) {
    fprintf(stderr, "When count == %d DATA = 0x%08x \n", i, device->data_temp[i]);
}*/
/*for (int i = 0; i < 64; i++) {
    fprintf(stderr, "PPU_out[%d] = %d \n", i, device->ppu_out_temp[i]);
}*/


    // send read address
    /*! <<<========= Implement here =========>>>*/
    device->ARID_S = 0;
    device->ARADDR_S = addr;
    //device->ARLEN_S = 0;    // unused
    //device->ARSIZE_S = 0;   // unused
    //device->ARBURST_S = 0;  // unused
    device->ARVALID_S = 1;  // valid
    device->eval();

    while (!device->ARREADY_S) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    }
    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);

    device->ARVALID_S = 0;
    device->RREADY_S = 1;
    /*fprintf(stderr, "[HAL memory_get] (0x%08x) 0x%08x \n", addr, data);
    fprintf(stderr, "[ifmap0]  = 0x%08x \n", device->ifmap[0]);
    fprintf(stderr, "ASIC_DATA  = 0x%08x \n", device->ASIC_DATA_n);
    fprintf(stderr,"write_cnt :%d\n", device->dataout);
    fprintf(stderr,"write_cnt_next :%d\n", device->dataout2);
    fprintf(stderr, "current_state  = %d \n", device->current_state);
    fprintf(stderr, "next_state  = %d \n", device->n_state);*/

    device->eval();

    /*fprintf(stderr, "  After clock_step\n");
    fprintf(stderr, "[HAL memory_get] (0x%08x) 0x%08x \n", addr, data);
    fprintf(stderr, "[ifmap0]  = 0x%08x \n", device->ifmap[0]);
    fprintf(stderr, "ASIC_DATA  = 0x%08x \n", device->ASIC_DATA_n);
    fprintf(stderr,"write_cnt :%d\n", device->dataout);
    fprintf(stderr,"write_cnt_next :%d\n", device->dataout2);
    fprintf(stderr, "current_state  = %d \n", device->current_state);
    fprintf(stderr, "next_state  = %d \n\n", device->n_state);*/
    while (!device->RVALID_S) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    }
    data = device->RDATA_S;
    int resp = device->RRESP_S;

    clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);

    device->RREADY_S = 0;
    device->eval();
    return resp == AXI_RESP_OKAY;
}

/**
 * @brief Waits for an interrupt request (IRQ) from the hardware.
 */
void HardwareAbstractionLayer::wait_for_irq() {
    if (device == NULL) {
        fprintf(stderr, "[HAL] device is not init yet.\n");
    }
#ifdef DEBUG
    fprintf(stderr, "[HAL wait_for_irq] \n");
#endif
#ifdef USE_VCD
    char filename[50];
    sprintf(filename, "asic_%d.vcd", vcd_task_id);
    VCD_FP->open(filename);
#endif
    /* loop until interrupt */
    while (!device->ASIC_interrupt) {
        clock_step(device, ACLK, info.elapsed_cycle, info.elapsed_time);
    }
#ifdef USE_VCD
    VCD_FP->close();
    vcd_task_id++;
#endif
}


struct runtime_info HardwareAbstractionLayer::get_runtime_info() {
    return info;
}

void HardwareAbstractionLayer::reset_runtime_info() {
    info.elapsed_cycle = 0;
    info.elapsed_time = 0;
    info.memory_read = 0;
    info.memory_write = 0;
}
