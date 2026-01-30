// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top_riscv_csr__SB0.h"

VL_INLINE_OPT void Vriscv_tcm_top_riscv_csr__SB0___ico_sequent__TOP__v__u_core__u_csr__0(Vriscv_tcm_top_riscv_csr__SB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_csr__SB0___ico_sequent__TOP__v__u_core__u_csr__0\n"); );
    // Body
    vlSelf->__PVT__ifence_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                               & (0x100fU == (0x707fU 
                                              & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)));
    vlSelf->__PVT__sfence_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                               & (0x12000073U == (0xfe007fffU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)));
    vlSelf->__PVT__eret_fault_w = (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                                    & (0x200073U == 
                                       (0xcfffffffU 
                                        & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))) 
                                   & ((IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q) 
                                      < (3U & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                               >> 0x1cU))));
    vlSelf->__PVT__csrrsi_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                               & (0x6073U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)));
    vlSelf->__PVT__csrrci_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                               & (0x7073U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)));
    vlSelf->__PVT__csrrw_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                              & (0x1073U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)));
    vlSelf->__PVT__csrrwi_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                               & (0x5073U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)));
    vlSelf->__PVT__data_r = ((((IData)(vlSelf->__PVT__csrrwi_w) 
                               | (IData)(vlSelf->__PVT__csrrsi_w)) 
                              | (IData)(vlSelf->__PVT__csrrci_w))
                              ? (0x1fU & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                          >> 0xfU))
                              : vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r);
    vlSelf->__VdfgExtracted_h996e9194__0 = ((IData)(vlSelf->__PVT__csrrw_w) 
                                            | (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                                                & (0x2073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))) 
                                               | ((IData)(vlSelf->__PVT__csrrwi_w) 
                                                  | (IData)(vlSelf->__PVT__csrrsi_w))));
    vlSelf->__VdfgExtracted_hcaf0a663__0 = ((IData)(vlSelf->__PVT__csrrw_w) 
                                            | (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                                                & (0x3073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))) 
                                               | ((IData)(vlSelf->__PVT__csrrwi_w) 
                                                  | (IData)(vlSelf->__PVT__csrrci_w))));
    vlSelf->__PVT__satp_update_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                                    & (((IData)(vlSelf->__VdfgExtracted_hcaf0a663__0) 
                                        | (IData)(vlSelf->__VdfgExtracted_h996e9194__0)) 
                                       & (((IData)(
                                                   ((0U 
                                                     != 
                                                     (0xf8000U 
                                                      & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)) 
                                                    | (IData)(vlSelf->__PVT__csrrw_w))) 
                                           | (IData)(vlSelf->__PVT__csrrwi_w)) 
                                          & (0x180U 
                                             == (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                                 >> 0x14U)))));
}

VL_INLINE_OPT void Vriscv_tcm_top_riscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__0(Vriscv_tcm_top_riscv_csr__SB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__0\n"); );
    // Body
    vlSelf->__Vdly__reset_q = vlSelf->__PVT__reset_q;
    vlSelf->__Vdly__take_interrupt_q = vlSelf->__PVT__take_interrupt_q;
    vlSelf->__Vdly__take_interrupt_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_cpu_i)) 
                                        & ((0U != vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__irq_masked_r) 
                                           & (~ ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_pending_q) 
                                                 | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch_instr_csr_w)))));
    vlSelf->__PVT__ifence_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_cpu_i)) 
                               & (IData)(vlSelf->__PVT__ifence_w));
    vlSelf->__PVT__tlb_flush_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_cpu_i)) 
                                  & ((IData)(vlSelf->__PVT__satp_update_w) 
                                     | (IData)(vlSelf->__PVT__sfence_w)));
}

