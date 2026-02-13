module ps2_interface(
  input i_ps2_data,
  input i_ps2_clk,
  input [7:0] i_data,
  input [11:0] i_address,
  input i_clk,
  input i_request,
  input i_write,
  output [7:0] o_data,
  output o_data_DV
);

  wire [7:0] w_code;
  wire w_ncode;
  reg [7:0] r_control = 8'b0;
  reg r_break = 1'b0;
  reg r_data_DV = 1'b0;

  localparam Break = 8'hf0, W = 8'h1d, A = 8'h1c, S = 8'h1b, D = 8'h23,
    Space = 8'h29, Esc = 8'h76, Ctrl = 8'h14, Shift = 8'h12;

  assign o_data = r_control;
  assign o_data_DV = r_data_DV;

  ps2 keyboard(.i_ps2_clk(i_ps2_clk),.i_ps2_data(i_ps2_data),.i_clk(i_clk),.i_spa(1'b1),
    .o_cap(w_ncode),.o_dap(w_code));

  //initial begin
  //  #10000005
  //  $display("KEY PRESSED");
  //  r_data_DV <= 1'b1;
  //  r_control <= 8'h61;
  //  #10
  //  r_data_DV <= 1'b0;
  //end
  always @(posedge i_clk) begin
    r_data_DV <= 1'b0;
    if (w_ncode) begin
      r_data_DV <= 1'b1;
      case(w_code)
        Break: begin
          r_break <= 1'b1;
        end
        W: begin
          r_control <= 8'h77;
        end
        A: begin
          r_control <= 8'h61;
        end
        S: begin
          r_control <= 8'h73;
        end
        D: begin
          r_control <= 8'h64;
        end
        Space: begin
          r_control <= 8'h64;
        end
        //Esc: begin
        //end
        //Ctrl: begin
        //end
        //Shift: begin
        //end
        default:;
      endcase
    end
  end

endmodule

