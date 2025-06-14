#ifndef RUNTIME_H
#define RUNTIME_H

/* default dla info file name */
#define DLA_INFO_CSV "dla_info.csv"

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdio.h>

/*
    ViT 計算中主要參數：
    token_count : 輸入 token 總數 (如 patch 數)
    token_dim   : 每個 token 的 embedding 維度
    output_dim  : 輸出維度
    scale       
*/

/**********************************
***                             ***
***           DLA API           ***
***                             ***
**********************************/

void dla_stop();

void dla_init();

void dla_final();

void dla_reset_runtime_info();

void create_dla_info_to_csv(const char *filename);

void dump_dla_info_to_csv(const char *filename, char *operation_name,
                          uint32_t token_count, uint32_t token_dim, uint32_t output_dim,
                          uint32_t scale);


int qlinear_relu(uint8_t *input_in_DRAM, int8_t *weight_in_DRAM,
                 uint8_t *output_in_DRAM, int32_t *bias,
                 uint32_t token_count, uint32_t token_dim, uint32_t output_dim,
                 uint32_t scale);

int qlinear(uint8_t *input_in_DRAM, int8_t *weight_in_DRAM,
            uint8_t *output_in_DRAM, int32_t *bias,
            uint32_t token_count, uint32_t token_dim, uint32_t output_dim,
            uint32_t scale);

/**********************************
***                             ***
***           CPU API           ***
***                             ***
**********************************/

int qlinear_relu_cpu(uint8_t *input_in_DRAM, int8_t *weight_in_DRAM,
                         uint8_t *output_in_DRAM, int32_t *bias_in_DRAM,
                         uint32_t token_count, uint32_t token_dim,
                         uint32_t output_dim, uint32_t scale);

int qlinear_cpu(uint8_t *input_in_DRAM, int8_t *weight_in_DRAM,
                    uint8_t *output_in_DRAM, int32_t *bias_in_DRAM,
                    uint32_t token_count, uint32_t token_dim,
                    uint32_t output_dim, uint32_t scale);


void quantize_cpu(float *input_in_DRAM, uint8_t *output_in_DRAM, uint32_t size,
                  uint32_t scale);


void dequantize_cpu(uint8_t *input_in_DRAM, float *output_in_DRAM,
                    uint32_t size, uint32_t scale);

#ifdef __cplusplus
}
#endif

#endif  // RUNTIME_H
