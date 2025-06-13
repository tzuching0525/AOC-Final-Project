#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fin1 = fopen("ifmap_decimal.txt", "r");
    FILE *fin2 = fopen("weight_decimal.txt", "r");
    FILE *fin3 = fopen("bias_decimal.txt", "r");
    FILE *fin4 = fopen("golden_decimal.txt", "r");
    FILE *fout1 = fopen("ifmap.txt", "w");
    FILE *fout2 = fopen("weight.txt", "w");
    FILE *fout3 = fopen("bias.txt", "w");
    FILE *fout4 = fopen("golden.txt", "w");
    FILE *fout5 = fopen("mode.txt", "w");
    FILE *fout6 = fopen("scaling_factor.txt", "w");

    int mode = 0;
    int scaling_factor = 0;
    printf("Please input mode (0: MLP0, 1: MLP3): ");
    scanf("%d", &mode);
    printf("Please input scaling factor: ");
    scanf("%d", &scaling_factor);
    int num;
    while (fscanf(fin1, "%d", &num) == 1) {
        int val = num;
        fprintf(fout1, "%02X\n", val);
    }
    while (fscanf(fin2, "%d", &num) == 1) {
        int val = num;
        fprintf(fout2, "%02X\n", val);
    }
    while (fscanf(fin3, "%d", &num) == 1) {
        int val = num;
        fprintf(fout3, "%08X\n", val);
    }
    while (fscanf(fin4, "%d", &num) == 1) {
        int val;
        if(num < 0) val = 0;
        else val = num;
        fprintf(fout4, "%02X\n", val);
    }
    fprintf(fout5, "%d\n", mode);
    fprintf(fout6, "%03X\n", scaling_factor);

    fclose(fin1);
    fclose(fin2);
    fclose(fin3);
    fclose(fin4);
    fclose(fout1);
    fclose(fout2);
    fclose(fout3);
    fclose(fout4);
    fclose(fout5);
    fclose(fout6);
    return 0;
}