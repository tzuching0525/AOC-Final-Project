`timescale 1ns/1ps
`include "asic_wrapper.sv"
`include "Controller.sv"
`include "PPU.sv"
`include "PE_array.sv"
`include "PE_block.sv"
`include "PE.v"
`include "sram_weight.sv"
`include "sram_ifmap.sv"
`include "sram_bias.sv"
`include "sram_ofmap.sv"
`include "Adder_tree.sv"

module tb;
  logic [7:0] ifmap_mem [0:63];    // 16*4 = 64 bytes
  logic [7:0] weight_mem [0:8191]; // 16*64*8 = 4096 bytes
  logic [31:0] bias_mem [0:127];     // 64 bias, 假設 bias.txt 每行一個整數
  logic [31:0] golden_mem [0:127];  // 128 OFMAP, 假設 golden.txt 每行一個整數
  integer i;
  integer err = 0;
  logic [20:0]idx;
  logic [31:0] val;
  // Clock and reset
  logic ACLK;
  logic ARESETn;
  logic [31:0] output_in_DRAM [0:127];
  // AXI slave signals
  logic [7:0]  AWID_S;
  logic [31:0] AWADDR_S;
  logic [3:0]  AWLEN_S;
  logic [2:0]  AWSIZE_S;
  logic [1:0]  AWBURST_S;
  logic        AWVALID_S;
  logic        AWREADY_S;

  logic [31:0] WDATA_S;
  logic [3:0]  WSTRB_S;
  logic        WLAST_S;
  logic        WVALID_S;
  logic        WREADY_S;

  logic [7:0]  BID_S;
  logic [1:0]  BRESP_S;
  logic        BVALID_S;
  logic        BREADY_S;

  logic [7:0]  ARID_S;
  logic [31:0] ARADDR_S;
  logic [3:0]  ARLEN_S;
  logic [2:0]  ARSIZE_S;
  logic [1:0]  ARBURST_S;
  logic        ARVALID_S;
  logic        ARREADY_S;

  logic [7:0]  RID_S;
  logic [31:0] RDATA_S;
  logic [1:0]  RRESP_S;
  logic        RLAST_S;
  logic        RVALID_S;
  logic        RREADY_S;

  logic        ASIC_interrupt;

  // Instantiate DUT
  asic_wrapper dut (
    .ACLK(ACLK),
    .ARESETn(ARESETn),
    .ASIC_interrupt(ASIC_interrupt),
    .AWID_S(AWID_S),
    .AWADDR_S(AWADDR_S),
    .AWLEN_S(AWLEN_S),
    .AWSIZE_S(AWSIZE_S),
    .AWBURST_S(AWBURST_S),
    .AWVALID_S(AWVALID_S),
    .AWREADY_S(AWREADY_S),
    .WDATA_S(WDATA_S),
    .WSTRB_S(WSTRB_S),
    .WLAST_S(WLAST_S),
    .WVALID_S(WVALID_S),
    .WREADY_S(WREADY_S),
    .BID_S(BID_S),
    .BRESP_S(BRESP_S),
    .BVALID_S(BVALID_S),
    .BREADY_S(BREADY_S),
    .ARID_S(ARID_S),
    .ARADDR_S(ARADDR_S),
    .ARLEN_S(ARLEN_S),
    .ARSIZE_S(ARSIZE_S),
    .ARBURST_S(ARBURST_S),
    .ARVALID_S(ARVALID_S),
    .ARREADY_S(ARREADY_S),
    .RID_S(RID_S),
    .RDATA_S(RDATA_S),
    .RRESP_S(RRESP_S),
    .RLAST_S(RLAST_S),
    .RVALID_S(RVALID_S),
    .RREADY_S(RREADY_S)
  );

  // Clock generation
  initial begin
    ACLK = 0;
    forever #5 ACLK = ~ACLK;
  end

  // Reset
  initial begin
    ARESETn = 0;
    #20;
    ARESETn = 1;
  end

  // AXI Write Task (HAL style)
  task axi_write_hal(input [31:0] addr, input [31:0] data);
    begin
      // Send write address
      AWID_S    = 0;
      AWADDR_S  = addr;
      AWVALID_S = 1;
      @(posedge ACLK);
      while (!AWREADY_S) @(posedge ACLK);
      AWVALID_S = 0;

      // Send write data
      WDATA_S   = data;
      WLAST_S   = 1;
      WVALID_S  = 1;
      @(posedge ACLK);
      while (!WREADY_S) @(posedge ACLK);
      WVALID_S  = 0;

      // Wait for write response
      BREADY_S = 1;
      @(posedge ACLK);
      while (!BVALID_S) @(posedge ACLK);
      //$display("[AXI WRITE OK] addr=0x%08x data=0x%08x BRESP=%0d @%0t", addr, data, BRESP_S, $time);
      BREADY_S = 0;
      @(posedge ACLK);
    end
  endtask


  // AXI Read Task (HAL style)
  task axi_read_hal(input [31:0] addr, output [31:0] data);
    begin
      // Send read address
      ARID_S    = 0;
      ARADDR_S  = addr;
      ARVALID_S = 1;
      @(posedge ACLK);
      while (!ARREADY_S) @(posedge ACLK);
      ARVALID_S = 0;

      // Wait for valid data
      RREADY_S = 1;
      @(posedge ACLK);
      while (!RVALID_S) @(posedge ACLK);
      $display("[AXI READ OK] addr=0x%08x data=0x%08x BRESP=%0d @%0t", addr, data, BRESP_S, $time);
      data = RDATA_S;
      RREADY_S = 0;
      @(posedge ACLK);
    end
  endtask

  // Test sequence
  initial begin

    $fsdbDumpfile("tb.fsdb");
    $fsdbDumpvars("+struct", "+mda", tb);

    // 預設訊號
    AWID_S = 0; AWADDR_S = 0; AWLEN_S = 0; AWSIZE_S = 0; AWBURST_S = 0; AWVALID_S = 0;
    WDATA_S = 0; WSTRB_S = 0; WLAST_S = 0; WVALID_S = 0;
    BREADY_S = 0;
    ARID_S = 0; ARADDR_S = 0; ARLEN_S = 0; ARSIZE_S = 0; ARBURST_S = 0; ARVALID_S = 0;
    RREADY_S = 0;

    wait(ARESETn == 1);

    // 設定 enable (scale=1006, mode=0)
    axi_write_hal(32'h10040000, 32'b0000_0000_0000_0000_0011_1110_1110_0000); // bit3=1

    // 寫 ifmap
    $display("Start writing ifmap0...");
    
    for (i = 0; i < 16; i++) begin
      idx = i * 4;
      //$display("idx %0d", idx);
      val = {ifmap_mem[idx+3], ifmap_mem[idx+2], ifmap_mem[idx+1], ifmap_mem[idx+0]};
      if (i<64) begin
      end
      axi_write_hal(32'h10040004, val);
    end

    // 寫 weight
    $display("Start writing weight0...");
    for (i = 0; i < 16 * 64; i++) begin
      idx = i * 4;
      val = {weight_mem[idx+3], weight_mem[idx+2], weight_mem[idx+1], weight_mem[idx+0]};
      if (i<275) begin
      end
      axi_write_hal(32'h10040004, val);
    end

    // 寫 bias
    $display("Start writing bias0...");
    for (i = 0; i < 64; i++) begin
      axi_write_hal(32'h10040004, bias_mem[i]);
    end

    $display("Before wait_for_interrupt()");
    while (!ASIC_interrupt) begin
      @(posedge ACLK);
    end

    $display("finish wait_for_interrupt()");

    // 寫 ifmap
    $display("Start writing ifmap0...");
    for (i = 0; i < 16; i++) begin
      idx = i * 4;
      val = {ifmap_mem[idx+3], ifmap_mem[idx+2], ifmap_mem[idx+1], ifmap_mem[idx+0]};
      axi_write_hal(32'h10040004, val);
    end

    // 寫 weight
    $display("Start writing weight0...");
    for (i = 16*64; i < 16*64+16*64; i++) begin
      idx = i * 4;
      val = {weight_mem[idx+3], weight_mem[idx+2], weight_mem[idx+1], weight_mem[idx+0]};
      axi_write_hal(32'h10040004, val);
    end

    // 寫 bias
    $display("Start writing bias0...");
    for (i = 64; i < 128; i++) begin
      axi_write_hal(32'h10040004, bias_mem[i]);
    end

    $display("Before wait_for_interrupt()");
    while (!ASIC_interrupt) begin
      @(posedge ACLK);
    end
    
    $display("finish wait_for_interrupt()");
    // 讀取 OFMAP

    for (i = 0; i < 128; i++) begin
      axi_read_hal(32'h10040008, output_in_DRAM[i]);
      $display("OFMAP[%0d] = 0x%08x", i, output_in_DRAM[i]);
    end
    for (i = 0;i < 128 ;i = i + 1 ) begin
        if(output_in_DRAM[i] !== golden_mem[i]) begin
            $display("Error at index %d: Expected %08h, got %08h", i, golden_mem[i], output_in_DRAM[i]);
            err = err + 1;
        end
        else $display("Pass at index %d", i);
    end
    $display("Test done.");
    if(err == 0) $display("All tests passed!");
    else $display("Total error: %d", err);
    $finish;
  end
  initial begin
    $readmemh("ifmap.txt", ifmap_mem);
    $readmemh("weight.txt", weight_mem);
    $readmemh("bias.txt", bias_mem);
    $readmemh("golden.txt", golden_mem);
  end
endmodule