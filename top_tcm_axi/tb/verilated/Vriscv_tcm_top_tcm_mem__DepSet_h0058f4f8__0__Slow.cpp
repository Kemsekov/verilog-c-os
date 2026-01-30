// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top_tcm_mem.h"

VL_ATTR_COLD void Vriscv_tcm_top_tcm_mem___stl_sequent__TOP__v__u_tcm__0(Vriscv_tcm_top_tcm_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_tcm_top_tcm_mem___stl_sequent__TOP__v__u_tcm__0\n"); );
    // Body
    vlSelf->__PVT__u_conv__DOT__req_fifo_accept_w = 
        (4U != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count));
    vlSelf->__PVT__u_conv__DOT__resp_valid_w = (0U 
                                                != (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__count));
    vlSelf->__PVT__u_conv__DOT__req_out_valid_w = (0U 
                                                   != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count));
    vlSelf->__PVT__u_conv__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__count));
    vlSelf->u_conv__DOT____VdfgTmp_h0622edac__0 = (
                                                   (~ (IData)(vlSelf->__PVT__mem_d_accept_q)) 
                                                   & (4U 
                                                      != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count)));
    vlSelf->__PVT__u_conv__DOT__req_out_w = vlSelf->__PVT__u_conv__DOT__u_requests__DOT__ram
        [vlSelf->__PVT__u_conv__DOT__u_requests__DOT__rd_ptr];
    vlSelf->__PVT__ext_rd_w = (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_arvalid_i) 
                                | (IData)(vlSelf->__PVT__u_conv__DOT__req_rd_q)) 
                               & ((~ (IData)(vlSelf->__PVT__u_conv__DOT__req_wr_q)) 
                                  & ((4U != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count)) 
                                     & (((~ ((IData)(vlSelf->__PVT__u_conv__DOT__req_hold_wr_q) 
                                             | (IData)(vlSelf->__PVT__u_conv__DOT__req_prio_q))) 
                                         | (IData)(vlSelf->__PVT__u_conv__DOT__req_hold_rd_q)) 
                                        | ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_awvalid_i)) 
                                           | (IData)(vlSelf->__PVT__u_conv__DOT__req_rd_q))))));
    vlSelf->__PVT__u_conv__DOT__write_active_w = (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_awvalid_i) 
                                                   | (IData)(vlSelf->__PVT__u_conv__DOT__req_wr_q)) 
                                                  & ((~ (IData)(vlSelf->__PVT__u_conv__DOT__req_rd_q)) 
                                                     & ((4U 
                                                         != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count)) 
                                                        & ((((~ (IData)(vlSelf->__PVT__u_conv__DOT__req_hold_rd_q)) 
                                                             & (IData)(vlSelf->__PVT__u_conv__DOT__req_prio_q)) 
                                                            | (IData)(vlSelf->__PVT__u_conv__DOT__req_hold_wr_q)) 
                                                           | ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_arvalid_i)) 
                                                              | (IData)(vlSelf->__PVT__u_conv__DOT__req_wr_q))))));
    vlSelf->__PVT__axi_rvalid_o = ((0U != (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__count)) 
                                   & ((0U != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count)) 
                                      & ((IData)(vlSelf->__PVT__u_conv__DOT__req_out_w) 
                                         >> 5U)));
    vlSelf->u_conv__DOT____VdfgTmp_hf985a723__0 = (
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__count)) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->__PVT__u_conv__DOT__req_out_w) 
                                                        >> 5U)) 
                                                      & (0U 
                                                         != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count))));
    vlSelf->__PVT__axi_arready_o = ((IData)(vlSelf->__PVT__ext_rd_w) 
                                    & ((~ (IData)(vlSelf->__PVT__u_conv__DOT__req_rd_q)) 
                                       & (IData)(vlSelf->u_conv__DOT____VdfgTmp_h0622edac__0)));
    vlSelf->__PVT__axi_wready_o = ((IData)(vlSelf->__PVT__u_conv__DOT__write_active_w) 
                                   & (IData)(vlSelf->u_conv__DOT____VdfgTmp_h0622edac__0));
    vlSelf->__PVT__axi_awready_o = ((IData)(vlSelf->__PVT__u_conv__DOT__write_active_w) 
                                    & ((~ (IData)(vlSelf->__PVT__u_conv__DOT__req_wr_q)) 
                                       & (IData)(vlSelf->u_conv__DOT____VdfgTmp_h0622edac__0)));
    vlSelf->__PVT__muxed_addr_w = (0x3fffU & ((IData)(vlSelf->__PVT__mem_d_accept_q)
                                               ? (vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q 
                                                  >> 2U)
                                               : ((
                                                   ((IData)(vlSelf->__PVT__u_conv__DOT__req_rd_q) 
                                                    | (IData)(vlSelf->__PVT__u_conv__DOT__req_wr_q))
                                                    ? vlSelf->__PVT__u_conv__DOT__req_addr_q
                                                    : 
                                                   ((IData)(vlSelf->__PVT__u_conv__DOT__write_active_w)
                                                     ? vlSymsp->TOP.__Vcellinp__v__axi_t_awaddr_i
                                                     : vlSymsp->TOP.__Vcellinp__v__axi_t_araddr_i)) 
                                                  >> 2U)));
    vlSelf->__PVT__ext_wr_w = (((IData)(vlSelf->__PVT__u_conv__DOT__write_active_w) 
                                & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_wvalid_i))
                                ? (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_wstrb_i)
                                : 0U);
    vlSelf->__PVT__axi_bvalid_o = ((IData)(vlSelf->u_conv__DOT____VdfgTmp_hf985a723__0) 
                                   & ((IData)(vlSelf->__PVT__u_conv__DOT__req_out_w) 
                                      >> 4U));
    vlSelf->__PVT__u_conv__DOT__req_push_w = ((~ (IData)(vlSelf->__PVT__mem_d_accept_q)) 
                                              & ((IData)(vlSelf->__PVT__ext_rd_w) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT__ext_wr_w))));
    vlSelf->__PVT__u_conv__DOT__resp_accept_w = (((IData)(vlSelf->__PVT__axi_rvalid_o) 
                                                  & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_rready_i)) 
                                                 | (((IData)(vlSelf->__PVT__axi_bvalid_o) 
                                                     & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_bready_i)) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->__PVT__u_conv__DOT__req_out_w) 
                                                         >> 4U)) 
                                                       & (IData)(vlSelf->u_conv__DOT____VdfgTmp_hf985a723__0))));
}
