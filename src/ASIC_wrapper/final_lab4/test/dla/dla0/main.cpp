#include <stdio.h>

#include "data.h"
#include "runtime.h"

uint8_t linear_relu_ans[TOKEN_COUNT * OUTPUT_DIM];

int main() {
    int32_t i;
    int32_t err = 0;

    dla_init();

    printf(
        "[DLA test] qlinear_relu\nInput shape (Token count=%d, Token dim=%d)\n"
        "Output dim=%d\n\n",
        TOKEN_COUNT, TOKEN_DIM, OUTPUT_DIM);

    /* Run test function */
    qlinear_relu(activation_flat_array, weight_array, linear_relu_ans, bias_array,
                 TOKEN_COUNT, TOKEN_DIM, OUTPUT_DIM,
                 8);


    /* Verify */
    for (int i = 0; i < TOKEN_COUNT * OUTPUT_DIM; i++) {
        if (linear_relu_ans[i] != golden_output[i]) {
            printf("Index %d is wrong: Correct answer: %d Your answer: %d\n",
                   i, golden_output[i], linear_relu_ans[i]);
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
