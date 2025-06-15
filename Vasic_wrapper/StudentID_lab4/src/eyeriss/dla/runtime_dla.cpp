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

int qlinear_relu(int8_t *input_in_DRAM, int8_t *weight_in_DRAM,
                 int32_t *output_in_DRAM, int32_t *bias,
                 uint32_t scale, uint32_t mode) {
#ifdef DLA_INFO
    dla_reset_runtime_info();
#endif
    set_enable(scale, mode);  // undone
    printf("Start writing ifmap0...\n");
    for (int i = 0; i < 16; i++) {
        printf("i = %d\n", i);
        uint32_t val = ((uint8_t)input_in_DRAM[4 * i + 3] << 24) |
                       ((uint8_t)input_in_DRAM[4 * i + 2] << 16) |
                       ((uint8_t)input_in_DRAM[4 * i + 1] << 8)  |
                       ((uint8_t)input_in_DRAM[4 * i + 0]);
        printf("[ifmap0][%2d] = 0x%08x\n", i, val);
        reg_write(DLA_DATA_OFFSET, val);
    }
    printf("Start writing weight0...\n");
    for(int i = 0; i < 16 * 64; i++){
        uint32_t val = ((uint8_t)weight_in_DRAM[4 * i + 3] << 24) |
                       ((uint8_t)weight_in_DRAM[4 * i + 2] << 16) |
                       ((uint8_t)weight_in_DRAM[4 * i + 1] << 8)  |
                       ((uint8_t)weight_in_DRAM[4 * i + 0]);
        printf("[weight0][%4d] = 0x%08x\n", i, val);
        reg_write(DLA_DATA_OFFSET, weight_in_DRAM[i]);
    }
    printf("Start writing bias0...\n");
    for(int i = 0; i < 64; i++){
        printf("[bias0][%2d] = %d\n", i, bias[i]);
        reg_write(DLA_DATA_OFFSET, bias[i]);
    }
    printf("Before wait_for_interrupt()\n");
    fflush(stdout);
    wait_for_interrupt();
    printf("finish wait_for_interrupt()\n");
    fflush(stdout);
    printf("Start writing ifmap0...\n");
    for (int i = 0; i < 16; i++) {
        printf("i = %d\n", i);
        uint32_t val = ((uint8_t)input_in_DRAM[4 * i + 3] << 24) |
                       ((uint8_t)input_in_DRAM[4 * i + 2] << 16) |
                       ((uint8_t)input_in_DRAM[4 * i + 1] << 8)  |
                       ((uint8_t)input_in_DRAM[4 * i + 0]);
        printf("[ifmap0][%2d] = 0x%08x\n", i, val);
        reg_write(DLA_DATA_OFFSET, val);
    }
    printf("Start writing weight0...\n");
    for(int i = 0; i < 16 * 64; i++){
        uint32_t val = ((uint8_t)weight_in_DRAM[4 * i + 3] << 24) |
                       ((uint8_t)weight_in_DRAM[4 * i + 2] << 16) |
                       ((uint8_t)weight_in_DRAM[4 * i + 1] << 8)  |
                       ((uint8_t)weight_in_DRAM[4 * i + 0]);
        printf("[weight0][%4d] = 0x%08x\n", i, val);
        reg_write(DLA_DATA_OFFSET, weight_in_DRAM[i]);
    }
    printf("Start writing bias0...\n");
    for(int i = 0; i < 64; i++){
        printf("[bias0][%2d] = %d\n", i, bias[i]);
        reg_write(DLA_DATA_OFFSET, bias[i]);
    }

    wait_for_interrupt();
    //printf("2222222finish wait_for_interrupt()\n");
    fflush(stdout);
    // Read data from the DLA register
    for (uint32_t i = 0; i < 64; ++i) {
        printf("for\n");
        uint32_t v = reg_read(DLA_OFMAP_OFFSET);
        printf("v = %d\n", v);
        output_in_DRAM[i] = v;
        printf ("golden[%d] = %x\n", i, v);
    }
    fflush(stdout);
#ifdef DLA_INFO
    dump_dla_info_to_csv(DLA_INFO_CSV, "qlinear_relu",
                         token_count, token_dim, output_dim, scale);
#endif

    return 0;
}

