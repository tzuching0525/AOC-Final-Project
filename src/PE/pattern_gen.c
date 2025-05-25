#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2, *fp3, *fp4;
    const char *filename1 = "ifmap.txt";
    const char *filename2 = "weight.txt";
    const char *filename3 = "bias.txt";
    const char *filename4 = "golden.txt";


    // 開啟檔案，如果不存在就建立，如果存在會覆蓋
    fp1 = fopen(filename1, "w");
    fp2 = fopen(filename2, "w");
    fp3 = fopen(filename3, "w");
    fp4 = fopen(filename4, "w");

    uint8_t ifmap_reg[16];
    int8_t weight_reg[16];
    int32_t bias_reg[16], golden_reg[16];
    // generate values
    int mode = 0;
    printf("Please input mode (0: easy, 1: random): ");
    scanf("%d", &mode);

    if(mode == 0){
        // ifmap
        for(int i = 0; i < 16; i++) {
            ifmap_reg[i] = i-8 + 128;
        }
        // weight
        for(int i = 0; i < 16; i++) {
            weight_reg[i] = i-8;
        }
        // bias
        for(int i = 0; i < 16; i++) {
            bias_reg[i] = 0;
        }
        // golden
        for(int i = 0; i < 16; i++) {
            golden_reg[i] = (i-8) * (i-8);
        }
    }
    else if(mode == 1) {
        // ifmap
        for(int i = 0; i < 16; i++) {
            ifmap_reg[i] = rand() % 256; // 0-255
        }
        // weight
        for(int i = 0; i < 16; i++) {
            weight_reg[i] = (rand() % 256) - 128; // -128 to 127
        }
        // bias
        for(int i = 0; i < 16; i++) {
            bias_reg[i] = rand() % 65536 - 32768; // -32768 to 32767
        }
        // golden
        for(int i = 0; i < 16; i++) {
            golden_reg[i] = (ifmap_reg[i] - 128) * weight_reg[i] + bias_reg[i];
        }
    } else {
        printf("Invalid mode selected.\n");
        return -1;
    }
    // 寫入內容
    // ifmap
    for(int i = 0; i < 16; i++) {
        fprintf(fp1, "%02X\n", (unsigned char)ifmap_reg[i]);
    }
    // weight
    for(int i = 0; i < 16; i++) {
        fprintf(fp2, "%02X\n", (unsigned char)weight_reg[i]);
    }
    // bias
    for(int i = 0; i < 16; i++) {
        fprintf(fp3, "%08X\n", (unsigned int)bias_reg[i]);
    }
    // golden
    for(int i = 0; i < 16; i++) {
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
