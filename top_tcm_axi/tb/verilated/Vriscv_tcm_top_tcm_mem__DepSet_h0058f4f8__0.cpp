// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top_tcm_mem.h"

bool Vriscv_tcm_top_tcm_mem::write(uint32_t addr, uint32_t data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_tcm_top_tcm_mem::write\n"); );
    VL_OUT8(write__Vfuncrtn,0,0);
    // Body
    vlSymsp->TOP__v__u_tcm__u_ram.ram[(0x3fffU & (addr 
                                                  >> 2U))] 
        = ((2U & addr) ? ((1U & addr) ? ((0xffffffU 
                                          & vlSymsp->TOP__v__u_tcm__u_ram.ram
                                          [(0x3fffU 
                                            & (addr 
                                               >> 2U))]) 
                                         | ((IData)(data) 
                                            << 0x18U))
                           : ((0xff00ffffU & vlSymsp->TOP__v__u_tcm__u_ram.ram
                               [(0x3fffU & (addr >> 2U))]) 
                              | ((IData)(data) << 0x10U)))
            : ((1U & addr) ? ((0xffff00ffU & vlSymsp->TOP__v__u_tcm__u_ram.ram
                               [(0x3fffU & (addr >> 2U))]) 
                              | ((IData)(data) << 8U))
                : ((0xffffff00U & vlSymsp->TOP__v__u_tcm__u_ram.ram
                    [(0x3fffU & (addr >> 2U))]) | (IData)(data))));
    // Final
    return (write__Vfuncrtn);
}

uint32_t Vriscv_tcm_top_tcm_mem::read(uint32_t addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_tcm_top_tcm_mem::read\n"); );
    VL_OUT8(read__Vfuncrtn,7,0);
    // Body
    read__Vfuncrtn = (0xffU & ((2U & addr) ? ((1U & addr)
                                               ? (vlSymsp->TOP__v__u_tcm__u_ram.ram
                                                  [
                                                  (0x3fffU 
                                                   & (addr 
                                                      >> 2U))] 
                                                  >> 0x18U)
                                               : (vlSymsp->TOP__v__u_tcm__u_ram.ram
                                                  [
                                                  (0x3fffU 
                                                   & (addr 
                                                      >> 2U))] 
                                                  >> 0x10U))
                                : ((1U & addr) ? (vlSymsp->TOP__v__u_tcm__u_ram.ram
                                                  [
                                                  (0x3fffU 
                                                   & (addr 
                                                      >> 2U))] 
                                                  >> 8U)
                                    : vlSymsp->TOP__v__u_tcm__u_ram.ram
                                   [(0x3fffU & (addr 
                                                >> 2U))])));
    // Final
    return (read__Vfuncrtn);
}

VL_INLINE_OPT void Vriscv_tcm_top_tcm_mem___ico_sequent__TOP__v__u_tcm__0(Vriscv_tcm_top_tcm_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_tcm_top_tcm_mem___ico_sequent__TOP__v__u_tcm__0\n"); );
    // Body
    vlSelf->__PVT__u_conv__DOT__resp_accept_w = (((IData)(vlSelf->__PVT__axi_rvalid_o) 
                                                  & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_rready_i)) 
                                                 | (((IData)(vlSelf->__PVT__axi_bvalid_o) 
                                                     & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_bready_i)) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->__PVT__u_conv__DOT__req_out_w) 
                                                         >> 4U)) 
                                                       & (IData)(vlSelf->u_conv__DOT____VdfgTmp_hf985a723__0))));
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
    vlSelf->__PVT__u_conv__DOT__req_push_w = ((~ (IData)(vlSelf->__PVT__mem_d_accept_q)) 
                                              & ((IData)(vlSelf->__PVT__ext_rd_w) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT__ext_wr_w))));
}

extern const VlUnpacked<CData/*1:0*/, 128> Vriscv_tcm_top__ConstPool__TABLE_hc76bdce3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vriscv_tcm_top__ConstPool__TABLE_h58e8de91_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vriscv_tcm_top__ConstPool__TABLE_hfad4052b_0;

