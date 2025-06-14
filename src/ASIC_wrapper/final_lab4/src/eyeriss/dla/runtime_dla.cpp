#include <stdio.h>
#include <stdlib.h>

#include "hardware_dla.h"
#include "runtime.h"

/*  //////////      NOTICE      //////////
    all parameter used to set DLA are send in by function argument
*/

void dla_stop() {
    // set disable
    reg_write(DLA_ENABLE_OFFSET, 0);
}

void dla_init() {
#ifdef DLA_INFO
    fprintf(stdout, "DLA runtime info logging enabled.\n");
    dla_reset_runtime_info();
    create_dla_info_to_csv(DLA_INFO_CSV);
#endif
    hal_init();
}

void dla_final() {
#ifdef DLA_INFO
    fprintf(stdout, "Creating dla info file: %s\n", DLA_INFO_CSV);
#endif
    hal_final();
}

void dla_reset_runtime_info() { reset_runtime_info(); }

void create_dla_info_to_csv(const char *filename) {
    fprintf(stdout, "Creating dla info file: %s\n", filename);
    FILE *file = fopen(filename, "w");
    if (!file) {
        fprintf(stderr, "Create DLA info file failed.\n");
        return;
    }
    fprintf(file,
            "Operation,Cycles,Time(ns),Memory read,Memory write,"
            "TokenCount,TokenDim,OutputDim,Scale\n");
    fclose(file);
}

void dump_dla_info_to_csv(const char *filename, const char *operation_name,
                          uint32_t token_count, uint32_t token_dim, uint32_t output_dim,
                          uint32_t scale) {
    FILE *file = fopen(filename, "a");
    struct runtime_info info = get_runtime_info();
    fprintf(file, "%s,", operation_name);             // Operation
    fprintf(file, "%10d,", info.elapsed_cycle);       // Cycles
    fprintf(file, "%10d,", info.elapsed_time);        // Time (ns)
    fprintf(file, "%10d,", info.memory_read);         // Memory read
    fprintf(file, "%10d,", info.memory_write);        // Memory write
    fprintf(file, "%d,%d,%d,%d\n", token_count, token_dim, output_dim, scale);  // ViT-specific
    fclose(file);
}

int qlinear_relu(uint32_t *input_in_DRAM, uint32_t *weight_in_DRAM,
                 uint32_t *output_in_DRAM, int32_t *bias,
                 uint32_t token_count, uint32_t token_dim, uint32_t output_dim,
                 uint32_t scale) {
#ifdef DLA_INFO
    dla_reset_runtime_info();
#endif

    for (uint32_t i = 0; i < 16; ++i) {
        set_data(input_in_DRAM[i] );
    }

    for (uint32_t i = 0; i < 64 * 16; ++i) {
        set_data(weight_in_DRAM[i] );
    }

    for (uint32_t i = 0; i < 64; ++i) {
        set_data(bias[i] );
    }
    
    for (uint32_t i = 0; i < 64; ++i) {
        uint32_t v = reg_read(DLA_OFMAP_OFFSET);
        output_in_DRAM[i] = v;
    }
    
    set_enable(scale, false, true, true);  // enable, maxpool, relu, linear

    for (uint32_t i = 0; i < 16; ++i) {
        set_data(input_in_DRAM[i] );
    }

    for (uint32_t i = 0; i < 64 * 16; ++i) {
        set_data(weight_in_DRAM[i] );
    }

    for (uint32_t i = 0; i < 64; ++i) {
        set_data(bias[i] );
    }

    for (uint32_t i = 0; i < 64; ++i) {
        uint32_t v = reg_read(DLA_OFMAP_OFFSET);
        output_in_DRAM[i] = v;
    }

    wait_for_interrupt();
    dla_stop();

#ifdef DLA_INFO
    dump_dla_info_to_csv(DLA_INFO_CSV, "qlinear_relu",
                         token_count, token_dim, output_dim, scale);
#endif

    return 0;
}


int qlinear(uint8_t *input_in_DRAM, int8_t *weight_in_DRAM,
            uint8_t *output_in_DRAM, int32_t *bias,
            uint32_t token_count, uint32_t token_dim, uint32_t output_dim,
            uint32_t scale) {
#ifdef DLA_INFO
    dla_reset_runtime_info();
#endif

    for (uint32_t i = 0; i < token_count * token_dim; ++i) {
        set_data( (uint32_t)input_in_DRAM[i] );
    }

    for (uint32_t i = 0; i < token_dim * output_dim; ++i) {
        set_data( (uint32_t)weight_in_DRAM[i] );
    }

    for (uint32_t i = 0; i < output_dim; ++i) {
        set_data( (uint32_t)output_in_DRAM[i] );
    }

    set_input_activation_len(token_count * token_dim);
    set_output_activation_len(token_count * output_dim);

    set_enable(scale, false, false, true);  // enable, maxpool, relu, linear

    wait_for_interrupt();
    dla_stop();

#ifdef DLA_INFO
    dump_dla_info_to_csv(DLA_INFO_CSV, "qlinear",
                         token_count, token_dim, output_dim, scale);
#endif
    // 6) 逐字读回
    for (uint32_t i = 0; i < token_count * output_dim; ++i) {
        uint32_t v = reg_read(GLB_OUTPUT_OFFSET + i*4);
        output_in_DRAM[i] = (uint8_t)v;
    }
    return 0;
}

