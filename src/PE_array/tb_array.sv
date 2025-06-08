`timescale 1ns/1ps
`define CYCLE 10
`define DATA_SIZE 8
`define TEST_SIZE 2
`define PE_block_W 4
`define PE_block_H 8
`define PE_array_size 8
`ifdef SYN
    `define SDFFILE "PE_syn.sdf"
`endif
`include "PE_array.sv"

module tb_PE;

reg clk = 0;
reg rst = 0;
reg [`DATA_SIZE-1:0] ifmap [0:`PE_block_W * `TEST_SIZE * `PE_array_size-1];
reg [`DATA_SIZE-1:0] weight [0:`PE_block_H * `PE_block_W * `TEST_SIZE * `PE_array_size-1];
reg [`DATA_SIZE * 4-1:0] bias [0:`PE_block_H * `TEST_SIZE-1];
reg en;
wire [`DATA_SIZE*4-1:0] ofmap [0 : `PE_block_H - 1];
integer pattern = 0;
reg [4:0] count;
reg [`DATA_SIZE*4-1:0] golden_opsum[0:`PE_block_H * `TEST_SIZE-1];
integer err = 0;
wire valid;

initial begin
    $fsdbDumpfile("tb_PE.fsdb");
    $fsdbDumpvars("+struct", "+mda", tb_PE);
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
end
// main function
initial begin
    rst = 1; en = 0;
    #(`CYCLE*2) rst = 0;
    while(pattern < `TEST_SIZE) begin
        wait(valid == 0);  #1; en = 1; #(`CYCLE); en = 0;
        wait(valid);
        @ (negedge clk); 
        // compare results
        if(ofmap[0] !== golden_opsum[pattern * `PE_block_H]) begin
            $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
            0, golden_opsum[(pattern) * `PE_block_H], ofmap[0]);
            $finish;
        end 
        else if(ofmap[1] !== golden_opsum[(pattern) * `PE_block_H + 1]) begin
            $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
            1, golden_opsum[(pattern) * `PE_block_H + 1], ofmap[1]);
            $finish;
        end
        else if(ofmap[2] !== golden_opsum[(pattern) * `PE_block_H + 2]) begin
            $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
            2, golden_opsum[(pattern) * `PE_block_H + 2], ofmap[2]);
            $finish;
        end
        else if(ofmap[3] !== golden_opsum[(pattern) * `PE_block_H + 3]) begin
            $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
            3, golden_opsum[(pattern) * `PE_block_H + 3], ofmap[3]);
            $finish;
        end
        else if(ofmap[4] !== golden_opsum[(pattern) * `PE_block_H + 4]) begin
            $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
            4, golden_opsum[(pattern) * `PE_block_H + 4], ofmap[4]);
            $finish;
        end 
        else if(ofmap[5] !== golden_opsum[(pattern) * `PE_block_H + 5]) begin
            $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
            5, golden_opsum[(pattern) * `PE_block_H + 5], ofmap[5]);
            $finish;
        end
        else if(ofmap[6] !== golden_opsum[(pattern) * `PE_block_H + 6]) begin
            $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
            6, golden_opsum[(pattern) * `PE_block_H + 6], ofmap[6]);
            $finish;
        end
        else if(ofmap[7] !== golden_opsum[(pattern) * `PE_block_H + 7]) begin
            $display("Error at pattern %d opsum %d: Expected %h, got %h", pattern, 
            7, golden_opsum[(pattern) * `PE_block_H + 7], ofmap[7]);
            $finish;
        end
        else begin
            $display("Pass at pattern %d", pattern);
        end
        pattern = pattern + 1;
    end
    $display("Test completed.");
    $display("All tests passed!");
    $finish;
end

always @(posedge clk) begin
    if(rst) count <= 5'd0;
    else begin
        if((count % `PE_block_W) == 0 && !en) count <= count;
        else count <= count + 1;
    end
end

wire [`DATA_SIZE-1:0] ifmap_wire [0 : `PE_array_size - 1];
wire [7:0] weight_wire [0 : `PE_block_H * `PE_array_size - 1];
wire [31:0] bias_wire [0 : `PE_block_H - 1];

PE_array pe_array(
    .clk(clk),
    .rst(rst),
    .ifmap(ifmap_wire),
    .weight(weight_wire),
    .bias(bias_wire),
    .i_en(en),
    .ofmap(ofmap),
    .valid(valid)
);



genvar gen;

generate
    for(gen = 0; gen < `PE_block_H * `PE_array_size; gen = gen + 1) begin: bias_gen
        assign weight_wire[gen] = weight[pattern * `PE_array_size * `PE_block_H * `PE_block_W + 
                                        (gen % `PE_block_H) * `PE_block_W * `PE_array_size + 
                                        (gen / `PE_block_H) * `PE_block_W + 
                                        count[1:0]];
    end
    for(gen = 0; gen < `PE_block_H; gen = gen + 1) begin: bias_gen2
        assign bias_wire[gen] = bias[pattern * `PE_block_H + gen];
    end
    for(gen = 0; gen < `PE_array_size; gen = gen + 1) begin: ifmap_gen
        assign ifmap_wire[gen] = ifmap[pattern * `PE_array_size * `PE_block_W + 
                                       `PE_block_W * gen + 
                                       count[1:0]];
    end
endgenerate

initial begin
    `ifdef SYN
        $sdf_annotate(`SDFFILE, PE);
    `endif
end

endmodule