module uart_simul (
  input wire i_clk,
  input wire [7:0] i_data,
  input wire [2:0] i_address,
  input wire i_write,
  input wire i_request,
  output reg [7:0] o_data,
  output reg o_data_DV
);

reg [7:0] mem [0:5];

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

  if (i_request) begin
    o_data_DV <= 1'b1;

    if (!i_write)
      if(i_address == 0)
        mem[LSR] = 0;

      if (i_write && i_address < 6) begin
        mem[i_address] <= i_data;
        if (i_address == RHR) begin
          $write("%c", i_data);
        end
      end

    end
  end

  endmodule

