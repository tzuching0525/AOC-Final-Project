/**
 * @file hardware_dla.h
 * @brief Interface for configuring and controlling the Deep Learning
 * Accelerator (DLA).
 *
 * This header defines register addresses, function prototypes, and structures
 * required to interact with the DLA via memory-mapped I/O (MMIO).
 */

#ifndef HARDWARE_DLA_H
#define HARDWARE_DLA_H

#include <stdbool.h>
#include <stdint.h>

#include "hal.hpp"

/* ========================= DLA Register Base Address & Size ========================= */
#define DLA_MMIO_BASE_ADDR  0x10040000   ///< Base address of the DLA MMIO registers.
#define DLA_MMIO_SIZE 0x1000  ///< Size of the DLA register memory map.


/* ========================= DLA Register Offsets ========================= */
#define DLA_ENABLE_OFFSET 0x0  ///< Offset for enabling/disabling the DLA.
#define DLA_DATA_OFFSET   0x4  ///< Offset for setting mapping parameters.
#define DLA_OFMAP_OFFSET    0x8  ///< Offset for shape parameters (filter, channel).

#define DLA_UNDEFINED  ///< Placeholder for undefined registers.


/* ========================= Function Prototypes ========================= */

/**
 * @brief Writes a value to a DLA register via memory-mapped I/O.
 * @param offset Register offset from `DLA_MMIO_BASE_ADDR`.
 * @param value The value to write.
 */
void reg_write(uint32_t offset, uint32_t value);
/**
 * @brief Waits for an interrupt from the DLA, indicating completion of
 * execution.
 */
void wait_for_interrupt();
/**
 * @brief Initializes the DLA hardware.
 */
void hal_init();
/**
 * @brief Finalizes and shuts down the DLA hardware.
 */
void hal_final();

/**
 * @brief Retrieves runtime performance metrics of the DLA.
 * @return A `runtime_info` structure containing cycle count, execution time,
 * and memory operations.
 */
struct runtime_info get_runtime_info();

/**
 * @brief Resets runtime performance counters.
 */
void reset_runtime_info();

/**
 * @brief Enables the DLA and configures its operational mode.
 * @param scale_factor Bit-shift scale factor for quantization.
 * @param maxpool Enables max pooling (true/false).
 * @param relu Enables ReLU activation (true/false).
 * @param operation Specifies the type of operation.
 */
void reg_read(uint32_t offset, int32_t &data);
void set_enable(uint32_t scale_factor, bool mode);

#endif  // HARDWARE_DLA_H