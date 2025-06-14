#ifndef DATA_H
#define DATA_H

#include <stdint.h>

#define TOKEN_COUNT 2
#define TOKEN_DIM 4
#define OUTPUT_DIM 3



/* activation (TOKEN_COUNT * TOKEN_DIM) */
uint8_t activation_flat_array[TOKEN_COUNT * TOKEN_DIM] = {
    130, 132, 134, 136,  // token 0
    138, 140, 142, 144   // token 1
};

/* weight (OUTPUT_DIM * TOKEN_DIM) */
int8_t weight_array[OUTPUT_DIM * TOKEN_DIM] = {
    1, 0, 0, 0,   // output 0
    0, 1, 0, 0,   // output 1
    0, 0, 1, 0    // output 2
};

/* bias (OUTPUT_DIM) */
int32_t bias_array[OUTPUT_DIM] = {
    10, 20, 30
};

/* golden output (TOKEN_COUNT * OUTPUT_DIM) */
uint8_t golden_output[TOKEN_COUNT * OUTPUT_DIM] = {
    // 計算方式：
    // token 0: (130-128)*1 + bias0 = 2 +10=12 >>0 +128=140
    // token 0: (132-128)*1 + bias1 = 4 +20=24 >>0 +128=152
    // token 0: (134-128)*1 + bias2 = 6 +30=36 >>0 +128=164
    140, 152, 164,  

    // token 1: (138-128)*1 + bias0 =10+10=20 >>0 +128=148
    // token 1: (140-128)*1 + bias1 =12+20=32 >>0 +128=160
    // token 1: (142-128)*1 + bias2 =14+30=44 >>0 +128=172
    148, 160, 172
};

#endif // DATA_H