VL_INLINE_OPT void Vriscv_tcm_top_tcm_mem___nba_sequent__TOP__v__u_tcm__0(Vriscv_tcm_top_tcm_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_tcm_top_tcm_mem___nba_sequent__TOP__v__u_tcm__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_u_conv__DOT__calculate_addr_next__0__Vfuncout;
    __Vfunc_u_conv__DOT__calculate_addr_next__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_u_conv__DOT__calculate_addr_next__0__addr;
    __Vfunc_u_conv__DOT__calculate_addr_next__0__addr = 0;
    IData/*31:0*/ __Vfunc_u_conv__DOT__calculate_addr_next__1__Vfuncout;
    __Vfunc_u_conv__DOT__calculate_addr_next__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_u_conv__DOT__calculate_addr_next__1__addr;
    __Vfunc_u_conv__DOT__calculate_addr_next__1__addr = 0;
    IData/*31:0*/ __Vfunc_u_conv__DOT__calculate_addr_next__2__Vfuncout;
    __Vfunc_u_conv__DOT__calculate_addr_next__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_u_conv__DOT__calculate_addr_next__2__addr;
    __Vfunc_u_conv__DOT__calculate_addr_next__2__addr = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vdly__u_conv__DOT__req_len_q;
    __Vdly__u_conv__DOT__req_len_q = 0;
    IData/*31:0*/ __Vdly__u_conv__DOT__req_addr_q;
    __Vdly__u_conv__DOT__req_addr_q = 0;
    CData/*0:0*/ __Vdly__u_conv__DOT__req_prio_q;
    __Vdly__u_conv__DOT__req_prio_q = 0;
    CData/*2:0*/ __Vdly__u_conv__DOT__u_requests__DOT__count;
    __Vdly__u_conv__DOT__u_requests__DOT__count = 0;
    CData/*1:0*/ __Vdly__u_conv__DOT__u_requests__DOT__rd_ptr;
    __Vdly__u_conv__DOT__u_requests__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__u_conv__DOT__u_requests__DOT__wr_ptr;
    __Vdly__u_conv__DOT__u_requests__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdlyvdim0__u_conv__DOT__u_requests__DOT__ram__v0;
    __Vdlyvdim0__u_conv__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvval__u_conv__DOT__u_requests__DOT__ram__v0;
    __Vdlyvval__u_conv__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_conv__DOT__u_requests__DOT__ram__v0;
    __Vdlyvset__u_conv__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*2:0*/ __Vdly__u_conv__DOT__u_response__DOT__count;
    __Vdly__u_conv__DOT__u_response__DOT__count = 0;
    CData/*1:0*/ __Vdly__u_conv__DOT__u_response__DOT__rd_ptr;
    __Vdly__u_conv__DOT__u_response__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__u_conv__DOT__u_response__DOT__wr_ptr;
    __Vdly__u_conv__DOT__u_response__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdlyvdim0__u_conv__DOT__u_response__DOT__ram__v0;
    __Vdlyvdim0__u_conv__DOT__u_response__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__u_conv__DOT__u_response__DOT__ram__v0;
    __Vdlyvval__u_conv__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_conv__DOT__u_response__DOT__ram__v0;
    __Vdlyvset__u_conv__DOT__u_response__DOT__ram__v0 = 0;
    // Body
    __Vdly__u_conv__DOT__u_response__DOT__rd_ptr = vlSelf->__PVT__u_conv__DOT__u_response__DOT__rd_ptr;
    __Vdly__u_conv__DOT__u_requests__DOT__rd_ptr = vlSelf->__PVT__u_conv__DOT__u_requests__DOT__rd_ptr;
    __Vdly__u_conv__DOT__req_prio_q = vlSelf->__PVT__u_conv__DOT__req_prio_q;
    __Vdly__u_conv__DOT__u_requests__DOT__count = vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count;
    __Vdly__u_conv__DOT__u_requests__DOT__wr_ptr = vlSelf->__PVT__u_conv__DOT__u_requests__DOT__wr_ptr;
    __Vdlyvset__u_conv__DOT__u_requests__DOT__ram__v0 = 0U;
    __Vdly__u_conv__DOT__u_response__DOT__count = vlSelf->__PVT__u_conv__DOT__u_response__DOT__count;
    __Vdly__u_conv__DOT__req_len_q = vlSelf->__PVT__u_conv__DOT__req_len_q;
    __Vdly__u_conv__DOT__req_addr_q = vlSelf->__PVT__u_conv__DOT__req_addr_q;
    __Vdly__u_conv__DOT__u_response__DOT__wr_ptr = vlSelf->__PVT__u_conv__DOT__u_response__DOT__wr_ptr;
    __Vdlyvset__u_conv__DOT__u_response__DOT__ram__v0 = 0U;
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        __Vdly__u_conv__DOT__u_response__DOT__rd_ptr = 0U;
        __Vdly__u_conv__DOT__u_requests__DOT__rd_ptr = 0U;
        __Vdly__u_conv__DOT__req_prio_q = 0U;
        __Vdly__u_conv__DOT__u_requests__DOT__count = 0U;
        __Vdly__u_conv__DOT__u_requests__DOT__wr_ptr = 0U;
        __Vdly__u_conv__DOT__u_response__DOT__count = 0U;
        __Vdly__u_conv__DOT__u_response__DOT__wr_ptr = 0U;
        vlSelf->__PVT__u_conv__DOT__req_axburst_q = 0U;
        vlSelf->__PVT__u_conv__DOT__req_axlen_q = 0U;
        vlSelf->__PVT__mem_d_tag_q = 0U;
        __Vdly__u_conv__DOT__req_len_q = 0U;
        __Vdly__u_conv__DOT__req_addr_q = 0U;
        vlSelf->__PVT__u_conv__DOT__req_wr_q = 0U;
        vlSelf->__PVT__u_conv__DOT__req_rd_q = 0U;
        vlSelf->__PVT__u_conv__DOT__req_id_q = 0U;
    } else {
        if (((IData)(vlSelf->__PVT__u_conv__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__count)))) {
            __Vdly__u_conv__DOT__u_response__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__rd_ptr)));
        }
        if (((IData)(vlSelf->__PVT__u_conv__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count)))) {
            __Vdly__u_conv__DOT__u_requests__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__rd_ptr)));
        }
        if ((((IData)(vlSelf->__PVT__u_conv__DOT__req_push_w) 
              & (IData)(vlSelf->__PVT__u_conv__DOT__req_fifo_accept_w)) 
             & (~ ((IData)(vlSelf->__PVT__u_conv__DOT__resp_accept_w) 
                   & (IData)(vlSelf->__PVT__u_conv__DOT__req_out_valid_w))))) {
            __Vdly__u_conv__DOT__u_requests__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count)));
        } else if (((~ ((IData)(vlSelf->__PVT__u_conv__DOT__req_push_w) 
                        & (IData)(vlSelf->__PVT__u_conv__DOT__req_fifo_accept_w))) 
                    & ((IData)(vlSelf->__PVT__u_conv__DOT__resp_accept_w) 
                       & (IData)(vlSelf->__PVT__u_conv__DOT__req_out_valid_w)))) {
            __Vdly__u_conv__DOT__u_requests__DOT__count 
                = (7U & ((IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__u_conv__DOT__req_push_w) 
             & (4U != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count)))) {
            __Vdlyvval__u_conv__DOT__u_requests__DOT__ram__v0 
                = (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_arvalid_i) 
                    & (IData)(vlSelf->__PVT__axi_arready_o))
                    ? (0x20U | (((0U == (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_arlen_i)) 
                                 << 4U) | (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_arid_i)))
                    : (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_awvalid_i) 
                        & (IData)(vlSelf->__PVT__axi_awready_o))
                        ? (((0U == (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_awlen_i)) 
                            << 4U) | (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_awid_i))
                        : (((IData)(vlSelf->__PVT__ext_rd_w) 
                            << 5U) | (((0U == (IData)(vlSelf->__PVT__u_conv__DOT__req_len_q)) 
                                       << 4U) | (IData)(vlSelf->__PVT__u_conv__DOT__req_id_q)))));
            __Vdlyvset__u_conv__DOT__u_requests__DOT__ram__v0 = 1U;
            __Vdlyvdim0__u_conv__DOT__u_requests__DOT__ram__v0 
                = vlSelf->__PVT__u_conv__DOT__u_requests__DOT__wr_ptr;
            __Vdly__u_conv__DOT__u_requests__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__wr_ptr)));
        }
        if ((((IData)(vlSelf->__PVT__ext_ack_q) & (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__accept_o)) 
             & (~ ((IData)(vlSelf->__PVT__u_conv__DOT__resp_accept_w) 
                   & (IData)(vlSelf->__PVT__u_conv__DOT__resp_valid_w))))) {
            __Vdly__u_conv__DOT__u_response__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__count)));
        } else if (((~ ((IData)(vlSelf->__PVT__ext_ack_q) 
                        & (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__accept_o))) 
                    & ((IData)(vlSelf->__PVT__u_conv__DOT__resp_accept_w) 
                       & (IData)(vlSelf->__PVT__u_conv__DOT__resp_valid_w)))) {
            __Vdly__u_conv__DOT__u_response__DOT__count 
                = (7U & ((IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__count) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->__PVT__ext_ack_q) & (4U 
                                                  != (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__count)))) {
            __Vdlyvval__u_conv__DOT__u_response__DOT__ram__v0 
                = vlSymsp->TOP__v__u_tcm__u_ram.__PVT__ram_read1_q;
            __Vdlyvset__u_conv__DOT__u_response__DOT__ram__v0 = 1U;
            __Vdlyvdim0__u_conv__DOT__u_response__DOT__ram__v0 
                = vlSelf->__PVT__u_conv__DOT__u_response__DOT__wr_ptr;
            __Vdly__u_conv__DOT__u_response__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__wr_ptr)));
        }
        if (((((((IData)(vlSymsp->TOP__v.__PVT__dport_tcm_rd_w) 
                 | (0U != (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_wr_w))) 
                | (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_flush_w)) 
               | (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_invalidate_w)) 
              | (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_writeback_w)) 
             & (IData)(vlSelf->__PVT__mem_d_accept_q))) {
            vlSelf->__PVT__mem_d_tag_q = 0U;
        }
        if ((((0U != (IData)(vlSelf->__PVT__ext_wr_w)) 
              | (IData)(vlSelf->__PVT__ext_rd_w)) & 
             (~ (IData)(vlSelf->__PVT__mem_d_accept_q)))) {
            if ((0U == (IData)(vlSelf->__PVT__u_conv__DOT__req_len_q))) {
                vlSelf->__PVT__u_conv__DOT__req_rd_q = 0U;
                vlSelf->__PVT__u_conv__DOT__req_wr_q = 0U;
            } else {
                __Vfunc_u_conv__DOT__calculate_addr_next__0__addr 
                    = vlSelf->__PVT__u_conv__DOT__req_addr_q;
                __Vdly__u_conv__DOT__req_len_q = (0xffU 
                                                  & ((IData)(vlSelf->__PVT__u_conv__DOT__req_len_q) 
                                                     - (IData)(1U)));
                vlSelf->__PVT__u_conv__DOT__calculate_addr_next__Vstatic__mask = 0U;
                __Vfunc_u_conv__DOT__calculate_addr_next__0__Vfuncout 
                    = ((IData)(4U) + __Vfunc_u_conv__DOT__calculate_addr_next__0__addr);
                __Vdly__u_conv__DOT__req_addr_q = __Vfunc_u_conv__DOT__calculate_addr_next__0__Vfuncout;
            }
        }
        if (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_awvalid_i) 
             & (IData)(vlSelf->__PVT__axi_awready_o))) {
            __Vdly__u_conv__DOT__req_prio_q = (1U & 
                                               (~ (IData)(vlSelf->__PVT__u_conv__DOT__req_prio_q)));
            vlSelf->__PVT__u_conv__DOT__req_axburst_q 
                = vlSymsp->TOP.__Vcellinp__v__axi_t_awburst_i;
            vlSelf->__PVT__u_conv__DOT__req_axlen_q 
                = vlSymsp->TOP.__Vcellinp__v__axi_t_awlen_i;
            if (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_wvalid_i) 
                 & (IData)(vlSelf->__PVT__axi_wready_o))) {
                __Vfunc_u_conv__DOT__calculate_addr_next__1__addr 
                    = vlSymsp->TOP.__Vcellinp__v__axi_t_awaddr_i;
                vlSelf->__PVT__u_conv__DOT__calculate_addr_next__Vstatic__mask = 0U;
                __Vfunc_u_conv__DOT__calculate_addr_next__1__Vfuncout 
                    = ((IData)(4U) + __Vfunc_u_conv__DOT__calculate_addr_next__1__addr);
                vlSelf->__PVT__u_conv__DOT__req_wr_q 
                    = (1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_wlast_i)));
                __Vdly__u_conv__DOT__req_len_q = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_awlen_i) 
                                                     - (IData)(1U)));
                __Vdly__u_conv__DOT__req_addr_q = __Vfunc_u_conv__DOT__calculate_addr_next__1__Vfuncout;
            } else {
                vlSelf->__PVT__u_conv__DOT__req_wr_q = 1U;
                __Vdly__u_conv__DOT__req_len_q = vlSymsp->TOP.__Vcellinp__v__axi_t_awlen_i;
                __Vdly__u_conv__DOT__req_addr_q = vlSymsp->TOP.__Vcellinp__v__axi_t_awaddr_i;
            }
            vlSelf->__PVT__u_conv__DOT__req_id_q = vlSymsp->TOP.__Vcellinp__v__axi_t_awid_i;
        } else if (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_arvalid_i) 
                    & (IData)(vlSelf->__PVT__axi_arready_o))) {
            __Vdly__u_conv__DOT__req_prio_q = (1U & 
                                               (~ (IData)(vlSelf->__PVT__u_conv__DOT__req_prio_q)));
            vlSelf->__PVT__u_conv__DOT__req_axburst_q 
                = vlSymsp->TOP.__Vcellinp__v__axi_t_arburst_i;
            vlSelf->__PVT__u_conv__DOT__req_axlen_q 
                = vlSymsp->TOP.__Vcellinp__v__axi_t_arlen_i;
            __Vfunc_u_conv__DOT__calculate_addr_next__2__addr 
                = vlSymsp->TOP.__Vcellinp__v__axi_t_araddr_i;
            vlSelf->__PVT__u_conv__DOT__calculate_addr_next__Vstatic__mask = 0U;
            __Vfunc_u_conv__DOT__calculate_addr_next__2__Vfuncout 
                = ((IData)(4U) + __Vfunc_u_conv__DOT__calculate_addr_next__2__addr);
            vlSelf->__PVT__u_conv__DOT__req_rd_q = 
                (0U != (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_arlen_i));
            __Vdly__u_conv__DOT__req_len_q = (0xffU 
                                              & ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_arlen_i) 
                                                 - (IData)(1U)));
            __Vdly__u_conv__DOT__req_addr_q = __Vfunc_u_conv__DOT__calculate_addr_next__2__Vfuncout;
            vlSelf->__PVT__u_conv__DOT__req_id_q = vlSymsp->TOP.__Vcellinp__v__axi_t_arid_i;
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__ext_wr_w) 
                     << 3U) | ((4U & ((~ (IData)(vlSelf->__PVT__mem_d_accept_q)) 
                                      << 2U)) | (((IData)(vlSelf->__PVT__ext_rd_w) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i))));
    if ((1U & Vriscv_tcm_top__ConstPool__TABLE_hc76bdce3_0
         [__Vtableidx1])) {
        vlSelf->__PVT__u_conv__DOT__req_hold_rd_q = 
            Vriscv_tcm_top__ConstPool__TABLE_h58e8de91_0
            [__Vtableidx1];
    }
    if ((2U & Vriscv_tcm_top__ConstPool__TABLE_hc76bdce3_0
         [__Vtableidx1])) {
        vlSelf->__PVT__u_conv__DOT__req_hold_wr_q = 
            Vriscv_tcm_top__ConstPool__TABLE_hfad4052b_0
            [__Vtableidx1];
    }
    vlSelf->__PVT__mem_d_ack_q = ((1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i))) 
                                  && ((((((IData)(vlSymsp->TOP__v.__PVT__dport_tcm_rd_w) 
                                          | (0U != (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_wr_w))) 
                                         | (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_flush_w)) 
                                        | (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_invalidate_w)) 
                                       | (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_writeback_w)) 
                                      & (IData)(vlSelf->__PVT__mem_d_accept_q)));
    vlSelf->__PVT__u_conv__DOT__u_response__DOT__rd_ptr 
        = __Vdly__u_conv__DOT__u_response__DOT__rd_ptr;
    vlSelf->__PVT__u_conv__DOT__u_requests__DOT__rd_ptr 
        = __Vdly__u_conv__DOT__u_requests__DOT__rd_ptr;
    vlSelf->__PVT__u_conv__DOT__req_prio_q = __Vdly__u_conv__DOT__req_prio_q;
    vlSelf->__PVT__u_conv__DOT__u_requests__DOT__wr_ptr 
        = __Vdly__u_conv__DOT__u_requests__DOT__wr_ptr;
    if (__Vdlyvset__u_conv__DOT__u_requests__DOT__ram__v0) {
        vlSelf->__PVT__u_conv__DOT__u_requests__DOT__ram[__Vdlyvdim0__u_conv__DOT__u_requests__DOT__ram__v0] 
            = __Vdlyvval__u_conv__DOT__u_requests__DOT__ram__v0;
    }
    vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count 
        = __Vdly__u_conv__DOT__u_requests__DOT__count;
    vlSelf->__PVT__u_conv__DOT__u_response__DOT__wr_ptr 
        = __Vdly__u_conv__DOT__u_response__DOT__wr_ptr;
    if (__Vdlyvset__u_conv__DOT__u_response__DOT__ram__v0) {
        vlSelf->__PVT__u_conv__DOT__u_response__DOT__ram[__Vdlyvdim0__u_conv__DOT__u_response__DOT__ram__v0] 
            = __Vdlyvval__u_conv__DOT__u_response__DOT__ram__v0;
    }
    vlSelf->__PVT__u_conv__DOT__u_response__DOT__count 
        = __Vdly__u_conv__DOT__u_response__DOT__count;
    vlSelf->__PVT__u_conv__DOT__req_len_q = __Vdly__u_conv__DOT__req_len_q;
    vlSelf->__PVT__u_conv__DOT__req_addr_q = __Vdly__u_conv__DOT__req_addr_q;
    vlSelf->__PVT__u_conv__DOT__req_out_w = vlSelf->__PVT__u_conv__DOT__u_requests__DOT__ram
        [vlSelf->__PVT__u_conv__DOT__u_requests__DOT__rd_ptr];
    vlSelf->__PVT__u_conv__DOT__req_fifo_accept_w = 
        (4U != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count));
    vlSelf->__PVT__u_conv__DOT__req_out_valid_w = (0U 
                                                   != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count));
    vlSelf->__PVT__u_conv__DOT__resp_valid_w = (0U 
                                                != (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__count));
    vlSelf->__PVT__u_conv__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelf->__PVT__u_conv__DOT__u_response__DOT__count));
    vlSelf->__PVT__ext_ack_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i)) 
                                & (((IData)(vlSelf->__PVT__ext_rd_w) 
                                    | (0U != (IData)(vlSelf->__PVT__ext_wr_w))) 
                                   & (~ (IData)(vlSelf->__PVT__mem_d_accept_q))));
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
    vlSelf->__PVT__axi_bvalid_o = ((IData)(vlSelf->u_conv__DOT____VdfgTmp_hf985a723__0) 
                                   & ((IData)(vlSelf->__PVT__u_conv__DOT__req_out_w) 
                                      >> 4U));
    vlSelf->__PVT__mem_d_accept_q = (1U & ((IData)(vlSymsp->TOP.__Vcellinp__v__rst_i) 
                                           | (~ ((IData)(vlSelf->__PVT__ext_rd_w) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT__ext_wr_w))))));
    vlSelf->u_conv__DOT____VdfgTmp_h0622edac__0 = (
                                                   (~ (IData)(vlSelf->__PVT__mem_d_accept_q)) 
                                                   & (4U 
                                                      != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count)));
}

