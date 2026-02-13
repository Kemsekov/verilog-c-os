module CPU_top (
    input           i_clk,
    input  [  31:0] i_bus_data,
    input           i_bus_DV,
    output [  31:0] o_bus_data,
    output [  31:0] o_bus_address,
    output          o_bus_DV,
    output [   2:0] o_bhw,
    output          o_write_notread,
    output [1023:0] o_regs,
    output [  31:0] o_state,
    output [  31:0] o_PC,
    output [  31:0] o_IR,
    output [  31:0] o_instruction,

    input           i_plic_interrupt,
    output          o_plic_ack,

    output          o_s_interrupt
);

  //INSTRUCTION REGISTER
  wire [31:0] w_IR;
  assign o_IR = w_IR;
  wire [31:0] w_instruction;
  assign o_instruction = w_instruction;
  wire w_fetch_over;

  //PROGRAM COUNTER
  wire [31:0] w_PC;
  assign o_PC = w_PC;
  wire [31:0] w_jump_address;
  wire w_jump_DV;

  //STATE MACHINE
  wire [31:0] w_state;
  assign o_state = w_state;
  wire w_load_PC;
  wire w_start_fetch;

  wire FETCH = w_state == 32'b0;
  wire EXECUTE = w_state == 32'd1;

  //ALU
  wire [31:0] w_ALU_out;
  wire w_alu_requests_load_to_regfile;

  wire w_alu_exec;
  assign w_alu_exec = w_alu_requests_load_to_regfile & EXECUTE;

  wire [11:0] w_alu_to_csr_select;
  wire        w_alu_to_csr_load;
  wire [31:0] w_alu_to_csr_data;

  wire w_exception_ecall;
  wire w_exception_ebreak;
  wire w_interrupt_finnished;
  assign o_plic_ack = w_interrupt_finnished;

  //MEM CONTROLER
  wire [31:0] w_bus_data;
  wire [31:0] w_bus_address;
  wire        w_bus_DV;
  wire [ 2:0] w_bhw;
  wire        w_write_notread;

  assign o_bus_data = w_bus_data;
  assign o_bus_address = w_bus_address;
  assign o_bus_DV = w_bus_DV;
  assign o_bhw = w_bhw;
  assign o_write_notread = w_write_notread;

  wire [31:0] w_loaded_value_from_memory;
  wire w_loaded_value_from_memory_DV;

  wire [31:0] w_IR_value;
  wire w_IR_DV;

  wire w_ld_st_finnished;
  wire w_amo_finnished;

  //REGFILE
  wire [31:0] w_input_regfile = (w_alu_exec) ? w_ALU_out :
                         (w_loaded_value_from_memory_DV)  ? w_loaded_value_from_memory : w_ALU_out;

  wire w_load_reg_file = w_alu_exec | w_loaded_value_from_memory_DV;
  wire [31:0] w_registerout1;
  wire [31:0] w_registerout2;

  //CSRFILE
  wire w_csr_load = w_alu_to_csr_load;
  wire [11:0] w_csr_select = w_alu_to_csr_select;
  wire [31:0] w_csr_data = w_alu_to_csr_data;

  wire [31:0] w_csr_regout;
  wire [11:0] i_csr_select = w_IR[31:20];

  wire [31:0] w_mhartid;
  wire [31:0] w_mstatus;
  wire [31:0] w_mepc;
  wire [31:0] w_sstatus;
  wire [31:0] w_sip;
  wire [31:0] w_sie;
  wire [31:0] w_mie;
  wire [31:0] w_sepc;
  wire [31:0] w_medeleg;
  wire [31:0] w_mideleg;
  wire [31:0] w_stvec;
  wire [31:0] w_mtvec;
  wire [31:0] w_satp;
  wire [31:0] w_scause;
  wire [31:0] w_stval;
  wire [31:0] w_mcounteren;
  wire [31:0] w_time;
  wire [31:0] w_sscratch;
  wire [31:0] w_mscratch;

  //CLINT
  wire w_s_interrupt;
  assign o_s_interrupt = w_s_interrupt;
  wire w_m_interrupt;


  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Instruction Register
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==


  instruction_register m_IR (
      .clk(i_clk),
      .in(w_IR_value),
      .valid(w_IR_DV),
      .state(w_state),
      .out(w_IR),
      .instruction(w_instruction),
      .o_fetch_over(w_fetch_over)
  );


  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Program Counter
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==


  program_counter m_PC (
      .i_clk(i_clk),
      .i_jump_address(w_jump_address),
      .i_jump_DV(w_jump_DV),
      .i_load_PC(w_load_PC),
      .o_PC(w_PC)
  );


  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  State Machine
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==


  control_unit m_State (
      .i_clk(i_clk),
      .i_bus_DV((w_fetch_over & w_instruction != 32'd255) | w_ld_st_finnished),
      .i_amo_finnished(w_amo_finnished),
      .i_instruction(w_instruction),
      .o_load_PC(w_load_PC),
      .i_div_rem_finnished(w_alu_requests_load_to_regfile),
      .o_state(w_state),
      .o_start_fetch(w_start_fetch),

      .i_s_interrupt(w_s_interrupt),
      .i_m_interrupt(w_m_interrupt),
      .i_interrupt_finnished(w_interrupt_finnished)
  );


  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Register File
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==


  register_file m_RegFile (
      .i_clk(i_clk),
      .i_data(w_input_regfile),
      .i_IR(w_IR),
      .i_load(w_load_reg_file),
      .o_regout1(w_registerout1),
      .o_regout2(w_registerout2),
      .o_regs(o_regs)
  );


  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  ALU
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==


  alu m_ALU (
      .i_clk(i_clk),
      .i_instruction(w_instruction),
      .i_IR(w_IR),
      .i_A(w_registerout1),
      .i_B(w_registerout2),
      .i_PC(w_PC),
      .i_state(w_state),
      .o_load_regfile(w_alu_requests_load_to_regfile),
      .o_aluout(w_ALU_out),
      .o_jump_address(w_jump_address),
      .o_jump_DV(w_jump_DV),

      .i_csr_reg(w_csr_regout),
      .o_csr_select(w_alu_to_csr_select),
      .o_csr_load(w_alu_to_csr_load),
      .o_csr_data(w_alu_to_csr_data),

      .i_mstatus(w_mstatus),
      .i_sstatus(w_sstatus),
      .i_mepc(w_mepc),
      .i_sepc(w_sepc),
      .i_mtvec(w_mtvec),
      .i_stvec(w_stvec),

      .o_exception_ecall(w_exception_ecall),
      .o_exception_ebreak(w_exception_ebreak),
      .o_interrupt_finnished(w_interrupt_finnished),

      .i_external_interrupt(i_plic_interrupt)
  );


  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Memory Controler
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==


  load_store m_load_store (
      .i_clk(i_clk),
      .i_instruction(w_instruction),
      .i_regout1(w_registerout1),
      .i_regout2(w_registerout2),
      .i_PC(w_PC),
      .i_IR(w_IR),
      .i_input_bus_data(i_bus_data),
      .i_input_bus_DV(i_bus_DV),
      .i_state(w_state),
      .o_bhw(w_bhw),
      .o_bus_address(w_bus_address),
      .o_bus_data(w_bus_data),
      .o_bus_DV(w_bus_DV),
      .o_write_notread(w_write_notread),
      .o_ld_st_finnished(w_ld_st_finnished),
      .o_loaded_value(w_loaded_value_from_memory),
      .o_loaded_value_DV(w_loaded_value_from_memory_DV),
      .o_IR_value(w_IR_value),
      .o_IR_DV(w_IR_DV),
      .i_start_fetch(w_start_fetch),
      .o_amo_finnished(w_amo_finnished),

      .i_satp(w_satp)
  );

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  CSR File
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==


  CSR_file m_CSR_file (
      .i_clk(i_clk),
      .i_data(w_csr_data),
      .i_select(w_csr_select),
      .i_load(w_csr_load),
      .o_csr_regout(w_csr_regout),

      .o_mhartid(w_mhartid),
      .o_mstatus(w_mstatus),
      .o_mepc(w_mepc),
      .o_sstatus(w_sstatus),
      .o_sip(w_sip),
      .o_sie(w_sie),
      .o_mie(w_mie),
      .o_sepc(w_sepc),
      .o_medeleg(w_medeleg),
      .o_mideleg(w_mideleg),
      .o_stvec(w_stvec),
      .o_mtvec(w_mtvec),
      .o_satp(w_satp),
      .o_scause(w_scause),
      .o_stval(w_stval),
      .o_mcounteren(w_mcounteren),
      .o_time(w_time),
      .o_sscratch(w_sscratch),
      .o_mscratch(w_mscratch)
  );

  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==
  //  Core Local Interruptor (CLINT)
  // ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==  ==

  wire w_timer_int;
  clint m_CLINT(
      .i_ECALL(w_exception_ecall),
      .i_EBREAK(w_exception_ebreak),

      .i_timer_int(w_timer_int),

      .o_s_interrupt(w_s_interrupt),
      .o_m_interrupt(w_m_interrupt),

      .mideleg(w_mideleg),
      .medeleg(w_medeleg),
      .mstatus(w_mstatus),
      .sstatus(w_sstatus),
      .mie(w_mie),
      .sie(w_sie),

      .i_external_interrupt(i_plic_interrupt)
  );

  //timer m_timer(
  //    .i_clk(i_clk),
  //    .i_ack(w_interrupt_finnished),
  //    .o_int(w_timer_int)
  //);

endmodule
