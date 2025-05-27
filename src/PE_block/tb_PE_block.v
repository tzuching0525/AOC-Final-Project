`timescale 1ns/1ps
`define CYCLE 10
`define DATA_SIZE 8
`define TEST_SIZE 2
`define PE_block_W 4
`define PE_block_H 8
`ifdef SYN
    `define SDFFILE "PE_syn.sdf"
`endif

module tb_PE;

reg clk = 0;
reg rst = 0;
reg [`DATA_SIZE-1:0] ifmap [0:`PE_block_W * `TEST_SIZE-1];
reg [`DATA_SIZE-1:0] weight [0:`PE_block_H * `PE_block_W * `TEST_SIZE-1];
reg [`DATA_SIZE * 4-1:0] bias [0:`PE_block_H * `TEST_SIZE-1];
reg en;
wire [`DATA_SIZE*4-1:0] ofmap [0 : `PE_block_H - 1];
integer pattern = 0;
reg [4:0] count;
reg [`DATA_SIZE*4-1:0] golden_opsum[0:`PE_block_H * `TEST_SIZE-1];
integer err = 0;
wire valid;

// initial begin
//     $fsdbDumpfile("tb_PE.fsdb");
//     $fsdbDumpvars(0, tb_PE);
// end

initial begin
    $dumpfile("dump.vcd"); 
    $dumpvars();
end

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
        if(count == `PE_block_W && !en) count <= count;
        else count <= count + 1;
    end
end

wire [`DATA_SIZE-1:0] ifmap_wire = ifmap[count];
// wire [`DATA_SIZE-1:0] weight_wire0 = weight[count * `PE_block_H]; 
// wire [`DATA_SIZE-1:0] weight_wire1 = weight[count * `PE_block_H + 1];
// wire [`DATA_SIZE-1:0] weight_wire2 = weight[count * `PE_block_H + 2];
// wire [`DATA_SIZE-1:0] weight_wire3 = weight[count * `PE_block_H + 3];
// wire [`DATA_SIZE-1:0] weight_wire4 = weight[count * `PE_block_H + 4];
// wire [`DATA_SIZE-1:0] weight_wire5 = weight[count * `PE_block_H + 5];
// wire [`DATA_SIZE-1:0] weight_wire6 = weight[count * `PE_block_H + 6];
// wire [`DATA_SIZE-1:0] weight_wire7 = weight[count * `PE_block_H + 7]; 
// wire [`DATA_SIZE * 4-1:0] bias_wire0 = bias[(pattern) * `PE_block_H];
// wire [`DATA_SIZE * 4-1:0] bias_wire1 = bias[(pattern) * `PE_block_H + 1];
// wire [`DATA_SIZE * 4-1:0] bias_wire2 = bias[(pattern) * `PE_block_H + 2];
// wire [`DATA_SIZE * 4-1:0] bias_wire3 = bias[(pattern) * `PE_block_H + 3];
// wire [`DATA_SIZE * 4-1:0] bias_wire4 = bias[(pattern) * `PE_block_H + 4];
// wire [`DATA_SIZE * 4-1:0] bias_wire5 = bias[(pattern) * `PE_block_H + 5];
// wire [`DATA_SIZE * 4-1:0] bias_wire6 = bias[(pattern) * `PE_block_H + 6];
// wire [`DATA_SIZE * 4-1:0] bias_wire7 = bias[(pattern) * `PE_block_H + 7];

PE_block pe_block(
    .clk(clk),
    .rst(rst),
    .ifmap(ifmap_wire),
    .weight(weight_wire),
    .bias(bias_wire),
    .i_en(en),
    .ofmap(ofmap),
    .valid(valid)
);

wire [7:0] weight_wire [0 : `PE_block_H - 1];
wire [31:0] bias_wire [0 : `PE_block_H - 1];

assign weight_wire[0] = weight[count * `PE_block_H];
assign weight_wire[1] = weight[count * `PE_block_H + 1];
assign weight_wire[2] = weight[count * `PE_block_H + 2];
assign weight_wire[3] = weight[count * `PE_block_H + 3];
assign weight_wire[4] = weight[count * `PE_block_H + 4];
assign weight_wire[5] = weight[count * `PE_block_H + 5];
assign weight_wire[6] = weight[count * `PE_block_H + 6];
assign weight_wire[7] = weight[count * `PE_block_H + 7];
assign bias_wire[0] = bias[pattern * `PE_block_H];
assign bias_wire[1] = bias[pattern * `PE_block_H + 1];
assign bias_wire[2] = bias[pattern * `PE_block_H + 2];
assign bias_wire[3] = bias[pattern * `PE_block_H + 3];
assign bias_wire[4] = bias[pattern * `PE_block_H + 4];
assign bias_wire[5] = bias[pattern * `PE_block_H + 5];
assign bias_wire[6] = bias[pattern * `PE_block_H + 6];
assign bias_wire[7] = bias[pattern * `PE_block_H + 7];


initial begin
    `ifdef SYN
        $sdf_annotate(`SDFFILE, PE);
    `endif
end

endmodule