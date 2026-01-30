// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_tcm_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TCM_TOP_RISCV_ISSUE_H_
#define VERILATED_VRISCV_TCM_TOP_RISCV_ISSUE_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vriscv_tcm_top_riscv_regfile;


class Vriscv_tcm_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_tcm_top_riscv_issue final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_tcm_top_riscv_regfile* u_regfile;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__fetch_valid_i,0,0);
        VL_IN8(__PVT__fetch_fault_fetch_i,0,0);
        VL_IN8(__PVT__fetch_fault_page_i,0,0);
        VL_IN8(__PVT__fetch_instr_exec_i,0,0);
        VL_IN8(__PVT__fetch_instr_lsu_i,0,0);
        VL_IN8(__PVT__fetch_instr_branch_i,0,0);
        VL_IN8(__PVT__fetch_instr_mul_i,0,0);
        VL_IN8(__PVT__fetch_instr_div_i,0,0);
        VL_IN8(__PVT__fetch_instr_csr_i,0,0);
        VL_IN8(__PVT__fetch_instr_rd_valid_i,0,0);
        VL_IN8(__PVT__fetch_instr_invalid_i,0,0);
        VL_IN8(__PVT__branch_exec_request_i,0,0);
        VL_IN8(__PVT__branch_exec_is_taken_i,0,0);
        VL_IN8(__PVT__branch_exec_is_not_taken_i,0,0);
        VL_IN8(__PVT__branch_exec_is_call_i,0,0);
        VL_IN8(__PVT__branch_exec_is_ret_i,0,0);
        VL_IN8(__PVT__branch_exec_is_jmp_i,0,0);
        VL_IN8(__PVT__branch_d_exec_request_i,0,0);
        VL_IN8(__PVT__branch_d_exec_priv_i,1,0);
        VL_IN8(__PVT__branch_csr_request_i,0,0);
        VL_IN8(__PVT__branch_csr_priv_i,1,0);
        VL_IN8(__PVT__writeback_mem_valid_i,0,0);
        VL_IN8(__PVT__writeback_mem_exception_i,5,0);
        VL_IN8(__PVT__writeback_div_valid_i,0,0);
        VL_IN8(__PVT__csr_result_e1_write_i,0,0);
        VL_IN8(__PVT__csr_result_e1_exception_i,5,0);
        VL_IN8(__PVT__lsu_stall_i,0,0);
        VL_IN8(__PVT__take_interrupt_i,0,0);
        VL_OUT8(__PVT__fetch_accept_o,0,0);
        VL_OUT8(__PVT__branch_request_o,0,0);
        VL_OUT8(__PVT__branch_priv_o,1,0);
        VL_OUT8(__PVT__exec_opcode_valid_o,0,0);
        VL_OUT8(__PVT__lsu_opcode_valid_o,0,0);
        VL_OUT8(__PVT__csr_opcode_valid_o,0,0);
        VL_OUT8(__PVT__mul_opcode_valid_o,0,0);
        VL_OUT8(__PVT__div_opcode_valid_o,0,0);
        VL_OUT8(__PVT__opcode_invalid_o,0,0);
        VL_OUT8(__PVT__opcode_rd_idx_o,4,0);
        VL_OUT8(__PVT__opcode_ra_idx_o,4,0);
        VL_OUT8(__PVT__opcode_rb_idx_o,4,0);
        VL_OUT8(__PVT__lsu_opcode_invalid_o,0,0);
        VL_OUT8(__PVT__lsu_opcode_rd_idx_o,4,0);
        VL_OUT8(__PVT__lsu_opcode_ra_idx_o,4,0);
        VL_OUT8(__PVT__lsu_opcode_rb_idx_o,4,0);
        VL_OUT8(__PVT__mul_opcode_invalid_o,0,0);
        VL_OUT8(__PVT__mul_opcode_rd_idx_o,4,0);
        VL_OUT8(__PVT__mul_opcode_ra_idx_o,4,0);
        VL_OUT8(__PVT__mul_opcode_rb_idx_o,4,0);
        VL_OUT8(__PVT__csr_opcode_invalid_o,0,0);
        VL_OUT8(__PVT__csr_opcode_rd_idx_o,4,0);
        VL_OUT8(__PVT__csr_opcode_ra_idx_o,4,0);
        VL_OUT8(__PVT__csr_opcode_rb_idx_o,4,0);
        VL_OUT8(__PVT__csr_writeback_write_o,0,0);
        VL_OUT8(__PVT__csr_writeback_exception_o,5,0);
        VL_OUT8(__PVT__exec_hold_o,0,0);
        VL_OUT8(__PVT__mul_hold_o,0,0);
        VL_OUT8(__PVT__interrupt_inhibit_o,0,0);
        CData/*0:0*/ __PVT__squash_w;
        CData/*1:0*/ __PVT__priv_x_q;
        CData/*0:0*/ __PVT__opcode_valid_w;
        CData/*0:0*/ __PVT__opcode_issue_r;
        CData/*0:0*/ __PVT__opcode_accept_r;
    };
    struct {
        CData/*4:0*/ __PVT__pipe_rd_e1_w;
        CData/*4:0*/ __PVT__pipe_rd_e2_w;
        CData/*0:0*/ __PVT__pipe_valid_wb_w;
        CData/*4:0*/ __PVT__pipe_rd_wb_w;
        CData/*5:0*/ __PVT__issue_fault_w;
        CData/*0:0*/ __PVT__div_pending_q;
        CData/*0:0*/ __PVT__csr_pending_q;
        CData/*0:0*/ __PVT__u_pipe_ctrl__DOT__valid_e1_q;
        CData/*5:0*/ __PVT__u_pipe_ctrl__DOT__exception_e1_q;
        CData/*0:0*/ __PVT__u_pipe_ctrl__DOT__valid_e2_q;
        CData/*0:0*/ __PVT__u_pipe_ctrl__DOT__csr_wr_e2_q;
        CData/*5:0*/ __PVT__u_pipe_ctrl__DOT__exception_e2_q;
        CData/*0:0*/ __PVT__u_pipe_ctrl__DOT__valid_e2_w;
        CData/*0:0*/ __PVT__u_pipe_ctrl__DOT__load_store_e2_w;
        CData/*5:0*/ __PVT__u_pipe_ctrl__DOT__exception_e2_r;
        CData/*0:0*/ __PVT__u_pipe_ctrl__DOT__squash_e1_e2_q;
        CData/*0:0*/ __PVT__u_pipe_ctrl__DOT__valid_wb_q;
        CData/*0:0*/ __PVT__u_pipe_ctrl__DOT__csr_wr_wb_q;
        CData/*5:0*/ __PVT__u_pipe_ctrl__DOT__exception_wb_q;
        VL_OUT16(__PVT__csr_writeback_waddr_o,11,0);
        SData/*9:0*/ __PVT__u_pipe_ctrl__DOT__ctrl_e1_q;
        SData/*9:0*/ __PVT__u_pipe_ctrl__DOT__ctrl_e2_q;
        SData/*9:0*/ __PVT__u_pipe_ctrl__DOT__ctrl_wb_q;
        VL_IN(__PVT__fetch_instr_i,31,0);
        VL_IN(__PVT__fetch_pc_i,31,0);
        VL_IN(__PVT__branch_exec_source_i,31,0);
        VL_IN(__PVT__branch_exec_pc_i,31,0);
        VL_IN(__PVT__branch_d_exec_pc_i,31,0);
        VL_IN(__PVT__branch_csr_pc_i,31,0);
        VL_IN(__PVT__writeback_exec_value_i,31,0);
        VL_IN(__PVT__writeback_mem_value_i,31,0);
        VL_IN(__PVT__writeback_mul_value_i,31,0);
        VL_IN(__PVT__writeback_div_value_i,31,0);
        VL_IN(__PVT__csr_result_e1_value_i,31,0);
        VL_IN(__PVT__csr_result_e1_wdata_i,31,0);
        VL_OUT(__PVT__branch_pc_o,31,0);
        VL_OUT(__PVT__opcode_opcode_o,31,0);
        VL_OUT(__PVT__opcode_pc_o,31,0);
        VL_OUT(__PVT__opcode_ra_operand_o,31,0);
        VL_OUT(__PVT__opcode_rb_operand_o,31,0);
        VL_OUT(__PVT__lsu_opcode_opcode_o,31,0);
        VL_OUT(__PVT__lsu_opcode_pc_o,31,0);
        VL_OUT(__PVT__lsu_opcode_ra_operand_o,31,0);
        VL_OUT(__PVT__lsu_opcode_rb_operand_o,31,0);
        VL_OUT(__PVT__mul_opcode_opcode_o,31,0);
        VL_OUT(__PVT__mul_opcode_pc_o,31,0);
        VL_OUT(__PVT__mul_opcode_ra_operand_o,31,0);
        VL_OUT(__PVT__mul_opcode_rb_operand_o,31,0);
        VL_OUT(__PVT__csr_opcode_opcode_o,31,0);
        VL_OUT(__PVT__csr_opcode_pc_o,31,0);
        VL_OUT(__PVT__csr_opcode_ra_operand_o,31,0);
        VL_OUT(__PVT__csr_opcode_rb_operand_o,31,0);
        VL_OUT(__PVT__csr_writeback_wdata_o,31,0);
        VL_OUT(__PVT__csr_writeback_exception_pc_o,31,0);
        VL_OUT(__PVT__csr_writeback_exception_addr_o,31,0);
        IData/*31:0*/ __PVT__scoreboard_r;
        IData/*31:0*/ __PVT__issue_b_ra_value_w;
        IData/*31:0*/ __PVT__issue_b_rb_value_w;
        IData/*31:0*/ __PVT__issue_ra_value_r;
        IData/*31:0*/ __PVT__issue_rb_value_r;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__pc_e1_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__npc_e1_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__opcode_e1_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__operand_ra_e1_q;
    };
    struct {
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__operand_rb_e1_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__csr_wdata_e2_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__result_e2_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__pc_e2_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__npc_e2_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__opcode_e2_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__operand_ra_e2_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__operand_rb_e2_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__result_e2_r;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__result_wb_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__pc_wb_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__npc_wb_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__opcode_wb_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__operand_ra_wb_q;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__operand_rb_wb_q;
        VlWide<3>/*79:0*/ __PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str;
        VlWide<3>/*79:0*/ __PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra;
        VlWide<3>/*79:0*/ __PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb;
        VlWide<3>/*79:0*/ __PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_pc;
        VlWide<3>/*79:0*/ u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h1df94472__0;
        VlWide<3>/*79:0*/ u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h52234399__0;
        VlWide<3>/*79:0*/ u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h1dc35927__0;
        VlWide<3>/*79:0*/ __PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str;
        VlWide<3>/*79:0*/ __PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra;
        VlWide<3>/*79:0*/ __PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb;
        VlWide<3>/*79:0*/ __PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm;
        IData/*31:0*/ __PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc;
        VlWide<3>/*79:0*/ u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h1df94472__0;
        VlWide<3>/*79:0*/ u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h52234399__0;
        VlWide<3>/*79:0*/ u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h1dc35927__0;
        VlWide<3>/*79:0*/ __PVT__u_pipe_dec0_verif__DOT__dbg_inst_str;
        VlWide<3>/*79:0*/ __PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra;
        VlWide<3>/*79:0*/ __PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb;
        VlWide<3>/*79:0*/ __PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd;
        IData/*31:0*/ __PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm;
        IData/*31:0*/ __PVT__u_pipe_dec0_verif__DOT__dbg_inst_pc;
        VlWide<3>/*79:0*/ u_pipe_dec0_verif__DOT____VdfgExtracted_h1df94472__0;
        VlWide<3>/*79:0*/ u_pipe_dec0_verif__DOT____VdfgExtracted_h52234399__0;
        VlWide<3>/*79:0*/ u_pipe_dec0_verif__DOT____VdfgExtracted_h1dc35927__0;
    };

    // INTERNAL VARIABLES
    Vriscv_tcm_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_tcm_top_riscv_issue(Vriscv_tcm_top__Syms* symsp, const char* v__name);
    ~Vriscv_tcm_top_riscv_issue();
    VL_UNCOPYABLE(Vriscv_tcm_top_riscv_issue);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t complete_exception();
    uint32_t complete_opcode0();
    uint32_t complete_pc0();
    uint32_t complete_ra0();
    uint32_t complete_ra_val0();
    uint32_t complete_rb0();
    uint32_t complete_rb_val0();
    uint32_t complete_rd0();
    uint32_t complete_rd_val0();
    bool complete_valid0();
};


#endif  // guard
