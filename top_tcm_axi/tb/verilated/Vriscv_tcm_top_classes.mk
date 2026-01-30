# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vriscv_tcm_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vriscv_tcm_top \
	Vriscv_tcm_top___024root__DepSet_hb6bfe7c0__0 \
	Vriscv_tcm_top___024root__DepSet_h1c57ea67__0 \
	Vriscv_tcm_top_riscv_tcm_top__DepSet_h82acf234__0 \
	Vriscv_tcm_top_tcm_mem__DepSet_h0058f4f8__0 \
	Vriscv_tcm_top_riscv_core__M0_MBffffffff__DepSet_hbb56dba0__0 \
	Vriscv_tcm_top_riscv_issue__DepSet_ha58469bc__0 \
	Vriscv_tcm_top_riscv_issue__DepSet_h0d5f7053__0 \
	Vriscv_tcm_top_tcm_mem_ram__DepSet_h5f5b9b79__0 \
	Vriscv_tcm_top_riscv_csr__SB0__DepSet_ha4346f8a__0 \
	Vriscv_tcm_top_riscv_csr_regfile__DepSet_h50fd4752__0 \
	Vriscv_tcm_top_riscv_csr_regfile__DepSet_h42968af9__0 \
	Vriscv_tcm_top_riscv_regfile__DepSet_h6fb19878__0 \
	Vriscv_tcm_top_riscv_regfile__DepSet_h4352600f__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vriscv_tcm_top__ConstPool_0 \
	Vriscv_tcm_top___024root__Slow \
	Vriscv_tcm_top___024root__DepSet_hb6bfe7c0__0__Slow \
	Vriscv_tcm_top___024root__DepSet_h1c57ea67__0__Slow \
	Vriscv_tcm_top_riscv_tcm_top__Slow \
	Vriscv_tcm_top_riscv_tcm_top__DepSet_h82acf234__0__Slow \
	Vriscv_tcm_top_riscv_tcm_top__DepSet_hf046f5db__0__Slow \
	Vriscv_tcm_top_tcm_mem__Slow \
	Vriscv_tcm_top_tcm_mem__DepSet_h0058f4f8__0__Slow \
	Vriscv_tcm_top_tcm_mem__DepSet_h723afb8f__0__Slow \
	Vriscv_tcm_top_riscv_core__M0_MBffffffff__Slow \
	Vriscv_tcm_top_riscv_core__M0_MBffffffff__DepSet_hbb56dba0__0__Slow \
	Vriscv_tcm_top_riscv_core__M0_MBffffffff__DepSet_h17311e47__0__Slow \
	Vriscv_tcm_top_riscv_issue__Slow \
	Vriscv_tcm_top_riscv_issue__DepSet_ha58469bc__0__Slow \
	Vriscv_tcm_top_riscv_issue__DepSet_h0d5f7053__0__Slow \
	Vriscv_tcm_top_tcm_mem_ram__Slow \
	Vriscv_tcm_top_tcm_mem_ram__DepSet_h333c5f0e__0__Slow \
	Vriscv_tcm_top_riscv_csr__SB0__Slow \
	Vriscv_tcm_top_riscv_csr__SB0__DepSet_ha4346f8a__0__Slow \
	Vriscv_tcm_top_riscv_csr__SB0__DepSet_h0dcf7221__0__Slow \
	Vriscv_tcm_top_riscv_csr_regfile__Slow \
	Vriscv_tcm_top_riscv_csr_regfile__DepSet_h50fd4752__0__Slow \
	Vriscv_tcm_top_riscv_csr_regfile__DepSet_h42968af9__0__Slow \
	Vriscv_tcm_top_riscv_regfile__Slow \
	Vriscv_tcm_top_riscv_regfile__DepSet_h4352600f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vriscv_tcm_top__Dpi \
	Vriscv_tcm_top__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vriscv_tcm_top__Syms \
	Vriscv_tcm_top__Trace__0__Slow \
	Vriscv_tcm_top__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