VL_INLINE_OPT void Vriscv_tcm_top_tcm_mem___nba_sequent__TOP__v__u_tcm__1(Vriscv_tcm_top_tcm_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_tcm_top_tcm_mem___nba_sequent__TOP__v__u_tcm__1\n"); );
    // Body
    vlSelf->__PVT__u_conv__DOT__resp_accept_w = (((IData)(vlSelf->__PVT__axi_rvalid_o) 
                                                  & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_rready_i)) 
                                                 | (((IData)(vlSelf->__PVT__axi_bvalid_o) 
                                                     & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_bready_i)) 
                                                    | ((~ 
                                                        ((IData)(vlSelf->__PVT__u_conv__DOT__req_out_w) 
                                                         >> 4U)) 
                                                       & (IData)(vlSelf->u_conv__DOT____VdfgTmp_hf985a723__0))));
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
    vlSelf->__PVT__ext_rd_w = (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_arvalid_i) 
                                | (IData)(vlSelf->__PVT__u_conv__DOT__req_rd_q)) 
                               & ((~ (IData)(vlSelf->__PVT__u_conv__DOT__req_wr_q)) 
                                  & ((4U != (IData)(vlSelf->__PVT__u_conv__DOT__u_requests__DOT__count)) 
                                     & (((~ ((IData)(vlSelf->__PVT__u_conv__DOT__req_hold_wr_q) 
                                             | (IData)(vlSelf->__PVT__u_conv__DOT__req_prio_q))) 
                                         | (IData)(vlSelf->__PVT__u_conv__DOT__req_hold_rd_q)) 
                                        | ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_awvalid_i)) 
                                           | (IData)(vlSelf->__PVT__u_conv__DOT__req_rd_q))))));
    vlSelf->__PVT__mem_i_valid_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i)) 
                                    & (IData)(vlSymsp->TOP__v__u_core.__PVT__mem_i_rd_o));
    vlSelf->__PVT__ext_wr_w = (((IData)(vlSelf->__PVT__u_conv__DOT__write_active_w) 
                                & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_wvalid_i))
                                ? (IData)(vlSymsp->TOP.__Vcellinp__v__axi_t_wstrb_i)
                                : 0U);
    vlSelf->__PVT__axi_wready_o = ((IData)(vlSelf->__PVT__u_conv__DOT__write_active_w) 
                                   & (IData)(vlSelf->u_conv__DOT____VdfgTmp_h0622edac__0));
    vlSelf->__PVT__axi_awready_o = ((IData)(vlSelf->__PVT__u_conv__DOT__write_active_w) 
                                    & ((~ (IData)(vlSelf->__PVT__u_conv__DOT__req_wr_q)) 
                                       & (IData)(vlSelf->u_conv__DOT____VdfgTmp_h0622edac__0)));
    vlSelf->__PVT__axi_arready_o = ((IData)(vlSelf->__PVT__ext_rd_w) 
                                    & ((~ (IData)(vlSelf->__PVT__u_conv__DOT__req_rd_q)) 
                                       & (IData)(vlSelf->u_conv__DOT____VdfgTmp_h0622edac__0)));
    vlSelf->__PVT__u_conv__DOT__req_push_w = ((~ (IData)(vlSelf->__PVT__mem_d_accept_q)) 
                                              & ((IData)(vlSelf->__PVT__ext_rd_w) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT__ext_wr_w))));
}

VL_INLINE_OPT void Vriscv_tcm_top_tcm_mem___nba_comb__TOP__v__u_tcm__0(Vriscv_tcm_top_tcm_mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_tcm_top_tcm_mem___nba_comb__TOP__v__u_tcm__0\n"); );
    // Body
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
}
