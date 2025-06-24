// -----------------------------------------------------------------------------
//  dpi_interfaces.sv
// -----------------------------------------------------------------------------
`timescale 1ns/1ps
`define BYTE_VEC_64  63:0
`define BYTE_VEC_128 127:0
`ifndef DATA_SIZE
  `define DATA_SIZE 32
`endif

// -----------------------------------------------------------------------------
// 1. Interface Module
// -----------------------------------------------------------------------------
module dpi_interfaces;
    localparam int IFMAP_BYTES_64    = 64;        // 64 bytes
    localparam int WEIGHT_BYTES_64   = 64*64;     // 4096 bytes for one layer weights
    localparam int BIAS_BYTES_64     = 64;        // 64 bytes for bias
    localparam int IFMAP_BYTES_128   = 128;       // 128 bytes
    localparam int WEIGHT_BYTES_128  = 128*128;   // 16384 bytes for one layer weights
    localparam int BIAS_BYTES_128    = 128;       // 128 bytes for bias

    byte weight_buf_64   [0:WEIGHT_BYTES_64-1];
    byte bias_buf_64     [0:BIAS_BYTES_64-1];
    byte weight_buf_128  [0:WEIGHT_BYTES_128-1];
    byte bias_buf_128    [0:BIAS_BYTES_128-1];

    // Clock and reset generation
    bit clk = 0;
    always #5 clk = ~clk;

    bit rst = 1;
    initial begin
        repeat (5) @(posedge clk);
        rst = 0;
    end

    // Signals connected to Top.sv
    logic        mode;                    // 0:MLP0(64), 1:MLP3(128)
    logic [11:0] scaling_factor;
    logic        ready;
    logic [`DATA_SIZE-1:0] data_in;
    logic                  valid;
    logic [`DATA_SIZE-1:0] ofmap;
    logic                  done;

    // RTL Core Instance
    Top u_top (
        .clk   (clk),
        .rst   (rst),
        .mode  (mode),
        .scaling_factor(scaling_factor),
        .ready (ready),
        .data_in (data_in),
        .valid (valid),
        .ofmap (ofmap),
        .done  (done)
    );

