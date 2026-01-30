// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top___024root.h"

VL_INLINE_OPT void Vriscv_tcm_top___024root___ico_sequent__TOP__0(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__clk_i, vlSelf->clk_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__rst_i, vlSelf->rst_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__rst_cpu_i, vlSelf->rst_cpu_i);
    VL_ASSIGN_ISU(4,vlSelf->__Vcellinp__v__axi_t_awid_i, vlSelf->axi_t_awid_i);
    VL_ASSIGN_ISU(8,vlSelf->__Vcellinp__v__axi_t_awlen_i, vlSelf->axi_t_awlen_i);
    VL_ASSIGN_ISU(2,vlSelf->__Vcellinp__v__axi_t_awburst_i, vlSelf->axi_t_awburst_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__v__axi_t_wdata_i, vlSelf->axi_t_wdata_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_t_wlast_i, vlSelf->axi_t_wlast_i);
    VL_ASSIGN_ISU(4,vlSelf->__Vcellinp__v__axi_t_arid_i, vlSelf->axi_t_arid_i);
    VL_ASSIGN_ISU(8,vlSelf->__Vcellinp__v__axi_t_arlen_i, vlSelf->axi_t_arlen_i);
    VL_ASSIGN_ISU(2,vlSelf->__Vcellinp__v__axi_t_arburst_i, vlSelf->axi_t_arburst_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_i_arready_i, vlSelf->axi_i_arready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_t_bready_i, vlSelf->axi_t_bready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_t_rready_i, vlSelf->axi_t_rready_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__v__axi_t_awaddr_i, vlSelf->axi_t_awaddr_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_t_wvalid_i, vlSelf->axi_t_wvalid_i);
    VL_ASSIGN_ISU(4,vlSelf->__Vcellinp__v__axi_t_wstrb_i, vlSelf->axi_t_wstrb_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__v__axi_t_araddr_i, vlSelf->axi_t_araddr_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_i_awready_i, vlSelf->axi_i_awready_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_i_wready_i, vlSelf->axi_i_wready_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__v__intr_i, vlSelf->intr_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_t_awvalid_i, vlSelf->axi_t_awvalid_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_t_arvalid_i, vlSelf->axi_t_arvalid_i);
    VL_ASSIGN_ISU(32,vlSelf->__Vcellinp__v__axi_i_rdata_i, vlSelf->axi_i_rdata_i);
    VL_ASSIGN_ISU(2,vlSelf->__Vcellinp__v__axi_i_bresp_i, vlSelf->axi_i_bresp_i);
    VL_ASSIGN_ISU(2,vlSelf->__Vcellinp__v__axi_i_rresp_i, vlSelf->axi_i_rresp_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_i_rvalid_i, vlSelf->axi_i_rvalid_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__v__axi_i_bvalid_i, vlSelf->axi_i_bvalid_i);
}

void Vriscv_tcm_top___024root___eval_triggers__ico(Vriscv_tcm_top___024root* vlSelf);
void Vriscv_tcm_top___024root___eval_ico(Vriscv_tcm_top___024root* vlSelf);

bool Vriscv_tcm_top___024root___eval_phase__ico(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vriscv_tcm_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vriscv_tcm_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vriscv_tcm_top___024root___eval_act(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_act\n"); );
}

void Vriscv_tcm_top___024root___eval_triggers__act(Vriscv_tcm_top___024root* vlSelf);

bool Vriscv_tcm_top___024root___eval_phase__act(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vriscv_tcm_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vriscv_tcm_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vriscv_tcm_top___024root___eval_nba(Vriscv_tcm_top___024root* vlSelf);

bool Vriscv_tcm_top___024root___eval_phase__nba(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vriscv_tcm_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_tcm_top___024root___dump_triggers__ico(Vriscv_tcm_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_tcm_top___024root___dump_triggers__nba(Vriscv_tcm_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_tcm_top___024root___dump_triggers__act(Vriscv_tcm_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv_tcm_top___024root___eval(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vriscv_tcm_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../src_v/../src_v/riscv_tcm_top.v", 45, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vriscv_tcm_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vriscv_tcm_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../src_v/../src_v/riscv_tcm_top.v", 45, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vriscv_tcm_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../src_v/../src_v/riscv_tcm_top.v", 45, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vriscv_tcm_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vriscv_tcm_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vriscv_tcm_top___024root___eval_debug_assertions(Vriscv_tcm_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_tcm_top___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
