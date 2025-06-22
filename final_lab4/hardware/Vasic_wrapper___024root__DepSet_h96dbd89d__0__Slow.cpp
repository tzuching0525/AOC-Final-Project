// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper___024root.h"

VL_ATTR_COLD void Vasic_wrapper___024root___eval_static(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_static\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vasic_wrapper___024root___eval_initial__TOP(Vasic_wrapper___024root* vlSelf);
VL_ATTR_COLD void Vasic_wrapper___024root____Vm_traceActivitySetAll(Vasic_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vasic_wrapper___024root___eval_initial(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_initial\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vasic_wrapper___024root___eval_initial__TOP(vlSelf);
    Vasic_wrapper___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__ACLK__0 = vlSelfRef.ACLK;
}

VL_ATTR_COLD void Vasic_wrapper___024root___eval_initial__TOP(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_initial__TOP\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[0U] = 0U;
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[1U] = 0U;
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[2U] = 0U;
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[3U] = 0U;
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[4U] = 0U;
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[5U] = 0U;
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[6U] = 0U;
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[7U] = 0U;
}

VL_ATTR_COLD void Vasic_wrapper___024root___eval_final(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_final\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__stl(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vasic_wrapper___024root___eval_phase__stl(Vasic_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vasic_wrapper___024root___eval_settle(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_settle\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vasic_wrapper___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home2/aoc2025/e24102153/final_lab4/rtl/asic_wrapper.sv", 24, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vasic_wrapper___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__stl(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___dump_triggers__stl\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vasic_wrapper___024root___eval_triggers__stl(Vasic_wrapper___024root* vlSelf);
VL_ATTR_COLD void Vasic_wrapper___024root___eval_stl(Vasic_wrapper___024root* vlSelf);

VL_ATTR_COLD bool Vasic_wrapper___024root___eval_phase__stl(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_phase__stl\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vasic_wrapper___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vasic_wrapper___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__ico(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___dump_triggers__ico\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__act(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___dump_triggers__act\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ACLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge ACLK)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__nba(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___dump_triggers__nba\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ACLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge ACLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vasic_wrapper___024root____Vm_traceActivitySetAll(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root____Vm_traceActivitySetAll\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vasic_wrapper___024root___ctor_var_reset(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___ctor_var_reset\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->ACLK = VL_RAND_RESET_I(1);
    vlSelf->ARESETn = VL_RAND_RESET_I(1);
    vlSelf->ASIC_interrupt = VL_RAND_RESET_I(1);
    vlSelf->AWID_S = VL_RAND_RESET_I(8);
    vlSelf->AWADDR_S = VL_RAND_RESET_I(32);
    vlSelf->AWLEN_S = VL_RAND_RESET_I(4);
    vlSelf->AWSIZE_S = VL_RAND_RESET_I(3);
    vlSelf->AWBURST_S = VL_RAND_RESET_I(2);
    vlSelf->AWVALID_S = VL_RAND_RESET_I(1);
    vlSelf->AWREADY_S = VL_RAND_RESET_I(1);
    vlSelf->WDATA_S = VL_RAND_RESET_I(32);
    vlSelf->WSTRB_S = VL_RAND_RESET_I(4);
    vlSelf->WLAST_S = VL_RAND_RESET_I(1);
    vlSelf->WVALID_S = VL_RAND_RESET_I(1);
    vlSelf->WREADY_S = VL_RAND_RESET_I(1);
    vlSelf->BID_S = VL_RAND_RESET_I(8);
    vlSelf->BRESP_S = VL_RAND_RESET_I(2);
    vlSelf->BVALID_S = VL_RAND_RESET_I(1);
    vlSelf->BREADY_S = VL_RAND_RESET_I(1);
    vlSelf->ARID_S = VL_RAND_RESET_I(8);
    vlSelf->ARADDR_S = VL_RAND_RESET_I(32);
    vlSelf->ARLEN_S = VL_RAND_RESET_I(4);
    vlSelf->ARSIZE_S = VL_RAND_RESET_I(3);
    vlSelf->ARBURST_S = VL_RAND_RESET_I(2);
    vlSelf->ARVALID_S = VL_RAND_RESET_I(1);
    vlSelf->ARREADY_S = VL_RAND_RESET_I(1);
    vlSelf->output_scale = VL_RAND_RESET_I(12);
    vlSelf->output_cnt = VL_RAND_RESET_I(7);
    vlSelf->current_state = VL_RAND_RESET_I(3);
    vlSelf->n_state = VL_RAND_RESET_I(3);
    vlSelf->dataout = VL_RAND_RESET_I(11);
    vlSelf->dataout2 = VL_RAND_RESET_I(11);
    vlSelf->ASIC_DATA_n = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->data_temp[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ifmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->weight[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->bias = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->ppu_out_temp[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RID_S = VL_RAND_RESET_I(8);
    vlSelf->RDATA_S = VL_RAND_RESET_I(32);
    vlSelf->RRESP_S = VL_RAND_RESET_I(2);
    vlSelf->RLAST_S = VL_RAND_RESET_I(1);
    vlSelf->RVALID_S = VL_RAND_RESET_I(1);
    vlSelf->RREADY_S = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1104; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__DATA_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->asic_wrapper__DOT__write_cnt = VL_RAND_RESET_I(11);
    vlSelf->asic_wrapper__DOT__write_cnt_next = VL_RAND_RESET_I(11);
    vlSelf->asic_wrapper__DOT__count = VL_RAND_RESET_I(11);
    vlSelf->asic_wrapper__DOT__count_next = VL_RAND_RESET_I(11);
    vlSelf->asic_wrapper__DOT__ofmap = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__data_ready = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__data_ready_next = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__data_ready_reg = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__data_ready_reg_next = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__bias_write = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->asic_wrapper__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->asic_wrapper__DOT__output_cnt_next = VL_RAND_RESET_I(7);
    vlSelf->asic_wrapper__DOT__ofmap_count = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__ofmap_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->asic_wrapper__DOT__step = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__cs_slave = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__cs_slave_next = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__addr_S_reg = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__addr_S_reg_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__BID_S_next = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__RID_S_next = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__write_error = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__write_error_next = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__ASIC_ENABLE = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_ENABLE_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__DATA = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_DATA_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_OFMAP = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_OFMAP_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->asic_wrapper__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->asic_wrapper__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->asic_wrapper__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->asic_wrapper__DOT____Vlvbound_hd30f7fe5__0 = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT____Vlvbound_hf69f4574__0 = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT____Vlvbound_h36234f8c__0 = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT____Vlvbound_haa40a020__0 = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__Top__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__Top__DOT__ifmap_ren = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__Top__DOT__weight_ren = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__Top__DOT__bias_ren = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__Top__DOT__i_en_array = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__Top__DOT__i_en_ppu = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__Top__DOT__compute_stage = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__ifmap_wire[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__weight_wire[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__bias_wire[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__ofmap_wire[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__bias_input[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->asic_wrapper__DOT__Top__DOT__ppu_input = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__Top__DOT__data_address = VL_RAND_RESET_I(12);
    vlSelf->asic_wrapper__DOT__Top__DOT__valid_array = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__Top__DOT__valid_ppu = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__Top__DOT__ppu_output = VL_RAND_RESET_I(7);
    vlSelf->asic_wrapper__DOT__Top__DOT__ppu_in_out = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__Top__DOT__mode1_step0 = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__Top__DOT__ofmap_address = VL_RAND_RESET_I(7);
    vlSelf->asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__Top__DOT__controller__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__Top__DOT__controller__DOT__ppu_count = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage = VL_RAND_RESET_I(4);
    vlSelf->asic_wrapper__DOT__Top__DOT__ppu__DOT__relu_out = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__Top__DOT__ppu__DOT__data_shift = VL_RAND_RESET_I(9);
    vlSelf->asic_wrapper__DOT__Top__DOT__ppu__DOT__data_quant = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__Top__DOT__ppu__DOT__data_temp = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT__opsum[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT__valid_chain = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->asic_wrapper__DOT__Top__DOT__array__DOT__u_Adder_tree__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vdly__asic_wrapper__DOT__Top__DOT__data_address = VL_RAND_RESET_I(12);
    vlSelf->__Vtrigprevexpr___TOP__ACLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
