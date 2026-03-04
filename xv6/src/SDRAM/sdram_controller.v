//Flaw: Module should record request
module sdram_controller(
  input wire i_clk,
  input wire [22:0] i_address,
  input wire i_wren,
  input wire i_request,
  input wire [7:0] i_data,
  output reg [7:0] o_data,
  output reg o_done,
  output wire [11:0] o_SDRAM_ADR,
  inout wire [15:0] io_SDRAM_DATA,
  output wire o_SDRAM_B0,
  output wire o_SDRAM_B1,
  output wire o_SDRAM_DQMH,
  output wire o_SDRAM_DQML,
  output wire o_SDRAM_WE,
  output wire o_SDRAM_CAS,
  output wire o_SDRAM_RAS,
  output wire o_SDRAM_CS,
  output wire o_SDRAM_CLK,
  output wire o_SDRAM_CKE
);

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Combinational Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

reg r_request = 1'b0;
reg r_wren = 1'b0;
reg [22:0] r_address = 23'b0;
reg [7:0] r_data = 8'b0;

assign o_SDRAM_CKE = 1'b1;
assign o_SDRAM_CLK = i_clk;

reg [35:0] out = 36'b0;
assign o_SDRAM_CS = out[0];
assign o_SDRAM_RAS = out[1];
assign o_SDRAM_CAS = out[2];
assign o_SDRAM_WE = out[3];
assign o_SDRAM_DQML = out[4];
assign o_SDRAM_DQMH = out[5];
assign o_SDRAM_B0 = out[6];
assign o_SDRAM_B1 = out[7];
assign o_SDRAM_ADR[11:0] = out[35:24];

reg r_drive_sdram_data = 1'b0;
assign io_SDRAM_DATA[15:0] = r_drive_sdram_data? out[23:8] : 16'bzzzzzzzzzzzzzzzz;

