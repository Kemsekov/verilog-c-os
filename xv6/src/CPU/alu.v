module alu (
    i_clk,
    i_instruction,
    i_IR,
    i_A,
    i_B,
    i_PC,
    i_state,
    o_load_regfile,
    o_aluout,
    o_jump_address,
    o_jump_DV,

    i_csr_reg,
    o_csr_select,
    o_csr_load,
    o_csr_data,

    i_mstatus,
    i_sstatus,
    i_mepc,
    i_sepc,
    i_mtvec,
    i_stvec,

    o_exception_ecall,
    o_exception_ebreak,
    o_interrupt_finnished,
    i_external_interrupt
);

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Ports
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  input i_clk;
  input [31:0] i_instruction;
  input [31:0] i_IR;
  input [31:0] i_A;
  input [31:0] i_B;
  input [31:0] i_PC;
  input [31:0] i_state;
  output [31:0] o_aluout;
  output [31:0] o_jump_address;
  output o_load_regfile;
  output o_jump_DV;

  input [31:0] i_csr_reg;
  output [11:0] o_csr_select;
  output o_csr_load;
  output [31:0] o_csr_data;

  input [31:0] i_mstatus;
  input [31:0] i_sstatus;
  input [31:0] i_mepc;
  input [31:0] i_sepc;
  input [31:0] i_mtvec;
  input [31:0] i_stvec;

  output reg o_exception_ecall;
  output reg o_exception_ebreak;
  output reg o_interrupt_finnished;

  input i_external_interrupt;

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Combinational Logic
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  reg r_INT_jump_DV = 1'b0;
  reg r_INT_DV = 1'b1;
  reg [31:0] r_INT_address = 32'b0;

  reg signed [31:0] r_result = 32'd0;
  reg signed [31:0] r_clk_result = 32'd0;
  assign o_aluout = (i_instruction >= 32'd14 && i_instruction <= 32'd17) ? r_clk_result : r_result;

  reg o_jump_DV_comb = 1'b0;

  assign o_jump_DV = r_INT_DV ? r_INT_jump_DV : o_jump_DV_comb;

  wire signed [11:0] w_immed = i_IR[31:20];
  wire signed [31:0] w_se_immed = {{20{i_IR[31]}}, i_IR[31:20]};
  wire signed [31:0] w_se_immedLUI = {i_IR[31:12], {12{1'd0}}};

  wire [31:0] w_branch_offset;
  assign w_branch_offset = {{19{i_IR[31]}}, i_IR[31], i_IR[7], i_IR[30:25], i_IR[11:8], 1'b0};

  wire [31:0] w_jal_offset;
  assign w_jal_offset = {{11{i_IR[31]}}, i_IR[31], i_IR[19:12], i_IR[20], i_IR[30:21], 1'b0};

  reg signed [31:0] r_address = 32'd0;
  assign o_jump_address = r_INT_DV ? r_INT_address : r_address;

  reg r_load_regfile = 1'd0;
  reg r_clk_load_regfile = 1'd0;
  assign o_load_regfile = (i_instruction >= 32'd14 && i_instruction <= 32'd17) ? r_clk_load_regfile: r_load_regfile;

  //Interrupt
  wire FETCH = i_state == 32'h0;
  wire EXECUTE = i_state == 32'd1;
  wire MINT = i_state == 32'd2;
  wire SINT = i_state == 32'd3;

  wire INT = MINT | SINT;

  localparam USER_MODE = 2'b00;
  localparam SUPERVISOR_MODE = 2'b01;
  localparam MACHINE_MODE = 2'b11;

  reg [1:0] r_mode = MACHINE_MODE;

  wire [31:0] w_new_mstatus = {i_mstatus[31:13], r_mode, i_mstatus[10:8], i_mstatus[3],
    i_mstatus[6:4], 1'b0, i_mstatus[2:0]};
  wire [31:0] w_new_sstatus = {i_sstatus[31:9], r_mode[0], i_sstatus[7:6], i_sstatus[1],
    i_sstatus[4:2], 1'b0, i_sstatus[0]};

  wire [31:0] w_new_ret_mstatus = {i_mstatus[31:4], i_mstatus[7], i_mstatus[2:0]};
  wire [31:0] w_new_ret_sstatus = {i_sstatus[31:2], i_sstatus[5], i_sstatus[0]};

  reg [1:0] r_interrupt_state = 2'b0;
  localparam MSTATUS_CODE = 12'h300;
  localparam MEPC_CODE = 12'h341;
  localparam SSTATUS_CODE = 12'h100;
  localparam SEPC_CODE = 12'h141;
  localparam SCAUSE_CODE = 12'h142;

  //CSR wires
  reg signed [31:0] r_csr_result = 32'd0;
  reg signed [31:0] r_INT_csr_result = 32'd0;
  assign o_csr_data = INT ? r_INT_csr_result : r_csr_result;

  reg r_csr_load = 1'b0;
  reg r_INT_csr_load = 1'b0;
  assign o_csr_load   = INT ? r_INT_csr_load : r_csr_load;

  reg [11:0] r_INT_csr_select = 12'b0;
  reg [11:0] r_csr_select = 12'b0;
  assign o_csr_select = INT ? r_INT_csr_select : r_csr_select;

  wire [31:0] w_ze_imm_csr = {27'd0, i_IR[19:15]};

  //Module wires
  reg  [31:0] r_pipeline = 32'b0;

  wire [63:0] w_unsigned_unsigned_product;
  assign w_unsigned_unsigned_product = $unsigned(i_A) * $unsigned(i_B);

  wire [63:0] w_signed_signed_product;
  assign w_signed_signed_product = $signed(i_A) * $signed(i_B);

  wire [127:0] w_signed_unsigned_product;
  assign w_signed_unsigned_product = {{64{i_A[31]}}, i_A} * {64'b0, i_B};

  wire [31:0] signed_quotient, signed_remainder;
  wire [31:0] unsigned_quotient, unsigned_remainder;

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Sequential Logic
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  always @(posedge i_clk) begin
    o_interrupt_finnished <= 1'b0;
    r_INT_DV <= 1'b0;
    r_clk_load_regfile <= 1'd0;

    if (FETCH) r_pipeline <= 4'b0;

    if (EXECUTE) case (i_instruction)
      32'd14: begin
        if (i_B != 32'b0) r_clk_result <= signed_quotient;
        else r_clk_result <= -1;
        if (r_pipeline == 32'd25) begin
          r_clk_load_regfile <= 1'd1;
          r_pipeline <= 32'b0;
        end else r_pipeline <= r_pipeline + 1;
      end  // DIV

      32'd15: begin
        if (i_B != 32'b0) r_clk_result <= unsigned_quotient;
        else r_clk_result <= -1;
        if (r_pipeline == 32'd25) begin
          r_clk_load_regfile <= 1'd1;
          r_pipeline <= 32'b0;
        end else r_pipeline <= r_pipeline + 1;
      end  // DIVU

      32'd16: begin
        r_clk_result <= signed_remainder;
        if (r_pipeline == 32'd25) begin
          r_clk_load_regfile <= 1'd1;
          r_pipeline <= 32'b0;
        end else r_pipeline <= r_pipeline + 1;
      end  // REM

      32'd17: begin
        r_clk_result <= unsigned_remainder;
        if (r_pipeline == 32'd25) begin
          r_clk_load_regfile <= 1'd1;
          r_pipeline <= 32'b0;
        end else r_pipeline <= r_pipeline + 1;
      end  // REMU

      default: ;
    endcase

    if (MINT) begin
      if(r_interrupt_state == 2'b0) begin
        r_INT_csr_result <= w_new_mstatus;
        r_INT_csr_load <= 1'b1;
        r_INT_csr_select <= MSTATUS_CODE;
        r_interrupt_state <= 2'b01;
      end
      else if(r_interrupt_state == 2'b01) begin
        r_INT_csr_result <= i_external_interrupt ? 32'h80000009 : 32'd8;
        r_INT_csr_load <= 1'b1;
        r_INT_csr_select <= SCAUSE_CODE;
        r_interrupt_state <= 2'b10;
      end
      else if(r_interrupt_state == 2'b10) begin
        r_INT_csr_result <= i_PC;
        r_INT_csr_load <= 1'b1;
        r_INT_csr_select <= MEPC_CODE;
        r_INT_DV <= 1'd1;
        r_INT_jump_DV <= 1'd1;
        r_INT_address <= i_mtvec;
        r_interrupt_state <= 2'b0;
        o_interrupt_finnished <= 1'b1;
      end
    end

    if (SINT) begin
      if(r_interrupt_state == 2'b00) begin
        r_INT_csr_result <= w_new_sstatus;
        r_INT_csr_load <= 1'b1;
        r_INT_csr_select <= SSTATUS_CODE;
        r_interrupt_state <= 2'b01;
      end
      else if(r_interrupt_state == 2'b01) begin
        r_INT_csr_result <= i_external_interrupt ? 32'h80000009 : 32'd8;
        r_INT_csr_load <= 1'b1;
        r_INT_csr_select <= SCAUSE_CODE;
        r_interrupt_state <= 2'b10;
      end
      else if(r_interrupt_state == 2'b10) begin
        r_INT_csr_result <= i_PC;
        r_INT_csr_load <= 1'b1;
        r_INT_csr_select <= SEPC_CODE;
        r_INT_DV <= 1'd1;
        r_INT_jump_DV <= 1'd1;
        r_INT_address <= i_stvec;
        r_interrupt_state <= 2'b00;
        o_interrupt_finnished <= 1'b1;
      end
    end

  end

  always @(*) begin
    o_jump_DV_comb <= 1'd0;
    r_load_regfile <= 1'd0;
    r_csr_load <= 1'b0;
    o_exception_ecall <= 1'b0;
    o_exception_ebreak <= 1'b0;
    r_csr_select <= 12'b0;
    if (i_state == 32'd1)
      case (i_instruction)

        32'd0: begin
          r_result <= i_A + i_B;
          r_load_regfile <= 1'd1;
        end  // ADD
        32'd1: begin
          r_result <= i_A - i_B;
          r_load_regfile <= 1'd1;
        end  // SUB
        32'd2: begin
          r_result <= i_A << i_B[4:0];
          r_load_regfile <= 1'd1;
        end  // SLL

        32'd3: begin  // SLT
          if ($signed(i_A) < $signed(i_B)) begin
            r_result <= 32'd1;
          end else begin
            r_result <= 32'd0;
          end
          r_load_regfile <= 1'd1;
        end
        32'd4: begin  // SLTU
          if ($unsigned(i_A) < $unsigned(i_B)) begin
            r_result <= 32'd1;
          end else begin
            r_result <= 32'd0;
          end
          r_load_regfile <= 1'd1;
        end  // SLTU

        32'd5: begin
          r_result <= i_A ^ i_B;
          r_load_regfile <= 1'd1;
        end  // XOR
        32'd6: begin
          r_result <= i_A >> i_B[4:0];
          r_load_regfile <= 1'd1;
        end  // SRL
        32'd7: begin
          r_result <= $signed(i_A) >>> i_B[4:0];
          r_load_regfile <= 1'd1;
        end  // SRA
        32'd8: begin
          r_result <= i_A | i_B;
          r_load_regfile <= 1'd1;
        end  // OR
        32'd9: begin
          r_result <= i_A & i_B;
          r_load_regfile <= 1'd1;
        end  // AND

        32'd10: begin
          r_result <= w_signed_signed_product[31:0];
          r_load_regfile <= 1'd1;
        end  // MUL
        32'd11: begin
          r_result <= w_signed_signed_product[63:32];
          r_load_regfile <= 1'd1;
        end  // MULH
        32'd12: begin
          r_result <= w_signed_unsigned_product[63:32];
          r_load_regfile <= 1'd1;
        end  // MULHS
        32'd13: begin
          r_result <= w_unsigned_unsigned_product[63:32];
          r_load_regfile <= 1'd1;
        end  // MULHU

        32'd18: begin
          r_result <= i_A + w_se_immed;
          r_load_regfile <= 1'd1;
        end  // ADDI
        32'd19: begin  // SLTI
          if ($signed(i_A) < $signed(w_se_immed)) begin
            r_result <= 32'd1;
          end else begin
            r_result <= 32'd0;
          end
          r_load_regfile <= 1'd1;
        end
        32'd20: begin  // SLTIU
          if ($unsigned(i_A) < $unsigned(w_se_immed)) begin
            r_result <= 32'd1;
          end else begin
            r_result <= 32'd0;
          end
          r_load_regfile <= 1'd1;
        end
        32'd21: begin
          r_result <= i_A ^ w_se_immed;
          r_load_regfile <= 1'd1;
        end  // XORI
        32'd22: begin
          r_result <= i_A | w_se_immed;
          r_load_regfile <= 1'd1;
        end  // ORI
        32'd23: begin
          r_result <= i_A & w_se_immed;
          r_load_regfile <= 1'd1;
        end  // ANDI
        32'd24: begin
          r_result <= i_A << w_immed[4:0];
          r_load_regfile <= 1'd1;
        end  // SLLI
        32'd25: begin
          r_result <= i_A >> w_immed[4:0];
          r_load_regfile <= 1'd1;
        end  // SRLI
        32'd26: begin
          r_result <= $signed(i_A) >>> w_immed[4:0];
          r_load_regfile <= 1'd1;
        end  // SRAI
        32'd27:  ;  // LB
        32'd28:  ;  // LH
        32'd29:  ;  // LW
        32'd30:  ;  // LBU
        32'd31:  ;  // LHU
        32'd32:  ;  // SB
        32'd33:  ;  // SH
        32'd34:  ;  // SW
        32'd35: begin
          if (i_A == i_B) begin  // BEQ
            o_jump_DV_comb <= 1'd1;
            r_address <= w_branch_offset + i_PC;
          end
        end
        32'd36: begin
          if ($signed(i_A) != $signed(i_B)) begin  // BNE
            o_jump_DV_comb <= 1'd1;
            r_address <= w_branch_offset + i_PC;
          end
        end
        32'd37: begin  // BLT
          if ($signed(i_A) < $signed(i_B)) begin
            o_jump_DV_comb <= 1'd1;
            r_address <= w_branch_offset + i_PC;
          end
        end
        32'd38: begin
          if ($signed(i_A) >= $signed(i_B)) begin
            o_jump_DV_comb <= 1'd1;
            r_address <= w_branch_offset + i_PC;
          end
        end  // BGE
        32'd39: begin
          if ($unsigned(i_A) < $unsigned(i_B)) begin
            o_jump_DV_comb <= 1'd1;
            r_address <= w_branch_offset + i_PC;
          end
        end  // BLTU
        32'd40: begin
          if ($unsigned(i_A) >= $unsigned(i_B)) begin
            o_jump_DV_comb <= 1'd1;
            r_address <= w_branch_offset + i_PC;
          end
        end  // BGEU
        32'd41: begin
          o_jump_DV_comb <= 1'd1;
          r_address <= w_jal_offset + i_PC;
          r_result <= i_PC + 4;
          r_load_regfile <= 1'd1;
        end  // JAL
        32'd42: begin
          o_jump_DV_comb <= 1'd1;
          r_address <= w_se_immed + i_A;
          r_result <= i_PC + 32'd4;
          r_load_regfile <= 1'd1;
        end  // JALR
        32'd43: begin
          r_result <= w_se_immedLUI;
          r_load_regfile <= 1'd1;
        end  // LUI
        32'd44: begin
          r_result <= i_PC + w_se_immedLUI;
          r_load_regfile <= 1'd1;
        end  // AUIPC
        32'd45: begin  // CSRRW
          r_csr_result <= i_A;
          r_csr_load <= 1'b1;
          r_csr_select <= i_IR[31:20];
          r_result <= i_csr_reg;
          r_load_regfile <= 1'd1;
        end
        32'd46: begin  // CSRRS
          r_csr_result <= i_csr_reg | i_A;
          r_csr_load <= 1'b1;
          r_csr_select <= i_IR[31:20];
          r_result <= i_csr_reg;
          r_load_regfile <= 1'd1;
        end
        32'd47: begin  // CSRRC
          r_csr_result <= i_csr_reg & ~i_A;
          r_csr_load <= 1'b1;
          r_csr_select <= i_IR[31:20];
          r_result <= i_csr_reg;
          r_load_regfile <= 1'd1;
        end
        32'd48: begin  // CSRRWI
          r_csr_result <= w_ze_imm_csr;
          r_csr_load <= 1'b1;
          r_csr_select <= i_IR[31:20];
          r_result <= i_csr_reg;
          r_load_regfile <= 1'd1;
        end
        32'd49: begin  // CSRRSI
          r_csr_result <= i_csr_reg | w_ze_imm_csr;
          r_csr_load <= 1'b1;
          r_csr_select <= i_IR[31:20];
          r_result <= i_csr_reg;
          r_load_regfile <= 1'd1;
        end
        32'd50: begin  // CSRRCI
          r_csr_result <= i_csr_reg & ~w_ze_imm_csr;
          r_csr_load <= 1'b1;
          r_csr_select <= i_IR[31:20];
          r_result <= i_csr_reg;
          r_load_regfile <= 1'd1;
        end
        32'd51: begin  // FENCE
        end
        32'd52: begin  // FENCE.I
        end
        32'd53: begin  // ECALL
          o_exception_ecall <= 1'b1;
        end
        32'd54: begin  // EBREAK
          o_exception_ebreak <= 1'b1;
        end
        32'd55: begin  // URET
        end
        32'd56: begin  // SRET
          r_mode <= {1'b0, i_sstatus[8]};
          r_csr_result <= w_new_ret_sstatus;
          r_csr_select <= SSTATUS_CODE;
          r_csr_load <= 1'b1;

          o_jump_DV_comb <= 1'd1;
          r_address <= i_sepc;
        end
        32'd57: begin  // MRET
          r_mode <= i_mstatus[12:11];
          r_csr_result <= w_new_ret_mstatus;
          r_csr_select <= MSTATUS_CODE;
          r_csr_load <= 1'b1;

          o_jump_DV_comb <= 1'd1;
          r_address <= i_mepc;
        end
        32'd58: begin  // WFI
        end
        32'd59: begin  // SFENCE.VMA
        end
        default: ;
      endcase
  end

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Module Instantiation
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  lpm_divide #(
      .lpm_widthn(32),
      .lpm_widthd(32),
      .lpm_pipeline(6),
      .lpm_nrepresentation("SIGNED"),
      .lpm_drepresentation("SIGNED"),
      .lpm_hint("USE_DSP=ON")
  ) signed_divider (
      .clock(i_clk),
      .clken(1'b1),
      .numer($signed(i_A)),
      .denom($signed(i_B)),
      .quotient(signed_quotient),
      .remain(signed_remainder)
  );

  lpm_divide #(
      .lpm_widthn(32),
      .lpm_widthd(32),
      .lpm_pipeline(6),
      .lpm_nrepresentation("UNSIGNED"),
      .lpm_drepresentation("UNSIGNED"),
      .lpm_hint("USE_DSP=ON")
  ) unsigned_divider (
      .clock(i_clk),
      .clken(1'b1),
      .numer(i_A),
      .denom(i_B),
      .quotient(unsigned_quotient),
      .remain(unsigned_remainder)
  );

endmodule
