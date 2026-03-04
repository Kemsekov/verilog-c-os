//`define SIMULATION
`define XV6
//`define DEBUG
module cpu_tb;

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Combinational Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

reg i_clk;
wire [31:0] w_input_bus_data;
wire w_input_bus_DV;
wire [31:0] w_output_bus_data;
wire [31:0] w_output_bus_address;
wire w_output_bus_DV;
wire [2:0] w_output_bhw;
wire w_output_write_notread;
wire [1023:0] w_regs;
wire [31:0] w_reg;
wire [31:0] w_state;
wire [31:0] w_PC;
wire [31:0] w_IR;
wire [31:0] w_instruction;

CPU_top cpu(
  .i_clk(i_clk),
  .i_bus_data(w_input_bus_data),
  .i_bus_DV(w_input_bus_DV),
  .o_bus_data(w_output_bus_data),
  .o_bus_address(w_output_bus_address),
  .o_bus_DV(w_output_bus_DV),
  .o_bhw(w_output_bhw),
  .o_write_notread(w_output_write_notread),
  .o_regs(w_regs),
  .o_state(w_state),
  .o_PC(w_PC),
  .o_instruction(w_instruction),
  .o_IR(w_IR),

  .i_plic_interrupt(w_interrupt),
  .o_plic_ack(w_ack)
);

wire SDRAM_B0;
wire SDRAM_B1;
wire SDRAM_DQMH;
wire SDRAM_DQML;
wire SDRAM_WE;
wire SDRAM_CAS;
wire SDRAM_RAS;
wire SDRAM_CS;
wire SDRAM_CLK;
wire SDRAM_CKE;
wire [11:0] SDRAM_A;
wire [15:0] SDRAM_D;

wire [31:0] w_gpu_address;
wire [7:0] w_gpu_data;

wire [31:0] w_hex;

wire  [31:0] GPIO0_D;
wire [63:0] w_test_pass;

wire PS2_KBCLK;
wire PS2_KBDAT;

wire SD_DAT0;
wire SD_DAT3;
wire SD_CMD;
wire SD_CLK;
wire SD_WP_N;
memory_top memory(
  .i_clk(i_clk),
  .i_bus_data(w_output_bus_data),
  .i_bus_address(w_output_bus_address),
  .i_bus_DV(w_output_bus_DV),
  .i_bhw(w_output_bhw),
  .i_write_notread(w_output_write_notread),
  .o_bus_data(w_input_bus_data),
  .o_bus_DV(w_input_bus_DV),

  .SDRAM_B0(SDRAM_B0),
  .SDRAM_B1(SDRAM_B1),
  .SDRAM_DQMH(SDRAM_DQMH),
  .SDRAM_DQML(SDRAM_DQML),
  .SDRAM_WE(SDRAM_WE),
  .SDRAM_CAS(SDRAM_CAS),
  .SDRAM_RAS(SDRAM_RAS),
  .SDRAM_CS(SDRAM_CS),
  .SDRAM_CLK(SDRAM_CLK),
  .SDRAM_CKE(SDRAM_CKE),
  .SDRAM_A(SDRAM_A),
  .SDRAM_D(SDRAM_D),

  .i_gpu_address(w_gpu_address),
  .o_gpu_data(w_gpu_data),

  .o_hex(w_hex),

  .i_gpio_data(GPIO0_D[7:0]),
  .i_gpio_control(GPIO0_D[15:12]),
  .o_gpio_control(GPIO0_D[11:8]),

  .o_test_pass(w_test_pass),

  .i_ps2_clk(PS2_KBCLK),
  .i_ps2_data(PS2_KBDAT),

  .SD_DAT0(SD_DAT0),
  .SD_DAT3(SD_DAT3),
  .SD_CMD (SD_CMD),
  .SD_CLK (SD_CLK),
  .SD_WP_N(SD_WP_N),
  
  .i_ack(w_ack),
  .o_interrupt(w_interrupt)
);

`ifdef SIMULATION
defparam memory.bootloader.altsyncram_component.init_file = "../misc/test.mif";
`endif
//defparam memory.gpu.altsyncram_component.init_file = "../misc/GPUINIT.mif";

// `ifdef XV6
// defparam memory.bootloader.altsyncram_component.init_file = "../misc/xv6.mif";
// `endif

wire [3:0] w_red;
wire [3:0] w_green;
wire [3:0] w_blue;
wire w_hs;
wire w_vs;


wire [6:0]  HEX0_D;
wire        HEX0_DP;
wire [6:0]  HEX1_D;
wire        HEX1_DP;
wire [6:0]  HEX2_D;
wire        HEX2_DP;
wire [6:0]  HEX3_D;
wire        HEX3_DP;
reg [9:0]   SW = 1;

mux_1024to32 mux(
  .data_in(w_regs),
  .sel({SW[4], SW[3], SW[2], SW[1], SW[0]}),
  .data_out(w_reg)
);

seven_segment_32bit print(
  .i_data(w_reg),
  .i_mode(SW[9]),
  .o_hex3(HEX0_D),
  .o_hex2(HEX1_D),
  .o_hex1(HEX2_D),
  .o_hex0(HEX3_D)
);

// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
//  Sequential Logic
// ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

initial begin
  i_clk = 0;
  forever #5 i_clk = ~i_clk;
end

initial begin
  `ifdef SIMULATION
  #1000000;
  `else
  #1000000`; // Longer simulation time for XV6
  `endif
  $finish;
end

always @(w_instruction)
  if(w_instruction == 32'd255)begin
    `ifdef SIMULATION
      if (w_test_pass[0])  $display("add PASSED");  else $display("add FAILED");
      if (w_test_pass[1])  $display("addi PASSED"); else $display("addi FAILED");
      if (w_test_pass[2])  $display("and PASSED");  else $display("and FAILED");
      if (w_test_pass[3])  $display("andi PASSED"); else $display("andi FAILED");
      if (w_test_pass[4])  $display("auipc PASSED"); else $display("auipc FAILED");
      if (w_test_pass[5])  $display("beq PASSED"); else $display("beq FAILED");
      if (w_test_pass[6])  $display("bge PASSED"); else $display("bge FAILED");
      if (w_test_pass[7])  $display("bgeu PASSED"); else $display("bgeu FAILED");
      if (w_test_pass[8])  $display("blt PASSED"); else $display("blt FAILED");
      if (w_test_pass[9])  $display("bltu PASSED"); else $display("bltu FAILED");
      if (w_test_pass[10]) $display("bne PASSED"); else $display("bne FAILED");
      if (w_test_pass[11]) $display("div PASSED"); else $display("div FAILED");
      if (w_test_pass[12]) $display("divu PASSED"); else $display("divu FAILED");
      if (w_test_pass[13]) $display("j PASSED"); else $display("j FAILED");
      if (w_test_pass[14]) $display("jal PASSED"); else $display("jal FAILED");
      if (w_test_pass[15]) $display("jalr PASSED"); else $display("jalr FAILED");
      if (w_test_pass[16]) $display("lb PASSED"); else $display("lb FAILED");
      if (w_test_pass[17]) $display("lbu PASSED"); else $display("lbu FAILED");
      if (w_test_pass[18]) $display("lh PASSED"); else $display("lh FAILED");
      if (w_test_pass[19]) $display("lhu PASSED"); else $display("lhu FAILED");
      if (w_test_pass[20]) $display("lui PASSED"); else $display("lui FAILED");
      if (w_test_pass[21]) $display("lw PASSED"); else $display("lw FAILED");
      if (w_test_pass[22]) $display("mul PASSED"); else $display("mul FAILED");
      if (w_test_pass[23]) $display("mulh PASSED"); else $display("mulh FAILED");
      if (w_test_pass[24]) $display("mulhsu PASSED"); else $display("mulhsu FAILED");
      if (w_test_pass[25]) $display("mulhu PASSED"); else $display("mulhu FAILED");
      if (w_test_pass[26]) $display("or PASSED"); else $display("or FAILED");
      if (w_test_pass[27]) $display("ori PASSED"); else $display("ori FAILED");
      if (w_test_pass[28]) $display("rem PASSED"); else $display("rem FAILED");
      if (w_test_pass[29]) $display("remu PASSED"); else $display("remu FAILED");
      if (w_test_pass[30]) $display("sb PASSED"); else $display("sb FAILED");
      if (w_test_pass[31]) $display("sh PASSED"); else $display("sh FAILED");
      if (w_test_pass[32]) $display("simple PASSED"); else $display("simple FAILED");
      if (w_test_pass[33]) $display("sll PASSED"); else $display("sll FAILED");
      if (w_test_pass[34]) $display("slli PASSED"); else $display("slli FAILED");
      if (w_test_pass[35]) $display("slt PASSED"); else $display("slt FAILED");
      if (w_test_pass[36]) $display("slti PASSED"); else $display("slti FAILED");
      if (w_test_pass[37]) $display("sra PASSED"); else $display("sra FAILED");
      if (w_test_pass[38]) $display("srai PASSED"); else $display("srai FAILED");
      if (w_test_pass[39]) $display("srl PASSED"); else $display("srl FAILED");
      if (w_test_pass[40]) $display("srli PASSED"); else $display("srli FAILED");
      if (w_test_pass[41]) $display("sub PASSED"); else $display("sub FAILED");
      if (w_test_pass[42]) $display("sw PASSED"); else $display("sw FAILED");
      if (w_test_pass[43]) $display("xor PASSED"); else $display("xor FAILED");
      if (w_test_pass[44]) $display("xori PASSED"); else $display("xori FAILED");
      if (w_test_pass[45]) $display("TEST 45 PASSED");
      if (w_test_pass[46]) $display("TEST 46 PASSED");
      if (w_test_pass[47]) $display("TEST 47 PASSED");
      if (w_test_pass[48]) $display("TEST 48 PASSED");
      if (w_test_pass[49]) $display("TEST 49 PASSED");
      if (w_test_pass[50]) $display("TEST 50 PASSED");
      if (w_test_pass[51]) $display("TEST 51 PASSED");
      if (w_test_pass[52]) $display("TEST 52 PASSED");
      if (w_test_pass[53]) $display("TEST 53 PASSED");
      if (w_test_pass[54]) $display("TEST 54 PASSED");
      if (w_test_pass[55]) $display("TEST 55 PASSED");
      if (w_test_pass[56]) $display("TEST 56 PASSED");
      if (w_test_pass[57]) $display("TEST 57 PASSED");
      if (w_test_pass[58]) $display("TEST 58 PASSED");
      if (w_test_pass[59]) $display("TEST 59 PASSED");
      if (w_test_pass[60]) $display("TEST 60 PASSED");
      if (w_test_pass[61]) $display("TEST 61 PASSED");
      if (w_test_pass[62]) $display("TEST 62 PASSED");
      if (w_test_pass[63]) $display("TEST 63 PASSED");
    `endif
  $display("%d", $time);
  $finish;
end

`ifdef XV6
always @(posedge (w_state == 32'b0))begin
	`ifdef DEBUG
    $display("PC: %h", cpu.w_PC);
    $display("IR: %h", cpu.w_IR);

    $display("x0  (zero): %h", cpu.m_RegFile.reg0);
    $display("x1  (ra):   %h", cpu.m_RegFile.reg1);
    $display("x2  (sp):   %h", cpu.m_RegFile.reg2);
    $display("x3  (gp):   %h", cpu.m_RegFile.reg3);
    $display("x4  (tp):   %h", cpu.m_RegFile.reg4);
    $display("x5  (t0):   %h", cpu.m_RegFile.reg5);
    $display("x6  (t1):   %h", cpu.m_RegFile.reg6);
    $display("x7  (t2):   %h", cpu.m_RegFile.reg7);
    $display("x8  (s0/fp):%h", cpu.m_RegFile.reg8);
    $display("x9  (s1):   %h", cpu.m_RegFile.reg9);
    $display("x10 (a0):   %h", cpu.m_RegFile.reg10);
    $display("x11 (a1):   %h", cpu.m_RegFile.reg11);
    $display("x12 (a2):   %h", cpu.m_RegFile.reg12);
    $display("x13 (a3):   %h", cpu.m_RegFile.reg13);
    $display("x14 (a4):   %h", cpu.m_RegFile.reg14);
    $display("x15 (a5):   %h", cpu.m_RegFile.reg15);
    $display("x16 (a6):   %h", cpu.m_RegFile.reg16);
    $display("x17 (a7):   %h", cpu.m_RegFile.reg17);
    $display("x18 (s2):   %h", cpu.m_RegFile.reg18);
    $display("x19 (s3):   %h", cpu.m_RegFile.reg19);
    $display("x20 (s4):   %h", cpu.m_RegFile.reg20);
    $display("x21 (s5):   %h", cpu.m_RegFile.reg21);
    $display("x22 (s6):   %h", cpu.m_RegFile.reg22);
    $display("x23 (s7):   %h", cpu.m_RegFile.reg23);
    $display("x24 (s8):   %h", cpu.m_RegFile.reg24);
    $display("x25 (s9):   %h", cpu.m_RegFile.reg25);
    $display("x26 (s10):  %h", cpu.m_RegFile.reg26);
    $display("x27 (s11):  %h", cpu.m_RegFile.reg27);
    $display("x28 (t3):   %h", cpu.m_RegFile.reg28);
    $display("x29 (t4):   %h", cpu.m_RegFile.reg29);
    $display("x30 (t5):   %h", cpu.m_RegFile.reg30);
    $display("x31 (t6):   %h", cpu.m_RegFile.reg31);

    $display("mhartid:    %h", cpu.m_CSR_file.r_mhartid);
    $display("mstatus:    %h", cpu.m_CSR_file.r_mstatus);
    $display("mepc:       %h", cpu.m_CSR_file.r_mepc);
    $display("mie:        %h", cpu.m_CSR_file.r_mie);
    $display("sstatus:    %h", cpu.m_CSR_file.r_sstatus);
    $display("sepc:       %h", cpu.m_CSR_file.r_sepc);
    $display("sie:        %h", cpu.m_CSR_file.r_sie);
    $display("sip:        %h", cpu.m_CSR_file.r_sip);
    $display("medeleg:    %h", cpu.m_CSR_file.r_medeleg);
    $display("mideleg:    %h", cpu.m_CSR_file.r_mideleg);
    $display("stvec:      %h", cpu.m_CSR_file.r_stvec);
    $display("mtvec:      %h", cpu.m_CSR_file.r_mtvec);
    $display("satp:       %h", cpu.m_CSR_file.r_satp);
    $display("scause:     %h", cpu.m_CSR_file.r_scause);
    $display("stval:      %h", cpu.m_CSR_file.r_stval);
    $display("mcounteren: %h", cpu.m_CSR_file.r_mcounteren);
    $display("time:       %h", cpu.m_CSR_file.r_time);
    $display("sscratch:   %h", cpu.m_CSR_file.r_sscratch);
    $display("mscratch:   %h", cpu.m_CSR_file.r_mscratch);
    $stop;
	`endif
end
`endif

endmodule