VL_INLINE_OPT void Vriscv_tcm_top_riscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__1(Vriscv_tcm_top_riscv_csr__SB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__1\n"); );
    // Body
    vlSelf->__PVT__take_interrupt_q = vlSelf->__Vdly__take_interrupt_q;
    if (vlSymsp->TOP.__Vcellinp__v__rst_cpu_i) {
        vlSelf->__PVT__exception_e1_q = 0U;
        vlSelf->__PVT__branch_target_q = 0U;
        vlSelf->__PVT__branch_q = 0U;
        vlSelf->__Vdly__reset_q = 1U;
        vlSelf->__PVT__rd_result_e1_q = 0U;
    } else {
        if (vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) {
            vlSelf->__PVT__exception_e1_q = (0x3fU 
                                             & ((0x73U 
                                                 == vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                 ? 
                                                ((IData)(0x18U) 
                                                 + (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q))
                                                 : 
                                                ((IData)(vlSelf->__PVT__eret_fault_w)
                                                  ? 0x12U
                                                  : 
                                                 ((0x200073U 
                                                   == 
                                                   (0xcfffffffU 
                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w))
                                                   ? 
                                                  ((IData)(0x30U) 
                                                   + 
                                                   (3U 
                                                    & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                                       >> 0x1cU)))
                                                   : 
                                                  ((0x100073U 
                                                    == vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w)
                                                    ? 0x13U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_opcode_invalid_o)
                                                     ? 0x12U
                                                     : 
                                                    ((((IData)(vlSelf->__PVT__satp_update_w) 
                                                       | (IData)(vlSelf->__PVT__ifence_w)) 
                                                      | (IData)(vlSelf->__PVT__sfence_w))
                                                      ? 0x34U
                                                      : 0U)))))));
            vlSelf->__PVT__rd_result_e1_q = (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_opcode_invalid_o) 
                                              | (IData)(vlSelf->__PVT__eret_fault_w))
                                              ? vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w
                                              : vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__rdata_r);
        } else {
            vlSelf->__PVT__exception_e1_q = 0U;
            vlSelf->__PVT__rd_result_e1_q = 0U;
        }
        if (vlSelf->__PVT__reset_q) {
            vlSelf->__PVT__branch_target_q = 0x2000U;
            vlSelf->__PVT__branch_q = 1U;
            vlSelf->__Vdly__reset_q = 0U;
        } else {
            vlSelf->__PVT__branch_q = vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__branch_r;
            vlSelf->__PVT__branch_target_q = vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__branch_target_r;
        }
    }
    vlSelf->__PVT__rd_valid_e1_q = ((1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_cpu_i))) 
                                    && ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) 
                                        && ((IData)(vlSelf->__VdfgExtracted_h996e9194__0) 
                                            | (IData)(vlSelf->__VdfgExtracted_hcaf0a663__0))));
    vlSelf->__PVT__reset_q = vlSelf->__Vdly__reset_q;
}

VL_INLINE_OPT void Vriscv_tcm_top_riscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__2(Vriscv_tcm_top_riscv_csr__SB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__2\n"); );
    // Body
    vlSelf->__PVT__branch_csr_priv_o = ((vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_satp_q 
                                         >> 0x1fU) ? (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q)
                                         : 3U);
    vlSelf->__Vcellinp__u_csrfile__csr_waddr_i = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wr_wb_q)
                                                   ? 
                                                  (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                   >> 0x14U)
                                                   : 0U);
    if (vlSymsp->TOP.__Vcellinp__v__rst_cpu_i) {
        vlSelf->__PVT__csr_wdata_e1_q = 0U;
    } else if (vlSymsp->TOP__v__u_core__u_issue.__PVT__lsu_opcode_valid_o) {
        if (((IData)(vlSelf->__VdfgExtracted_h996e9194__0) 
             & (IData)(vlSelf->__VdfgExtracted_hcaf0a663__0))) {
            vlSelf->__PVT__csr_wdata_e1_q = vlSelf->__PVT__data_r;
        } else if (vlSelf->__VdfgExtracted_h996e9194__0) {
            vlSelf->__PVT__csr_wdata_e1_q = (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__rdata_r 
                                             | vlSelf->__PVT__data_r);
        } else if (vlSelf->__VdfgExtracted_hcaf0a663__0) {
            vlSelf->__PVT__csr_wdata_e1_q = (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__rdata_r 
                                             & (~ vlSelf->__PVT__data_r));
        }
    } else {
        vlSelf->__PVT__csr_wdata_e1_q = 0U;
    }
}
