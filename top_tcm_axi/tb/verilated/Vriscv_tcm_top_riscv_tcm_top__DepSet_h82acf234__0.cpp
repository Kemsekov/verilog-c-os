// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top_riscv_tcm_top.h"

VL_INLINE_OPT void Vriscv_tcm_top_riscv_tcm_top___ico_sequent__TOP__v__0(Vriscv_tcm_top_riscv_tcm_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_tcm_top_riscv_tcm_top___ico_sequent__TOP__v__0\n"); );
    // Init
    CData/*0:0*/ u_axi__DOT____VdfgTmp_h4ca7c2de__0;
    u_axi__DOT____VdfgTmp_h4ca7c2de__0 = 0;
    // Body
    vlSelf->__PVT__dport_error_w = ((1U & (~ (IData)(vlSelf->__PVT__u_dmux__DOT__tcm_access_q))) 
                                    && ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_bvalid_i)
                                         ? (0U != (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_bresp_i))
                                         : (0U != (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rresp_i))));
    vlSelf->__PVT__dport_axi_ack_w = ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_bvalid_i) 
                                      | (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i));
    u_axi__DOT____VdfgTmp_h4ca7c2de__0 = ((~ ((~ (IData)(vlSelf->__PVT__dport_axi_ack_w)) 
                                              & (IData)(vlSelf->__PVT__u_axi__DOT__request_pending_q))) 
                                          & (0U != (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q)));
    vlSelf->__PVT__dport_ack_w = ((IData)(vlSelf->__PVT__u_dmux__DOT__tcm_access_q)
                                   ? (IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_ack_q)
                                   : (IData)(vlSelf->__PVT__dport_axi_ack_w));
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

