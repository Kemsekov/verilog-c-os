// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top_tcm_mem_ram.h"

VL_INLINE_OPT void Vriscv_tcm_top_tcm_mem_ram___nba_sequent__TOP__v__u_tcm__u_ram__0(Vriscv_tcm_top_tcm_mem_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_tcm_mem_ram___nba_sequent__TOP__v__u_tcm__u_ram__0\n"); );
    // Body
    vlSelf->__Vdlyvset__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ram__v1 = 0U;
    vlSelf->__Vdlyvset__ram__v2 = 0U;
    vlSelf->__Vdlyvset__ram__v3 = 0U;
    if ((1U & ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                ? (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_wr_w)
                : (IData)(vlSymsp->TOP__v__u_tcm.__PVT__ext_wr_w)))) {
        vlSelf->__Vdlyvval__ram__v0 = (0xffU & ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                                                 ? vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q
                                                 : vlSymsp->TOP.__Vcellinp__v__axi_t_wdata_i));
        vlSelf->__Vdlyvset__ram__v0 = 1U;
        vlSelf->__Vdlyvlsb__ram__v0 = 0U;
        vlSelf->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__v__u_tcm.__PVT__muxed_addr_w;
    }
    if ((2U & ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                ? (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_wr_w)
                : (IData)(vlSymsp->TOP__v__u_tcm.__PVT__ext_wr_w)))) {
        vlSelf->__Vdlyvval__ram__v1 = (0xffU & (((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                                                  ? vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q
                                                  : vlSymsp->TOP.__Vcellinp__v__axi_t_wdata_i) 
                                                >> 8U));
        vlSelf->__Vdlyvset__ram__v1 = 1U;
        vlSelf->__Vdlyvlsb__ram__v1 = 8U;
        vlSelf->__Vdlyvdim0__ram__v1 = vlSymsp->TOP__v__u_tcm.__PVT__muxed_addr_w;
    }
    if ((4U & ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                ? (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_wr_w)
                : (IData)(vlSymsp->TOP__v__u_tcm.__PVT__ext_wr_w)))) {
        vlSelf->__Vdlyvval__ram__v2 = (0xffU & (((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                                                  ? vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q
                                                  : vlSymsp->TOP.__Vcellinp__v__axi_t_wdata_i) 
                                                >> 0x10U));
        vlSelf->__Vdlyvset__ram__v2 = 1U;
        vlSelf->__Vdlyvlsb__ram__v2 = 0x10U;
        vlSelf->__Vdlyvdim0__ram__v2 = vlSymsp->TOP__v__u_tcm.__PVT__muxed_addr_w;
    }
    if ((8U & ((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                ? (IData)(vlSymsp->TOP__v.__PVT__dport_tcm_wr_w)
                : (IData)(vlSymsp->TOP__v__u_tcm.__PVT__ext_wr_w)))) {
        vlSelf->__Vdlyvval__ram__v3 = (((IData)(vlSymsp->TOP__v__u_tcm.__PVT__mem_d_accept_q)
                                         ? vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q
                                         : vlSymsp->TOP.__Vcellinp__v__axi_t_wdata_i) 
                                       >> 0x18U);
        vlSelf->__Vdlyvset__ram__v3 = 1U;
        vlSelf->__Vdlyvlsb__ram__v3 = 0x18U;
        vlSelf->__Vdlyvdim0__ram__v3 = vlSymsp->TOP__v__u_tcm.__PVT__muxed_addr_w;
    }
    vlSelf->__PVT__ram_read0_q = vlSelf->ram[(0x3fffU 
                                              & (vlSymsp->TOP__v__u_core.__PVT__u_fetch__DOT__pc_f_q 
                                                 >> 2U))];
}

VL_INLINE_OPT void Vriscv_tcm_top_tcm_mem_ram___nba_sequent__TOP__v__u_tcm__u_ram__1(Vriscv_tcm_top_tcm_mem_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_tcm_mem_ram___nba_sequent__TOP__v__u_tcm__u_ram__1\n"); );
    // Body
    vlSelf->__PVT__ram_read1_q = vlSelf->ram[vlSymsp->TOP__v__u_tcm.__PVT__muxed_addr_w];
    if (vlSelf->__Vdlyvset__ram__v0) {
        vlSelf->ram[vlSelf->__Vdlyvdim0__ram__v0] = 
            (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ram__v0))) 
              & vlSelf->ram[vlSelf->__Vdlyvdim0__ram__v0]) 
             | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__ram__v0) 
                                 << (IData)(vlSelf->__Vdlyvlsb__ram__v0))));
    }
    if (vlSelf->__Vdlyvset__ram__v1) {
        vlSelf->ram[vlSelf->__Vdlyvdim0__ram__v1] = 
            (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ram__v1))) 
              & vlSelf->ram[vlSelf->__Vdlyvdim0__ram__v1]) 
             | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__ram__v1) 
                                 << (IData)(vlSelf->__Vdlyvlsb__ram__v1))));
    }
    if (vlSelf->__Vdlyvset__ram__v2) {
        vlSelf->ram[vlSelf->__Vdlyvdim0__ram__v2] = 
            (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ram__v2))) 
              & vlSelf->ram[vlSelf->__Vdlyvdim0__ram__v2]) 
             | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__ram__v2) 
                                 << (IData)(vlSelf->__Vdlyvlsb__ram__v2))));
    }
    if (vlSelf->__Vdlyvset__ram__v3) {
        vlSelf->ram[vlSelf->__Vdlyvdim0__ram__v3] = 
            (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ram__v3))) 
              & vlSelf->ram[vlSelf->__Vdlyvdim0__ram__v3]) 
             | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__ram__v3) 
                                 << (IData)(vlSelf->__Vdlyvlsb__ram__v3))));
    }
}
