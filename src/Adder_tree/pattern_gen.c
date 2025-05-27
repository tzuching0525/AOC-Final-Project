#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2, *fp3, *fp4;
    const char *filename1 = "data_in.txt";
    const char *filename2 = "golden.txt";

    // 開啟檔案，如果不存在就建立，如果存在會覆蓋
    fp1 = fopen(filename1, "w");
    fp2 = fopen(filename2, "w");
    int32_t data_in[64];
    int32_t golden[8];

    // generate values
    int mode = 0;
    printf("Please input mode (0: easy, 1: random): ");
    scanf("%d", &mode);

    if(mode == 0){
        // ifmap
        for(int i = 0; i < 64; i++) {
            data_in[i] = i;
        }
        // golden
        for(int i = 0; i < 8; i++) {
            golden[i] = 224 + 8 * i; // Example golden values
        }
    }
    else if(mode == 1) {
        // ifmap
        for(int i = 0; i < 16; i++) {
            data_in[i] = rand() % 256; // 0-255
        }
        // golden
        for(int i = 0; i < 8; i++) {
            golden[i] = data_in[i] + data_in[i + 8] + data_in[i + 8 * 2] + data_in[i + 8 * 3]
                        + data_in[i + 8 * 4] + data_in[i + 8 * 5] + data_in[i + 8 * 6] + data_in[i + 8 * 7]; // Random golden values
        }
    } else {
        printf("Invalid mode selected.\n");
        return -1;
    }
    // 寫入內容
    // ifmap
    for(int i = 0; i < 64; i++) {
        fprintf(fp1, "%08X\n", (unsigned int)data_in[i]);
    }
    // golden
    for(int i = 0; i < 8; i++) {
        fprintf(fp2, "%08X\n", (unsigned int)golden[i]);
    }


    // 關閉檔案
    fclose(fp1);
    fclose(fp2);

    printf("write file done\n");

    return 0;
}
