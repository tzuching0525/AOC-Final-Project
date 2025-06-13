// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___eval_static(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf);
VL_ATTR_COLD void VTop___024root____Vm_traceActivitySetAll(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTop___024root___eval_initial__TOP(vlSelf);
    VTop___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__array__DOT__bias_zero[0U] = 0U;
    vlSelfRef.Top__DOT__array__DOT__bias_zero[1U] = 0U;
    vlSelfRef.Top__DOT__array__DOT__bias_zero[2U] = 0U;
    vlSelfRef.Top__DOT__array__DOT__bias_zero[3U] = 0U;
    vlSelfRef.Top__DOT__array__DOT__bias_zero[4U] = 0U;
    vlSelfRef.Top__DOT__array__DOT__bias_zero[5U] = 0U;
    vlSelfRef.Top__DOT__array__DOT__bias_zero[6U] = 0U;
    vlSelfRef.Top__DOT__array__DOT__bias_zero[7U] = 0U;
}

VL_ATTR_COLD void VTop___024root___eval_final(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/Top.sv", 22, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf);
VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf);

VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root____Vm_traceActivitySetAll(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->mode = VL_RAND_RESET_I(1);
    vlSelf->scaling_factor = VL_RAND_RESET_I(12);
    vlSelf->ready = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(32);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->ofmap = VL_RAND_RESET_I(32);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__ifmap_ren = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__weight_ren = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__bias_ren = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__i_en_array = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__i_en_ppu = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__ifmap_wire[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->Top__DOT__weight_wire[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__bias_wire[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__ofmap_wire[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__bias_input[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__ppu_input = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__data_address = VL_RAND_RESET_I(12);
    vlSelf->Top__DOT__valid_array = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__ppu_output = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__ppu_in_out = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__mode1_step0 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__ofmap_address = VL_RAND_RESET_I(7);
    vlSelf->Top__DOT__controller__DOT__cur_state = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__controller__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__controller__DOT__ppu_count = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__controller__DOT__compute_stage = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__ppu__DOT__relu_out = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__ppu__DOT__data_shift = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__ppu__DOT__data_temp = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT__opsum[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__array__DOT__valid_chain = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->Top__DOT__array__DOT__weight_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->Top__DOT__array__DOT__opsum_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT__bias_zero[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Top__DOT__array__DOT__u_Adder_tree__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Top__DOT__GLB_ifmap__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->Top__DOT__GLB_ifmap__DOT__DO_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->Top__DOT__GLB_weight__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->Top__DOT__GLB_weight__DOT__DO_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->Top__DOT__GLB_bias__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->Top__DOT__GLB_ofmap__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vdly__Top__DOT__data_address = VL_RAND_RESET_I(12);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
