#include <x86intrin.h>  //  _rdtsc()

#include "hardware_cpu.h"
#include "runtime.h"

int qlinear_relu_cpu(uint8_t *input_in_DRAM, int8_t *weight_in_DRAM,
                     uint8_t *output_in_DRAM, int32_t *bias_in_DRAM,
                     uint32_t token_count, uint32_t token_dim,
                     uint32_t output_dim, uint32_t scale) {
    int start_cycles = __rdtsc();
    // 呼叫 linear_relu_vit 函數
    linear_relu_vit(token_count, token_dim, output_dim,
                    input_in_DRAM, output_in_DRAM, weight_in_DRAM, bias_in_DRAM, scale);
    int end_cycles = __rdtsc();
    return (end_cycles - start_cycles);
}

int qlinear_cpu(uint8_t *input_in_DRAM, int8_t *weight_in_DRAM,
                uint8_t *output_in_DRAM, int32_t *bias_in_DRAM,
                uint32_t token_count, uint32_t token_dim,
                uint32_t output_dim, uint32_t scale) {
    int start_cycles = __rdtsc();
    // 呼叫 linear_vit 函數
    linear_vit(token_count, token_dim, output_dim,
               input_in_DRAM, output_in_DRAM, weight_in_DRAM, bias_in_DRAM, scale);
    int end_cycles = __rdtsc();
    return (end_cycles - start_cycles);
}

void quantize_cpu(float *input_in_DRAM, uint8_t *output_in_DRAM, uint32_t size,
                  uint32_t scale) {
    quantize(input_in_DRAM, output_in_DRAM, size, scale);
};

void dequantize_cpu(uint8_t *input_in_DRAM, float *output_in_DRAM,
                    uint32_t size, uint32_t scale) {
    dequantize(input_in_DRAM, output_in_DRAM, size, scale);
};