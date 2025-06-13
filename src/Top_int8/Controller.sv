`define WIDTH 64
`define ARRAY_TIMES 16
module Controller (
    input logic clk,
    input logic rst,
    input logic ready, // glb ready to recieve data
    output logic i_en_array,
    output logic i_en_ppu,
    output logic ifmap_wen, // write GLB data from DRAM
    output logic ifmap_ren,
    output logic weight_wen,
    output logic weight_ren,
    output logic bias_wen,
    output logic bias_ren,
    output logic ofmap_ren,
    output logic [11:0] data_address, // write address for glb
    output logic compute_stage0, // 0 to 15: array -> GLB
    input logic valid_array,
    input logic mode,
    output logic done,
    output logic mode1_step0
);

parameter   IDLE = 3'd0,
            READ_IFMAP = 3'd1,
            READ_WEIGHT = 3'd2,
            READ_BIAS = 3'd3,
            ARRAY = 3'd4, 
            PPU = 3'd5, 
            DONE = 3'd6;
logic [2:0] cur_state, next_state;
logic [7:0] ppu_count;
logic [3:0] compute_stage;
assign compute_stage0 = compute_stage[0];

assign ofmap_ren = (cur_state == PPU);

always @(posedge clk) begin
    if(rst) mode1_step0 <= 0;
    else if(mode == 0) mode1_step0 <= 0;
    else if(ready) mode1_step0 <= !mode1_step0;
    else mode1_step0 <= mode1_step0;
end

// data_address
always @(posedge clk) begin
    if (rst) data_address <= 12'd0;
    else if(cur_state != next_state) data_address <= 12'd0;
    else if(next_state == PPU) data_address <= data_address + 1;
    else if(cur_state == READ_IFMAP || cur_state == READ_WEIGHT || cur_state == READ_BIAS) data_address <= data_address + 1;
    else if(data_address[1:0] == 2'd1 && !i_en_array) data_address <= data_address - 1;
    else if(next_state == ARRAY) data_address <= data_address + 1;
    else data_address <= data_address;
end

// ifmap read enable
always @(posedge clk) begin
    if(rst) begin 
        ifmap_ren <= 0;
        weight_ren <= 0;
        bias_ren <= 0;
    end
    else if(next_state == ARRAY) begin
        ifmap_ren <= 1;
        weight_ren <= 1;
        bias_ren <= 1;
    end 
    else begin
        ifmap_ren <= 0;
        weight_ren <= 0;
        bias_ren <= 0;
    end 
end

// i_en_array
always @(posedge clk) begin
    if(rst) i_en_array <= 0;
    else if(data_address == 0 && cur_state == ARRAY) i_en_array <= 1;
    else if(cur_state == ARRAY) i_en_array <= valid_array;
    else i_en_array <= 0;
end

// array count
always @(posedge clk) begin
    if(rst) compute_stage <= 4'd0;
    else if(ready) compute_stage <= 0;
    else if(valid_array) compute_stage <= compute_stage + 1;
    else compute_stage <= compute_stage;
end

// ppu count
always @(posedge clk) begin
    if(rst) ppu_count <= 8'd0;
    else if(cur_state == PPU) ppu_count <= ppu_count + 1;
    else ppu_count <= 8'd0;
end

assign  ifmap_wen = (cur_state == READ_IFMAP);
assign  weight_wen = (cur_state == READ_WEIGHT);
assign  bias_wen = (cur_state == READ_BIAS);
assign  done = (cur_state == DONE);
assign  i_en_ppu = (cur_state == PPU && data_address != 0);

// FSM
always @(posedge clk) begin
    if(rst) cur_state <= IDLE;
    else cur_state <= next_state;
end



always @(*) begin
    case (cur_state)
        IDLE: next_state = (ready)? READ_IFMAP : IDLE;
        READ_IFMAP: next_state = (data_address == `WIDTH / 4 - 1)? READ_WEIGHT : READ_IFMAP;
        READ_WEIGHT: next_state = (data_address == `WIDTH * `WIDTH / 4 - 1)? READ_BIAS : READ_WEIGHT;
        READ_BIAS: next_state = (data_address == `WIDTH - 1)? ARRAY : READ_BIAS;
        ARRAY: next_state = ({1'b0, compute_stage} == `ARRAY_TIMES - 1 && valid_array)? PPU : ARRAY;
        PPU: next_state = (ppu_count == `WIDTH)? DONE : PPU;
        DONE: next_state = (ready)? READ_IFMAP : DONE; 
        default: next_state = IDLE;
    endcase
end
    

endmodule