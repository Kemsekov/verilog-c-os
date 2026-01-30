// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top_riscv_tcm_top.h"

VL_ATTR_COLD void Vriscv_tcm_top_riscv_tcm_top___stl_sequent__TOP__v__0(Vriscv_tcm_top_riscv_tcm_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_tcm_top_riscv_tcm_top___stl_sequent__TOP__v__0\n"); );
    // Init
    CData/*0:0*/ u_axi__DOT____VdfgTmp_h4ca7c2de__0;
    u_axi__DOT____VdfgTmp_h4ca7c2de__0 = 0;
    // Body
    vlSelf->__PVT__u_axi__DOT__req_accept_w = (2U != (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q));
    vlSelf->__PVT__u_axi__DOT__res_accept_w = (2U != (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q));
    vlSelf->__PVT__u_axi__DOT__req_valid_w = (0U != (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q));
    vlSelf->__PVT__u_axi__DOT__u_resp__DOT__valid_o 
        = (0U != (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q));
    vlSelf->__PVT__u_axi__DOT__req_w[0U] = vlSelf->__PVT__u_axi__DOT__u_req__DOT__ram_q
        [vlSelf->__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][0U];
    vlSelf->__PVT__u_axi__DOT__req_w[1U] = vlSelf->__PVT__u_axi__DOT__u_req__DOT__ram_q
        [vlSelf->__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][1U];
    vlSelf->__PVT__u_axi__DOT__req_w[2U] = vlSelf->__PVT__u_axi__DOT__u_req__DOT__ram_q
        [vlSelf->__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U];
    vlSelf->__PVT__u_dmux__DOT__hold_w = ((0U != (IData)(vlSelf->__PVT__u_dmux__DOT__pending_q)) 
                                          & ((IData)(vlSelf->__PVT__u_dmux__DOT__tcm_access_q) 
                                             != (0x10000U 
                                                 > 
                                                 (0xfffffffcU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q))));
    vlSelf->__PVT__dport_error_w = ((1U & (~ (IData)(vlSelf->__PVT__u_dmux__DOT__tcm_access_q))) 
                                    && ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_bvalid_i)
                                         ? (0U != (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_bresp_i))
                                         : (0U != (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rresp_i))));
    vlSelf->__PVT__dport_axi_ack_w = ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_bvalid_i) 
                                      | (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i));
    vlSelf->u_dmux__DOT____VdfgTmp_h61d91652__0 = (
                                                   (~ (IData)(vlSelf->__PVT__u_dmux__DOT__hold_w)) 
                                                   & (0x10000U 
                                                      > 
                                                      (0xfffffffcU 
                                                       & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)));
    vlSelf->u_dmux__DOT____VdfgTmp_h71f788cd__0 = (
                                                   (0x10000U 
                                                    <= 
                                                    (0xfffffffcU 
                                                     & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)) 
                                                   & (~ (IData)(vlSelf->__PVT__u_dmux__DOT__hold_w)));
    vlSelf->__PVT__dport_accept_w = ((~ (IData)(vlSelf->__PVT__u_dmux__DOT__hold_w)) 
                                     & ((0x10000U > 
                                         (0xfffffffcU 
                                          & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q))
                                         ? (IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                                         : ((2U != (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q)) 
                                            & (2U != (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q)))));
    u_axi__DOT____VdfgTmp_h4ca7c2de__0 = ((~ ((~ (IData)(vlSelf->__PVT__dport_axi_ack_w)) 
                                              & (IData)(vlSelf->__PVT__u_axi__DOT__request_pending_q))) 
                                          & (0U != (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q)));
    vlSelf->__PVT__dport_ack_w = ((IData)(vlSelf->__PVT__u_dmux__DOT__tcm_access_q)
                                   ? (IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_ack_q)
                                   : (IData)(vlSelf->__PVT__dport_axi_ack_w));
    vlSelf->__PVT__dport_tcm_invalidate_w = ((IData)(vlSelf->u_dmux__DOT____VdfgTmp_h61d91652__0) 
                                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
    vlSelf->__PVT__dport_tcm_writeback_w = ((IData)(vlSelf->u_dmux__DOT____VdfgTmp_h61d91652__0) 
                                            & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q));
    vlSelf->__PVT__dport_tcm_flush_w = ((IData)(vlSelf->u_dmux__DOT____VdfgTmp_h61d91652__0) 
                                        & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q));
    vlSelf->axi_i_arvalid_o = ((IData)(u_axi__DOT____VdfgTmp_h4ca7c2de__0) 
                               & (vlSelf->__PVT__u_axi__DOT__req_w[2U] 
                                  >> 4U));
    vlSelf->__PVT__u_axi__DOT__req_is_write_w = ((~ 
                                                  (vlSelf->__PVT__u_axi__DOT__req_w[2U] 
                                                   >> 4U)) 
                                                 & (IData)(u_axi__DOT____VdfgTmp_h4ca7c2de__0));
    vlSelf->__PVT__u_axi__DOT__read_complete_w = ((IData)(vlSelf->axi_i_arvalid_o) 
                                                  & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_arready_i));
    vlSelf->axi_i_awvalid_o = ((~ (IData)(vlSelf->__PVT__u_axi__DOT__awvalid_inhibit_q)) 
                               & (IData)(vlSelf->__PVT__u_axi__DOT__req_is_write_w));
    vlSelf->axi_i_wvalid_o = ((~ (IData)(vlSelf->__PVT__u_axi__DOT__wvalid_inhibit_q)) 
                              & (IData)(vlSelf->__PVT__u_axi__DOT__req_is_write_w));
    vlSelf->__PVT__u_axi__DOT__write_complete_w = (
                                                   ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_awready_i) 
                                                    | (IData)(vlSelf->__PVT__u_axi__DOT__awvalid_inhibit_q)) 
                                                   & (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_wready_i) 
                                                       | (IData)(vlSelf->__PVT__u_axi__DOT__wvalid_inhibit_q)) 
                                                      & (IData)(vlSelf->__PVT__u_axi__DOT__req_is_write_w)));
    vlSelf->__PVT__u_axi__DOT__req_pop_w = ((IData)(vlSelf->__PVT__u_axi__DOT__read_complete_w) 
                                            | (IData)(vlSelf->__PVT__u_axi__DOT__write_complete_w));
}