// Instructions
wire [35:0] CONST_NOP =    36'b000000000000000000000000000000111110;
wire [35:0] CONST_PRCHG =  36'b111111111111000000000000000000110100;
wire [35:0] CONST_RFRSH =  36'b000000000000000000000000000000111000;
wire [35:0] CONST_LDMREG = 36'b000000100000000000000000000000110000;
wire [35:0] CONST_ACTIVE = {r_address[19:8], {16{1'b0}}, r_address[20], r_address[21], 6'b001100};
wire [35:0] CONST_READ =   {4'b1111, r_address[7:0], {16{1'b0}}, r_address[20], r_address[21], 6'b001010};
wire [35:0] CONST_WRITE =  {4'b1111, r_address[7:0], r_data[7:0], r_data[7:0],
                            r_address[20], r_address[21], 6'b000010};

// POWERUP
reg [31:0] charging_cnt = 32'b0;

// INIT WIRES
reg [31:0] init_sub_state = 32'b0;

// READ
reg [31:0] read_sub_state = 32'b0;

// WRITE
reg [31:0] write_sub_state = 32'b0;

// REFRESH
reg [31:0] refresh_sub_state = 32'b0;
reg [31:0] refresh_cnt = 32'b0;
wire refresh = refresh_cnt > 10'b1010111100;

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Sequential Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

reg [2:0] state = 3'b000;

localparam integer POWERUP = 3'd0;
localparam integer INIT = 3'd1;
localparam integer IDLE = 3'd2;
localparam integer REFRESH = 3'd3;
localparam integer READ = 3'd4;
localparam integer WRITE = 3'd5;


always @(posedge i_clk) begin
  o_done <= 1'b0;
  r_drive_sdram_data = 1'b0;

  if(i_request)begin
    r_request <= i_request;
    r_wren <= i_wren;
    r_address <= i_address;
    r_data <= i_data;
  end


  case(state)
    POWERUP: begin
      if(charging_cnt < 32'd10000) begin
        charging_cnt <= charging_cnt + 1;
        out <= CONST_NOP;
      end
      else begin
        state <= INIT;
      end
    end

    INIT: begin
      case(init_sub_state)
        32'd0, 32'd2, 32'd4, 32'd5, 32'd6, 32'd8, 32'd9, 32'd10, 32'd12, 32'd13: begin //NOP
          out <= CONST_NOP;
          init_sub_state <= init_sub_state + 1;
        end

        32'd1: begin //PRCHG
          out <= CONST_PRCHG;
          init_sub_state <= init_sub_state + 1;
        end

        32'd3, 32'd7: begin //RFRSH
          out <= CONST_RFRSH;
          init_sub_state <= init_sub_state + 1;
        end

        32'd11: begin //LDMREG
          out <= CONST_LDMREG;
          init_sub_state <= init_sub_state + 1;
        end

        32'd14: begin //ENDINIT
          init_sub_state <= 0;
          out <= CONST_NOP;
          state <= IDLE;
        end

        default:;
      endcase
    end

    IDLE: begin
      out <= CONST_NOP;

      if(refresh) state <= REFRESH;
      else if(r_request && r_wren) begin
        r_request <= 1'b0;
        state <= WRITE;
      end
      else if(r_request && !r_wren) begin
        r_request <= 1'b0;
        state <= READ;
      end

    end

    REFRESH: begin

      case(refresh_sub_state)
        32'd0, 32'd1, 32'd3, 32'd4, 32'd5, 32'd6, 32'd8, 32'd9, 32'd10: begin //NOP
          if(refresh_sub_state == 32'd10) begin //ENDREFRESH
            refresh_sub_state <= 0;
            state <= IDLE;
            out <= CONST_NOP;
          end
          else begin
            out <= CONST_NOP;
            refresh_sub_state <= refresh_sub_state + 1;
          end
        end

        32'd2: begin //LDMREG
          out <= CONST_LDMREG;
          refresh_sub_state <= refresh_sub_state + 1;
        end

        32'd7: begin //REFRESH
          out <= CONST_RFRSH;
          refresh_sub_state <= refresh_sub_state + 1;
        end

        default:;
      endcase
    end

    READ: begin

      case(read_sub_state)
        32'd0: begin //ACTIVE
          out <= CONST_ACTIVE;
          read_sub_state <= read_sub_state + 1;
        end

        32'd1, 32'd2, 32'd3, 32'd5, 32'd6: begin //NOP
          out <= CONST_NOP;
          read_sub_state <= read_sub_state + 1;
        end

        32'd4: begin //READ
          out <= CONST_READ;
          read_sub_state <= read_sub_state + 1;
        end

        32'd7: begin
            o_data <= io_SDRAM_DATA[7:0];
            o_done <= 1'b1;
            read_sub_state <= 0;
            state <= IDLE;
            out <= CONST_NOP;
        end
        default:;
      endcase
    end

    WRITE: begin

      case(write_sub_state)
        32'd0: begin //ACTIVE
          out <= CONST_ACTIVE;
          write_sub_state <= write_sub_state + 1;
        end

        32'd1, 32'd2, 32'd3, 32'd5, 32'd6, 32'd7: begin //NOP
          if(write_sub_state == 32'd7) begin //ENDWRITE
            o_done <= 1'b1;
            write_sub_state <= 0;
            state <= IDLE;
            out <= CONST_NOP;
            r_drive_sdram_data <= 1'b1;
          end
          else begin
            r_drive_sdram_data <= 1'b1;
            out <= CONST_NOP;
            write_sub_state <= write_sub_state + 1;
          end
        end

        32'd4: begin //WRITE
          out <= CONST_WRITE;
          r_drive_sdram_data <= 1'b1;
          write_sub_state <= write_sub_state + 1;
        end

        default:;
      endcase
    end


    default:;
  endcase


end

always @(posedge i_clk)
  if(state == IDLE || state == READ || state == WRITE)
    refresh_cnt <= refresh_cnt + 1;
  else if(state == REFRESH)
    refresh_cnt <= 32'b0;

endmodule

