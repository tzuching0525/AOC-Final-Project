module sram_weight #(
    parameter SIZE=4096
)(
    input logic CLK,
    input logic [11:0] ADDR,
    input logic EN,
    input logic WE,
    input logic [31:0] DI,
    output logic [7:0] DO [0:63]
);

logic [31:0] ram [0:SIZE-1];
logic [7:0] DO_wire [0:3][0:63];

always @(posedge CLK) begin
    if (WE) begin  
        ram[ADDR] <= DI;
    end
    if (EN) begin
        DO[0]  <= DO_wire[ADDR[1:0]][0];
        DO[1]  <= DO_wire[ADDR[1:0]][1];
        DO[2]  <= DO_wire[ADDR[1:0]][2];
        DO[3]  <= DO_wire[ADDR[1:0]][3];
        DO[4]  <= DO_wire[ADDR[1:0]][4];
        DO[5]  <= DO_wire[ADDR[1:0]][5];
        DO[6]  <= DO_wire[ADDR[1:0]][6];
        DO[7]  <= DO_wire[ADDR[1:0]][7];
        DO[8]  <= DO_wire[ADDR[1:0]][8];
        DO[9]  <= DO_wire[ADDR[1:0]][9];
        DO[10] <= DO_wire[ADDR[1:0]][10];
        DO[11] <= DO_wire[ADDR[1:0]][11];
        DO[12] <= DO_wire[ADDR[1:0]][12];
        DO[13] <= DO_wire[ADDR[1:0]][13];
        DO[14] <= DO_wire[ADDR[1:0]][14];
        DO[15] <= DO_wire[ADDR[1:0]][15];
        DO[16] <= DO_wire[ADDR[1:0]][16];
        DO[17] <= DO_wire[ADDR[1:0]][17];
        DO[18] <= DO_wire[ADDR[1:0]][18];
        DO[19] <= DO_wire[ADDR[1:0]][19];
        DO[20] <= DO_wire[ADDR[1:0]][20];
        DO[21] <= DO_wire[ADDR[1:0]][21];
        DO[22] <= DO_wire[ADDR[1:0]][22];
        DO[23] <= DO_wire[ADDR[1:0]][23];
        DO[24] <= DO_wire[ADDR[1:0]][24];
        DO[25] <= DO_wire[ADDR[1:0]][25];
        DO[26] <= DO_wire[ADDR[1:0]][26];
        DO[27] <= DO_wire[ADDR[1:0]][27];
        DO[28] <= DO_wire[ADDR[1:0]][28];
        DO[29] <= DO_wire[ADDR[1:0]][29];
        DO[30] <= DO_wire[ADDR[1:0]][30];
        DO[31] <= DO_wire[ADDR[1:0]][31];
        DO[32] <= DO_wire[ADDR[1:0]][32];
        DO[33] <= DO_wire[ADDR[1:0]][33];
        DO[34] <= DO_wire[ADDR[1:0]][34];
        DO[35] <= DO_wire[ADDR[1:0]][35];
        DO[36] <= DO_wire[ADDR[1:0]][36];
        DO[37] <= DO_wire[ADDR[1:0]][37];
        DO[38] <= DO_wire[ADDR[1:0]][38];
        DO[39] <= DO_wire[ADDR[1:0]][39];
        DO[40] <= DO_wire[ADDR[1:0]][40];
        DO[41] <= DO_wire[ADDR[1:0]][41];
        DO[42] <= DO_wire[ADDR[1:0]][42];
        DO[43] <= DO_wire[ADDR[1:0]][43];
        DO[44] <= DO_wire[ADDR[1:0]][44];
        DO[45] <= DO_wire[ADDR[1:0]][45];
        DO[46] <= DO_wire[ADDR[1:0]][46];
        DO[47] <= DO_wire[ADDR[1:0]][47];
        DO[48] <= DO_wire[ADDR[1:0]][48];
        DO[49] <= DO_wire[ADDR[1:0]][49];
        DO[50] <= DO_wire[ADDR[1:0]][50];
        DO[51] <= DO_wire[ADDR[1:0]][51];
        DO[52] <= DO_wire[ADDR[1:0]][52];
        DO[53] <= DO_wire[ADDR[1:0]][53];
        DO[54] <= DO_wire[ADDR[1:0]][54];
        DO[55] <= DO_wire[ADDR[1:0]][55];
        DO[56] <= DO_wire[ADDR[1:0]][56];
        DO[57] <= DO_wire[ADDR[1:0]][57];
        DO[58] <= DO_wire[ADDR[1:0]][58];
        DO[59] <= DO_wire[ADDR[1:0]][59];
        DO[60] <= DO_wire[ADDR[1:0]][60];
        DO[61] <= DO_wire[ADDR[1:0]][61];
        DO[62] <= DO_wire[ADDR[1:0]][62];
        DO[63] <= DO_wire[ADDR[1:0]][63];
    end
end

genvar i, j;
generate
    for (i = 0; i < 4; i = i + 1) begin
        for (j = 0; j < 64; j = j + 1) begin
            assign DO_wire[i][j] = ram[ADDR[11:3] * 128 + ADDR[2] * 8 + (j % 8) * 16 + (j / 8)][(i+1) * 8 - 1 : i * 8];
        end
    end
endgenerate


endmodule