// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top.h"
#include "Vriscv_tcm_top___024root.h"
#include "Vriscv_tcm_top_riscv_tcm_top.h"
#include "Vriscv_tcm_top_tcm_mem.h"
#include "Vriscv_tcm_top_riscv_core__M0_MBffffffff.h"
#include "Vriscv_tcm_top_riscv_issue.h"
#include "Vriscv_tcm_top_tcm_mem_ram.h"
#include "Vriscv_tcm_top_riscv_csr__SB0.h"
#include "Vriscv_tcm_top_riscv_csr_regfile.h"
#include "Vriscv_tcm_top_riscv_regfile.h"

// FUNCTIONS
Vriscv_tcm_top__Syms::~Vriscv_tcm_top__Syms()
{
}

Vriscv_tcm_top__Syms::Vriscv_tcm_top__Syms(VerilatedContext* contextp, const char* namep, Vriscv_tcm_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__v{this, Verilated::catName(namep, "v")}
    , TOP__v__u_core{this, Verilated::catName(namep, "v.u_core")}
    , TOP__v__u_core__u_csr{this, Verilated::catName(namep, "v.u_core.u_csr")}
    , TOP__v__u_core__u_csr__u_csrfile{this, Verilated::catName(namep, "v.u_core.u_csr.u_csrfile")}
    , TOP__v__u_core__u_issue{this, Verilated::catName(namep, "v.u_core.u_issue")}
    , TOP__v__u_core__u_issue__u_regfile{this, Verilated::catName(namep, "v.u_core.u_issue.u_regfile")}
    , TOP__v__u_tcm{this, Verilated::catName(namep, "v.u_tcm")}
    , TOP__v__u_tcm__u_ram{this, Verilated::catName(namep, "v.u_tcm.u_ram")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.v = &TOP__v;
    TOP__v.u_core = &TOP__v__u_core;
    TOP__v__u_core.u_csr = &TOP__v__u_core__u_csr;
    TOP__v__u_core__u_csr.u_csrfile = &TOP__v__u_core__u_csr__u_csrfile;
    TOP__v__u_core.u_issue = &TOP__v__u_core__u_issue;
    TOP__v__u_core__u_issue.u_regfile = &TOP__v__u_core__u_issue__u_regfile;
    TOP__v.u_tcm = &TOP__v__u_tcm;
    TOP__v__u_tcm.u_ram = &TOP__v__u_tcm__u_ram;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__v.__Vconfigure(true);
    TOP__v__u_core.__Vconfigure(true);
    TOP__v__u_core__u_csr.__Vconfigure(true);
    TOP__v__u_core__u_csr__u_csrfile.__Vconfigure(true);
    TOP__v__u_core__u_issue.__Vconfigure(true);
    TOP__v__u_core__u_issue__u_regfile.__Vconfigure(true);
    TOP__v__u_tcm.__Vconfigure(true);
    TOP__v__u_tcm__u_ram.__Vconfigure(true);
    // Setup scopes
    __Vscope_v__u_tcm__u_ram.configure(this, name(), "v.u_tcm.u_ram", "u_ram", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_v__u_tcm__u_ram.varInsert(__Vfinal,"ram", &(TOP__v__u_tcm__u_ram.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,16383,0);
    }
}
