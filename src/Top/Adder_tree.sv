`define PE_block_H 8
`define PE_array_size 8
module Adder_tree (
    input clk,
    input rst,
    input en,
    input [31:0] data_in[0 : `PE_block_H * `PE_array_size - 1],
    output logic [31:0] data_out[0 : `PE_block_H - 1],
    output logic valid
);
    integer i;
    always @(posedge clk) begin
        if(rst) begin
            for (i = 0; i < `PE_block_H; i = i + 1) begin
                data_out[i] <= 32'd0; // Reset output to zero
            end
            valid <= 0; // Reset valid signal
        end
        else begin
            for (i = 0; i < `PE_block_H; i = i + 1) begin
                data_out[i] <= (en)? data_in[i] + data_in[i + `PE_block_H] + 
                            data_in[i + 2 * `PE_block_H] + data_in[i + 3 * `PE_block_H] +
                            data_in[i + 4 * `PE_block_H] + data_in[i + 5 * `PE_block_H] +
                            data_in[i + 6 * `PE_block_H] + data_in[i + 7 * `PE_block_H] : 32'd0; 
            end
            valid <= en; // Valid signal is high when enabled
        end
    end
    
endmodule