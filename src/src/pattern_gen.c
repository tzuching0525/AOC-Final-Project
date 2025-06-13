#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

int main() {
    FILE *fp1, *fp2, *fp3, *fp4, *fp5, *fp6;
    const char *filename1 = "ifmap.txt";
    const char *filename2 = "weight.txt";
    const char *filename3 = "bias.txt";
    const char *filename4 = "golden.txt";
    const char *filename5 = "mode.txt"; // Not used in this code, but declared for consistency
    const char *filename6 = "scaling_factor.txt";

    // 開啟檔案，如果不存在就建立，如果存在會覆蓋
    fp1 = fopen(filename1, "w");
    fp2 = fopen(filename2, "w");
    fp3 = fopen(filename3, "w");
    fp4 = fopen(filename4, "w");
    fp5 = fopen(filename5, "w");
    fp6 = fopen(filename6, "w");

    
    // generate values
    int mode = 0;
    int scaling_factor = 0;
    printf("Please input mode (0: MLP0, 1: MLP3): ");
    scanf("%d", &mode);
    printf("Please input scaling factor: ");
    scanf("%d", &scaling_factor);

    int ifmap_size = (mode == 0)? 64 : 128;
    int weight_size = 64*128;
    int bias_size = (mode == 0)? 128 : 64;
    int golden_size = (mode == 0)? 128 : 64;

    uint8_t ifmap_reg[ifmap_size];
    int8_t weight_reg[weight_size];
    int32_t bias_reg[bias_size], golden_reg[golden_size];

    // weight: 128 * 64                 ifmap: 64         128     bias: 128    ofmap: 128
    // [ -128   -127   -126 ...]      [128]->[0]          []          [0]          []
    // [...]                          [129]->[1]          []          [0]          []
    // [...           126 127]   X    [130]->[2]      =   []      +   [0]      =   []
    // [...]                          [...]->[...]        []          [0]          []
    // [ ... ... ...  126 127]        [191]->[63]         []          [0]          []
    //
    if(mode == 0){
        // ifmap
        for(int i = 0; i < ifmap_size; i++) {
            ifmap_reg[i] = i + 128;
        }
        // weight
        for(int i = 0; i < weight_size; i++) {
            weight_reg[i] = i % 256 - 128;
        }
        // bias
        for(int i = 0; i < bias_size; i++) {
            bias_reg[i] = i;
        }
        // golden
        for(int i = 0; i < golden_size; i++) {
            golden_reg[i] = bias_reg[i];
            for(int j = 0; j < 64; j++) {
                golden_reg[i] += weight_reg[j + i * 64] * (ifmap_reg[j] - 128);
            }
            if(golden_reg[i] < 0) golden_reg[i] = 0;
            golden_reg[i] = golden_reg[i] / (1LL << scaling_factor);
            golden_reg[i] += 128;
            if(golden_reg[i] > 255) golden_reg[i] = 255;
        }
    }
    // weight: 64 * 128                 ifmap: 128        64     bias: 64    ofmap: 64
    // [ -128   -127   -126 ...]      [128]->[0]          []          [0]          []
    // [...             126 127]      [129]->[1]          []          [0]          []
    // [ -128   -127   -126 ...]   X  [130]->[2]      =   []      +   [0]      =   []
    // [...]                          [...]->[...]        []          [0]          []
    // [ ... ... ...    126 127]      [255]->[127]        []          [0]          []
    //
    else if(mode == 1) {
        // ifmap
        for(int i = 0; i < ifmap_size; i++) {
            ifmap_reg[i] = i + 128;
        }
        // weight
        for(int i = 0; i < weight_size; i++) {
            weight_reg[i] = i % 256 - 128;
        }
        // bias
        for(int i = 0; i < bias_size; i++) {
            bias_reg[i] = 0;
        }
        // golden
        for(int i = 0; i < golden_size; i++) {
            golden_reg[i] = bias_reg[i];;
            for(int j = 0; j < 128; j++) {
                golden_reg[i] += weight_reg[j + i * 128] * (ifmap_reg[j] - 128);
            }
            if(golden_reg[i] < 0) golden_reg[i] = 0;
            golden_reg[i] = golden_reg[i] / (1LL << scaling_factor);
            golden_reg[i] += 128;
            if(golden_reg[i] > 255) golden_reg[i] = 255;
        }
    }
    else if(mode == 2){
        mode = 0;
        for(int i = 0; i < 64; i++) {
            ifmap_reg[i] = i + 128;
        }
        // weight
        for(int i = 0; i < 64*64; i++) {
            weight_reg[i] = 1;
        }
        // bias
        for(int i = 0; i < 64; i++) {
            bias_reg[i] = 0;
        }
        // golden
        for(int i = 0; i < golden_size; i++) {
            golden_reg[i] = bias_reg[i];
            golden_reg[i] += 2016;
            golden_reg[i] = golden_reg[i] >> scaling_factor;
            golden_reg[i] += 128;
            if(golden_reg[i] > 255) golden_reg[i] = 255;
        }
    } 
    else {
        printf("Invalid mode selected.\n");
        return -1;
    }
    // 寫入內容
    // ifmap
    for(int i = 0; i < ifmap_size; i++) {
        fprintf(fp1, "%02X\n", (unsigned char)ifmap_reg[i]);
    }
    // weight
    for(int i = 0; i < weight_size; i++) {
        fprintf(fp2, "%02X\n", (unsigned char)weight_reg[i]);
    }
    // bias
    for(int i = 0; i < bias_size; i++) {
        fprintf(fp3, "%08X\n", (unsigned int)bias_reg[i]);
    }
    // golden
    for(int i = 0; i < golden_size; i++) {
        fprintf(fp4, "%08X\n", (unsigned int)golden_reg[i]);
    }
    // mode
    fprintf(fp5, "%d\n", mode);
    fprintf(fp6, "%02X\n", scaling_factor);


    // 關閉檔案
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
    fclose(fp5);
    fclose(fp6);

    printf("write file done\n");

    return 0;
}
