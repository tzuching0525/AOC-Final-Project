/*
 * Copyright 2025 Neo Tsai, Corey Yang, and contributors.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

`define DATA_SIZE 32 // Define the data size
`define PE_block_H 8 // Define the height of the PE block
`define PE_array_size 8 // Define the size of the PE array
`define PE_block_W 4 // Define the width of the PE block
`include "Controller.sv"
`include "PPU.sv"
`include "PE_array.sv"
`include "PE_block.sv"
`include "PE.v"
`include "Adder_tree.sv"
`include "sram_ifmap.sv"
`include "sram_weight.sv"
`include "sram_bias.sv"
`include "sram_ofmap.sv"
module Top (
    input logic clk,
    input logic rst,
    input logic mode, // 0: MLP0, 1: MLP3
    input logic [11:0] scaling_factor,
    input logic ready, // DRAM ready to transfer data into GLB
    input logic i_en,
    input logic [`DATA_SIZE - 1 : 0] data_in,
    output logic valid, // output valid signal
    output logic [`DATA_SIZE-1:0] ofmap, // output feature map
    // output logic address,
    output logic done // done signal
);
    integer i;
    logic [7:0] ifmap_wire [0 : 7];
    logic [7:0] weight_wire [0 : 63];
    logic [31:0] bias_wire [0 : 7];
    logic [31:0] ofmap_wire [0 : 7];
    logic [31:0] bias_input [0 : 7];
    logic [31:0] ppu_input;
    logic [11:0] data_address;
    logic valid_array, valid_ppu;
    logic [7:0] ppu_output;
    logic [31:0] ppu_in_out;
    logic mode1_step0;
    

    logic [3:0] compute_stage;

    assign valid = valid_ppu;

    always @(posedge clk) begin
        if(rst) begin
            for(i = 0; i < 8; i = i + 1) bias_input[i] <= 32'd0;
        end
        else if(data_address == 0) begin
            for(i = 0; i < 8; i = i + 1) bias_input[i] <= bias_wire[i];
        end
        else if(valid_array && !compute_stage[0])  begin
            for(i = 0; i < 8; i = i + 1) bias_input[i] <= ofmap_wire[i];
        end
        else if(valid_array) begin 
            for(i = 0; i < 8; i = i + 1) bias_input[i] <= bias_wire[i];
        end
        else for(i = 0; i < 8; i = i + 1) bias_input[i] <= bias_input[i];
    end

    // always @(*) begin
    //     for(i = 0; i < 8; i = i + 1) begin
    //         bias_input[i] = (valid_array)? ((compute_stage[0])? bias_wire[i] : ofmap_wire[i]) : 32'd0;
    //     end
    // end

    // Instantiate the controller
    Controller controller (
        .clk(clk),
        .rst(rst),
        .ready(ready), // ready signal from the top module
        .ifmap_wen(ifmap_wen),
        .ifmap_ren(ifmap_ren),
        .weight_wen(weight_wen),
        .weight_ren(weight_ren),
        .bias_wen(bias_wen),
        .bias_ren(bias_ren),
        .data_address(data_address), // write data into SRAM
        // read data form SRAM to array
        .compute_stage(compute_stage), // 0 to 15: array -> GLB
        .i_en_array(i_en_array),
        .i_en_ppu(i_en_ppu),
        .valid_array(valid_array),
        .valid_ppu(valid_ppu),
        .ppu_count(ppu_count),
        .done(done),
        .mode(mode),
        .ofmap_ren(ofmap_ren),
        .mode1_step0(mode1_step0)
    );

    // Instantiate the PPU
    PPU ppu (
        .clk(clk),
        .rst(rst),
        .i_en(i_en_ppu),
        .data_in(ppu_input),
        .scaling_factor(scaling_factor),
        .valid(valid_ppu),
        .data_out(ppu_output),
        .data_in_out(ppu_in_out)
    );

    assign ofmap = (mode1_step0)? ppu_in_out : {24'd0, ppu_output};

    // Instantiate the array
    PE_array array (
        .clk(clk),
        .rst(rst),
        .i_en(i_en_array),
        .ifmap(ifmap_wire),
        .weight(weight_wire),
        .bias(bias_input),
        .ofmap(ofmap_wire),
        .valid(valid_array)
    );

    // Instantiate the SRAM for input feature map
    sram_ifmap #(
        .SIZE(32) // Size of the SRAM
    ) GLB_ifmap (
        .CLK(clk),
        .ADDR(data_address), // Address from data_in
        .EN(ifmap_ren), // Enable signal
        .WE(ifmap_wen), // Write enable (not used in this case)
        .DI(data_in), // Data input
        .DO(ifmap_wire) // Data output (not used in this case)
    );

    // Instantiate the SRAM
    sram_weight #(
        .SIZE(64*64/4) // Size of the SRAM
    ) GLB_weight (
        .CLK(clk),
        .ADDR(data_address), // Address from data_in
        .EN(weight_ren), // Enable signal
        .WE(weight_wen), // Write enable (not used in this case)
        .DI(data_in), // Data input
        .DO(weight_wire) // Data output (not used in this case)
    );
    
    // Instantiate the SRAM for bias
    // logic [11:0] bias_address;
    // assign bias_address = (bias_ren)? data_address << 1 : data_address;

    sram_bias #(
        .SIZE(128) // Size of the SRAM
    ) GLB_bias (
        .CLK(clk),
        .ADDR(data_address), // Address from data_in
        .EN(bias_ren), // Enable signal
        .WE(bias_wen), // Write enable (not used in this case)
        .DI(data_in), // Data input
        .DO(bias_wire) // Data output (not used in this case)
    );
    
    // Instantiate the SRAM for output feature map
    logic [11:0] ofmap_address;
    assign ofmap_address = (ofmap_ren)? data_address : data_address - 12'd8;

    sram_ofmap #(
        .SIZE(128) // Size of the SRAM
    ) GLB_ofmap (
        .CLK(clk),
        .ADDR(ofmap_address), // Address from data_in
        .EN(ofmap_ren), // Enable signal
        .WE(compute_stage[0] && valid_array), // Write enable (not used in this case)
        .DI(ofmap_wire), // Data input
        .DO(ppu_input) // Data output (not used in this case)
    );
    
endmodule