VL_INLINE_OPT void Vriscv_tcm_top_riscv_tcm_top___ico_sequent__TOP__v__1(Vriscv_tcm_top_riscv_tcm_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_tcm_top_riscv_tcm_top___ico_sequent__TOP__v__1\n"); );
    // Init
    CData/*0:0*/ u_dmux__DOT____VdfgTmp_h2136385b__0;
    u_dmux__DOT____VdfgTmp_h2136385b__0 = 0;
    CData/*0:0*/ u_axi__DOT____VdfgTmp_hbc4467cd__0;
    u_axi__DOT____VdfgTmp_hbc4467cd__0 = 0;
    // Body
    vlSelf->__PVT__dport_tcm_rd_w = ((IData)(vlSelf->u_dmux__DOT____VdfgTmp_h61d91652__0) 
                                     & (IData)(vlSymsp->TOP__v__u_core.__PVT__mem_d_rd_o));
    vlSelf->__PVT__dport_axi_rd_w = ((IData)(vlSelf->u_dmux__DOT____VdfgTmp_h71f788cd__0) 
                                     & (IData)(vlSymsp->TOP__v__u_core.__PVT__mem_d_rd_o));
    vlSelf->__PVT__dport_tcm_wr_w = ((IData)(vlSelf->u_dmux__DOT____VdfgTmp_h61d91652__0)
                                      ? (IData)(vlSymsp->TOP__v__u_core.__PVT__mem_d_wr_o)
                                      : 0U);
    vlSelf->__PVT__dport_axi_wr_w = ((IData)(vlSelf->u_dmux__DOT____VdfgTmp_h71f788cd__0)
                                      ? (IData)(vlSymsp->TOP__v__u_core.__PVT__mem_d_wr_o)
                                      : 0U);
    vlSelf->__PVT__u_dmux__DOT__request_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__mem_d_rd_o) 
                                             | ((0U 
                                                 != (IData)(vlSymsp->TOP__v__u_core.__PVT__mem_d_wr_o)) 
                                                | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q) 
                                                   | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                                                      | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q)))));
    u_axi__DOT____VdfgTmp_hbc4467cd__0 = ((IData)(vlSelf->__PVT__dport_axi_rd_w) 
                                          | (0U != (IData)(vlSelf->__PVT__dport_axi_wr_w)));
    u_dmux__DOT____VdfgTmp_h2136385b__0 = ((IData)(vlSelf->__PVT__u_dmux__DOT__request_w) 
                                           & (IData)(vlSelf->__PVT__dport_accept_w));
    vlSelf->__PVT__u_axi__DOT__req_push_w = ((IData)(u_axi__DOT____VdfgTmp_hbc4467cd__0) 
                                             & (2U 
                                                != (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q)));
    vlSelf->__PVT__u_axi__DOT__res_push_w = ((IData)(u_axi__DOT____VdfgTmp_hbc4467cd__0) 
                                             & (2U 
                                                != (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q)));
    vlSelf->__PVT__u_dmux__DOT__pending_r = vlSelf->__PVT__u_dmux__DOT__pending_q;
    if (((~ (IData)(vlSelf->__PVT__dport_ack_w)) & (IData)(u_dmux__DOT____VdfgTmp_h2136385b__0))) {
        vlSelf->__PVT__u_dmux__DOT__pending_r = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__u_dmux__DOT__pending_r)));
    } else if (((~ (IData)(u_dmux__DOT____VdfgTmp_h2136385b__0)) 
                & (IData)(vlSelf->__PVT__dport_ack_w))) {
        vlSelf->__PVT__u_dmux__DOT__pending_r = (0x1fU 
                                                 & ((IData)(vlSelf->__PVT__u_dmux__DOT__pending_r) 
                                                    - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vriscv_tcm_top_riscv_tcm_top___nba_sequent__TOP__v__0(Vriscv_tcm_top_riscv_tcm_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_tcm_top_riscv_tcm_top___nba_sequent__TOP__v__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__u_axi__DOT__u_req__DOT__count_q;
    __Vdly__u_axi__DOT__u_req__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q;
    __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q = 0;
    CData/*0:0*/ __Vdlyvdim0__u_axi__DOT__u_req__DOT__ram_q__v0;
    __Vdlyvdim0__u_axi__DOT__u_req__DOT__ram_q__v0 = 0;
    VlWide<3>/*68:0*/ __Vdlyvval__u_axi__DOT__u_req__DOT__ram_q__v0;
    VL_ZERO_W(69, __Vdlyvval__u_axi__DOT__u_req__DOT__ram_q__v0);
    CData/*0:0*/ __Vdlyvset__u_axi__DOT__u_req__DOT__ram_q__v0;
    __Vdlyvset__u_axi__DOT__u_req__DOT__ram_q__v0 = 0;
    CData/*1:0*/ __Vdly__u_axi__DOT__u_resp__DOT__count_q;
    __Vdly__u_axi__DOT__u_resp__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_axi__DOT__u_resp__DOT__rd_ptr_q;
    __Vdly__u_axi__DOT__u_resp__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_axi__DOT__u_resp__DOT__wr_ptr_q;
    __Vdly__u_axi__DOT__u_resp__DOT__wr_ptr_q = 0;
    CData/*0:0*/ __Vdlyvdim0__u_axi__DOT__u_resp__DOT__ram_q__v0;
    __Vdlyvdim0__u_axi__DOT__u_resp__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_axi__DOT__u_resp__DOT__ram_q__v0;
    __Vdlyvset__u_axi__DOT__u_resp__DOT__ram_q__v0 = 0;
    // Body
    __Vdly__u_axi__DOT__u_resp__DOT__wr_ptr_q = vlSelf->__PVT__u_axi__DOT__u_resp__DOT__wr_ptr_q;
    __Vdlyvset__u_axi__DOT__u_resp__DOT__ram_q__v0 = 0U;
    __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q = vlSelf->__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_axi__DOT__u_req__DOT__count_q = vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q;
    __Vdly__u_axi__DOT__u_resp__DOT__rd_ptr_q = vlSelf->__PVT__u_axi__DOT__u_resp__DOT__rd_ptr_q;
    __Vdly__u_axi__DOT__u_resp__DOT__count_q = vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q;
    __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q = vlSelf->__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q;
    __Vdlyvset__u_axi__DOT__u_req__DOT__ram_q__v0 = 0U;
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        __Vdly__u_axi__DOT__u_resp__DOT__wr_ptr_q = 0U;
        __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q = 0U;
        __Vdly__u_axi__DOT__u_req__DOT__count_q = 0U;
        __Vdly__u_axi__DOT__u_resp__DOT__rd_ptr_q = 0U;
        __Vdly__u_axi__DOT__u_resp__DOT__count_q = 0U;
        __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q = 0U;
        vlSelf->__PVT__u_axi__DOT__wvalid_inhibit_q = 0U;
        vlSelf->__PVT__u_axi__DOT__awvalid_inhibit_q = 0U;
        vlSelf->__PVT__u_dmux__DOT__pending_q = 0U;
        vlSelf->__PVT__u_axi__DOT__request_pending_q = 0U;
        vlSelf->__PVT__u_dmux__DOT__tcm_access_q = 0U;
    } else {
        if (((IData)(vlSelf->__PVT__u_axi__DOT__res_push_w) 
             & (2U != (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q)))) {
            __Vdlyvset__u_axi__DOT__u_resp__DOT__ram_q__v0 = 1U;
            __Vdlyvdim0__u_axi__DOT__u_resp__DOT__ram_q__v0 
                = vlSelf->__PVT__u_axi__DOT__u_resp__DOT__wr_ptr_q;
            __Vdly__u_axi__DOT__u_resp__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__wr_ptr_q)));
        }
        if (((IData)(vlSelf->__PVT__u_axi__DOT__req_pop_w) 
             & (0U != (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q)))) {
            __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q)));
        }
        if ((((IData)(vlSelf->__PVT__u_axi__DOT__req_push_w) 
              & (IData)(vlSelf->__PVT__u_axi__DOT__req_accept_w)) 
             & (~ ((IData)(vlSelf->__PVT__u_axi__DOT__req_pop_w) 
                   & (IData)(vlSelf->__PVT__u_axi__DOT__req_valid_w))))) {
            __Vdly__u_axi__DOT__u_req__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q)));
        } else if (((~ ((IData)(vlSelf->__PVT__u_axi__DOT__req_push_w) 
                        & (IData)(vlSelf->__PVT__u_axi__DOT__req_accept_w))) 
                    & ((IData)(vlSelf->__PVT__u_axi__DOT__req_pop_w) 
                       & (IData)(vlSelf->__PVT__u_axi__DOT__req_valid_w)))) {
            __Vdly__u_axi__DOT__u_req__DOT__count_q 
                = (3U & ((IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__dport_axi_ack_w) 
             & (0U != (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q)))) {
            __Vdly__u_axi__DOT__u_resp__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__rd_ptr_q)));
        }
        if ((((IData)(vlSelf->__PVT__u_axi__DOT__res_push_w) 
              & (IData)(vlSelf->__PVT__u_axi__DOT__res_accept_w)) 
             & (~ ((IData)(vlSelf->__PVT__dport_axi_ack_w) 
                   & (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__valid_o))))) {
            __Vdly__u_axi__DOT__u_resp__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q)));
        } else if (((~ ((IData)(vlSelf->__PVT__u_axi__DOT__res_push_w) 
                        & (IData)(vlSelf->__PVT__u_axi__DOT__res_accept_w))) 
                    & ((IData)(vlSelf->__PVT__dport_axi_ack_w) 
                       & (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__valid_o)))) {
            __Vdly__u_axi__DOT__u_resp__DOT__count_q 
                = (3U & ((IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__u_axi__DOT__req_push_w) 
             & (2U != (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q)))) {
            __Vdlyvval__u_axi__DOT__u_req__DOT__ram_q__v0[0U] 
                = (IData)((((QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffffffcU 
                                                         & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)))));
            __Vdlyvval__u_axi__DOT__u_req__DOT__ram_q__v0[1U] 
                = (IData)(((((QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)) 
                             << 0x20U) | (QData)((IData)(
                                                         (0xfffffffcU 
                                                          & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)))) 
                           >> 0x20U));
            __Vdlyvval__u_axi__DOT__u_req__DOT__ram_q__v0[2U] 
                = (((IData)(vlSelf->__PVT__dport_axi_rd_w) 
                    << 4U) | (IData)(vlSelf->__PVT__dport_axi_wr_w));
            __Vdlyvset__u_axi__DOT__u_req__DOT__ram_q__v0 = 1U;
            __Vdlyvdim0__u_axi__DOT__u_req__DOT__ram_q__v0 
                = vlSelf->__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q;
            __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q)));
        }
        if (((((IData)(vlSelf->axi_i_wvalid_o) & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_wready_i)) 
              & (IData)(vlSelf->axi_i_awvalid_o)) & 
             (~ (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_awready_i)))) {
            vlSelf->__PVT__u_axi__DOT__wvalid_inhibit_q = 1U;
        } else if (((IData)(vlSelf->axi_i_awvalid_o) 
                    & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_awready_i))) {
            vlSelf->__PVT__u_axi__DOT__wvalid_inhibit_q = 0U;
        }
        if (((((IData)(vlSelf->axi_i_awvalid_o) & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_awready_i)) 
              & (IData)(vlSelf->axi_i_wvalid_o)) & 
             (~ (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_wready_i)))) {
            vlSelf->__PVT__u_axi__DOT__awvalid_inhibit_q = 1U;
        } else if (((IData)(vlSelf->axi_i_wvalid_o) 
                    & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_wready_i))) {
            vlSelf->__PVT__u_axi__DOT__awvalid_inhibit_q = 0U;
        }
        vlSelf->__PVT__u_dmux__DOT__pending_q = vlSelf->__PVT__u_dmux__DOT__pending_r;
        if (((IData)(vlSelf->__PVT__u_axi__DOT__write_complete_w) 
             | (IData)(vlSelf->__PVT__u_axi__DOT__read_complete_w))) {
            vlSelf->__PVT__u_axi__DOT__request_pending_q = 1U;
        } else if (vlSelf->__PVT__dport_axi_ack_w) {
            vlSelf->__PVT__u_axi__DOT__request_pending_q = 0U;
        }
        if (((IData)(vlSelf->__PVT__u_dmux__DOT__request_w) 
             & (IData)(vlSelf->__PVT__dport_accept_w))) {
            vlSelf->__PVT__u_dmux__DOT__tcm_access_q 
                = (0x10000U > (0xfffffffcU & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q));
        }
    }
    vlSelf->__PVT__u_axi__DOT__u_resp__DOT__wr_ptr_q 
        = __Vdly__u_axi__DOT__u_resp__DOT__wr_ptr_q;
    if (__Vdlyvset__u_axi__DOT__u_resp__DOT__ram_q__v0) {
        vlSelf->__PVT__u_axi__DOT__u_resp__DOT__ram_q[__Vdlyvdim0__u_axi__DOT__u_resp__DOT__ram_q__v0] = 0U;
    }
    vlSelf->__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q 
        = __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q;
    vlSelf->__PVT__u_axi__DOT__u_resp__DOT__rd_ptr_q 
        = __Vdly__u_axi__DOT__u_resp__DOT__rd_ptr_q;
    vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q 
        = __Vdly__u_axi__DOT__u_resp__DOT__count_q;
    vlSelf->__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q 
        = __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q;
    if (__Vdlyvset__u_axi__DOT__u_req__DOT__ram_q__v0) {
        vlSelf->__PVT__u_axi__DOT__u_req__DOT__ram_q[__Vdlyvdim0__u_axi__DOT__u_req__DOT__ram_q__v0][0U] 
            = __Vdlyvval__u_axi__DOT__u_req__DOT__ram_q__v0[0U];
        vlSelf->__PVT__u_axi__DOT__u_req__DOT__ram_q[__Vdlyvdim0__u_axi__DOT__u_req__DOT__ram_q__v0][1U] 
            = __Vdlyvval__u_axi__DOT__u_req__DOT__ram_q__v0[1U];
        vlSelf->__PVT__u_axi__DOT__u_req__DOT__ram_q[__Vdlyvdim0__u_axi__DOT__u_req__DOT__ram_q__v0][2U] 
            = __Vdlyvval__u_axi__DOT__u_req__DOT__ram_q__v0[2U];
    }
    vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q 
        = __Vdly__u_axi__DOT__u_req__DOT__count_q;
    vlSelf->__PVT__u_axi__DOT__res_accept_w = (2U != (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q));
    vlSelf->__PVT__u_axi__DOT__u_resp__DOT__valid_o 
        = (0U != (IData)(vlSelf->__PVT__u_axi__DOT__u_resp__DOT__count_q));
    vlSelf->__PVT__u_axi__DOT__req_w[0U] = vlSelf->__PVT__u_axi__DOT__u_req__DOT__ram_q
        [vlSelf->__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][0U];
    vlSelf->__PVT__u_axi__DOT__req_w[1U] = vlSelf->__PVT__u_axi__DOT__u_req__DOT__ram_q
        [vlSelf->__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][1U];
    vlSelf->__PVT__u_axi__DOT__req_w[2U] = vlSelf->__PVT__u_axi__DOT__u_req__DOT__ram_q
        [vlSelf->__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U];
    vlSelf->__PVT__u_axi__DOT__req_accept_w = (2U != (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q));
    vlSelf->__PVT__u_axi__DOT__req_valid_w = (0U != (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q));
}

