`include "../PE/PE.v"
`define PE_block_W 4
`define PE_block_H 8

module PE_block (
    input clk,
    input rst,
    input i_en,
    input [7:0] ifmap,
    input [7:0] weight0,
    input [7:0] weight1,
    input [7:0] weight2,
    input [7:0] weight3,
    input [7:0] weight4,
    input [7:0] weight5,
    input [7:0] weight6,
    input [7:0] weight7,
    input [31:0] bias0,
    input [31:0] bias1,
    input [31:0] bias2,
    input [31:0] bias3,
    input [31:0] bias4,
    input [31:0] bias5,
    input [31:0] bias6,
    input [31:0] bias7,
    output [31:0] ofmap0,
    output [31:0] ofmap1,
    output [31:0] ofmap2,
    output [31:0] ofmap3,
    output [31:0] ofmap4,
    output [31:0] ofmap5,
    output [31:0] ofmap6,
    output [31:0] ofmap7,
    output valid
);
    integer i;
    wire [7:0] weight [0 : `PE_block_H - 1];
    wire [31:0] bias [0 : `PE_block_H - 1];
    // wire [31:0] ofmap [0 : `PE_block_H - 1];
    wire [31:0] opsum [0 : `PE_block_W - 1][0 : `PE_block_H - 1];
    wire [`PE_block_H - 1 : 0] valid_chain [0 : `PE_block_W - 1];

    // Assigning weights and biases to the arrays
    assign weight[0] = weight0;
    assign weight[1] = weight1;
    assign weight[2] = weight2;
    assign weight[3] = weight3;
    assign weight[4] = weight4;
    assign weight[5] = weight5;
    assign weight[6] = weight6;
    assign weight[7] = weight7;
    assign bias[0] = bias0;
    assign bias[1] = bias1;
    assign bias[2] = bias2;
    assign bias[3] = bias3;
    assign bias[4] = bias4;
    assign bias[5] = bias5;
    assign bias[6] = bias6;
    assign bias[7] = bias7;
    assign ofmap0 = opsum[`PE_block_W - 1][0];
    assign ofmap1 = opsum[`PE_block_W - 1][1];
    assign ofmap2 = opsum[`PE_block_W - 1][2];
    assign ofmap3 = opsum[`PE_block_W - 1][3];
    assign ofmap4 = opsum[`PE_block_W - 1][4];
    assign ofmap5 = opsum[`PE_block_W - 1][5];
    assign ofmap6 = opsum[`PE_block_W - 1][6];
    assign ofmap7 = opsum[`PE_block_W - 1][7];

    assign valid = (&valid_chain[`PE_block_W - 1]);

    genvar gen;

    generate
        for (gen = 0; gen < `PE_block_H * `PE_block_W; gen = gen + 1) begin: PE_block
            if(gen < `PE_block_H) begin // First column of PE block
                PE pe(
                    .clk(clk),
                    .rst(rst),
                    .ifmap(ifmap), // Adjusting ifmap input for each PE
                    .weight(weight[gen]), // Adjusting weight input for each PE
                    .bias(bias[gen]), // Adjusting bias input for each PE
                    .en(i_en),
                    .opsum(opsum[0][gen]), // Adjusting output ofmap for each PE
                    .valid(valid_chain[0][gen])
                );
            end
            else if(gen < `PE_block_H * (`PE_block_W - 1)) begin // middle columns of PE block
                PE pe(
                    .clk(clk),
                    .rst(rst),
                    .ifmap(ifmap), // Adjusting ifmap input for each PE
                    .weight(weight[gen % `PE_block_H]), // Adjusting weight input for each PE
                    .bias(opsum[gen / `PE_block_H - 1][gen % `PE_block_H]), // Adjusting bias input for each PE
                    .en(valid_chain[gen / `PE_block_H - 1][gen % `PE_block_H]), // Enabling based on previous PE's valid signal
                    .opsum(opsum[gen / `PE_block_H][gen % `PE_block_H]), // Adjusting output ofmap for each PE
                    .valid(valid_chain[gen / `PE_block_H][gen % `PE_block_H])
                );
            end
            else begin // Last column of PE block
                PE pe(
                    .clk(clk),
                    .rst(rst),
                    .ifmap(ifmap), // Adjusting ifmap input for each PE
                    .weight(weight[gen % `PE_block_H]), // Adjusting weight input for each PE
                    .bias(opsum[gen / `PE_block_H - 1][gen % `PE_block_H]), // Adjusting bias input for each PE
                    .en(valid_chain[gen / `PE_block_H - 1][gen % `PE_block_H]), // Enabling based on previous PE's valid signal
                    .opsum(opsum[gen / `PE_block_H][gen % `PE_block_H]), // Final output ofmap for each PE
                    .valid(valid_chain[gen / `PE_block_H][gen % `PE_block_H])
                );
            end
        end
    endgenerate

endmodule