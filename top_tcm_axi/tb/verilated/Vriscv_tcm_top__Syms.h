// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISCV_TCM_TOP__SYMS_H_
#define VERILATED_VRISCV_TCM_TOP__SYMS_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vriscv_tcm_top.h"

// INCLUDE MODULE CLASSES
#include "Vriscv_tcm_top___024root.h"
#include "Vriscv_tcm_top_riscv_tcm_top.h"
#include "Vriscv_tcm_top_tcm_mem.h"
#include "Vriscv_tcm_top_riscv_core__M0_MBffffffff.h"
#include "Vriscv_tcm_top_riscv_issue.h"
#include "Vriscv_tcm_top_tcm_mem_ram.h"
#include "Vriscv_tcm_top_riscv_csr__SB0.h"
#include "Vriscv_tcm_top_riscv_csr_regfile.h"
#include "Vriscv_tcm_top_riscv_regfile.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vriscv_tcm_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vriscv_tcm_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vriscv_tcm_top___024root       TOP;
    Vriscv_tcm_top_riscv_tcm_top   TOP__v;
    Vriscv_tcm_top_riscv_core__M0_MBffffffff TOP__v__u_core;
    Vriscv_tcm_top_riscv_csr__SB0  TOP__v__u_core__u_csr;
    Vriscv_tcm_top_riscv_csr_regfile TOP__v__u_core__u_csr__u_csrfile;
    Vriscv_tcm_top_riscv_issue     TOP__v__u_core__u_issue;
    Vriscv_tcm_top_riscv_regfile   TOP__v__u_core__u_issue__u_regfile;
    Vriscv_tcm_top_tcm_mem         TOP__v__u_tcm;
    Vriscv_tcm_top_tcm_mem_ram     TOP__v__u_tcm__u_ram;

    // SCOPE NAMES
    VerilatedScope __Vscope_v__u_tcm__u_ram;

    // CONSTRUCTORS
    Vriscv_tcm_top__Syms(VerilatedContext* contextp, const char* namep, Vriscv_tcm_top* modelp);
    ~Vriscv_tcm_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
