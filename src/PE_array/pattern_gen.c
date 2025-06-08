#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#define TEST_SIZE 2

int main() {
    FILE *fp1, *fp2, *fp3, *fp4;
    const char *filename1 = "ifmap.txt";
    const char *filename2 = "weight.txt";
    const char *filename3 = "bias.txt";
    const char *filename4 = "golden.txt";
    srand(time(NULL)); // Seed for random number generation


    // 開啟檔案，如果不存在就建立，如果存在會覆蓋
    fp1 = fopen(filename1, "w");
    fp2 = fopen(filename2, "w");
    fp3 = fopen(filename3, "w");
    fp4 = fopen(filename4, "w");


    uint8_t ifmap_reg[32 * TEST_SIZE];
    int8_t weight_reg[256 * TEST_SIZE];
    int32_t bias_reg[8 * TEST_SIZE], golden_reg[8 * TEST_SIZE];
    // generate values
    int mode = 0;
    printf("Please input mode (0: easy, 1: random): ");
    scanf("%d", &mode);

    if(mode == 0){
        // ifmap
        for(int i = 0; i < 32 * TEST_SIZE; i++) {
            ifmap_reg[i] = 129;
        }
        // weight
        for(int i = 0; i < 256 * TEST_SIZE; i++) {
            weight_reg[i] = (i < 256)? 0 : 1;
        }
        // bias
        for(int i = 0; i < 8 * TEST_SIZE; i++) {
            bias_reg[i] = 0;
        }
        // golden
        for(int i = 0; i < 8 * TEST_SIZE; i++) {
            golden_reg[i] = (i < 8)? 0 : 32;
        }
    }
    else if(mode == 1) {
        // ifmap
        for(int i = 0; i < 32 * TEST_SIZE; i++) {
            ifmap_reg[i] = rand() % 256; // 0-255
        }
        // weight
        for(int i = 0; i < 256 * TEST_SIZE; i++) {
            weight_reg[i] = (rand() % 256) - 128; // -128 to 127
        }
        // bias
        for(int i = 0; i < 8 * TEST_SIZE; i++) {
            bias_reg[i] = rand() % 65536 - 32768; // -32768 to 32767
        }
        // golden
        for(int i = 0; i < 8 * TEST_SIZE; i++) {
            if(i < 8){
                golden_reg[i] = bias_reg[i];
                for(int j = 0; j < 32; j++){
                    golden_reg[i] += weight_reg[32 * i + j] * (ifmap_reg[j] - 128);
                }
            }
            else {
                golden_reg[i] = bias_reg[i];
                for(int j = 0; j < 32; j++){
                    golden_reg[i] += weight_reg[32 * i + j] * (ifmap_reg[j + 32] - 128);
                }
            }
        }
    } else {
        printf("Invalid mode selected.\n");
        return -1;
    }
    // 寫入內容
    // ifmap
    for(int i = 0; i < 32 * TEST_SIZE; i++) {
        fprintf(fp1, "%02X\n", (unsigned char)ifmap_reg[i]);
    }
    // weight
    for(int i = 0; i < 256 * TEST_SIZE; i++) {
        fprintf(fp2, "%02X\n", (unsigned char)weight_reg[i]);
    }
    // bias
    for(int i = 0; i < 8 * TEST_SIZE; i++) {
        fprintf(fp3, "%08X\n", (unsigned int)bias_reg[i]);
    }
    // golden
    for(int i = 0; i < 8 * TEST_SIZE; i++) {
        fprintf(fp4, "%08X\n", (unsigned int)golden_reg[i]);
    }


    // 關閉檔案
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);

    printf("write file done\n");

    return 0;
}
