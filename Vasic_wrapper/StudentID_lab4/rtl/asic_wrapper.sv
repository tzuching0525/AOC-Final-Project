`define ASIC_ENABLE_OFFSET   32'h10040000
`define ASIC_DATA_OFFSET     32'h10040004
`define ASIC_OFMAP_OFFSET    32'h10040008
`define AXI_ID_BITS 4
`define AXI_IDS_BITS 8
`define AXI_ADDR_BITS 32
`define AXI_LEN_BITS 4
`define AXI_SIZE_BITS 3
`define AXI_DATA_BITS 32
`define AXI_STRB_BITS 4
`define AXI_LEN_ONE 4'h0
`define AXI_SIZE_BYTE 3'b000
`define AXI_SIZE_HWORD 3'b001
`define AXI_SIZE_WORD 3'b010
`define AXI_BURST_INC 2'h1
`define AXI_STRB_WORD 4'b1111
`define AXI_STRB_HWORD 4'b0011
`define AXI_STRB_BYTE 4'b0001
`define AXI_RESP_OKAY 2'h0
`define AXI_RESP_SLVERR 2'h2
`define AXI_RESP_DECERR 2'h3
`define DATA_BITS 32
`include "Top.sv"
module asic_wrapper (
  input ACLK,
  input ARESETn,

  output logic ASIC_interrupt,
  /*************** AXI slave ***************/
  //WRITE ADDRESS0
	input [`AXI_IDS_BITS-1:0] AWID_S,
	input [`AXI_ADDR_BITS-1:0] AWADDR_S,
	input [`AXI_LEN_BITS-1:0] AWLEN_S,
	input [`AXI_SIZE_BITS-1:0] AWSIZE_S,
	input [1:0] AWBURST_S,
	input AWVALID_S,
	output logic AWREADY_S,

	//WRITE DATA0
	input [`AXI_DATA_BITS-1:0] WDATA_S,
	input [`AXI_STRB_BITS-1:0] WSTRB_S,
	input WLAST_S,
	input WVALID_S,
	output logic WREADY_S,

	//WRITE RESPONSE0
	output logic [`AXI_IDS_BITS-1:0] BID_S,
	output logic [1:0] BRESP_S,
	output logic BVALID_S,
	input BREADY_S,

  //READ ADDRESS0
	input [`AXI_IDS_BITS-1:0] ARID_S,
	input [`AXI_ADDR_BITS-1:0] ARADDR_S,
	input [`AXI_LEN_BITS-1:0] ARLEN_S,
	input [`AXI_SIZE_BITS-1:0] ARSIZE_S,
	input [1:0] ARBURST_S,
	input ARVALID_S,
	output logic ARREADY_S,


  output logic [2:0] current_state,
  output logic [2:0] n_state,

	//READ DATA0
	output logic [`AXI_IDS_BITS-1:0] RID_S,
	output logic [`AXI_DATA_BITS-1:0] RDATA_S,
	output logic [1:0] RRESP_S,
	output logic RLAST_S,
	output logic RVALID_S,
	input RREADY_S
);
  logic [31:0] DATA_buffer [0:1103]; // ifmap weight bias 16 + 1024 + 64
  
  logic [10:0] write_cnt, write_cnt_next, count, count_next, bias_cnt;
  logic [31:0] ofmap;
  logic data_ready, data_ready_reg, data_ready_reg_next, bias_write, valid;
  integer i;

  typedef enum logic [1:0] {
      WAIT,
      LOAD_BIAS,
      LOAD_OFMAP
  } state_t;

  state_t state, next_state;
  logic [6:0] output_cnt_next, output_cnt;
  logic [7:0] ofmap_count;
  logic [31:0] ofmap_reg [0:127]; // ofmap 128
