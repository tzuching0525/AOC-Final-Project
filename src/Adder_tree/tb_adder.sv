`timescale 1ns/1ps
`define CYCLE 10
module tb;

reg clk = 0;
reg rst = 0;
reg [31:0] data_in [0:63];
reg [31:0] golden [0 : 7];
wire [31:0] data_out [0:7];
wire valid;
reg en = 0;
integer err = 0;

initial begin
    $readmemh("data_in.txt", data_in);
    $readmemh("golden.txt", golden);
end

always begin
    #(`CYCLE/2) clk = ~clk;
end

initial begin
    rst = 1; en = 0;
    #(`CYCLE*2) rst = 0; en = 1;
    // compare result
    wait(valid); en = 0;
    for(int i = 0; i < 8; i = i + 1) begin
        if(data_out[i] !== golden[i]) begin
            $display("Error at index %d: expected %h, got %h", i, golden[i], data_out[i]);
            err = err + 1;
        end else begin
            $display("Test passed for index %d: %h", i, data_out[i]);
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

initial begin
    $dumpfile("dump.vcd"); 
    $dumpvars();
end
Adder_tree adder(
    .clk(clk),
    .rst(rst),
    .en(en),
    .data_in(data_in),
    .data_out(data_out),
    .valid(valid)
);

endmodule