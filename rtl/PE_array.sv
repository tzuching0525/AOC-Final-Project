`define PE_block_H 8
`define PE_block_W 4
`define PE_array_size 8
`define BIT 8
module PE_array (
    input clk, 
    input rst,
    input i_en,
    input [`BIT - 1:0] ifmap [0 : `PE_array_size - 1],
    input [`BIT - 1:0] weight [0 : `PE_block_H * `PE_array_size - 1],
    input [`BIT * 4 - 1:0] bias [0 : `PE_block_H - 1],
    output [`BIT * 4 - 1:0] ofmap [0 : `PE_block_H - 1],
    output valid
);

    wire [`BIT * 4 - 1:0] opsum [0 : `PE_block_H * `PE_array_size - 1];
    wire [`PE_array_size - 1 : 0] valid_chain;
    wire valid_pe = (&valid_chain);

    wire [`BIT - 1 : 0] weight_wire [0 : `PE_array_size - 1][0 : `PE_block_H - 1];
    // wire [`BIT * 4 - 1 : 0] bias_wire [0 : `PE_array_size - 1][0 : `PE_block_H - 1];
    wire [`BIT * 4 - 1 : 0] opsum_wire [0 : `PE_array_size - 1][0 : `PE_block_H - 1];
    genvar gen, gen_wire;

    wire [`BIT*4 - 1 : 0] bias_zero [0 : `PE_block_H - 1];

    assign bias_zero[0] = 0;
    assign bias_zero[1] = 0;
    assign bias_zero[2] = 0;
    assign bias_zero[3] = 0;
    assign bias_zero[4] = 0;
    assign bias_zero[5] = 0;
    assign bias_zero[6] = 0;
    assign bias_zero[7] = 0;

    generate
        for(gen = 0 ; gen < `PE_array_size; gen = gen + 1) begin: PE_array
            if(gen == 0) begin
                PE_block pe_block(
                    .clk(clk),
                    .rst(rst),
                    .i_en(i_en),
                    .ifmap(ifmap[gen]),
                    .weight(weight_wire[gen]),
                    .bias(bias),
                    .ofmap(opsum_wire[gen]),
                    .valid(valid_chain[gen])
                );
            end
            else begin
                PE_block pe_block(
                    .clk(clk),
                    .rst(rst),
                    .i_en(i_en),
                    .ifmap(ifmap[gen]),
                    .weight(weight_wire[gen]),
                    .bias(bias_zero), // Assuming bias is not used in subsequent blocks
                    .ofmap(opsum_wire[gen]),
                    .valid(valid_chain[gen])
                );
            end
        end
    endgenerate

    // assign bias_wire[0] = bias;
    

    // generate
    //     for(gen_wire = 0; gen_wire < `PE_array_size; gen_wire = gen_wire + 1) begin: weight_gen
    //         assign weight_wire[gen_wire] = weight[gen_wire * `PE_block_H : (gen_wire + 1) * `PE_block_H - 1];
    //         assign opsum[gen_wire * `PE_block_H : (gen_wire + 1) * `PE_block_H - 1] = opsum_wire[gen_wire];
    //     end
    // endgenerate

    assign weight_wire[0] = weight[0 : `PE_block_H - 1];
    assign weight_wire[1] = weight[`PE_block_H : 2 * `PE_block_H - 1];
    assign weight_wire[2] = weight[2 * `PE_block_H : 3 * `PE_block_H - 1];
    assign weight_wire[3] = weight[3 * `PE_block_H : 4 * `PE_block_H - 1];
    assign weight_wire[4] = weight[4 * `PE_block_H : 5 * `PE_block_H - 1];
    assign weight_wire[5] = weight[5 * `PE_block_H : 6 * `PE_block_H - 1];
    assign weight_wire[6] = weight[6 * `PE_block_H : 7 * `PE_block_H - 1];
    assign weight_wire[7] = weight[7 * `PE_block_H : 8 * `PE_block_H - 1];
    assign opsum[0 : `PE_block_H - 1] = opsum_wire[0];
    assign opsum[`PE_block_H : 2 * `PE_block_H - 1] = opsum_wire[1];
    assign opsum[2 * `PE_block_H : 3 * `PE_block_H - 1] = opsum_wire[2];
    assign opsum[3 * `PE_block_H : 4 * `PE_block_H - 1] = opsum_wire[3];
    assign opsum[4 * `PE_block_H : 5 * `PE_block_H - 1] = opsum_wire[4];
    assign opsum[5 * `PE_block_H : 6 * `PE_block_H - 1] = opsum_wire[5];
    assign opsum[6 * `PE_block_H : 7 * `PE_block_H - 1] = opsum_wire[6];
    assign opsum[7 * `PE_block_H : 8 * `PE_block_H - 1] = opsum_wire[7];

    
    Adder_tree u_Adder_tree(
        .clk(clk),
        .rst(rst),
        .en       	(valid_pe        ),
        .data_in  	(opsum   ),
        .data_out 	(ofmap  ),
        .valid    	(valid     )
    );
    

endmodule