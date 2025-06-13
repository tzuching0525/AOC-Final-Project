module sram_ifmap #(
    parameter ADDR_BIT=5
)(
    input logic CLK,
    input logic [ADDR_BIT - 1:0] ADDR,
    input logic EN,
    input logic WE,
    input logic [31:0] DI,
    output logic [7:0] DO [0:7]
);

logic [31:0] ram [0:(1 << ADDR_BIT)-1];
logic [7:0] DO_wire [0:3][0:7];

always @(posedge CLK) begin
    if (EN) begin
        DO[0] <= DO_wire[ADDR[1:0]][0];
        DO[1] <= DO_wire[ADDR[1:0]][1];
        DO[2] <= DO_wire[ADDR[1:0]][2];
        DO[3] <= DO_wire[ADDR[1:0]][3];
        DO[4] <= DO_wire[ADDR[1:0]][4];
        DO[5] <= DO_wire[ADDR[1:0]][5];
        DO[6] <= DO_wire[ADDR[1:0]][6];
        DO[7] <= DO_wire[ADDR[1:0]][7];
    end
    if (WE) begin  
        ram[ADDR] <= DI;
    end
end

genvar i, j;
generate
    for (i = 0; i < 4; i = i + 1) begin
        for (j = 0; j < 8; j = j + 1) begin
            assign DO_wire[i][j] = ram[ADDR[2] * 8 + j][(i+1) * 8 - 1 : i * 8];
        end
    end
endgenerate

endmodule
