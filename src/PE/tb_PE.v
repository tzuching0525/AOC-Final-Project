`timescale 1ns/1ps
`define CYCLE 10
`define DATA_SIZE 8
`define TEST_SIZE 16
`ifdef SYN
    `define SDFFILE "PE_syn.sdf"
`endif

module tb_PE;

reg clk = 0;
reg rst = 0;
reg [`DATA_SIZE-1:0] ifmap [0:`TEST_SIZE-1];
reg [`DATA_SIZE-1:0] weight [0:`TEST_SIZE-1];
reg [`DATA_SIZE * 4-1:0] bias [0:`TEST_SIZE-1];
reg en;
wire [`DATA_SIZE*4-1:0] opsum;
wire valid;
reg [4:0] count;
reg [`DATA_SIZE*4-1:0] golden_opsum[0:`TEST_SIZE-1];
integer err = 0;

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
    #(`CYCLE*2) rst = 0; en = 1;
    while(count < `TEST_SIZE - 1) begin
        wait(valid);
        @ (negedge clk); 
        // compare results
        if(opsum !== golden_opsum[count]) begin
            $display("Error at count %d: Expected %h, got %h", count, golden_opsum[count], opsum);
            err = err + 1;
        end 
        else begin
            $display("Pass at count %d: Expected %h, got %h", count, golden_opsum[count], opsum);
        end
    end
    $display("Test completed.");
    if(err == 0) begin
        $display("All tests passed!");
    end 
    else begin
        $display("Total errors: %d", err);
    end
    $finish;
end

always @(posedge clk) begin
    if(rst) count <= 5'd0;
    else count <= count + 5'd1;
end

wire [`DATA_SIZE-1:0] ifmap_wire = ifmap[count];
wire [`DATA_SIZE-1:0] weight_wire = weight[count];
wire [`DATA_SIZE * 4-1:0] bias_wire = bias[count];

PE pe(
    .clk(clk),
    .rst(rst),
    .ifmap(ifmap_wire),
    .weight(weight_wire),
    .bias(bias_wire),
    .en(en),
    .opsum(opsum),
    .valid(valid)
);

initial begin
    `ifdef SYN
        $sdf_annotate(`SDFFILE, PE);
    `endif
end

endmodule