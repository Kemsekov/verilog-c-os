module uart (
  input wire i_clk,
  input wire [7:0] i_data,
  input wire [2:0] i_address,
  input wire i_write,
  input wire i_request,
  output reg [7:0] o_data,
  output reg o_data_DV,

  output wire o_uart_gpio,

  input wire [7:0] i_ps2_data,
  input wire i_ps2_DV
);

reg [7:0] mem [0:5];
reg r_uart_DV = 1'b0;
wire w_Tx_Done;
wire w_Tx_Active;

//assign o_data = (i_address < 6) ? mem[i_address] : 8'b0;

localparam integer RHR = 0;
localparam integer THR = 0;
localparam integer IER = 1;
localparam integer FCR = 2;
localparam integer ISR = 2;
localparam integer LCR = 3;
localparam integer LSR = 5;

initial begin
  mem[0] = 8'b0;
  mem[1] = 8'b0;
  mem[2] = 8'b0;
  mem[3] = 8'b0;
  mem[4] = 8'b0;
  mem[5] = 8'b0;
end

always @(*) begin
  if(i_address == LSR)begin
    o_data = mem[LSR] | 8'h20;
  end
  else if (i_address < 6) begin
    o_data = mem[i_address];
  end
  else 
    o_data = 0;
end

always @(posedge i_clk) begin
  o_data_DV <= 1'b0;
  r_uart_DV <= 1'b0;

  if (i_ps2_DV) begin
    mem[LSR] <= 8'h01;
    mem[THR] <= i_ps2_data;
  end

  if (i_request) begin

    if (!i_write)begin
      if(i_address == 0) begin
        mem[LSR] = 0;
      end
      o_data_DV <= 1'b1;
    end

    if (i_write && i_address < 6) begin
      mem[i_address] <= i_data;
      if (i_address == RHR) begin
        if (w_Tx_Active == 0) begin
          r_uart_DV <= 1'b1;
          $write("%c", i_data);
        end
      end
      else begin
        o_data_DV <= 1'b1;
      end
    end
  end
  if (w_Tx_Done) begin
    o_data_DV <= 1'b1;
  end
end

uart_tx #(434) m_uart_tx (
  .i_Clock(i_clk),
  .i_Tx_DV(r_uart_DV),
  .i_Tx_Byte(i_data),
  .o_Tx_Active(w_Tx_Active),
  .o_Tx_Serial(o_uart_gpio),
  .o_Tx_Done(w_Tx_Done)
);


endmodule

