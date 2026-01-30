// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top_riscv_csr__SB0.h"

VL_ATTR_COLD void Vriscv_tcm_top_riscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__0(Vriscv_tcm_top_riscv_csr__SB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__0\n"); );
    // Body
    vlSelf->__PVT__branch_csr_priv_o = ((vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_satp_q 
                                         >> 0x1fU) ? (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q)
                                         : 3U);
    vlSelf->__Vcellinp__u_csrfile__csr_waddr_i = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wr_wb_q)
                                                   ? 
                                                  (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                   >> 0x14U)
                                                   : 0U);
}

VL_ATTR_COLD void Vriscv_tcm_top_riscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__1(Vriscv_tcm_top_riscv_csr__SB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__1\n"); );
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

VL_ATTR_COLD void Vriscv_tcm_top_riscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__2(Vriscv_tcm_top_riscv_csr__SB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_riscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__2\n"); );
    // Body
    vlSelf->__PVT__data_r = ((((IData)(vlSelf->__PVT__csrrwi_w) 
                               | (IData)(vlSelf->__PVT__csrrsi_w)) 
                              | (IData)(vlSelf->__PVT__csrrci_w))
                              ? (0x1fU & (vlSymsp->TOP__v__u_core.__PVT__fetch_instr_w 
                                          >> 0xfU))
                              : vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_ra_value_r);
}
