/**
 * @file hardware_dla.cpp
 * @brief Provides an interface to configure and control a Deep Learning
 * Accelerator (DLA).
 *
 * This file implements functions to configure mapping parameters, shape
 * parameters, memory addresses, and enable various operations on the DLA. It
 * uses a Hardware Abstraction Layer (HAL) for memory-mapped I/O (MMIO)
 * interactions.
 */

#include "hardware_dla.h"

#include "hal.hpp"

/// @brief Global HAL instance for DLA interaction.
static HardwareAbstractionLayer hal(DLA_MMIO_BASE_ADDR,
                                    DLA_MMIO_SIZE);  // eyeriss device included

/* ========================= HAL Interface ========================= */
void wait_for_interrupt() { hal.wait_for_irq(); }
void hal_init() { hal.init(); }
void hal_final() { hal.final(); }

struct runtime_info get_runtime_info() { return hal.get_runtime_info(); }
void reset_runtime_info() { hal.reset_runtime_info(); }

void reg_write(uint32_t offset, uint32_t value) {
    hal.memory_set(offset + DLA_MMIO_BASE_ADDR, value);
}
uint32_t reg_read(uint32_t offset) {
    uint32_t v = 0;
    hal.memory_get(DLA_MMIO_BASE_ADDR + offset, v);
    return v;
}
/* ========================= DLA Configuration ========================= */
void set_enable(uint32_t scale_factor, bool ready,
                bool operation) {
    uint32_t value;
    /*! <<<========= Implement here =========>>>*/
    value = (scale_factor << 4) | (operation << 3) | (relu << 2) | (maxpool << 1) | 1;
    reg_write(DLA_ENABLE_OFFSET, value);
}

void set_data(uint32_t v) {
    reg_write(DLA_DATA_OFFSET, v);
}

//（input: token_count * token_dim）
void set_vit_input_addr(uint8_t* addr) {
    reg_write(DLA_INPUT_ADDR_OFFSET, (uint32_t)(uintptr_t)addr);
}

//（weight: output_dim * token_dim）
void set_vit_weight_addr(int8_t* addr) {
    reg_write(DLA_WEIGHT_ADDR_OFFSET, (uint32_t)(uintptr_t)addr);
}

//（bias: output_dim）
void set_vit_bias_addr(int32_t* addr) {
    reg_write(DLA_BIAS_ADDR_OFFSET, (uint32_t)(uintptr_t)addr);
}

//（output: token_count * output_dim）
void set_vit_output_addr(uint8_t* addr) {
    reg_write(DLA_OUTPUT_ADDR_OFFSET, (uint32_t)(uintptr_t)addr);
}
void
 set_glb_weight_addr(uint32_t addr) {
    reg_write(DLA_GLB_WEIGHT_ADDR_OFFSET, addr);
}
void set_glb_bias_addr(uint32_t addr) {
    reg_write(DLA_GLB_BIAS_ADDR_OFFSET, addr);
}
void set_glb_output_addr(uint32_t addr) {
    reg_write(DLA_GLB_OUTPUT_ADDR_OFFSET, addr);
}

void set_input_activation_len(uint32_t len) {
    reg_write(DLA_INPUT_LEN_OFFSET, len);
}
void set_output_activation_len(uint32_t len) {
    reg_write(DLA_OUTPUT_LEN_OFFSET, len);
}

