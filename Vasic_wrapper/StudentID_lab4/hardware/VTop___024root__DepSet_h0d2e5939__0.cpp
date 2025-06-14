// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

void VTop___024root___ico_sequent__TOP__0(VTop___024root* vlSelf);

void VTop___024root___eval_ico(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VTop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTop___024root___ico_sequent__TOP__0(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ Top__DOT__ppu__DOT__relu_out;
    Top__DOT__ppu__DOT__relu_out = 0;
    CData/*7:0*/ Top__DOT__ppu__DOT__data_shift;
    Top__DOT__ppu__DOT__data_shift = 0;
    // Body
    vlSelfRef.Top__DOT__controller__DOT__next_state 
        = ((4U & (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))
            ? ((2U & (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))
                ? ((1U & (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))
                    ? 0U : ((IData)(vlSelfRef.ready)
                             ? 1U : 6U)) : ((1U & (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))
                                             ? ((0x40U 
                                                 == (IData)(vlSelfRef.Top__DOT__controller__DOT__ppu_count))
                                                 ? 6U
                                                 : 5U)
                                             : (((0xfU 
                                                  == (IData)(vlSelfRef.Top__DOT__controller__DOT__compute_stage)) 
                                                 & (IData)(vlSelfRef.Top__DOT__valid_array))
                                                 ? 5U
                                                 : 4U)))
            : ((2U & (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))
                ? ((1U & (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))
                    ? ((0x3fU == (IData)(vlSelfRef.Top__DOT__data_address))
                        ? 4U : 3U) : ((0x3ffU == (IData)(vlSelfRef.Top__DOT__data_address))
                                       ? 3U : 2U)) : 
               ((1U & (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))
                 ? ((0xfU == (IData)(vlSelfRef.Top__DOT__data_address))
                     ? 2U : 1U) : ((IData)(vlSelfRef.ready)
                                    ? 1U : 0U))));
    Top__DOT__ppu__DOT__relu_out = ((vlSelfRef.Top__DOT__ppu_input 
                                     >> 0x1fU) ? 0U
                                     : vlSelfRef.Top__DOT__ppu_input);
    Top__DOT__ppu__DOT__data_shift = (0xffU & VL_DIV_III(32, Top__DOT__ppu__DOT__relu_out, (IData)(vlSelfRef.scaling_factor)));
    vlSelfRef.Top__DOT__ppu__DOT__data_temp = Top__DOT__ppu__DOT__data_shift;
}

void VTop___024root___eval_triggers__ico(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__ico(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VTop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTop___024root___eval_act(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__2(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_wire__v0;
    __VdlyVal__Top__DOT__bias_wire__v0 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__bias_wire__v0;
    __VdlySet__Top__DOT__bias_wire__v0 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_wire__v1;
    __VdlyVal__Top__DOT__bias_wire__v1 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_wire__v2;
    __VdlyVal__Top__DOT__bias_wire__v2 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_wire__v3;
    __VdlyVal__Top__DOT__bias_wire__v3 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_wire__v4;
    __VdlyVal__Top__DOT__bias_wire__v4 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_wire__v5;
    __VdlyVal__Top__DOT__bias_wire__v5 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_wire__v6;
    __VdlyVal__Top__DOT__bias_wire__v6 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_wire__v7;
    __VdlyVal__Top__DOT__bias_wire__v7 = 0;
    // Body
    __VdlySet__Top__DOT__bias_wire__v0 = 0U;
    if (vlSelfRef.Top__DOT__bias_ren) {
        __VdlyVal__Top__DOT__bias_wire__v0 = vlSelfRef.Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & (IData)(vlSelfRef.Top__DOT__data_address))];
        __VdlySet__Top__DOT__bias_wire__v0 = 1U;
        __VdlyVal__Top__DOT__bias_wire__v1 = vlSelfRef.Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(1U) + (IData)(vlSelfRef.Top__DOT__data_address)))];
        __VdlyVal__Top__DOT__bias_wire__v2 = vlSelfRef.Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(2U) + (IData)(vlSelfRef.Top__DOT__data_address)))];
        __VdlyVal__Top__DOT__bias_wire__v3 = vlSelfRef.Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(3U) + (IData)(vlSelfRef.Top__DOT__data_address)))];
        __VdlyVal__Top__DOT__bias_wire__v4 = vlSelfRef.Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(4U) + (IData)(vlSelfRef.Top__DOT__data_address)))];
        __VdlyVal__Top__DOT__bias_wire__v5 = vlSelfRef.Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(5U) + (IData)(vlSelfRef.Top__DOT__data_address)))];
        __VdlyVal__Top__DOT__bias_wire__v6 = vlSelfRef.Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(6U) + (IData)(vlSelfRef.Top__DOT__data_address)))];
        __VdlyVal__Top__DOT__bias_wire__v7 = vlSelfRef.Top__DOT__GLB_bias__DOT__ram
            [(0x7fU & ((IData)(7U) + (IData)(vlSelfRef.Top__DOT__data_address)))];
    }
    if (__VdlySet__Top__DOT__bias_wire__v0) {
        vlSelfRef.Top__DOT__bias_wire[0U] = __VdlyVal__Top__DOT__bias_wire__v0;
        vlSelfRef.Top__DOT__bias_wire[1U] = __VdlyVal__Top__DOT__bias_wire__v1;
        vlSelfRef.Top__DOT__bias_wire[2U] = __VdlyVal__Top__DOT__bias_wire__v2;
        vlSelfRef.Top__DOT__bias_wire[3U] = __VdlyVal__Top__DOT__bias_wire__v3;
        vlSelfRef.Top__DOT__bias_wire[4U] = __VdlyVal__Top__DOT__bias_wire__v4;
        vlSelfRef.Top__DOT__bias_wire[5U] = __VdlyVal__Top__DOT__bias_wire__v5;
        vlSelfRef.Top__DOT__bias_wire[6U] = __VdlyVal__Top__DOT__bias_wire__v6;
        vlSelfRef.Top__DOT__bias_wire[7U] = __VdlyVal__Top__DOT__bias_wire__v7;
    }
}

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__act(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VTop___024root___eval_nba(VTop___024root* vlSelf);

bool VTop___024root___eval_phase__nba(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
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
            VTop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("src/Top.sv", 22, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/Top.sv", 22, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/Top.sv", 22, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.mode & 0xfeU))) {
        Verilated::overWidthError("mode");}
    if (VL_UNLIKELY((vlSelfRef.scaling_factor & 0xf000U))) {
        Verilated::overWidthError("scaling_factor");}
    if (VL_UNLIKELY((vlSelfRef.ready & 0xfeU))) {
        Verilated::overWidthError("ready");}
}
#endif  // VL_DEBUG
