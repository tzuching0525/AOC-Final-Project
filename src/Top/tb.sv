`timescale 1ns/1ps
`define CYCLE 10
`define MAX_CYCLE 10000
`define DATA_SIZE 8
`define ifmap_size 128 // define max value maybe some of array are not used
`define weight_W 128
`define weight_H 128
`define bias_size 128
`define ofmap_size 128

`ifdef SYN
    `define SDFFILE "Top_syn.sdf"
`endif
`include "Top.sv"

module tb;

reg clk = 0;
reg rst = 0;
reg [0:0] mode [0:0];

reg [`DATA_SIZE-1:0] ifmap [0:`ifmap_size-1];
reg [`DATA_SIZE-1:0] weight [0:`weight_W * `weight_H-1];
reg [`DATA_SIZE * 4-1:0] bias [0:`bias_size-1];
logic [5:0] scaling_factor [0:0];
reg ready;
wire [31:0] ofmap;
logic [31:0] ofmap_reg [0:63];
logic [11:0] input_count;
reg [`DATA_SIZE*4-1:0] golden_opsum[0:`ofmap_size-1];
integer err = 0;
wire valid;
logic [31:0] data_in;
logic done;
logic i_en;
integer i;
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
    else if(ready) input_count <= 12'd0;
    else if(i_en) input_count <= input_count + 1;
    else input_count <= input_count;
end

logic [7:0] ifmap0, ifmap1, ifmap2, ifmap3, weight0, weight1, weight2, weight3;

assign ifmap0 = ifmap[4 * input_count];
assign ifmap1 = ifmap[4 * input_count + 1];
assign ifmap2 = ifmap[4 * input_count + 2];
assign ifmap3 = ifmap[4 * input_count + 3];
assign weight0 = weight[4 * (input_count - 16)];
assign weight1 = weight[4 * (input_count - 16) + 1];
assign weight2 = weight[4 * (input_count - 16) + 2];
assign weight3 = weight[4 * (input_count - 16) + 3];


assign data_in = (input_count < 16)? {ifmap3, ifmap2, ifmap1, ifmap0} : 
                 (input_count < 16 + 64 * 16)? {weight3, weight2, weight1, weight0} : 
                 (input_count < 16 + 64 * 16 + 128)? bias[input_count - 16 - 64 * 16] : 32'd0;


// main function
initial begin
    rst = 1; ready = 0; i_en = 0;
    #(`CYCLE*2) rst = 0;
    // integer ifmap_length = (mode)? 128 : 64; // 128 for MLP3, 64 for MLP0
    // integer weight_length = (mode)? 128 : 64; // 128 for MLP3, 64 for MLP0
    // integer bias_length = (mode)? 64 : 128; // 64 for MLP3, 128 for MLP0
    // send data: DRAM --> GLB
    wait(valid == 0);  #1; ready = 1; 
    @(negedge clk); ready = 0; i_en = 1;
    // wait(ifmap_count[3:0] == 15); 
    // wait(weight_count[9:0] == 64 * 64 / 4 - 1); 
    // wait(bias_count == 63); 
    wait(input_count == 64 / 4 + 64 * 64 / 4 + 128); ready = 0;

    // wait(done);
    wait(ofmap_count == 64);
    if(mode == 0) begin
        #1; ready = 1;
        @(negedge clk); ready = 0; i_en = 1;
        wait(input_count == 64 / 4 + 64 * 64 / 4 + 128); ready = 0;
    end
    // @ (negedge clk); 
    // compare results
    for (i = 0;i < 64 ;i = i + 1 ) begin
        if(ofmap_reg[i] !== golden_opsum[i]) begin
            $display("Error at index %d: Expected %h, got %h", i, golden_opsum[i], ofmap_reg[i]);
            err = err + 1;
        end
        else $display("Pass at index %d", i);
    end

    // if(ofmap[0] !== golden_opsum[pattern * `PE_block_H]) begin
    //     $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
    //     0, golden_opsum[(pattern) * `PE_block_H], ofmap[0]);
    //     $finish;
    // end 
    // else if(ofmap[1] !== golden_opsum[(pattern) * `PE_block_H + 1]) begin
    //     $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
    //     1, golden_opsum[(pattern) * `PE_block_H + 1], ofmap[1]);
    //     $finish;
    // end
    // else if(ofmap[2] !== golden_opsum[(pattern) * `PE_block_H + 2]) begin
    //     $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
    //     2, golden_opsum[(pattern) * `PE_block_H + 2], ofmap[2]);
    //     $finish;
    // end
    // else if(ofmap[3] !== golden_opsum[(pattern) * `PE_block_H + 3]) begin
    //     $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
    //     3, golden_opsum[(pattern) * `PE_block_H + 3], ofmap[3]);
    //     $finish;
    // end
    // else if(ofmap[4] !== golden_opsum[(pattern) * `PE_block_H + 4]) begin
    //     $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
    //     4, golden_opsum[(pattern) * `PE_block_H + 4], ofmap[4]);
    //     $finish;
    // end 
    // else if(ofmap[5] !== golden_opsum[(pattern) * `PE_block_H + 5]) begin
    //     $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
    //     5, golden_opsum[(pattern) * `PE_block_H + 5], ofmap[5]);
    //     $finish;
    // end
    // else if(ofmap[6] !== golden_opsum[(pattern) * `PE_block_H + 6]) begin
    //     $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
    //     6, golden_opsum[(pattern) * `PE_block_H + 6], ofmap[6]);
    //     $finish;
    // end
    // else if(ofmap[7] !== golden_opsum[(pattern) * `PE_block_H + 7]) begin
    //     $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
    //     7, golden_opsum[(pattern) * `PE_block_H + 7], ofmap[7]);
    //     $finish;
    // end
    // else begin
    //     $display("Pass at pattern %d", pattern);
    // end

    $display("Test completed.");
    if(err == 0) $display("All tests passed!");
    else $display("Total error: %d", err);
    $finish;
end


// get ofmap into ofmap_reg
initial begin
    while(ofmap_count < 64) begin
        @(negedge clk);
        if(valid) begin
            ofmap_reg[ofmap_count] = ofmap;
            ofmap_count = ofmap_count + 1;
        end
    end
end

Top top(
    .clk(clk),
    .rst(rst),
    .mode(mode[0]),
    .scaling_factor(scaling_factor[0]),
    .ready(ready),
    .i_en(i_en),
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
        $sdf_annotate(`SDFFILE, PE);
    `endif
end

initial begin
    $fsdbDumpfile("tb.fsdb");
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
    $readmemh("ifmap.txt", ifmap);
    $readmemh("weight.txt", weight);
    $readmemh("bias.txt", bias);
    $readmemh("golden.txt", golden_opsum);
    $readmemb("mode.txt", mode);
    $readmemh("scaling_factor.txt", scaling_factor);
end

initial begin 
    #(`CYCLE*`MAX_CYCLE);
    $display("\n\033[0;31m================================================================\n");
    $display("====================  Time limit exceeded  =====================\n");
    $display("================================================================\033[0m\n");
    $finish;
end

endmodule