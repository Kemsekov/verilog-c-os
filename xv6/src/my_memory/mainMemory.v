module mainMemory (
  input             request,
  input  [2:0]      bhw,
  input             WR_nRD,
  input  [31:0]     ADR,
  input  [31:0]     DATA,
  output reg [31:0] DATAOUT,
  output            send,
  input             CLK
);

localparam STACK_BASE = 32'h1000;

reg [7:0] mem  [0:300];
reg [7:0] stack[0:200];
reg sendReg;
risingEdge risingEdgeInst (.sig(sendReg), .clk(CLK), .pe(send));

initial begin
  $readmemh("../misc/misa.mif", mem);
end

always @(posedge CLK) begin
  DATAOUT <= 32'b0;
  sendReg <= 1'b0;
  if (request) begin

    if (WR_nRD) begin
      if (ADR > 32'h500) begin
        $display("WRIT on ADDR = %h, DATA = %h, bytes %d", ADR, DATA, bhw);
        case (bhw)
          3'b001: stack[STACK_BASE - ADR] <= DATA[7:0];
          3'b010: begin
            stack[STACK_BASE - ADR]     <= DATA[7:0];
            stack[STACK_BASE - ADR + 1] <= DATA[15:8];
          end
          3'b100: begin
            stack[STACK_BASE - ADR]     <= DATA[7:0];
            stack[STACK_BASE - ADR + 1] <= DATA[15:8];
            stack[STACK_BASE - ADR + 2] <= DATA[23:16];
            stack[STACK_BASE - ADR + 3] <= DATA[31:24];
          end
          default: ;
        endcase
      end
      else begin
        case (bhw)
          3'b001: mem[ADR] <= DATA[7:0];
          3'b010: begin
            mem[ADR]   <= DATA[7:0];
            mem[ADR+1] <= DATA[15:8];
          end
          3'b100: begin
            mem[ADR]   <= DATA[7:0];
            mem[ADR+1] <= DATA[15:8];
            mem[ADR+2] <= DATA[23:16];
            mem[ADR+3] <= DATA[31:24];
          end
          default: ;
        endcase
      end
    end
    else begin
      if (ADR > 32'h500) begin
        $display("READ on ADDR = %h, DATA = %h, bytes %d", ADR, DATA, bhw); // print istead of DATA, stack
        case (bhw)
          3'b001: DATAOUT <= {24'b0, stack[STACK_BASE - ADR]};
          3'b010: DATAOUT <= {16'b0, stack[STACK_BASE - ADR + 1], stack[STACK_BASE - ADR]};
          3'b100: DATAOUT <= {stack[STACK_BASE - ADR + 3], stack[STACK_BASE - ADR + 2],
            stack[STACK_BASE - ADR + 1], stack[STACK_BASE - ADR]};
          default: ;
        endcase
      end
      else begin
        case (bhw)
          3'b001: DATAOUT <= {24'b0, mem[ADR]};
          3'b010: DATAOUT <= {16'b0, mem[ADR + 1], mem[ADR]};
          3'b100: DATAOUT <= {mem[ADR + 3], mem[ADR + 2], mem[ADR + 1], mem[ADR]};
          default: ;
        endcase
      end
    end
    sendReg <= 1'b1;
  end
end
endmodule
