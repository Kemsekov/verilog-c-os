# RISC-V Core Library - README

This directory contains the RISC-V core implementation from Ultra-Embedded.com (version 1.0.1).

## Known Issues and Fixes

### Issue: JAL (Jump and Link) Instructions Not Properly Executing

**Problem**: JAL instructions were not causing the processor to jump to the target address, resulting in the PC continuing to advance sequentially instead of executing jumps or loops properly.

**Root Cause**: The branch execution logic had a timing issue where the branch decision was not being properly synchronized with the pipeline control.

**Status**: Investigation ongoing. The issue appears to be related to pipeline control and branch prediction/handling in the multi-stage pipeline.

## Files Overview

- `riscv_core.v` - Main RISC-V processor core
- `riscv_exec.v` - Execution unit with ALU and branch logic
- `riscv_issue.v` - Instruction issue and scheduling unit
- `riscv_fetch.v` - Instruction fetch unit
- `riscv_decode.v` - Instruction decoder
- `riscv_defs.v` - Common definitions and constants
- Other supporting modules for ALU, register file, etc.

## Pipeline Stages

The processor implements a multi-stage pipeline:
1. Fetch - Instruction fetch from memory
2. Decode - Instruction decoding and register read
3. Issue - Instruction scheduling
4. Execute - ALU operations and branch resolution
5. Memory - Load/store operations (when applicable)
6. Writeback - Register writeback

## Branch Handling

Branch instructions (including JAL, JALR, and conditional branches) are handled through:
- Immediate branch path (for branches resolved in execute stage)
- Delayed branch path (for branches that need to wait for operands)
- CSR branch path (for system calls, returns, etc.)

## Notes

This is a third-party RISC-V core implementation. Modifications should be made carefully to preserve the original functionality while fixing identified issues.