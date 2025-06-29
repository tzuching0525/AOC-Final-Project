`timescale 1ps/1ps
`define CYCLE 3000
`define MAX_CYCLE 10000
`define DATA 8
`define ifmap_size 128 // define max value maybe some of array are not used
`define weight_W 128
`define weight_H 128
`define bias_size 128
`define ofmap_size 128

`include "asic_wrapper.sv"
`include "Controller.sv"
`include "PPU.sv"
`include "PE_array.sv"
`include "PE_block.sv"
`include "PE.v"
`include "sram_weight.sv"
`include "sram_ifmap.sv"
`include "sram_bias.sv"
`include "sram_ofmap.sv"
`include "Adder_tree.sv"


`ifdef SYN
    `define SDFFILE "../syn/Top_syn.sdf"
    `include "../syn/Top_syn.v"
    `include "/cad/CBDK/Executable_Package/Collaterals/IP/stdcell/N16ADFP_StdCell/VERILOG/N16ADFP_StdCell.v"
`else
    //`include "Top.sv"
`endif


module tb;

reg clk = 0;
reg rst = 0;
reg [0:0] mode [0:0];

reg [`DATA-1:0] ifmap [0:`ifmap_size-1];
reg [`DATA-1:0] weight [0:`weight_W * `weight_H-1];
reg [`DATA*4-1:0] bias [0:`bias_size-1];
logic [11:0] scaling_factor [0:0];
reg ready;
wire [31:0] ofmap;
logic [31:0] ofmap_reg [0:127];
logic [11:0] input_count;
reg [`DATA*4-1:0] golden_opsum[0:`ofmap_size-1];
integer err = 0;
wire valid;
logic [31:0] data_in;
logic done;
logic i_en;
integer i;
integer step = 0;
integer ofmap_count = 0;
// integer ifmap_length = (mode)? 128 : 64; // 128 for MLP3, 64 for MLP0

// always @(posedge clk) begin
//     if(rst) ifmap_count <= 5'd0;
//     else if(ifmap_en) ifmap_count <= ifmap_count + 1;
//     else ifmap_count <= ifmap_count;
// end

// always @(posedge clk) begin
//     if(rst) weight_count <= 11'd0;
//     else if(weight_en) weight_count <= weight_count + 1;
//     else weight_count <= weight_count;
// end

// always @(posedge clk) begin
//     if(rst) bias_count <= 7'd0;
//     else if(bias_en) bias_count <= bias_count + 1;
//     else bias_count <= bias_count;
// end

always @(posedge clk) begin
    if(rst) input_count <= 12'd0;
    // else if(ready) input_count <= 12'd0;
    else if(i_en) input_count <= input_count + 1;
    else input_count <= input_count;
end

logic [7:0] ifmap0, ifmap1, ifmap2, ifmap3, weight0, weight1, weight2, weight3;
logic [7:0] ifmap4, ifmap5, ifmap6, ifmap7, weight4, weight5, weight6, weight7;
// mode 0, step 0
assign ifmap0 = ifmap[4 * input_count];
assign ifmap1 = ifmap[4 * input_count + 1];
assign ifmap2 = ifmap[4 * input_count + 2];
assign ifmap3 = ifmap[4 * input_count + 3];
assign weight0 = (mode[0][0] == 0)? weight[4 * (input_count - 16)] : weight[4 * (input_count - 16) + (input_count - 16) / 16 * 64];
assign weight1 = (mode[0][0] == 0)? weight[4 * (input_count - 16) + 1] : weight[4 * (input_count - 16) + (input_count - 16) / 16 * 64 + 1];
assign weight2 = (mode[0][0] == 0)? weight[4 * (input_count - 16) + 2] : weight[4 * (input_count - 16) + (input_count - 16) / 16 * 64 + 2];
assign weight3 = (mode[0][0] == 0)? weight[4 * (input_count - 16) + 3] : weight[4 * (input_count - 16) + (input_count - 16) / 16 * 64 + 3];
// mode 0, step 1
assign ifmap4 = (mode[0][0] == 0)? ifmap[4 * (input_count - 16 - 64 * 16 - 64)] : ifmap[4 * (input_count - 16 - 64 * 16 - 64) + 64];
assign ifmap5 = (mode[0][0] == 0)? ifmap[4 * (input_count - 16 - 64 * 16 - 64) + 1] : ifmap[4 * (input_count - 16 - 64 * 16 - 64) + 1 + 64];
assign ifmap6 = (mode[0][0] == 0)? ifmap[4 * (input_count - 16 - 64 * 16 - 64) + 2] : ifmap[4 * (input_count - 16 - 64 * 16 - 64) + 2 + 64];
assign ifmap7 = (mode[0][0] == 0)? ifmap[4 * (input_count - 16 - 64 * 16 - 64) + 3] : ifmap[4 * (input_count - 16 - 64 * 16 - 64) + 3 + 64];
assign weight4 = (mode[0][0] == 0)? weight[4 * (input_count - 16 * 2 - 64)] : 
                              weight[4 * (input_count - 16 * 2 - 64 * 16 - 64) + (input_count - 16 * 2 - 64 * 16 - 64) / 16 * 64 + 64];
