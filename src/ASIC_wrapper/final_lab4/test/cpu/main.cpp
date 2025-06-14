#include <stdio.h>
#include <x86intrin.h>  // _rdtsc()

#include "data.h"
#include "runtime.h"

uint8_t linear_ans[TOKEN_COUNT * OUTPUT_DIM];
uint8_t linear_relu_ans[TOKEN_COUNT * OUTPUT_DIM];
int32_t err = 0;

void verify_output(uint8_t *result, uint8_t *golden, int len,
                   const char *name) {
    for (int i = 0; i < len; i++) {
        if (result[i] != golden[i]) {
            printf("Error at %d: Expected = %d, Got = %d\n", i + 1, golden[i],
                   result[i]);
            err++;
        }
    }
    printf("%s: %s\n", name, err ? "FAIL" : "PASS");
}

int main() {
    setbuf(stdout, NULL);  // Immediate output

#ifdef LINEAR
    printf("Function: LINEAR\n");
    int cycle = qlinear_cpu(
        activation_flat_array, weight_array, linear_ans, bias_array,
        TOKEN_COUNT * OUTPUT_DIM, TOKEN_COUNT * TOKEN_DIM, OUTPUT_DIM * TOKEN_DIM,  // lengths
        linear_q_scale  // scale factor
    );
    verify_output(linear_ans, linear_golden, linear_out_len, "LINEAR");

#elif defined(LINEAR_RELU)
    printf("Function: LINEAR_RELU\n");
    int cycle = qlinear_relu_cpu(
        activation_flat_array, weight_array, linear_relu_ans, bias_array,
        TOKEN_COUNT * OUTPUT_DIM, TOKEN_COUNT * TOKEN_DIM, OUTPUT_DIM * TOKEN_DIM,  // lengths
        linear_q_scale  // scale factor (可以換成你需要的)
    );
    verify_output(linear_relu_ans, linear_relu_golden, linear_out_len,
                  "LINEAR_RELU");

#else
    int cycle = -1;
    printf("No function selected.\n");
#endif

    if (err == 0) printf("CYCLE: %d\n", cycle);
    return err;
}
