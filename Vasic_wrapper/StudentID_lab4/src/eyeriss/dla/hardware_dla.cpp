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

void reg_read(uint32_t offset, int32_t &data) {
    hal.memory_get(DLA_MMIO_BASE_ADDR + offset, data);
}

/* ========================= DLA Configuration ========================= */
void set_enable(uint32_t scale_factor, uint32_t mode) {
    uint32_t value;
    value = ((scale_factor & 0x3FF) << 4) |   // scale_factor 12 bits (bits 15~4)
            ((mode & 0x1) << 3) |     // operation: bit 3
            ((0) << 2) |          // relu: bit 2
            ((0) << 1) |       // maxpool: bit 1
            ((0) << 0);                      // en: bit 0
    reg_write(DLA_ENABLE_OFFSET, value);
}