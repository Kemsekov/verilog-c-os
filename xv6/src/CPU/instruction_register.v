module instruction_register (
    clk,
    in,
    valid,
    state,
    out,
    instruction,
    o_fetch_over
);

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Ports
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  input clk;
  input [31:0] in;
  input valid;
  input [31:0] state;
  output [31:0] out;
  output [31:0] instruction;
  output o_fetch_over;

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Combinational Logic
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  reg [31:0] r_IR = 32'd0;
  assign out = r_IR;

  reg [31:0] r_instruction = 32'd0;
  assign instruction = r_instruction;

  reg r_fetch_over = 1'b0;
  assign o_fetch_over = r_fetch_over;

  wire FETCH = state == 32'h0;
  wire EXECUTE = state == 32'd1;

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Sequential Logic
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  always @(posedge clk) begin
    r_fetch_over <= 1'b0;
    if (FETCH & valid) begin
      r_IR <= in;
      r_fetch_over <= 1'b1;
      if (in[6:0] == 7'b0110011) begin
        // R-type instructions (opcode = 0110011)
        if (in[31:25] == 7'b0000000 && in[14:12] == 3'b000) r_instruction = 32'd0;  // ADD
        else if (in[31:25] == 7'b0100000 && in[14:12] == 3'b000) r_instruction = 32'd1;  // SUB
        else if (in[31:25] == 7'b0000000 && in[14:12] == 3'b001) r_instruction = 32'd2;  // SLL
        else if (in[31:25] == 7'b0000000 && in[14:12] == 3'b010) r_instruction = 32'd3;  // SLT
        else if (in[31:25] == 7'b0000000 && in[14:12] == 3'b011) r_instruction = 32'd4;  // SLTU
        else if (in[31:25] == 7'b0000000 && in[14:12] == 3'b100) r_instruction = 32'd5;  // XOR
        else if (in[31:25] == 7'b0000000 && in[14:12] == 3'b101) r_instruction = 32'd6;  // SRL
        else if (in[31:25] == 7'b0100000 && in[14:12] == 3'b101) r_instruction = 32'd7;  // SRA
        else if (in[31:25] == 7'b0000000 && in[14:12] == 3'b110) r_instruction = 32'd8;  // OR
        else if (in[31:25] == 7'b0000000 && in[14:12] == 3'b111) r_instruction = 32'd9;  // AND

        // Multiplication and Division instructions (RV32M, opcode = 0110011)
        else if (in[31:25] == 7'b0000001 && in[14:12] == 3'b000) r_instruction = 32'd10;  // MUL
        else if (in[31:25] == 7'b0000001 && in[14:12] == 3'b001) r_instruction = 32'd11;  // MULH
        else if (in[31:25] == 7'b0000001 && in[14:12] == 3'b010) r_instruction = 32'd12;  // MULHSU
        else if (in[31:25] == 7'b0000001 && in[14:12] == 3'b011) r_instruction = 32'd13;  // MULHU
        else if (in[31:25] == 7'b0000001 && in[14:12] == 3'b100) r_instruction = 32'd14;  // DIV
        else if (in[31:25] == 7'b0000001 && in[14:12] == 3'b101) r_instruction = 32'd15;  // DIVU
        else if (in[31:25] == 7'b0000001 && in[14:12] == 3'b110) r_instruction = 32'd16;  // REM
        else if (in[31:25] == 7'b0000001 && in[14:12] == 3'b111) r_instruction = 32'd17;  // REMU
      end else if (in[6:0] == 7'b0010011) begin
        // I-type instructions (opcode = 0010011)
        if (in[14:12] == 3'b000) r_instruction = 32'd18;  // ADDI
        else if (in[14:12] == 3'b010) r_instruction = 32'd19;  // SLTI
        else if (in[14:12] == 3'b011) r_instruction = 32'd20;  // SLTIU
        else if (in[14:12] == 3'b100) r_instruction = 32'd21;  // XORI
        else if (in[14:12] == 3'b110) r_instruction = 32'd22;  // ORI
        else if (in[14:12] == 3'b111) r_instruction = 32'd23;  // ANDI
        else if (in[31:25] == 7'b0000000 && in[14:12] == 3'b001) r_instruction = 32'd24;  // SLLI
        else if (in[31:25] == 7'b0000000 && in[14:12] == 3'b101) r_instruction = 32'd25;  // SRLI
        else if (in[31:25] == 7'b0100000 && in[14:12] == 3'b101) r_instruction = 32'd26;  // SRAI
      end else if (in[6:0] == 7'b0000011) begin
        // Load instructions (opcode = 0000011)
        if (in[14:12] == 3'b000) r_instruction = 32'd27;  // LB
        else if (in[14:12] == 3'b001) r_instruction = 32'd28;  // LH
        else if (in[14:12] == 3'b010) r_instruction = 32'd29;  // LW
        else if (in[14:12] == 3'b100) r_instruction = 32'd30;  // LBU
        else if (in[14:12] == 3'b101) r_instruction = 32'd31;  // LHU
      end else if (in[6:0] == 7'b0100011) begin
        // S-type instructions (opcode = 0100011)
        if (in[14:12] == 3'b000) r_instruction = 32'd32;  // SB
        else if (in[14:12] == 3'b001) r_instruction = 32'd33;  // SH
        else if (in[14:12] == 3'b010) r_instruction = 32'd34;  // SW
      end else if (in[6:0] == 7'b1100011) begin
        // B-type instructions (opcode = 1100011)
        if (in[14:12] == 3'b000) r_instruction = 32'd35;  // BEQ
        else if (in[14:12] == 3'b001) r_instruction = 32'd36;  // BNE
        else if (in[14:12] == 3'b100) r_instruction = 32'd37;  // BLT
        else if (in[14:12] == 3'b101) r_instruction = 32'd38;  // BGE
        else if (in[14:12] == 3'b110) r_instruction = 32'd39;  // BLTU
        else if (in[14:12] == 3'b111) r_instruction = 32'd40;  // BGEU
      end else if (in[6:0] == 7'b1101111) begin
        // J-type instructions (opcode = 1101111)
        r_instruction = 32'd41;  // JAL
      end else if (in[6:0] == 7'b1100111) begin
        // I-type instructions (opcode = 1100111)
        if (in[14:12] == 3'b000) r_instruction = 32'd42;  // JALR
      end else if (in[6:0] == 7'b0110111) begin
        // U-type instructions (opcode = 0110111)
        r_instruction = 32'd43;  // LUI
      end else if (in[6:0] == 7'b0010111) begin
        // U-type instructions (opcode = 0010111)
        r_instruction = 32'd44;  // AUIPC
      end else if (in[6:0] == 7'b1110011) begin
        // CSR Instructions
        if (in[14:12] == 3'b001) r_instruction = 32'd45;  // CSRRW
        else if (in[14:12] == 3'b010) r_instruction = 32'd46;  // CSRRS
        else if (in[14:12] == 3'b011) r_instruction = 32'd47;  // CSRRC
        else if (in[14:12] == 3'b101) r_instruction = 32'd48;  // CSRRWI
        else if (in[14:12] == 3'b110) r_instruction = 32'd49;  // CSRRSI
        else if (in[14:12] == 3'b111) r_instruction = 32'd50;  // CSRRCI
      
        else if (in[31:0] == 32'h00000073) r_instruction = 32'd53;  // ECALL
        else if (in[31:0] == 32'h00100073) r_instruction = 32'd54;  // EBREAK
        else if (in[31:0] == 32'h00200073) r_instruction = 32'd255;  // URET
        else if (in[31:0] == 32'h10200073) r_instruction = 32'd56;  // SRET
        else if (in[31:0] == 32'h30200073) r_instruction = 32'd57;  // MRET
        else if (in[31:0] == 32'h10500073) r_instruction = 32'd58;  // WFI
        else if (in[31:0] == 32'h12000073) r_instruction = 32'd59;  // SFENCE.VMA
      end else if (in[6:0] == 7'b0101111) begin
        if (in[14:12] == 3'b010 && in[31:27] == 5'b00001) r_instruction = 32'd60; //AMOSWAP
      end
      else if (in[6:0] == 7'b0001111) begin
        if (in[14:12] == 3'b000) r_instruction = 32'd51;  // FENCE
        else if (in[14:12] == 3'b001) r_instruction = 32'd52;  // FENCE.I
      end else begin
        r_instruction = 32'd255;  // Unknown or unsupported instruction
      end
      //Clear r_IR if EXECUTE state ?
    end
  end

endmodule
