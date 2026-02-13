module control_unit(i_clk, i_bus_DV, i_amo_finnished, i_instruction, i_div_rem_finnished,
  i_s_interrupt, i_m_interrupt, i_interrupt_finnished,
  o_load_PC, o_state, o_start_fetch);

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Ports
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

input i_clk;
input i_bus_DV;
input i_amo_finnished;
input [31:0] i_instruction;
input i_div_rem_finnished;
output o_load_PC;
output [31:0] o_state;
output o_start_fetch;

input i_s_interrupt;
input i_m_interrupt;
input i_interrupt_finnished;

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Combinational Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

wire w_load_store_instruction = i_instruction >= 32'd27 & i_instruction <= 32'd34;
wire w_div_rem_instruction = i_instruction >= 32'd14 && i_instruction <= 32'd17;
wire w_amo_instruction = i_instruction == 32'd60;
wire w_ecall = i_instruction == 32'd53; //Add ebreak here too

reg [31:0] r_state = 32'b0;
assign o_state = r_state;

wire FETCH = r_state == 32'h0;
wire EXECUTE = r_state == 32'd1;
wire MINT = r_state == 32'd2; //Machine interrupt
wire SINT = r_state == 32'd3; //Supervisor interrupt

assign o_load_PC = (w_load_store_instruction & i_bus_DV & EXECUTE) |
  (w_div_rem_instruction & i_div_rem_finnished & EXECUTE) |
  (w_amo_instruction & i_amo_finnished & EXECUTE) |
  (i_interrupt_finnished & (MINT | SINT)) |
  EXECUTE & ~(w_load_store_instruction | w_div_rem_instruction | w_amo_instruction | w_ecall);

reg r_start_fetch = 1'h0;
assign o_start_fetch = r_start_fetch;
integer num_of_instructions = 32'd0;

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Sequential Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

always @(posedge i_clk)begin
  r_start_fetch <= 1'h0;
  if(FETCH)begin
    if(i_bus_DV)begin
      r_state <= 32'd1;
      num_of_instructions = num_of_instructions + 1;
    end
  end
  else if(EXECUTE)begin

    if(i_instruction >= 32'd14 && i_instruction <= 32'd17)begin //DIV and REM instructions
      if(i_div_rem_finnished) begin
        if (i_m_interrupt) //received interrupt
          r_state <= 32'd2;
        else if (i_s_interrupt)
          r_state <= 32'd3;
        else begin
          r_state <= 32'b0;
          r_start_fetch <= 1'h1;
        end
      end
    end

    else if(i_instruction >= 32'd27 && i_instruction <= 32'd34)begin //Load and Store instructions
      if(i_bus_DV) begin // value received from memory
        if (i_m_interrupt) //received interrupt
          r_state <= 32'd2;
        else if (i_s_interrupt)
          r_state <= 32'd3;
        else begin
          r_state <= 32'b0;
          r_start_fetch <= 1'h1;
        end
      end
    end

    else if(i_instruction == 32'd60)begin //AMOSWAP
      if(i_amo_finnished) begin // AMOSWAP finnished
        if (i_m_interrupt) //received interrupt
          r_state <= 32'd2;
        else if (i_s_interrupt)
          r_state <= 32'd3;
        else begin
          r_state <= 32'b0;
          r_start_fetch <= 1'h1;
        end
      end
    end

    else begin // Any other instruction
      if (i_m_interrupt) //received interrupt
        r_state <= 32'd2;
      else if (i_s_interrupt)
        r_state <= 32'd3;
      else begin
        r_state <= 32'b0;
        r_start_fetch <= 1'h1;
      end
    end

  end

  else if(MINT) begin
    if(i_interrupt_finnished) begin
      r_state <= 32'b0;
      r_start_fetch <= 1'h1;
    end
  end
  else if(SINT) begin
    if(i_interrupt_finnished) begin
      r_state <= 32'b0;
      r_start_fetch <= 1'h1;
    end
  end

end

always @(num_of_instructions)begin
  if (num_of_instructions % 1000000 == 0) begin
    $display("Instruction: %d", num_of_instructions);
  end
end

endmodule