assign weight5 = (mode[0][0] == 0)? weight[4 * (input_count - 16 * 2 - 64) + 1] : 
                              weight[4 * (input_count - 16 * 2 - 64 * 16 - 64) + (input_count - 16 * 2 - 64 * 16 - 64) / 16 * 64 + 64 + 1];
assign weight6 = (mode[0][0] == 0)? weight[4 * (input_count - 16 * 2 - 64) + 2] : 
                              weight[4 * (input_count - 16 * 2 - 64 * 16 - 64) + (input_count - 16 * 2 - 64 * 16 - 64) / 16 * 64 + 64 + 2];
assign weight7 = (mode[0][0] == 0)? weight[4 * (input_count - 16 * 2 - 64) + 3] : 
                              weight[4 * (input_count - 16 * 2 - 64 * 16 - 64) + (input_count - 16 * 2 - 64 * 16 - 64) / 16 * 64 + 64 + 3];


// assign data_in = (input_count < 16)? {ifmap3, ifmap2, ifmap1, ifmap0} : 
//                  (input_count < 16 + 64 * 16)? {weight3, weight2, weight1, weight0} : 
//                  (input_count < 16 + 64 * 16 + 128)? bias[input_count - 16 - 64 * 16] : 32'd0;

always @(*) begin
    if(mode[0][0] == 0) begin
        if(input_count < 16) data_in = {ifmap3, ifmap2, ifmap1, ifmap0};
        else if(input_count < 16 + 64 * 16) data_in = {weight3, weight2, weight1, weight0};
        else if(input_count < 16 + 64 * 16 + 64) data_in = bias[input_count - 16 - 64 * 16];
        else if(input_count < 16 * 2 + 64 * 16 + 64) data_in = {ifmap7, ifmap6, ifmap5, ifmap4}; 
        else if(input_count < 16 * 2 + 64 * 16 * 2 + 64) data_in = {weight7, weight6, weight5, weight4};
        else if(input_count < 16 * 2 + 64 * 16 * 2 + 64 * 2) data_in = bias[input_count - 16 * 2 - 64 * 16 * 2];
        else data_in = 0;
    end
    else begin
        if(input_count < 16) data_in = {ifmap3, ifmap2, ifmap1, ifmap0};
        else if(input_count < 16 + 64 * 16) data_in = {weight3, weight2, weight1, weight0};
        else if(input_count < 16 + 64 * 16 + 64) data_in = bias[input_count - 16 - 64 * 16];
        else if(input_count < 16 * 2 + 64 * 16 + 64) data_in = {ifmap7, ifmap6, ifmap5, ifmap4}; 
        else if(input_count < 16 * 2 + 64 * 16 * 2 + 64) data_in = {weight7, weight6, weight5, weight4};
        else if(input_count < 16 * 2 + 64 * 16 * 2 + 64 * 2) data_in = bias[input_count - 16 * 2 - 64 * 16 * 2 - 64];
        else data_in = 0;
    end
end

