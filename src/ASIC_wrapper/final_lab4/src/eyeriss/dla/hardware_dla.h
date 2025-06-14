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

#define DLA_INPUT_ADDR_OFFSET      0x10   ///< Offset for input feature map address.
#define DLA_WEIGHT_ADDR_OFFSET     0x14  ///< Offset for filter weights address.
#define DLA_BIAS_ADDR_OFFSET       0x18    ///< Offset for bias values address.
#define DLA_OUTPUT_ADDR_OFFSET      0x1c   ///< Offset for output sum buffer address.

#define DLA_GLB_WEIGHT_ADDR_OFFSET 0x20  ///< Offset for global filter weights address.
#define DLA_GLB_OUTPUT_ADDR_OFFSET  0x24  ///< Offset for global output feature map address.
#define DLA_GLB_BIAS_ADDR_OFFSET   0x28   ///< Offset for global bias values address.

#define DLA_INPUT_LEN_OFFSET       0x2c  ///< Offset for input activation length.
#define DLA_OUTPUT_LEN_OFFSET       0x30  ///< Offset for output activation length.

#define DLA_UNDEFINED  ///< Placeholder for undefined registers.


/* ========================= Function Prototypes ========================= */

/**
 * @brief Writes a value to a DLA register via memory-mapped I/O.
 * @param offset Register offset from `DLA_MMIO_BASE_ADDR`.
 * @param value The value to write.
 */
void reg_write(uint32_t offset, uint32_t value);

uint32_t reg_read(uint32_t offset);
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
void set_enable(uint32_t scale_factor, bool maxpool, bool relu, bool operation);
void set_data(uint32_t v);

/**
 * @brief Sets the address of the input feature map in DRAM.
 * @param addr Pointer to the input feature map data.
 */
void set_vit_input_addr(uint8_t* addr);
void set_vit_weight_addr(int8_t* addr);
void set_vit_bias_addr(int32_t* addr);
void set_vit_output_addr(uint8_t* addr);

void set_glb_weight_addr(uint32_t addr);
void set_glb_bias_addr(uint32_t addr);
void set_glb_output_addr(uint32_t addr);

/**
 * @brief Sets the input activation length (size of input data).
 * @param len The length of the input activation data.
 */
void set_input_activation_len(uint32_t len);

/**
 * @brief Sets the output activation length (size of output data).
 * @param len The length of the output activation data.
 */
void set_output_activation_len(uint32_t len);

#endif  // HARDWARE_DLA_H