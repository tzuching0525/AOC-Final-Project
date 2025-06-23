#include <stdio.h>

#include "data.h"
#include "runtime.h"

int32_t ans[128];

int main() {
    int32_t i;
    int32_t err = 0;

    dla_init();

    qlinear_relu(input_in_DRAM, weight_in_DRAM,
                    ans, bias,
                    1006, 0);
    /* Verify */
    for (int i = 0; i < 128; i++) {
        if (ans[i] != ans_golden[i]) {
            printf("Index %d is wrong: Correct answer: %d Your answer: %d", i,
                   ans_golden[i], ans[i]);
            printf("\n");
            err += 1;
        }
    }

    if (err == 0) {
        printf("Simulation all pass!\n");
    } else {
        printf("There are %d errors", err);
        printf("\n");
    }

    dla_final();
    return 0;
}
