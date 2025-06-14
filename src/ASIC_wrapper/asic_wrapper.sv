`define ASIC_ENABLE_OFFSET   0x0
`define ASIC_DATA_OFFSET     0x4
`define ASIC_OFMAP_OFFSET    0x8
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

	//READ DATA0
	output logic [`AXI_IDS_BITS-1:0] RID_S,
	output logic [`AXI_DATA_BITS-1:0] RDATA_S,
	output logic [1:0] RRESP_S,
	output logic RLAST_S,
	output logic RVALID_S,
	input RREADY_S,
);
  logic [31:0] DATA_buffer [0:1103]; // ifmap weight bias 16 + 1024 + 64
  
  logic [31:0] OFMAP_buffer [0:63];
  logic [10:0] write_cnt, write_cnt_next, count, count_next, bias_cnt;
  logic data_ready, data_ready_reg, ofmap_valid, bias_write;
  integer i;
  typedef enum logic [1:0] {
      IDLE,
      LOAD_BIAS,
      LOAD_OFMAP
  } state_t;

  state_t state, next_state;
  logic [6:0] ofmap_count, output_cnt_next, output_cnt;
  logic [31:0] ofmap_reg [0:63];
  logic [31:0] bias       [0:63];
/***************************************** 
        ASIC slave ( MMIO config ) 
*****************************************/

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
  logic [`AXI_ADDR_BITS-1:0] addr_S_reg, addr_S_reg_next;
  logic [`AXI_IDS_BITS-1:0] BID_S_next, RID_S_next;
  logic write_error, write_error_next;

  logic [`DATA_BITS-1:0] ASIC_ENABLE, ASIC_ENABLE_next;
  logic [`DATA_BITS-1:0] DATA, ASIC_DATA_next;          
  logic [`DATA_BITS-1:0] ASIC_OFMAP, ASIC_OFMAP_next;

  // Sequential logic
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
    count_next = count;
    if (data_ready_reg == 1'b1) begin
      count_next = count + 1'b1;
    end
    else if (count == 11'd1103) begin
      count_next = 1'b0;
    end
  end

  // Sequential logic
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
      bias_cnt <= 11'd0;
    end
    else begin
      count <= count_next;
      write_cnt <= write_cnt_next;
      bias_cnt <= ofmap_count + 11'd1040;
    end
  end

  always_ff @(posedge ACLK) begin
      if (~ARESETn) begin
        state <= IDLE;
      end
      else begin
        state <= next_state;
      end
  end

  always_comb begin
    next_state = state;
    case (state)
      IDLE: begin
        if (ASIC_ENABLE[3] == 1) begin
          next_state = LOAD_BIAS;
        end
        else begin 
          next_state = LOAD_OFMAP;
        end
      end
      LOAD_BIAS: begin
        if (ofmap_count == 64) next_state = LOAD_OFMAP;
      end
      LOAD_OFMAP: begin
        if (ofmap_count == 128) begin
          next_state = IDLE;
        end
      end
    endcase
  end
  always_ff @(posedge ACLK) begin
    if (~ARESETn) begin
      ofmap_count <= 7'd0;
      ofmap_valid <= 1'd0;
      output_cnt <= 7'd0;
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
            end else begin
              ofmap_reg[ofmap_count] <= ofmap;
            end
            if (ofmap_count == 128) begin
              ofmap_count <= 7'd0;
              ofmap_valid <= 1'd1;
            end
            else begin
              ofmap_count <= ofmap_count + 1;
            end
          end
        endcase
      end
    end
  end


  always_comb begin
    if (write_cnt == 11'd1103 || (bias_write && write_cnt == 11'd1039)) begin
      data_ready = 1'b1;
      data_ready_reg = 1'b1;
    end 
    else begin
      if (count == 11'd1103) begin
        data_ready_reg = 1'b0;
      end
      data_ready = 1'b0;
      data_ready_reg = data_ready_reg;
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
      DATA_buffer <= `DATA_BITS'd0;
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
    ASIC_DATA_next <= ASIC_DATA;
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
    RDATA_S = `MEM_DATA_BW'd0;       // Connect SRAM output to AXI read data
    RRESP_S = `AXI_RESP_OKAY;    // OKAY response
    RLAST_S = 1'b0;
    RVALID_S = 1'b0;

    if(done) DMAEN_next = 1'b0; 

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
        if (ofmap_valid) begin
          RVALID_S = 1'b1; // data valid
          RLAST_S = 1'b1; // always the last one data
          // read data select
          case (addr_S_reg)
            `ASIC_ENABLE_OFFSET: begin
              RDATA = ASIC_ENABLE;
              RRESP_S = `AXI_RESPOKAY;
            end
            `ASIC_DATA_OFFSET: begin
              RDATA = ASIC_DATA;
              RRESP_S = `AXI_RESPOKAY;
            end
            `ASIC_OFMAP_OFFSET: begin
              RDATA = ASIC_OFMAP;
              ASIC_OFMAP_next = ofmap_reg[ofmap_cnt];
              output_cnt_next = output_cnt + 1'd1;
              RRESP_S = `AXI_RESPOKAY;
            end
            default: begin
              RDATA_S = `MEM_DATA_BW'd0;
              RRESP_S = `AXI_RESP_SLVERR; // error address
            end
          endcase
        end else begin
          RVALID_S = 1'b0;
          RLAST_S  = 1'b0;
        end

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
            write_error_next_next = 1'b1; // raise write error
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

asic Top(
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