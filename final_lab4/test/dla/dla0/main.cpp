#include <stdio.h>

#include "data.h"
#include "runtime.h"

int32_t ans[128];
int32_t ans2[64];

int main() {
    int32_t i;
    int32_t err = 0;
    int32_t err2 = 0;

    dla_init();

    qlinear_relu(input_in_DRAM, weight_in_DRAM,
                    ans, bias,
                    1006, 0);

    for (int i = 0; i < 128; i++) {
        if (ans[i] != ans_golden[i]) {
            printf("Index %d is wrong: Correct answer: %d Your answer: %d", i,
                   ans_golden[i], ans[i]);
            printf("\n");
            err += 1;
        }
    }

    if (err == 0) {
        printf("Simulation mlp0 all pass!\n");
    } else {
        printf("There are %d errors", err);
        printf("\n");
    }
    dla_final();
    printf("========================================================\n");
    dla_init();
    qlinear_relu2(ans_golden, weight_in_DRAM2,
                    ans2, bias2,
                    55, 1);

    for (int i = 0; i < 64; i++) {
        if (ans2[i] != ans_golden2[i]) {
            printf("Index %d is wrong: Correct answer: %d Your answer: %d", i,
                   ans_golden2[i], ans2[i]);
            printf("\n");
            err2 += 1;
        }
    }

    if (err2 == 0) {
        printf("Simulation mlp3 all pass!\n");
    } else {
        printf("There are %d errors", err2);
        printf("\n");
    }
    dla_final();
    return 0;
}
