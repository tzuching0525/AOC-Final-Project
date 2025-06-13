module sram_bias #(
    parameter ADDR_BIT=7
)(
    input logic CLK,
    input logic [ADDR_BIT-1:0] ADDR,
    input logic EN,
    input logic WE,
    input logic [31:0] DI,
    output logic [31:0] DO [0:7]
);

logic [31:0] ram [0:(1 << ADDR_BIT)-1];
// logic [31:0] DO_wire [0:3][0:7];

always @(posedge CLK) begin
    if (WE) begin  
        ram[ADDR] <= DI;
    end
end

always @(negedge CLK) begin
    if (EN) begin
        DO[0] <= ram[ADDR];
        DO[1] <= ram[ADDR + 1];
        DO[2] <= ram[ADDR + 2];
        DO[3] <= ram[ADDR + 3];
        DO[4] <= ram[ADDR + 4];
        DO[5] <= ram[ADDR + 5];
        DO[6] <= ram[ADDR + 6];
        DO[7] <= ram[ADDR + 7];
    end
end

endmodule