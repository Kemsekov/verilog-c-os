// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top___024root.h"

VL_ATTR_COLD void Vriscv_tcm_top___024root___eval_static(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vriscv_tcm_top___024root___eval_initial__TOP(Vriscv_tcm_top___024root* vlSelf);

VL_ATTR_COLD void Vriscv_tcm_top___024root___eval_initial(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_initial\n"); );
    // Body
    Vriscv_tcm_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__v__clk_i__0 
        = vlSelf->__Vcellinp__v__clk_i;
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__v__rst_i__0 
        = vlSelf->__Vcellinp__v__rst_i;
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__v__rst_cpu_i__0 
        = vlSelf->__Vcellinp__v__rst_cpu_i;
}

VL_ATTR_COLD void Vriscv_tcm_top___024root___eval_initial__TOP(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_initial__TOP\n"); );
    // Body
    VL_ASSIGN_SII(1,vlSelf->axi_i_bready_o, 1U);
    VL_ASSIGN_SII(1,vlSelf->axi_i_rready_o, 1U);
    VL_ASSIGN_SUI(2,vlSelf->axi_t_bresp_o, 0U);
    VL_ASSIGN_SUI(2,vlSelf->axi_t_rresp_o, 0U);
}

VL_ATTR_COLD void Vriscv_tcm_top___024root___eval_final(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_tcm_top___024root___dump_triggers__stl(Vriscv_tcm_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vriscv_tcm_top___024root___eval_phase__stl(Vriscv_tcm_top___024root* vlSelf);

VL_ATTR_COLD void Vriscv_tcm_top___024root___eval_settle(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vriscv_tcm_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../src_v/../src_v/riscv_tcm_top.v", 45, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vriscv_tcm_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_tcm_top___024root___dump_triggers__stl(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_tcm_top___024root___eval_triggers__stl(Vriscv_tcm_top___024root* vlSelf);
VL_ATTR_COLD void Vriscv_tcm_top___024root___eval_stl(Vriscv_tcm_top___024root* vlSelf);

VL_ATTR_COLD bool Vriscv_tcm_top___024root___eval_phase__stl(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vriscv_tcm_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vriscv_tcm_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_tcm_top___024root___dump_triggers__ico(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_tcm_top___024root___dump_triggers__act(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge __Vcellinp__v__clk_i or posedge __Vcellinp__v__rst_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge __Vcellinp__v__clk_i or posedge __Vcellinp__v__rst_cpu_i)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge __Vcellinp__v__clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_tcm_top___024root___dump_triggers__nba(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge __Vcellinp__v__clk_i or posedge __Vcellinp__v__rst_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge __Vcellinp__v__clk_i or posedge __Vcellinp__v__rst_cpu_i)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge __Vcellinp__v__clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_tcm_top___024root___ctor_var_reset(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellinp__v__intr_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__v__axi_t_rready_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__axi_t_arburst_i = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__v__axi_t_arlen_i = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__v__axi_t_arid_i = VL_RAND_RESET_I(4);
    vlSelf->__Vcellinp__v__axi_t_araddr_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__v__axi_t_arvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__axi_t_bready_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__axi_t_wlast_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__axi_t_wstrb_i = VL_RAND_RESET_I(4);
    vlSelf->__Vcellinp__v__axi_t_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__v__axi_t_wvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__axi_t_awburst_i = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__v__axi_t_awlen_i = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__v__axi_t_awid_i = VL_RAND_RESET_I(4);
    vlSelf->__Vcellinp__v__axi_t_awaddr_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__v__axi_t_awvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__axi_i_rresp_i = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__v__axi_i_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__v__axi_i_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__axi_i_arready_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__axi_i_bresp_i = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__v__axi_i_bvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__axi_i_wready_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__axi_i_awready_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__rst_cpu_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__v__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__v__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__v__rst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__v__rst_cpu_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
