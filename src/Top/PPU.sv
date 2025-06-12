// `include "./post_quant.sv"
// `include "./ReLU_Qint8.sv"
`define DATA_BITS 32 
module PPU (
    input clk,
    input rst,
    input i_en,
    input [`DATA_BITS-1:0] data_in,
    input [5:0] scaling_factor,
    output logic[7:0] data_out,
    output logic valid,
    output logic [31:0] data_in_out
);

logic [`DATA_BITS - 1:0] relu_out;
logic [`DATA_BITS-1:0] data_shift;
logic [7:0] data_quant, data_temp;

always @(*) begin
    relu_out = (data_in[`DATA_BITS - 1])? `DATA_BITS'd0 : data_in;
    data_shift = (relu_out >>> scaling_factor);
    data_quant = (data_shift[7:0] ^ 8'd128);
    data_temp = (!data_quant[7])? 8'd255 : data_quant[7:0];
end

always @(posedge clk) begin
    if(rst) begin
        valid <= 1'd0;
        data_out <= 8'd0;
        data_in_out <= 32'd0;
    end
    else begin
        valid <= i_en;
        data_out <= (i_en)? data_temp : 8'd0;
        data_in_out <= data_in;
    end
end

// ReLU_Qint8 relu(
//     .data_in(data_in),
//     .data_out(relu_out)
// );
// post_quant post_quant1(
//     .data_in(relu_out),
//     .scaling_factor(scaling_factor),
//     .data_out(data_out)
// );

endmodule