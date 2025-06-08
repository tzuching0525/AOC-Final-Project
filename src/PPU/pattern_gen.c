#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>

int main() {
    FILE *fp1, *fp2, *fp3, *fp4;
    const char *filename1 = "data_in.txt";
    const char *filename2 = "golden.txt";
    srand((unsigned int)time(NULL)); // Initialize random seed

    // 開啟檔案，如果不存在就建立，如果存在會覆蓋
    fp1 = fopen(filename1, "w");
    fp2 = fopen(filename2, "w");
    int32_t data_in[16];
    int32_t golden[16];
    int scaling_factor = 2; // Example scaling factor

    // generate values
    int mode = 0;
    printf("Please input mode (0: easy, 1: random): ");
    scanf("%d", &mode);

    if(mode == 0){
        // ifmap
        for(int i = 0; i < 16; i++) {
            data_in[i] = i;
        }
        // golden
        for(int i = 0; i < 16; i++) {
            int temp = i >> scaling_factor;
            golden[i] = (temp > 0)? ((temp + 128 > 255)? 255 : temp + 128) : 128; // Example golden values
        }
    }
    else if(mode == 1) {
        // ifmap
        for(int i = 0; i < 16; i++) {
            data_in[i] = rand() % (1LL << (scaling_factor + 7)) - (1LL << (scaling_factor + 6)); // 0-255
        }
        // golden
        for(int i = 0; i < 16; i++) {
            int temp = data_in[i] >> scaling_factor;
            golden[i] = (temp > 0)? ((temp + 128 > 255)? 255 : temp + 128) : 128; // Example golden values
        }
    } else {
        printf("Invalid mode selected.\n");
        return -1;
    }
    // 寫入內容
    // ifmap
    for(int i = 0; i < 16; i++) {
        fprintf(fp1, "%08X\n", (signed int)data_in[i]);
    }
    // golden
    for(int i = 0; i < 16; i++) {
        fprintf(fp2, "%02X\n", (unsigned int)golden[i]);
    }


    // 關閉檔案
    fclose(fp1);
    fclose(fp2);

    printf("write file done\n");

    return 0;
}