/***************************************** 
        ASIC slave ( MMIO config ) 
*****************************************/
  //logic [`AXI_DATA_BITS-1:0] RDATA;

  /* AXI slave FSM */
  typedef enum logic [2:0] {
        IDLE,
        WRITE_ADDR,
        WRITE_DATA,
        WRITE_RESP,
        READ_ADDR,
        READ_DATA,
        DONE_S
  } AXI_state;

  AXI_state cs_slave, cs_slave_next;
  assign current_state = cs_slave;
  assign n_state = cs_slave_next;
  logic [`AXI_ADDR_BITS-1:0] addr_S_reg, addr_S_reg_next;
  logic [`AXI_IDS_BITS-1:0] BID_S_next, RID_S_next;
  logic write_error, write_error_next;

  logic [`DATA_BITS-1:0] ASIC_ENABLE, ASIC_ENABLE_next;
  logic [`DATA_BITS-1:0] DATA, ASIC_DATA_next;          
  logic [`DATA_BITS-1:0] ASIC_OFMAP, ASIC_OFMAP_next;

  // Sequential logic DATA for top
  always_ff @(posedge ACLK) begin
    if (~ARESETn) begin
      DATA <= 32'd0;
    end
    else begin
      if (data_ready_reg == 1'b1) begin
        DATA <= DATA_buffer[count];
      end
    end
  end

  always_comb begin
    ASIC_interrupt = (ofmap_count == 64 || ofmap_count == 128);
  end

  always_comb begin
    if (data_ready_reg == 1'b1) begin
      count_next = count + 1'b1;
    end
    else if (count == 11'd1103) begin
      count_next = 11'd0;
    end
    else begin
      count_next = count;
    end
  end

  // Sequential logic handshake data to DATA_buffer
  always_ff @(posedge ACLK) begin
    if (~ARESETn) begin
      for (i = 0; i < 1104; i = i + 1) begin
        DATA_buffer[i] <= 32'd0;
      end
    end
    else begin
      DATA_buffer[write_cnt] <= ASIC_DATA_next;
    end
  end

  // Sequential logic
  always_ff @(posedge ACLK) begin
    if (~ARESETn) begin
      write_cnt <= 11'b0;
      count <= 11'b0;
      data_ready_reg <= 1'd0;
      bias_cnt <= 11'd0;
    end
    else begin
      count <= count_next;
      write_cnt <= write_cnt_next;
      data_ready_reg <= data_ready_reg_next;
      bias_cnt <= {3'd0, ofmap_count} + 11'd1040;
    end
  end

  always_ff @(posedge ACLK) begin
      if (~ARESETn) begin
        state <= WAIT;
      end
      else begin
        state <= next_state;
      end
  end

  always_ff @(posedge ACLK) begin
      if (~ARESETn) begin
        output_cnt <= 7'd0;
      end
      else begin
        output_cnt <= output_cnt_next;
      end
  end

  always_comb begin
    next_state = state;
    case (state)
      WAIT: begin
        if (ASIC_ENABLE[3] == 1) begin
          next_state = LOAD_BIAS;
        end
        else begin 
          next_state = LOAD_OFMAP;
        end
      end
      LOAD_BIAS: begin
        if (ofmap_count == 8'd63) begin
          next_state = LOAD_OFMAP;
        end
      end
      LOAD_OFMAP: begin
        if (ofmap_count == 8'd127) begin
          next_state = WAIT;
        end
      end
      default: begin
        next_state = state;
      end
    endcase
  end

  //OFMAP sequential logic
  always_ff @(posedge ACLK) begin
    if (~ARESETn) begin
      ofmap_count <= 8'd0;
      //ofmap_valid <= 1'd0;
      bias_write <= 1'd0;
    end 
    else begin
      if (valid) begin
        case (state)
          LOAD_BIAS: begin
            DATA_buffer[bias_cnt] <= ofmap;
            ofmap_count <= ofmap_count + 1;
            bias_write <= 1'd1;
          end
          LOAD_OFMAP: begin
            if (ASIC_ENABLE[3] == 1) begin
              ofmap_reg[ofmap_count - 64] <= ofmap;
              ofmap_count <= ofmap_count + 1;
            end
            else begin
              ofmap_reg[ofmap_count[6:0]] <= ofmap;
              ofmap_count <= ofmap_count + 1;
            end
          end
          default: begin
          end
        endcase
      end
    end
  end

  //writein DATA_buffer
  always_comb begin
    if (write_cnt == 11'd1103 || (bias_write && write_cnt == 11'd1039)) begin
      data_ready = 1'b1;
      data_ready_reg_next = 1'b1;
    end 
    else begin
      if (count == 11'd1103) begin
        data_ready_reg_next = 1'b0;
      end
      data_ready = 1'b0;
      data_ready_reg_next = data_ready_reg;
    end
  end

  // Sequential logic
  always_ff @(posedge ACLK) begin
    if (~ARESETn) begin
      cs_slave <= IDLE;
      addr_S_reg <= `AXI_ADDR_BITS'd0;
      BID_S <= `AXI_IDS_BITS'd0;
      RID_S <= `AXI_IDS_BITS'd0;
      write_error <= 1'b0;
      ASIC_ENABLE <= `DATA_BITS'd0;
      ASIC_OFMAP <= `DATA_BITS'd0;
    end
    else begin
      cs_slave <= cs_slave_next;
      addr_S_reg <= addr_S_reg_next;
      BID_S <= BID_S_next;
      RID_S <= RID_S_next;
      write_error <= write_error_next;
      ASIC_ENABLE <= ASIC_ENABLE_next;
      ASIC_OFMAP <= ASIC_OFMAP_next;
    end
  end

  // Combinational logic
  always_comb begin
    // ASIC config
    ASIC_ENABLE_next = ASIC_ENABLE;
    ASIC_DATA_next = DATA;
    ASIC_OFMAP_next = ASIC_OFMAP;
    output_cnt_next = output_cnt;
    write_cnt_next = write_cnt;
    // Default assignments
    cs_slave_next = cs_slave;
    addr_S_reg_next = addr_S_reg;
    BID_S_next = BID_S;
    RID_S_next = RID_S;
    write_error_next = write_error;

    // AXI interface defaults
    AWREADY_S = 1'b0;
    WREADY_S = 1'b0;
    BRESP_S = `AXI_RESP_OKAY;    // OKAY response
    BVALID_S = 1'b0;
    ARREADY_S = 1'b0;
    RDATA_S = `AXI_DATA_BITS'd0;       // Connect SRAM output to AXI read data
    RRESP_S = `AXI_RESP_OKAY;    // OKAY response
    RLAST_S = 1'b0;
    RVALID_S = 1'b0;

    case (cs_slave)
      IDLE: begin
        if (AWVALID_S) begin // got write request
          AWREADY_S = 1'b1;  // Ready to accept write address
          cs_slave_next = WRITE_DATA;
          BID_S_next = AWID_S;
          addr_S_reg_next = AWADDR_S;  // Word aligned address
        end
        else if (ARVALID_S) begin // got read request
          ARREADY_S = 1'b1;  // Ready to accept read address
          cs_slave_next = READ_DATA; // just register output
          RID_S_next = ARID_S;
          addr_S_reg_next = ARADDR_S;  // Word aligned address
        end
      end

      READ_DATA: begin
        RVALID_S = 1'b1; // data valid
        RLAST_S = 1'b1; // always the last one data
        // read data select
        case (addr_S_reg)
          `ASIC_ENABLE_OFFSET: begin
            RDATA_S = ASIC_ENABLE;
            RRESP_S = `AXI_RESP_OKAY;
          end
          `ASIC_DATA_OFFSET: begin
            RDATA_S = DATA;
            RRESP_S = `AXI_RESP_OKAY;
          end
          `ASIC_OFMAP_OFFSET: begin
            RDATA_S = ofmap_reg[output_cnt];
            output_cnt_next = output_cnt + 1'd1;
            RRESP_S = `AXI_RESP_OKAY;
          end
          default: begin
            RDATA_S = `AXI_DATA_BITS'd0;
            RRESP_S = `AXI_RESP_SLVERR; // error address
          end
        endcase
        if (RVALID_S && RREADY_S) begin // master is ready to get data
          cs_slave_next = IDLE; // finish read request
          RID_S_next = `AXI_IDS_BITS'd0;
        end
      end

      WRITE_DATA: begin // write data
        WREADY_S = 1'b1; // always ready to write
        if (WVALID_S) begin
          // read data select
          if(addr_S_reg == `ASIC_ENABLE_OFFSET) begin
            ASIC_ENABLE_next = WDATA_S;
          end else if(addr_S_reg == `ASIC_DATA_OFFSET) begin
            ASIC_DATA_next = WDATA_S;
            if (write_cnt == 11'd1103) begin
              write_cnt_next = 11'd0;
            end
            else begin
              write_cnt_next = write_cnt + 1'b1;
            end
          end else begin
            write_error_next = 1'b1; // raise write error
          end

          if (WLAST_S) begin // if the write data is the last one
            cs_slave_next = WRITE_RESP; // write response
          end
        end
      end

      WRITE_RESP: begin
        BVALID_S = 1'b1;
        BRESP_S = (write_error)?`AXI_RESP_SLVERR:`AXI_RESP_OKAY;  // write response
        write_error_next = 1'b0; // reset

        if (BREADY_S) begin
          cs_slave_next = IDLE;
          BID_S_next = `AXI_IDS_BITS'd0;
        end
      end

      default: cs_slave_next = IDLE;
    endcase
  end


/********************************************* 
        ASIC (transformer based)
*********************************************/

Top Top (
    .clk(ACLK),
    .rst(~ARESETn),

    .mode(ASIC_ENABLE[3]),
    .scaling_factor(ASIC_ENABLE[15:4]),

    .ready(data_ready),
    .data_in(DATA),
    .valid(valid),
    .ofmap(ofmap),
    .done()
);

endmodule