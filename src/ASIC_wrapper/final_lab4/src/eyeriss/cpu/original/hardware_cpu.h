#ifndef HARDWARE_CPU_H
#define HARDWARE_CPU_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ReLU activation function: If x < 0, return 0; otherwise, return x
#define relu(x) ((int32_t)(x) < 0 ? 0 : (uint32_t)(x))

// Requantization macro: Adjusts input using a scale factor with clamping
#define requant(input, scale)                                \
    (((scale) >= 32) ? 128                                   \
                     : (((((input) >> (scale)) + 128) > 255) \
                            ? 255                            \
                            : ((uint8_t)(((input) >> (scale)) + 128))))

void linear_relu_vit(uint32_t token_count, uint32_t token_dim, uint32_t output_dim,
                     uint8_t* activation, uint8_t* output, int8_t* weight, int32_t* bias,
                     uint32_t scale);

void linear_vit(uint32_t token_count, uint32_t token_dim, uint32_t output_dim,
                uint8_t* activation, uint8_t* output, int8_t* weight, int32_t* bias,
                uint32_t scale);

void quantize(float* input_in_DRAM, uint8_t* output_in_DRAM, uint32_t size,
              uint32_t scale);

void dequantize(uint8_t* input_in_DRAM, float* output_in_DRAM, uint32_t size,
                uint32_t scale);

void layernorm(uint8_t* input, uint8_t* output, uint32_t size);

void softmax(uint8_t* input, uint8_t* output, uint32_t size);

#endif  // HARDWARE_CPU_H