// -----------------------------------------------------------------------------
// 2. Export DPI-C Functions for C/C++
// -----------------------------------------------------------------------------
    // -------------------------------------------------------------------------
    // 2-1 Forward: sv_mlp_forward
    //     - input_vec  : byte open array, length = in_dim
    //     - output_vec : byte open array, length = out_dim
    // -------------------------------------------------------------------------
    // 64-byte version

    // -------------------------------------------------------------------------
    // 1. Load weights and bias from C++
    //    - wb_vec = {fc1_w, fc1_b, fc2_w, fc2_b} (all int8)
    //    - total length = 4096 + 64 = 4160 bytes
    // -------------------------------------------------------------------------
    export "DPI-C" task sv_mlp_load_weight_64;
    task automatic sv_mlp_load_weight_64
      (input byte wb_vec [0:WEIGHT_BYTES_64+BIAS_BYTES_64-1]);
       int i;
       for(i=0; i<WEIGHT_BYTES_64; i++) weight_buf_64[i] = wb_vec[i];
       for(i=0; i<BIAS_BYTES_64;   i++) bias_buf_64[i]   = wb_vec[WEIGHT_BYTES_64+i];
    endtask

    // -------------------------------------------------------------------------
    // 2. Forward 64-byte
    //    - in_vec  : byte open array, length = 64
    //    - out_vec : byte open array, length = 64
    // -------------------------------------------------------------------------
    export "DPI-C" task sv_mlp_forward_64;
    task automatic sv_mlp_forward_64
      (input  byte in_vec [`BYTE_VEC_64 ],
       output byte out_vec[`BYTE_VEC_64 ]);
      int i;
      @(posedge clk) rst = 1; @(posedge clk) rst = 0; // reset
      // Start computation
      @(posedge clk) ready = 1; @(posedge clk) ready = 0;
      // Send 64 bytes to Top.sv
      // IFMAP
      for(i = 0; i < IFMAP_BYTES_64; i+=4) begin
        data_in = {in_vec[i+3],in_vec[i+2],in_vec[i+1],in_vec[i]};
        @(posedge clk);
      end

      // WEIGHT
      for(i = 0; i < WEIGHT_BYTES_64; i+=4) begin
        data_in = {weight_buf_64[i+3],weight_buf_64[i+2],
                   weight_buf_64[i+1],weight_buf_64[i]};
        @(posedge clk);
      end

      // BIAS
      for(i = 0; i < BIAS_BYTES_64; i+=4) begin
        data_in = {bias_buf_64[i+3],bias_buf_64[i+2],
                   bias_buf_64[i+1],bias_buf_64[i]};
        @(posedge clk);
      end
      // Wait for valid, then receive 64 bytes
      wait(valid);
      i = 0;
      while (i < 64) begin
        @(posedge clk);
        if (valid) begin
          out_vec[i] = ofmap[7:0];
          i++;
        end
      end
    endtask

    // -------------------------------------------------------------------------
    // 128-byte version
    // -------------------------------------------------------------------------
    export "DPI-C" task sv_mlp_load_weight_128;
    task automatic sv_mlp_load_weight_128
      (input byte wb_vec [0:WEIGHT_BYTES_128+BIAS_BYTES_128-1]);
       int i;
       for(i=0; i<WEIGHT_BYTES_128; i++) weight_buf_128[i] = wb_vec[i];
       for(i=0; i<BIAS_BYTES_128;   i++) bias_buf_128[i]   = wb_vec[WEIGHT_BYTES_128+i];
    endtask

    export "DPI-C" task sv_mlp_forward_128;
    task automatic sv_mlp_forward_128
      (input  byte in_vec [`BYTE_VEC_128 ],
       output byte out_vec[`BYTE_VEC_128 ]);
      int i;
      @(posedge clk) rst = 1; @(posedge clk) rst = 0; // reset
      @(posedge clk) ready = 1; @(posedge clk) ready = 0;
      // IFMAP
      for(i = 0; i < IFMAP_BYTES_128; i+=4) begin
        data_in = {in_vec[i+3],in_vec[i+2],in_vec[i+1],in_vec[i]};
        @(posedge clk);
      end

      // WEIGHT
      for(i = 0; i < WEIGHT_BYTES_128; i+=4) begin
        data_in = {weight_buf_128[i+3],weight_buf_128[i+2],
                   weight_buf_128[i+1],weight_buf_128[i]};
        @(posedge clk);
      end

      // BIAS
      for(i = 0; i < BIAS_BYTES_128; i+=4) begin
        data_in = {bias_buf_128[i+3],bias_buf_128[i+2],
                   bias_buf_128[i+1],bias_buf_128[i]};
        @(posedge clk);
      end
      // Wait for valid, then receive 128 bytes
      wait(valid);
      i = 0;
      while (i < 128) begin
        @(posedge clk);
        if (valid) begin
          out_vec[i] = ofmap[7:0];
          i++;
        end
      end
    endtask

    // -------------------------------------------------------------------------
    // Backward placeholder
    // -------------------------------------------------------------------------
    export "DPI-C" task sv_mlp_backward_64;
    task automatic sv_mlp_backward_64
      (input int grad_out[63:0], output int grad_in[63:0]);
      $display("[DPI] backward not implemented.");
    endtask

    // -------------------------------------------------------------------------
    // Import DPI-C task to run C++ trainer
    // -------------------------------------------------------------------------
    import "DPI-C" context task run_trainer();
    initial begin
        #50;
        $display("[DPI] Starting C++ trainer.");
        run_trainer();          // Launch C++ program
        #1us $finish;
    end
endmodule : dpi_interfaces