// main function
initial begin
    rst = 1; ready = 0; i_en = 0;
    #(`CYCLE*2) rst = 0;
    // integer ifmap_length = (mode)? 128 : 64; // 128 for MLP3, 64 for MLP0
    // integer weight_length = (mode)? 128 : 64; // 128 for MLP3, 64 for MLP0
    // integer bias_length = (mode)? 64 : 128; // 64 for MLP3, 128 for MLP0
    // send data: DRAM --> GLB
    // wait(valid == 0);  #1; ready = 1; 
    // @(negedge clk); ready = 0; i_en = 1;
    // // wait(ifmap_count[3:0] == 15); 
    // // wait(weight_count[9:0] == 64 * 64 / 4 - 1); 
    // // wait(bias_count == 63); 
    // wait(input_count == 64 / 4 + 64 * 64 / 4 + 64); i_en = 0;

    // wait(done);
    // wait(ofmap_count == 64);
    if(mode[0][0] == 0) begin
        wait(valid == 0); #1; ready = 1;
        @(negedge clk); ready = 0; i_en = 1;
        wait(input_count == 64 / 4 + 64 * 64 / 4 + 64); i_en = 0;
        wait(ofmap_count == 64); #1; ready = 1;
        @(negedge clk); ready = 0; i_en = 1;
        wait(input_count == 16 * 2 + 64 * 16 * 2 + 64 * 2); i_en = 0;
        wait(ofmap_count == 128);
        for (i = 0;i < 128 ;i = i + 1 ) begin
            if(ofmap_reg[i] !== golden_opsum[i]) begin
                $display("Error at index %d: Expected %08h, got %08h", i, golden_opsum[i], ofmap_reg[i]);
                err = err + 1;
            end
            else $display("Pass at index %d", i);
        end
    end
    else begin
        wait(valid == 0); #1; ready = 1;
        @(negedge clk); ready = 0; i_en = 1;
        wait(input_count == 64 / 4 + 64 * 64 / 4 + 64); i_en = 0;
        wait(ofmap_count == 64); #1; ready = 1;
        @(negedge clk); ready = 0; i_en = 1;
        wait(input_count == 16 * 2 + 64 * 16 * 2 + 64 * 2); i_en = 0;
        wait(ofmap_count == 128);
        for (i = 0;i < 64 ;i = i + 1 ) begin
            if(ofmap_reg[i] !== golden_opsum[i]) begin
                $display("Error at index %d: Expected %08h, got %08h", i, golden_opsum[i], ofmap_reg[i]);
                err = err + 1;
            end
            else $display("Pass at index %d", i);
        end
    end
    // @ (negedge clk); 
    // compare results
    

    $display("Test completed.");
    if(err == 0) $display("All tests passed!");
    else $display("Total error: %d", err);
    $finish;
end


// get ofmap into ofmap_reg
initial begin
    # 10;
    if(mode[0][0] == 0) begin
        while(ofmap_count < 128) begin
            @(negedge clk);
            if(valid) begin
                ofmap_reg[ofmap_count] = ofmap;
                ofmap_count = ofmap_count + 1;
            end
        end
    end
    else begin
        while(ofmap_count < 64) begin
            @(negedge clk);
            if(valid) begin
                bias[ofmap_count] = ofmap;
                ofmap_count = ofmap_count + 1;
            end
        end
        while(ofmap_count < 128) begin
            @(negedge clk);
            if(valid) begin
                ofmap_reg[ofmap_count - 64] = ofmap;
                ofmap_count = ofmap_count + 1;
            end
        end
    end
end

Top Top(
    .clk(clk),
    .rst(rst),
    .mode(mode[0]),
    .scaling_factor(scaling_factor[0]),
    .ready(ready),
    .data_in(data_in),
    .valid(valid),
    .ofmap(ofmap),
    .done(done)
);



// genvar gen;

// generate
//     for(gen = 0; gen < `PE_block_H * `PE_array_size; gen = gen + 1) begin: bias_gen
//         assign weight_wire[gen] = weight[pattern * `PE_array_size * `PE_block_H * `PE_block_W + 
//                                         (gen % `PE_block_H) * `PE_block_W * `PE_array_size + 
//                                         (gen / `PE_block_H) * `PE_block_W + 
//                                         count[1:0]];
//     end
//     for(gen = 0; gen < `PE_block_H; gen = gen + 1) begin: bias_gen2
//         assign bias_wire[gen] = bias[pattern * `PE_block_H + gen];
//     end
//     for(gen = 0; gen < `PE_array_size; gen = gen + 1) begin: ifmap_gen
//         assign ifmap_wire[gen] = ifmap[pattern * `PE_array_size * `PE_block_W + 
//                                        `PE_block_W * gen + 
//                                        count[1:0]];
//     end
// endgenerate

initial begin
    `ifdef SYN
        $sdf_annotate(`SDFFILE, Top);
    `endif
end

initial begin
    $fsdbDumpfile("tb_top.fsdb");
    $fsdbDumpvars("+struct", "+mda", tb);
end

// initial begin
//     $dumpfile("dump.vcd"); 
//     $dumpvars(1);
// end

always begin
    #(`CYCLE/2) clk = ~clk;
end

initial begin
    $readmemh("ifmap1.txt", ifmap);
    $readmemh("weight1.txt", weight);
    $readmemh("bias1.txt", bias);
    $readmemh("golden1.txt", golden_opsum);
    $readmemb("mode1.txt", mode);
    $readmemh("scaling_factor1.txt", scaling_factor);
end

initial begin 
    #(`CYCLE*`MAX_CYCLE);
    $display("\n\033[0;31m================================================================\n");
    $display("====================  Time limit exceeded  =====================\n");
    $display("================================================================\033[0m\n");
    $finish;
end

endmodule