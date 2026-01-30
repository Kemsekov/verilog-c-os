// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_tcm_top.h for the primary calling header

#include "Vriscv_tcm_top__pch.h"
#include "Vriscv_tcm_top_riscv_regfile.h"

uint32_t Vriscv_tcm_top_riscv_regfile::REGFILE__DOT__get_register(uint32_t r) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_tcm_top_riscv_regfile::REGFILE__DOT__get_register\n"); );
    VL_OUT(get_register__Vfuncrtn,31,0);
    // Body
    get_register__Vfuncrtn = ((0x10U & (IData)(r)) ? 
                              ((8U & (IData)(r)) ? 
                               ((4U & (IData)(r)) ? 
                                ((2U & (IData)(r)) ? 
                                 ((1U & (IData)(r))
                                   ? this->__PVT__REGFILE__DOT__reg_r31_q
                                   : this->__PVT__REGFILE__DOT__reg_r30_q)
                                  : ((1U & (IData)(r))
                                      ? this->__PVT__REGFILE__DOT__reg_r29_q
                                      : this->__PVT__REGFILE__DOT__reg_r28_q))
                                 : ((2U & (IData)(r))
                                     ? ((1U & (IData)(r))
                                         ? this->__PVT__REGFILE__DOT__reg_r27_q
                                         : this->__PVT__REGFILE__DOT__reg_r26_q)
                                     : ((1U & (IData)(r))
                                         ? this->__PVT__REGFILE__DOT__reg_r25_q
                                         : this->__PVT__REGFILE__DOT__reg_r24_q)))
                                : ((4U & (IData)(r))
                                    ? ((2U & (IData)(r))
                                        ? ((1U & (IData)(r))
                                            ? this->__PVT__REGFILE__DOT__reg_r23_q
                                            : this->__PVT__REGFILE__DOT__reg_r22_q)
                                        : ((1U & (IData)(r))
                                            ? this->__PVT__REGFILE__DOT__reg_r21_q
                                            : this->__PVT__REGFILE__DOT__reg_r20_q))
                                    : ((2U & (IData)(r))
                                        ? ((1U & (IData)(r))
                                            ? this->__PVT__REGFILE__DOT__reg_r19_q
                                            : this->__PVT__REGFILE__DOT__reg_r18_q)
                                        : ((1U & (IData)(r))
                                            ? this->__PVT__REGFILE__DOT__reg_r17_q
                                            : this->__PVT__REGFILE__DOT__reg_r16_q))))
                               : ((8U & (IData)(r))
                                   ? ((4U & (IData)(r))
                                       ? ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->__PVT__REGFILE__DOT__reg_r15_q
                                               : this->__PVT__REGFILE__DOT__reg_r14_q)
                                           : ((1U & (IData)(r))
                                               ? this->__PVT__REGFILE__DOT__reg_r13_q
                                               : this->__PVT__REGFILE__DOT__reg_r12_q))
                                       : ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->__PVT__REGFILE__DOT__reg_r11_q
                                               : this->__PVT__REGFILE__DOT__reg_r10_q)
                                           : ((1U & (IData)(r))
                                               ? this->__PVT__REGFILE__DOT__reg_r9_q
                                               : this->__PVT__REGFILE__DOT__reg_r8_q)))
                                   : ((4U & (IData)(r))
                                       ? ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->__PVT__REGFILE__DOT__reg_r7_q
                                               : this->__PVT__REGFILE__DOT__reg_r6_q)
                                           : ((1U & (IData)(r))
                                               ? this->__PVT__REGFILE__DOT__reg_r5_q
                                               : this->__PVT__REGFILE__DOT__reg_r4_q))
                                       : ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->__PVT__REGFILE__DOT__reg_r3_q
                                               : this->__PVT__REGFILE__DOT__reg_r2_q)
                                           : ((1U & (IData)(r))
                                               ? this->__PVT__REGFILE__DOT__reg_r1_q
                                               : 0U)))));
    // Final
    return (get_register__Vfuncrtn);
}

bool Vriscv_tcm_top_riscv_regfile::REGFILE__DOT__set_register(uint32_t r, uint32_t value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_tcm_top_riscv_regfile::REGFILE__DOT__set_register\n"); );
    VL_OUT8(set_register__Vfuncrtn,0,0);
    // Final
    return (set_register__Vfuncrtn);
}
