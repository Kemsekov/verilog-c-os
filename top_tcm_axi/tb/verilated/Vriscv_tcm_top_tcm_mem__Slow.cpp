// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top__Syms.h"
#include "Vriscv_tcm_top_tcm_mem.h"

void Vriscv_tcm_top_tcm_mem___ctor_var_reset(Vriscv_tcm_top_tcm_mem* vlSelf);

Vriscv_tcm_top_tcm_mem::Vriscv_tcm_top_tcm_mem(Vriscv_tcm_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv_tcm_top_tcm_mem___ctor_var_reset(this);
}

void Vriscv_tcm_top_tcm_mem::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vriscv_tcm_top_tcm_mem::~Vriscv_tcm_top_tcm_mem() {
}
