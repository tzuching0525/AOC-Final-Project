// -----------------------------------------------------------------------------
//  dpi_interfaces.sv
//  ‑ Top.sv 的 SystemVerilog ‑ DPI 封裝
// -----------------------------------------------------------------------------
`timescale 1ns/1ps
`define BYTE_VEC_64  63:0
`define BYTE_VEC_128 127:0

//=============================================================================
// 1. 介面模組：產生時鐘 / reset，並例化 RTL Core
//=============================================================================
module dpi_interfaces;
    localparam int IFMAP_BYTES_64  = 64;          // 64  byte
    localparam int WEIGHT_BYTES_64 = 64*64;       // 一層 W，共 4 096 byte
    localparam int BIAS_BYTES_64   = 64;          // 64  byte
    byte weight_buf_64 [0:WEIGHT_BYTES_64-1];
    byte bias_buf_64   [0:BIAS_BYTES_64-1];
    // -------- clock & reset --------------------------------------------------
    bit clk = 0;
    always #5 clk = ~clk;                 // 100 MHz (10 ns 週期)

    bit rst = 1;
    initial begin
        repeat (5) @(posedge clk);
        rst = 0;
    end

    // -------- 與 Top.sv 連接的訊號 ------------------------------------------
    logic        mode;                    // 0:MLP0(64)  1:MLP3(128)
    logic [11:0] scaling_factor;
    logic        ready;
    logic [`DATA_SIZE-1:0] data_in;
    logic                  valid;
    logic [`DATA_SIZE-1:0] ofmap;
    logic                  done;

    // -------- RTL Instance ---------------------------------------------------
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

//=============================================================================
// 2. Export 給 C/C++ 的 DPI-C 函式
//=============================================================================
    // ---------------------------------------------------------------------
    // 2-1  Forward : sv_mlp_forward
    //      • input_vec  : byte  開放陣列，len = in_dim
    //      • output_vec : byte  開放陣列，len = out_dim
    // ---------------------------------------------------------------------
    /* 64-byte 版本 */
    byte weight_buf_64 [0:WEIGHT_BYTES_64-1];
byte bias_buf_64   [0:BIAS_BYTES_64-1];

// ==== 1. 由 C++ 載入權重 + bias ========================================
//   • wb_vec = {fc1_w , fc1_b , fc2_w , fc2_b}  (皆 int8)
//   • 長度 = 4 096 + 64 = 4 160  byte
export "DPI-C" task sv_mlp_load_weight_64;
task automatic sv_mlp_load_weight_64
  (input byte wb_vec [0:WEIGHT_BYTES_64+BIAS_BYTES_64-1]);
   int i;
   for(i=0; i<WEIGHT_BYTES_64; i++) weight_buf_64[i] = wb_vec[i];
   for(i=0; i<BIAS_BYTES_64;   i++) bias_buf_64[i]   = wb_vec[WEIGHT_BYTES_64+i];
endtask

// ==== 2. Forward 64-byte ================================================
//   • in_vec  : byte  開放陣列，長度 = 64
//   • out_vec : byte  開放陣列，長度 = 64
  export "DPI-C" task sv_mlp_forward_64;
  task automatic sv_mlp_forward_64
    (input  byte in_vec [`BYTE_VEC_64 ],
     output byte out_vec[`BYTE_VEC_64 ]);
    int i;
    @(posedge clk) rst = 1; @(posedge clk) rst = 0; // reset
    //$display("[DPI] sv_mlp_forward_64.\n");
    /* 啟動一次運算 */
    @(posedge clk) ready = 1; @(posedge clk) ready = 0;
    /* 送 64 個 byte → Top.sv */
    //---------------- IFMAP ------------------------------------------------
    for(i = 0; i < IFMAP_BYTES_64; i+=4) begin
      data_in = {in_vec[i+3],in_vec[i+2],in_vec[i+1],in_vec[i]};
      @(posedge clk);
    end

    //---------------- WEIGHT -----------------------------------------------
    for(i = 0; i < WEIGHT_BYTES_64; i+=4) begin
      data_in = {weight_buf_64[i+3],weight_buf_64[i+2],
                 weight_buf_64[i+1],weight_buf_64[i]};
      @(posedge clk);
    end

   //---------------- BIAS -------------------------------------------------
    for(i = 0; i < BIAS_BYTES_64; i+=4) begin
      data_in = {bias_buf_64[i+3],bias_buf_64[i+2],
                 bias_buf_64[i+1],bias_buf_64[i]};
      @(posedge clk);
    end
    /* 等 done，再收 64 個 byte */
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

  /* 128-byte 版本（流程完全相同，尺寸改成 128） */
  export "DPI-C" task sv_mlp_forward_128;
  task automatic sv_mlp_forward_128
    (input  byte in_vec [`BYTE_VEC_128 ],
     output byte out_vec[`BYTE_VEC_128 ]);
    int i;
    @(posedge clk) rst = 1; @(posedge clk) rst = 0; // reset
    //$display("[DPI] sv_mlp_forward_128.\n");
    /* 啟動一次運算 */
    @(posedge clk) ready = 1; @(posedge clk) ready = 0;

    /* 送 64 個 byte → Top.sv */
    for (i = 0; i < 128; i+=4) begin
      data_in = {in_vec[i+3],in_vec[i+2],in_vec[i+1],in_vec[i]};
      @(posedge clk);
    end

    /* 等 done，再收 64 個 byte */
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

  /* 反傳佔位 */
  export "DPI-C" task sv_mlp_backward_64;
  task automatic sv_mlp_backward_64
    (input int grad_out[63:0], output int grad_in[63:0]);
    $display("[DPI] backward not implemented.");
  endtask
  
import "DPI-C" context task run_trainer();
initial begin
    #50;
    $display("[DPI] Starting C++ trainer.");
    run_trainer();          // ⇦ 這裡啟動 C++ 程式
    #1us $finish;
end
endmodule : dpi_interfaces
