#include "hardware_cpu.h"

void conv_maxpooling(uint32_t input_C, uint32_t input_H, uint32_t input_W,
                     uint8_t* activation, uint32_t filter_N, uint32_t filter_C,
                     uint32_t filter_H, uint32_t filter_W, int8_t* filter,
                     int32_t* bias, uint32_t padding, uint8_t* output,
                     uint32_t scale) {

    /*! <<<========= Implement here =========>>>*/
    // 先做 conv
    uint32_t output_H = input_H - filter_H + 1 + 2 * padding;
    uint32_t output_W = input_W - filter_W + 1 + 2 * padding;
    uint32_t conv_size = filter_N * output_H * output_W;
    uint8_t* conv_out = (uint8_t*)malloc(conv_size);
    conv(input_C, input_H, input_W, activation, filter_N, filter_C, filter_H, filter_W, filter, bias, padding, conv_out, scale);

    // 再做 2x2 maxpooling，stride=2
    uint32_t pool_H = output_H / 2;
    uint32_t pool_W = output_W / 2;
    for (uint32_t n = 0; n < filter_N; n++) {
        for (uint32_t ph = 0; ph < pool_H; ph++) {
            for (uint32_t pw = 0; pw < pool_W; pw++) {
                uint8_t maxval = 0;
                for (uint32_t kh = 0; kh < 2; kh++) {
                    for (uint32_t kw = 0; kw < 2; kw++) {
                        uint32_t oh = ph * 2 + kh;
                        uint32_t ow = pw * 2 + kw;
                        if (oh < output_H && ow < output_W) {
                            uint8_t v = conv_out[n * output_H * output_W + oh * output_W + ow];
                            if (v > maxval) maxval = v;
                        }
                    }
                }
                output[n * pool_H * pool_W + ph * pool_W + pw] = maxval;
            }
        }
    }
    free(conv_out);
};

void conv(uint32_t input_C, uint32_t input_H, uint32_t input_W,
          uint8_t* activation, uint32_t filter_N, uint32_t filter_C,
          uint32_t filter_H, uint32_t filter_W, int8_t* filter, int32_t* bias,
          uint32_t padding, uint8_t* output, uint32_t scale) {

    uint32_t output_H = input_H - filter_H + 1 + 2 * padding;
    uint32_t output_W = input_W - filter_W + 1 + 2 * padding;
    for (uint32_t n = 0; n < filter_N; n++) {
        for (uint32_t oh = 0; oh < output_H; oh++) {
            for (uint32_t ow = 0; ow < output_W; ow++) {
                int32_t sum = bias[n];
                for (uint32_t c = 0; c < input_C; c++) {
                    for (uint32_t fh = 0; fh < filter_H; fh++) {
                        for (uint32_t fw = 0; fw < filter_W; fw++) {
                            int32_t ih = oh + fh - padding;
                            int32_t iw = ow + fw - padding;
                            uint8_t act = 0;
                            if (ih >= 0 && ih < input_H && iw >= 0 && iw < input_W) {
                                act = activation[c * input_H * input_W + ih * input_W + iw] - 128;
                            }
                            int8_t w = filter[n * input_C * filter_H * filter_W +
                                                c * filter_H * filter_W +
                                                fh * filter_W + fw];
                            sum += act * w;
                        }
                    }
                }
                sum = (sum >> scale) + 128;
                if (sum < 128) sum = 128;
                if (sum > 255) sum = 255;
                output[n * output_H * output_W + oh * output_W + ow] = (uint8_t)sum;
            }
        }
    }
};

void linear_relu(uint32_t input_size, uint32_t output_size, uint8_t* activation,
                 uint8_t* output, int8_t* filter, int32_t* bias,
                 uint32_t scale) {
    /*! <<<========= Implement here =========>>>*/
    int32_t* acc = (int32_t*)malloc(output_size * sizeof(int32_t));
    // 先加 bias
    for (uint32_t o = 0; o < output_size; o++) {
        acc[o] = bias[o];
    }
    // 以 input 為主軸，累加到所有 output
    for (uint32_t i = 0; i < input_size; i++) {
        int32_t a = (int32_t)activation[i] - 128;
        int8_t* w_ptr = filter + i;
        for (uint32_t o = 0; o < output_size; o++) {
            acc[o] += a * w_ptr[o * input_size];
        }
    }
    // 量化與寫回
    for (uint32_t o = 0; o < output_size; o++) {
        int32_t sum = (acc[o] >> scale) + 128;
        output[o] = (uint8_t)sum;
    }
    free(acc);
    // ReLU
    for (uint32_t o = 0; o < output_size; o++) {
        if (output[o] < 128) output[o] = 128;
    }
};

void linear(uint32_t input_size, uint32_t output_size, uint8_t* activation,
            uint8_t* output, int8_t* filter, int32_t* bias, uint32_t scale) {
    /*! <<<========= Implement here =========>>>*/
    int32_t* acc = (int32_t*)malloc(output_size * sizeof(int32_t));
    // 先加 bias
    for (uint32_t o = 0; o < output_size; o++) {
        acc[o] = bias[o];
    }
    // 以 input 為主軸，累加到所有 output
    for (uint32_t i = 0; i < input_size; i++) {
        int32_t a = (int32_t)activation[i] - 128;
        int8_t* w_ptr = filter + i;
        for (uint32_t o = 0; o < output_size; o++) {
            acc[o] += a * w_ptr[o * input_size];
        }
    }
    // 量化與寫回
    for (uint32_t o = 0; o < output_size; o++) {
        int32_t sum = (acc[o] >> scale) + 128;
        output[o] = (uint8_t)sum;
    }
    free(acc);
};

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
