#include "hardware_cpu.h"

void linear_relu_vit(uint32_t token_count, uint32_t token_dim, uint32_t output_dim,
                     uint8_t* activation, uint8_t* output, int8_t* weight, int32_t* bias,
                     uint32_t scale) {
    for (uint32_t token = 0; token < token_count; token++) {
        for (uint32_t o = 0; o < output_dim; o++) {
            int32_t acc = 0;
            for (uint32_t d = 0; d < token_dim; d++) {
                int32_t act_val = activation[token * token_dim + d] - 128;  // dequant offset
                int32_t w_val = weight[o * token_dim + d];
                acc += act_val * w_val;
            }
            acc += bias[o];
            acc = (acc < 0) ? 0 : acc;  // apply ReLU
            acc = (acc / (1U << scale)) + 128;    // requant + add zero point
            output[token * output_dim + o] = acc;
        }
    }
}

void linear_vit(uint32_t token_count, uint32_t token_dim, uint32_t output_dim,
                uint8_t* activation, uint8_t* output, int8_t* weight, int32_t* bias,
                uint32_t scale) {
    for (uint32_t token = 0; token < token_count; token++) {
        for (uint32_t o = 0; o < output_dim; o++) {
            int32_t acc = 0;
            for (uint32_t d = 0; d < token_dim; d++) {
                int32_t act_val = activation[token * token_dim + d] - 128;
                int32_t w_val = weight[o * token_dim + d];
                acc += act_val * w_val;
            }
            acc += bias[o];
            acc = (acc / (1U << scale)) + 128;    // requant + add zero point
            output[token * output_dim + o] = acc;
        }
    }
}


void quantize(float* input_in_DRAM, uint8_t* output_in_DRAM, uint32_t size,
              uint32_t scale) {
    float fp_scale = 1;
    for (uint32_t i = 0; i < scale; i++) {
        fp_scale *= 2;
    }
    for (uint32_t i = 0; i < size; i++) {
        float t = input_in_DRAM[i] * fp_scale;
        int32_t temp = (int32_t)t + 128;
        // clamp to 0 ~ 255
        if (temp < 0) {
            output_in_DRAM[i] = 0;
        } else if (temp > 255)
            output_in_DRAM[i] = 255;
        else
            output_in_DRAM[i] = (uint8_t)temp;
    }
};

void dequantize(uint8_t* input_in_DRAM, float* output_in_DRAM, uint32_t size,
                uint32_t scale) {
    float fp_scale = 1;
    for (uint32_t i = 0; i < scale; i++) {
        fp_scale *= 2;
    }
    for (uint32_t i = 0; i < size; i++) {
        float temp = *(input_in_DRAM + i) - 128;
        *(output_in_DRAM + i) = temp / fp_scale;
    }
};
