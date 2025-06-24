module PE (
    input clk,
    input rst,
    input signed [7:0] ifmap,
    input signed [7:0] weight,
    input signed [31:0] bias,
    input en,
    output reg signed [31:0] opsum,
    output reg valid
);
    wire signed [31:0] ifmap_adjusted = {{24{ifmap[7]}},ifmap}; // Adjusting ifmap to be centered around 0
    wire signed [31:0] weight_adjusted = {{24{weight[7]}},weight}; // Adjusting weight to be centered around 0
    always @(posedge clk) begin
        if(rst) begin
            opsum <= 32'd0;
            valid <= 1'd0;  
        end 
        else begin
            opsum <= (en)? (ifmap_adjusted * weight_adjusted + bias) : 32'd0;
            valid <= en;
        end 
    end
    

    
endmodule