VL_INLINE_OPT void Vriscv_tcm_top_riscv_tcm_top___nba_sequent__TOP__v__1(Vriscv_tcm_top_riscv_tcm_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_tcm_top_riscv_tcm_top___nba_sequent__TOP__v__1\n"); );
    // Init
    CData/*0:0*/ u_axi__DOT____VdfgTmp_h4ca7c2de__0;
    u_axi__DOT____VdfgTmp_h4ca7c2de__0 = 0;
    // Body
    vlSelf->__PVT__dport_error_w = ((1U & (~ (IData)(vlSelf->__PVT__u_dmux__DOT__tcm_access_q))) 
                                    && ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_bvalid_i)
                                         ? (0U != (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_bresp_i))
                                         : (0U != (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rresp_i))));
    u_axi__DOT____VdfgTmp_h4ca7c2de__0 = ((~ ((~ (IData)(vlSelf->__PVT__dport_axi_ack_w)) 
                                              & (IData)(vlSelf->__PVT__u_axi__DOT__request_pending_q))) 
                                          & (0U != (IData)(vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q)));
    vlSelf->__PVT__dport_ack_w = ((IData)(vlSelf->__PVT__u_dmux__DOT__tcm_access_q)
                                   ? (IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_ack_q)
                                   : (IData)(vlSelf->__PVT__dport_axi_ack_w));
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

VL_INLINE_OPT void Vriscv_tcm_top_riscv_tcm_top___nba_comb__TOP__v__0(Vriscv_tcm_top_riscv_tcm_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_tcm_top_riscv_tcm_top___nba_comb__TOP__v__0\n"); );
    // Body
    vlSelf->__PVT__u_dmux__DOT__hold_w = ((0U != (IData)(vlSelf->__PVT__u_dmux__DOT__pending_q)) 
                                          & ((IData)(vlSelf->__PVT__u_dmux__DOT__tcm_access_q) 
                                             != (0x10000U 
                                                 > 
                                                 (0xfffffffcU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q))));
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
    vlSelf->__PVT__dport_tcm_invalidate_w = ((IData)(vlSelf->u_dmux__DOT____VdfgTmp_h61d91652__0) 
                                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
    vlSelf->__PVT__dport_tcm_writeback_w = ((IData)(vlSelf->u_dmux__DOT____VdfgTmp_h61d91652__0) 
                                            & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q));
    vlSelf->__PVT__dport_tcm_flush_w = ((IData)(vlSelf->u_dmux__DOT____VdfgTmp_h61d91652__0) 
                                        & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q));
}
