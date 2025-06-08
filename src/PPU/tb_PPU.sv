`timescale 1ns/1ps
`define CYCLE 10
`define TEST_SIZE 16
`include "PPU.sv"
module tb;

reg clk = 0;
reg rst = 0;
reg [31:0] data_in [0:`TEST_SIZE-1];
reg [7:0] golden [0 : `TEST_SIZE-1];
reg [7:0] data_out [0:`TEST_SIZE-1]; // 存結果
wire [7:0] ppu_data_out;             // 連接PPU的data_out
wire valid;
reg [5:0] scaling_factor = 6'd2;
reg en = 0;
integer err = 0;
reg [5:0] count;
reg [5:0] out_idx = 0; // 用來記錄data_out的index

always @(posedge clk) begin
    if(rst) count <= 0;
    else if(en) count <= count + 1;
end

initial begin
    $readmemh("data_in.txt", data_in);
    $readmemh("golden.txt", golden);
end

always begin
    #(`CYCLE/2) clk = ~clk;
end

PPU ppu(
    .clk(clk),
    .rst(rst),
    .i_en(en),
    .data_in(data_in[count]),
    .scaling_factor(scaling_factor),
    .data_out(ppu_data_out),
    .valid(valid)
);

// 在valid時將PPU的data_out存到data_out陣列
always @(posedge clk) begin
    if(rst) out_idx <= 0;
    else if(valid) begin
        data_out[out_idx] <= ppu_data_out;
        out_idx <= out_idx + 1;
    end
end

initial begin
    rst = 1; en = 0;
    #(`CYCLE*2) rst = 0; en = 1;
    wait(out_idx == `TEST_SIZE); en = 0;
    #(`CYCLE); // 等待最後一筆資料寫入
    for(int i = 0; i < `TEST_SIZE; i = i + 1) begin
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

endmodule