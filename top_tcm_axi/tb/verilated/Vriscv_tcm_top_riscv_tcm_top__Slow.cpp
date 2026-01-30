// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top_riscv_tcm_top.h"

void Vriscv_tcm_top_riscv_tcm_top___ctor_var_reset(Vriscv_tcm_top_riscv_tcm_top* vlSelf);

Vriscv_tcm_top_riscv_tcm_top::Vriscv_tcm_top_riscv_tcm_top(Vriscv_tcm_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv_tcm_top_riscv_tcm_top___ctor_var_reset(this);
}

void Vriscv_tcm_top_riscv_tcm_top::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vriscv_tcm_top_riscv_tcm_top::~Vriscv_tcm_top_riscv_tcm_top() {
}
