module PE (
    input clk,
    input rst,
    input [7:0] ifmap,
    input signed [7:0] weight,
    input signed [31:0] bias,
    input en,
    output signed [31:0] opsum
);
    wire signed [31:0] ifmap_adjusted = ifmap - 32'd128; // Adjusting ifmap to be centered around 0
    wire signed [31:0] weight_adjusted = weight; // Adjusting weight to be centered around 0
    assign opsum = (en)? (ifmap_adjusted * weight_adjusted + bias) : 32'd0;

    
endmodule
