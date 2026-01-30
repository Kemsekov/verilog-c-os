// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top_tcm_mem_ram.h"

VL_ATTR_COLD void Vriscv_tcm_top_tcm_mem_ram___ctor_var_reset(Vriscv_tcm_top_tcm_mem_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_tcm_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_tcm_top_tcm_mem_ram___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk0_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst0_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr0_i = VL_RAND_RESET_I(14);
    vlSelf->__PVT__data0_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wr0_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__clk1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr1_i = VL_RAND_RESET_I(14);
    vlSelf->__PVT__data1_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wr1_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__data0_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data1_o = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__ram_read0_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_read1_q = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__ram__v0 = 0;
    vlSelf->__Vdlyvlsb__ram__v0 = 0;
    vlSelf->__Vdlyvval__ram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__ram__v1 = 0;
    vlSelf->__Vdlyvlsb__ram__v1 = 0;
    vlSelf->__Vdlyvval__ram__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__ram__v1 = 0;
    vlSelf->__Vdlyvdim0__ram__v2 = 0;
    vlSelf->__Vdlyvlsb__ram__v2 = 0;
    vlSelf->__Vdlyvval__ram__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__ram__v2 = 0;
    vlSelf->__Vdlyvdim0__ram__v3 = 0;
    vlSelf->__Vdlyvlsb__ram__v3 = 0;
    vlSelf->__Vdlyvval__ram__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__ram__v3 = 0;
}
