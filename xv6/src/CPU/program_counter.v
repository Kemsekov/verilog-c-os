module program_counter(i_clk, i_jump_address, i_jump_DV, i_load_PC, o_PC);

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Ports
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

input i_clk;
input i_load_PC;
input i_jump_DV;
input [31:0] i_jump_address;
output [31:0] o_PC;

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Combinational Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

`ifdef XV6
reg [31:0] r_PC = 32'h80000000;
`else
reg [31:0] r_PC = 32'h80000000;
`endif
assign o_PC = r_PC;

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Sequential Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

always @(posedge i_clk)begin

  if(i_load_PC)begin
    if(i_jump_DV)begin
      r_PC <= i_jump_address;
    end
    else begin
      // $display("PC = %h", r_PC + 32'd4);
      r_PC <= r_PC + 32'd4;
    end

  end

end



endmodule

