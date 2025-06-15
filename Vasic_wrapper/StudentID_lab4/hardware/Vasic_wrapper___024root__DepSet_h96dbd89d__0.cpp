// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper___024root.h"

void Vasic_wrapper___024root___ico_sequent__TOP__0(Vasic_wrapper___024root* vlSelf);

void Vasic_wrapper___024root___eval_ico(Vasic_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vasic_wrapper___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vasic_wrapper___024root___ico_sequent__TOP__0(Vasic_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.AWREADY_S = 0U;
    vlSelfRef.ARREADY_S = 0U;
    vlSelfRef.asic_wrapper__DOT__write_cnt_next = vlSelfRef.asic_wrapper__DOT__write_cnt;
    vlSelfRef.asic_wrapper__DOT__write_error_next = vlSelfRef.asic_wrapper__DOT__write_error;
    vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next = vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE;
    vlSelfRef.asic_wrapper__DOT__ASIC_DATA_next = vlSelfRef.asic_wrapper__DOT__DATA;
    vlSelfRef.asic_wrapper__DOT__BID_S_next = vlSelfRef.BID_S;
    vlSelfRef.asic_wrapper__DOT__addr_S_reg_next = vlSelfRef.asic_wrapper__DOT__addr_S_reg;
    if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
                if (vlSelfRef.AWVALID_S) {
                    vlSelfRef.AWREADY_S = 1U;
                    vlSelfRef.asic_wrapper__DOT__addr_S_reg_next 
                        = vlSelfRef.AWADDR_S;
                } else if (vlSelfRef.ARVALID_S) {
                    vlSelfRef.asic_wrapper__DOT__addr_S_reg_next 
                        = vlSelfRef.ARADDR_S;
                }
                if ((1U & (~ (IData)(vlSelfRef.AWVALID_S)))) {
                    if (vlSelfRef.ARVALID_S) {
                        vlSelfRef.ARREADY_S = 1U;
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
                if (vlSelfRef.WVALID_S) {
                    if ((0U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        if ((4U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                            vlSelfRef.asic_wrapper__DOT__write_cnt_next 
                                = ((0x44fU == (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt))
                                    ? 0U : (0x7ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt))));
                            vlSelfRef.asic_wrapper__DOT__ASIC_DATA_next 
                                = vlSelfRef.WDATA_S;
                        }
                    }
                    if ((0U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next 
                            = vlSelfRef.WDATA_S;
                    }
                }
            }
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
                vlSelfRef.asic_wrapper__DOT__write_error_next = 0U;
                if (vlSelfRef.BREADY_S) {
                    vlSelfRef.asic_wrapper__DOT__BID_S_next = 0U;
                }
            } else if (vlSelfRef.WVALID_S) {
                if ((0U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    if ((4U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        vlSelfRef.asic_wrapper__DOT__write_error_next = 1U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
            if (vlSelfRef.AWVALID_S) {
                vlSelfRef.asic_wrapper__DOT__BID_S_next 
                    = vlSelfRef.AWID_S;
            }
        }
    }
    vlSelfRef.asic_wrapper__DOT__cs_slave_next = vlSelfRef.asic_wrapper__DOT__cs_slave;
    vlSelfRef.asic_wrapper__DOT__RID_S_next = vlSelfRef.RID_S;
    vlSelfRef.RVALID_S = 0U;
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            vlSelfRef.RVALID_S = 1U;
            if (((IData)(vlSelfRef.RVALID_S) & (IData)(vlSelfRef.RREADY_S))) {
                vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
                vlSelfRef.asic_wrapper__DOT__RID_S_next = 0U;
            }
        } else {
            vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
        if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            if (vlSelfRef.BREADY_S) {
                vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
            }
        } else if (vlSelfRef.WVALID_S) {
            if (vlSelfRef.WLAST_S) {
                vlSelfRef.asic_wrapper__DOT__cs_slave_next = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
        vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
    } else if (vlSelfRef.AWVALID_S) {
        vlSelfRef.asic_wrapper__DOT__cs_slave_next = 2U;
    } else if (vlSelfRef.ARVALID_S) {
        vlSelfRef.asic_wrapper__DOT__cs_slave_next = 5U;
        vlSelfRef.asic_wrapper__DOT__RID_S_next = vlSelfRef.ARID_S;
    }
}

void Vasic_wrapper___024root___eval_triggers__ico(Vasic_wrapper___024root* vlSelf);

bool Vasic_wrapper___024root___eval_phase__ico(Vasic_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vasic_wrapper___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vasic_wrapper___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vasic_wrapper___024root___eval_act(Vasic_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_INLINE_OPT void Vasic_wrapper___024root___nba_sequent__TOP__2(Vasic_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v0;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__bias_wire__v0;
    __VdlySet__asic_wrapper__DOT__Top__DOT__bias_wire__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v1;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v1 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v2;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v2 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v3;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v3 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v4;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v4 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v5;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v5 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v6;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v6 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v7;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v7 = 0;
    // Body
    __VdlySet__asic_wrapper__DOT__Top__DOT__bias_wire__v0 = 0U;
    if (vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_ren) {
        __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v0 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))];
        __VdlySet__asic_wrapper__DOT__Top__DOT__bias_wire__v0 = 1U;
        __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v1 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address)))];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v2 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(2U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address)))];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v3 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(3U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address)))];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v4 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(4U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address)))];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v5 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(5U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address)))];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v6 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(6U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address)))];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v7 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(7U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address)))];
    }
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__bias_wire__v0) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[0U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v0;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[1U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v1;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[2U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v2;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[3U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v3;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[4U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v4;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[5U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v5;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[6U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v6;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[7U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_wire__v7;
    }
}

void Vasic_wrapper___024root___eval_triggers__act(Vasic_wrapper___024root* vlSelf);

bool Vasic_wrapper___024root___eval_phase__act(Vasic_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vasic_wrapper___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vasic_wrapper___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vasic_wrapper___024root___eval_nba(Vasic_wrapper___024root* vlSelf);

bool Vasic_wrapper___024root___eval_phase__nba(Vasic_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vasic_wrapper___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__ico(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__nba(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__act(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vasic_wrapper___024root___eval(Vasic_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vasic_wrapper___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home2/aoc2025/e24102064/final/hdl/asic_wrapper.sv", 24, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vasic_wrapper___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vasic_wrapper___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home2/aoc2025/e24102064/final/hdl/asic_wrapper.sv", 24, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vasic_wrapper___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home2/aoc2025/e24102064/final/hdl/asic_wrapper.sv", 24, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vasic_wrapper___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vasic_wrapper___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vasic_wrapper___024root___eval_debug_assertions(Vasic_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.ACLK & 0xfeU))) {
        Verilated::overWidthError("ACLK");}
    if (VL_UNLIKELY((vlSelfRef.ARESETn & 0xfeU))) {
        Verilated::overWidthError("ARESETn");}
    if (VL_UNLIKELY((vlSelfRef.AWLEN_S & 0xf0U))) {
        Verilated::overWidthError("AWLEN_S");}
    if (VL_UNLIKELY((vlSelfRef.AWSIZE_S & 0xf8U))) {
        Verilated::overWidthError("AWSIZE_S");}
    if (VL_UNLIKELY((vlSelfRef.AWBURST_S & 0xfcU))) {
        Verilated::overWidthError("AWBURST_S");}
    if (VL_UNLIKELY((vlSelfRef.AWVALID_S & 0xfeU))) {
        Verilated::overWidthError("AWVALID_S");}
    if (VL_UNLIKELY((vlSelfRef.WSTRB_S & 0xf0U))) {
        Verilated::overWidthError("WSTRB_S");}
    if (VL_UNLIKELY((vlSelfRef.WLAST_S & 0xfeU))) {
        Verilated::overWidthError("WLAST_S");}
    if (VL_UNLIKELY((vlSelfRef.WVALID_S & 0xfeU))) {
        Verilated::overWidthError("WVALID_S");}
    if (VL_UNLIKELY((vlSelfRef.BREADY_S & 0xfeU))) {
        Verilated::overWidthError("BREADY_S");}
    if (VL_UNLIKELY((vlSelfRef.ARLEN_S & 0xf0U))) {
        Verilated::overWidthError("ARLEN_S");}
    if (VL_UNLIKELY((vlSelfRef.ARSIZE_S & 0xf8U))) {
        Verilated::overWidthError("ARSIZE_S");}
    if (VL_UNLIKELY((vlSelfRef.ARBURST_S & 0xfcU))) {
        Verilated::overWidthError("ARBURST_S");}
    if (VL_UNLIKELY((vlSelfRef.ARVALID_S & 0xfeU))) {
        Verilated::overWidthError("ARVALID_S");}
    if (VL_UNLIKELY((vlSelfRef.RREADY_S & 0xfeU))) {
        Verilated::overWidthError("RREADY_S");}
}
#endif  // VL_DEBUG
