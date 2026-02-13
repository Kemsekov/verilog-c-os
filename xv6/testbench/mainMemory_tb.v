//`include "../src/my_memory/mainMemory.v"

module mainMemory_tb;
reg         request;
reg  [2:0]  bhw;
reg         WR_nRD;
reg  [31:0] ADR;
reg  [31:0] DATA;
wire [31:0] DATAOUT;
wire        send;
reg          CLK;

integer i;
mainMemory mem(.request(request), .bhw(bhw),
  .WR_nRD(WR_nRD), .ADR(ADR), .DATA(DATA), .DATAOUT(DATAOUT), .send(send), .CLK(CLK));
initial begin
  request <= 1'h0;
  bhw <= 3'h0;
  WR_nRD <= 1'h0;
  ADR <= 32'h0;
  DATA <= 32'h0;

  for ( i = 0; i < 200 ; i = i + 1) begin
    #30
    request <= 1'h1;
    bhw <= 3'b001;
    ADR <= i;
    #20
    request <= 1'h0;
  end
  $stop;
end

initial begin
  CLK = 0;
  forever begin
    #10 CLK = !CLK;
  end
end
endmodule

