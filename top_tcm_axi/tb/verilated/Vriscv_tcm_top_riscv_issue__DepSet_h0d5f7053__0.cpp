// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top_riscv_issue.h"

bool Vriscv_tcm_top_riscv_issue::complete_valid0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_issue::complete_valid0\n"); );
    VL_OUT8(complete_valid0__Vfuncrtn,0,0);
    // Body
    complete_valid0__Vfuncrtn = this->__PVT__pipe_valid_wb_w;
    // Final
    return (complete_valid0__Vfuncrtn);
}

uint32_t Vriscv_tcm_top_riscv_issue::complete_pc0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_issue::complete_pc0\n"); );
    VL_OUT(complete_pc0__Vfuncrtn,31,0);
    // Body
    complete_pc0__Vfuncrtn = this->__PVT__u_pipe_ctrl__DOT__pc_wb_q;
    // Final
    return (complete_pc0__Vfuncrtn);
}

uint32_t Vriscv_tcm_top_riscv_issue::complete_opcode0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_issue::complete_opcode0\n"); );
    VL_OUT(complete_opcode0__Vfuncrtn,31,0);
    // Body
    complete_opcode0__Vfuncrtn = this->__PVT__u_pipe_ctrl__DOT__opcode_wb_q;
    // Final
    return (complete_opcode0__Vfuncrtn);
}

uint32_t Vriscv_tcm_top_riscv_issue::complete_ra0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_issue::complete_ra0\n"); );
    VL_OUT8(complete_ra0__Vfuncrtn,4,0);
    // Body
    complete_ra0__Vfuncrtn = (0x1fU & (this->__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                       >> 0xfU));
    // Final
    return (complete_ra0__Vfuncrtn);
}

uint32_t Vriscv_tcm_top_riscv_issue::complete_rb0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_issue::complete_rb0\n"); );
    VL_OUT8(complete_rb0__Vfuncrtn,4,0);
    // Body
    complete_rb0__Vfuncrtn = (0x1fU & (this->__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                       >> 0x14U));
    // Final
    return (complete_rb0__Vfuncrtn);
}

uint32_t Vriscv_tcm_top_riscv_issue::complete_rd0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_issue::complete_rd0\n"); );
    VL_OUT8(complete_rd0__Vfuncrtn,4,0);
    // Body
    complete_rd0__Vfuncrtn = this->__PVT__pipe_rd_wb_w;
    // Final
    return (complete_rd0__Vfuncrtn);
}

uint32_t Vriscv_tcm_top_riscv_issue::complete_ra_val0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_issue::complete_ra_val0\n"); );
    VL_OUT(complete_ra_val0__Vfuncrtn,31,0);
    // Body
    complete_ra_val0__Vfuncrtn = this->__PVT__u_pipe_ctrl__DOT__operand_ra_wb_q;
    // Final
    return (complete_ra_val0__Vfuncrtn);
}

uint32_t Vriscv_tcm_top_riscv_issue::complete_rb_val0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_issue::complete_rb_val0\n"); );
    VL_OUT(complete_rb_val0__Vfuncrtn,31,0);
    // Body
    complete_rb_val0__Vfuncrtn = this->__PVT__u_pipe_ctrl__DOT__operand_rb_wb_q;
    // Final
    return (complete_rb_val0__Vfuncrtn);
}

uint32_t Vriscv_tcm_top_riscv_issue::complete_rd_val0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_issue::complete_rd_val0\n"); );
    VL_OUT(complete_rd_val0__Vfuncrtn,31,0);
    // Body
    complete_rd_val0__Vfuncrtn = ((0U != (IData)(this->__PVT__pipe_rd_wb_w))
                                   ? this->__PVT__u_pipe_ctrl__DOT__result_wb_q
                                   : 0U);
    // Final
    return (complete_rd_val0__Vfuncrtn);
}

uint32_t Vriscv_tcm_top_riscv_issue::complete_exception() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_issue::complete_exception\n"); );
    VL_OUT8(complete_exception__Vfuncrtn,5,0);
    // Body
    complete_exception__Vfuncrtn = this->__PVT__u_pipe_ctrl__DOT__exception_wb_q;
    // Final
    return (complete_exception__Vfuncrtn);
}
