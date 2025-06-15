module sram_ofmap #(
    parameter ADDR_BIT=7
)(
    input logic CLK,
    input logic [ADDR_BIT-1:0] ADDR,
    input logic EN,
    input logic WE,
    input logic [31:0] DI [0:7],
    output logic [31:0] DO
);

logic [31:0] ram [0:(1 << ADDR_BIT)-1];
// logic [31:0] DO_wire [0:3][0:7];

always @(posedge CLK) begin
    if (WE) begin  
        ram[ADDR] <= DI[0];
        ram[ADDR + 1] <= DI[1];
        ram[ADDR + 2] <= DI[2];
        ram[ADDR + 3] <= DI[3];
        ram[ADDR + 4] <= DI[4];
        ram[ADDR + 5] <= DI[5];
        ram[ADDR + 6] <= DI[6];
        ram[ADDR + 7] <= DI[7];
    end
    if (EN) begin
        DO <= ram[ADDR];
    end
end

endmodule
