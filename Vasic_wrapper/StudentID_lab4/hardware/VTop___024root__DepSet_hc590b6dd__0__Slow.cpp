// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop__Syms.h"
#include "VTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf);
VL_ATTR_COLD void VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__0(VTop_PE_block* vlSelf);
VL_ATTR_COLD void VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
VL_ATTR_COLD void VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
VL_ATTR_COLD void VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
VL_ATTR_COLD void VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
VL_ATTR_COLD void VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
VL_ATTR_COLD void VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
VL_ATTR_COLD void VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__1(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
        VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block));
        VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop_PE_block___stl_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ Top__DOT__ppu__DOT__relu_out;
    Top__DOT__ppu__DOT__relu_out = 0;
    CData/*7:0*/ Top__DOT__ppu__DOT__data_shift;
    Top__DOT__ppu__DOT__data_shift = 0;
    // Body
    vlSelfRef.done = (6U == (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state));
    if ((5U == (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))) {
        vlSelfRef.Top__DOT__ofmap_address = (0x7fU 
                                             & (IData)(vlSelfRef.Top__DOT__data_address));
        vlSelfRef.Top__DOT__i_en_ppu = (0U != (IData)(vlSelfRef.Top__DOT__data_address));
    } else {
        vlSelfRef.Top__DOT__ofmap_address = (0x7fU 
                                             & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                - (IData)(8U)));
        vlSelfRef.Top__DOT__i_en_ppu = 0U;
    }
    vlSelfRef.ofmap = ((IData)(vlSelfRef.Top__DOT__mode1_step0)
                        ? vlSelfRef.Top__DOT__ppu_in_out
                        : (IData)(vlSelfRef.Top__DOT__ppu_output));
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
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[0U] 
        = vlSelfRef.Top__DOT__bias_input[0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[1U] 
        = vlSelfRef.Top__DOT__bias_input[1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[2U] 
        = vlSelfRef.Top__DOT__bias_input[2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[3U] 
        = vlSelfRef.Top__DOT__bias_input[3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[4U] 
        = vlSelfRef.Top__DOT__bias_input[4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[5U] 
        = vlSelfRef.Top__DOT__bias_input[5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[6U] 
        = vlSelfRef.Top__DOT__bias_input[6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[7U] 
        = vlSelfRef.Top__DOT__bias_input[7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.Top__DOT__array__DOT__bias_zero
        [7U];
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[0U][0U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & VL_SHIFTL_III(5,32,32, (1U & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                   >> 2U)), 3U))]);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[0U][1U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[0U][2U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[0U][3U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[0U][4U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(4U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[0U][5U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(5U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[0U][6U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(6U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[0U][7U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(7U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[1U][0U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & VL_SHIFTL_III(5,32,32, 
                                            (1U & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                   >> 2U)), 3U))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[1U][1U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[1U][2U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[1U][3U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[1U][4U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(4U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[1U][5U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(5U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[1U][6U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(6U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[1U][7U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(7U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[2U][0U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & VL_SHIFTL_III(5,32,32, 
                                            (1U & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                   >> 2U)), 3U))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[2U][1U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[2U][2U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[2U][3U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[2U][4U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(4U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[2U][5U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(5U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[2U][6U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(6U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[2U][7U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(7U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[3U][0U] 
        = (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram[
           (0x1fU & VL_SHIFTL_III(5,32,32, (1U & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                  >> 2U)), 3U))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[3U][1U] 
        = (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram[
           (0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                     >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[3U][2U] 
        = (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram[
           (0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                     >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[3U][3U] 
        = (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram[
           (0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                     >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[3U][4U] 
        = (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram[
           (0x1fU & ((IData)(4U) + VL_SHIFTL_III(5,32,32, 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                     >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[3U][5U] 
        = (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram[
           (0x1fU & ((IData)(5U) + VL_SHIFTL_III(5,32,32, 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                     >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[3U][6U] 
        = (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram[
           (0x1fU & ((IData)(6U) + VL_SHIFTL_III(5,32,32, 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                     >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire[3U][7U] 
        = (vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram[
           (0x1fU & ((IData)(7U) + VL_SHIFTL_III(5,32,32, 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                     >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & (VL_SHIFTL_III(10,32,32, (0x7fU 
                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                   >> 3U)), 7U) 
                       + VL_SHIFTL_III(10,32,32, (1U 
                                                  & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                     >> 2U)), 3U)))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][1U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x10U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][2U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x20U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][3U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x30U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][4U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x40U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][5U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x50U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][6U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x60U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][7U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x70U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][8U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(1U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][9U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x11U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0xaU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x21U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0xbU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x31U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0xcU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x41U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0xdU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x51U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0xeU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x61U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0xfU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x71U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x10U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(2U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x11U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x12U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x12U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x22U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x13U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x32U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x14U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x42U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x15U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x52U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x16U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x62U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x17U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x72U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x18U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(3U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x19U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x13U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x1aU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x23U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x1bU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x33U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x1cU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x43U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x1dU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x53U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x1eU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x63U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x1fU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x73U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x20U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(4U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x21U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x14U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x22U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x24U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x23U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x34U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x24U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x44U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x25U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x54U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x26U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x64U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x27U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x74U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x28U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(5U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x29U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x15U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x2aU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x25U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x2bU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x35U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x2cU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x45U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x2dU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x55U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x2eU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x65U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x2fU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x75U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x30U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(6U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x31U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x16U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x32U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x26U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x33U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x36U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x34U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x46U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x35U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x56U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x36U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x66U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x37U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x76U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x38U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(7U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x39U] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x17U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x3aU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x27U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x3bU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x37U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x3cU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x47U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x3dU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x57U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x3eU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x67U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[0U][0x3fU] 
        = (0xffU & vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x77U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & (VL_SHIFTL_III(10,32,32, 
                                              (0x7fU 
                                               & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                  >> 3U)), 7U) 
                                + VL_SHIFTL_III(10,32,32, 
                                                (1U 
                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                    >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][1U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x10U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][2U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x20U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][3U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x30U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][4U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x40U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][5U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x50U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][6U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x60U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][7U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x70U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][8U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(1U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][9U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x11U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0xaU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x21U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0xbU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x31U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0xcU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x41U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0xdU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x51U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0xeU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x61U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0xfU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x71U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x10U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(2U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x11U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x12U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x12U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x22U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x13U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x32U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x14U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x42U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x15U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x52U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x16U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x62U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x17U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x72U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x18U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(3U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x19U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x13U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x1aU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x23U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x1bU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x33U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x1cU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x43U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x1dU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x53U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x1eU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x63U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x1fU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x73U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x20U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(4U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x21U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x14U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x22U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x24U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x23U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x34U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x24U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x44U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x25U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x54U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x26U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x64U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x27U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x74U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x28U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(5U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x29U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x15U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x2aU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x25U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x2bU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x35U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x2cU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x45U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x2dU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x55U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x2eU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x65U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x2fU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x75U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x30U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(6U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x31U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x16U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x32U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x26U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x33U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x36U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x34U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x46U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x35U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x56U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x36U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x66U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x37U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x76U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x38U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(7U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x39U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x17U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x3aU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x27U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x3bU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x37U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x3cU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x47U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x3dU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x57U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x3eU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x67U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[1U][0x3fU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x77U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & (VL_SHIFTL_III(10,32,32, 
                                              (0x7fU 
                                               & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                  >> 3U)), 7U) 
                                + VL_SHIFTL_III(10,32,32, 
                                                (1U 
                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                    >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][1U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x10U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][2U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x20U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][3U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x30U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][4U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x40U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][5U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x50U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][6U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x60U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][7U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x70U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][8U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(1U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][9U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x11U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0xaU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x21U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0xbU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x31U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0xcU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x41U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0xdU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x51U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0xeU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x61U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0xfU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x71U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x10U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(2U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x11U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x12U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x12U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x22U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x13U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x32U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x14U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x42U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x15U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x52U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x16U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x62U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x17U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x72U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x18U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(3U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x19U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x13U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x1aU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x23U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x1bU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x33U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x1cU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x43U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x1dU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x53U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x1eU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x63U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x1fU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x73U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x20U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(4U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x21U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x14U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x22U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x24U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x23U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x34U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x24U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x44U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x25U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x54U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x26U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x64U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x27U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x74U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x28U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(5U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x29U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x15U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x2aU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x25U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x2bU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x35U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x2cU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x45U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x2dU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x55U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x2eU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x65U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x2fU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x75U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x30U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(6U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x31U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x16U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x32U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x26U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x33U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x36U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x34U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x46U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x35U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x56U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x36U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x66U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x37U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x76U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x38U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(7U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x39U] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x17U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x3aU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x27U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x3bU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x37U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x3cU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x47U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x3dU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x57U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x3eU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x67U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[2U][0x3fU] 
        = (0xffU & (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x77U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & (VL_SHIFTL_III(10,32,32, (0x7fU 
                                                & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                   >> 3U)), 7U) 
                       + VL_SHIFTL_III(10,32,32, (1U 
                                                  & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                     >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][1U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x10U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][2U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x20U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][3U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x30U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][4U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x40U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][5U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x50U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][6U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x60U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][7U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x70U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][8U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(1U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][9U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x11U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0xaU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x21U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0xbU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x31U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0xcU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x41U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0xdU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x51U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0xeU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x61U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0xfU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x71U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x10U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(2U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x11U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x12U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x12U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x22U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x13U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x32U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x14U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x42U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x15U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x52U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x16U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x62U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x17U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x72U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x18U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(3U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x19U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x13U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x1aU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x23U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x1bU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x33U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x1cU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x43U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x1dU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x53U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x1eU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x63U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x1fU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x73U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x20U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(4U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x21U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x14U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x22U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x24U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x23U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x34U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x24U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x44U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x25U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x54U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x26U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x64U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x27U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x74U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x28U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(5U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x29U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x15U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x2aU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x25U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x2bU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x35U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x2cU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x45U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x2dU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x55U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x2eU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x65U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x2fU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x75U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x30U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(6U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x31U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x16U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x32U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x26U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x33U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x36U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x34U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x46U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x35U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x56U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x36U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x66U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x37U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x76U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x38U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(7U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x39U] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x17U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x3aU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x27U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x3bU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x37U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x3cU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x47U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x3dU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x57U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x3eU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x67U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire[3U][0x3fU] 
        = (vlSelfRef.Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x77U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.Top__DOT__array__DOT__weight_wire[0U][0U] 
        = vlSelfRef.Top__DOT__weight_wire[0U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[0U][1U] 
        = vlSelfRef.Top__DOT__weight_wire[1U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[0U][2U] 
        = vlSelfRef.Top__DOT__weight_wire[2U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[0U][3U] 
        = vlSelfRef.Top__DOT__weight_wire[3U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[0U][4U] 
        = vlSelfRef.Top__DOT__weight_wire[4U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[0U][5U] 
        = vlSelfRef.Top__DOT__weight_wire[5U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[0U][6U] 
        = vlSelfRef.Top__DOT__weight_wire[6U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[0U][7U] 
        = vlSelfRef.Top__DOT__weight_wire[7U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[1U][0U] 
        = vlSelfRef.Top__DOT__weight_wire[8U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[1U][1U] 
        = vlSelfRef.Top__DOT__weight_wire[9U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[1U][2U] 
        = vlSelfRef.Top__DOT__weight_wire[0xaU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[1U][3U] 
        = vlSelfRef.Top__DOT__weight_wire[0xbU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[1U][4U] 
        = vlSelfRef.Top__DOT__weight_wire[0xcU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[1U][5U] 
        = vlSelfRef.Top__DOT__weight_wire[0xdU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[1U][6U] 
        = vlSelfRef.Top__DOT__weight_wire[0xeU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[1U][7U] 
        = vlSelfRef.Top__DOT__weight_wire[0xfU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[2U][0U] 
        = vlSelfRef.Top__DOT__weight_wire[0x10U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[2U][1U] 
        = vlSelfRef.Top__DOT__weight_wire[0x11U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[2U][2U] 
        = vlSelfRef.Top__DOT__weight_wire[0x12U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[2U][3U] 
        = vlSelfRef.Top__DOT__weight_wire[0x13U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[2U][4U] 
        = vlSelfRef.Top__DOT__weight_wire[0x14U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[2U][5U] 
        = vlSelfRef.Top__DOT__weight_wire[0x15U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[2U][6U] 
        = vlSelfRef.Top__DOT__weight_wire[0x16U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[2U][7U] 
        = vlSelfRef.Top__DOT__weight_wire[0x17U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[3U][0U] 
        = vlSelfRef.Top__DOT__weight_wire[0x18U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[3U][1U] 
        = vlSelfRef.Top__DOT__weight_wire[0x19U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[3U][2U] 
        = vlSelfRef.Top__DOT__weight_wire[0x1aU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[3U][3U] 
        = vlSelfRef.Top__DOT__weight_wire[0x1bU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[3U][4U] 
        = vlSelfRef.Top__DOT__weight_wire[0x1cU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[3U][5U] 
        = vlSelfRef.Top__DOT__weight_wire[0x1dU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[3U][6U] 
        = vlSelfRef.Top__DOT__weight_wire[0x1eU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[3U][7U] 
        = vlSelfRef.Top__DOT__weight_wire[0x1fU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[4U][0U] 
        = vlSelfRef.Top__DOT__weight_wire[0x20U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[4U][1U] 
        = vlSelfRef.Top__DOT__weight_wire[0x21U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[4U][2U] 
        = vlSelfRef.Top__DOT__weight_wire[0x22U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[4U][3U] 
        = vlSelfRef.Top__DOT__weight_wire[0x23U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[4U][4U] 
        = vlSelfRef.Top__DOT__weight_wire[0x24U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[4U][5U] 
        = vlSelfRef.Top__DOT__weight_wire[0x25U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[4U][6U] 
        = vlSelfRef.Top__DOT__weight_wire[0x26U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[4U][7U] 
        = vlSelfRef.Top__DOT__weight_wire[0x27U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[5U][0U] 
        = vlSelfRef.Top__DOT__weight_wire[0x28U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[5U][1U] 
        = vlSelfRef.Top__DOT__weight_wire[0x29U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[5U][2U] 
        = vlSelfRef.Top__DOT__weight_wire[0x2aU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[5U][3U] 
        = vlSelfRef.Top__DOT__weight_wire[0x2bU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[5U][4U] 
        = vlSelfRef.Top__DOT__weight_wire[0x2cU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[5U][5U] 
        = vlSelfRef.Top__DOT__weight_wire[0x2dU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[5U][6U] 
        = vlSelfRef.Top__DOT__weight_wire[0x2eU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[5U][7U] 
        = vlSelfRef.Top__DOT__weight_wire[0x2fU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[6U][0U] 
        = vlSelfRef.Top__DOT__weight_wire[0x30U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[6U][1U] 
        = vlSelfRef.Top__DOT__weight_wire[0x31U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[6U][2U] 
        = vlSelfRef.Top__DOT__weight_wire[0x32U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[6U][3U] 
        = vlSelfRef.Top__DOT__weight_wire[0x33U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[6U][4U] 
        = vlSelfRef.Top__DOT__weight_wire[0x34U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[6U][5U] 
        = vlSelfRef.Top__DOT__weight_wire[0x35U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[6U][6U] 
        = vlSelfRef.Top__DOT__weight_wire[0x36U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[6U][7U] 
        = vlSelfRef.Top__DOT__weight_wire[0x37U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[7U][0U] 
        = vlSelfRef.Top__DOT__weight_wire[0x38U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[7U][1U] 
        = vlSelfRef.Top__DOT__weight_wire[0x39U];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[7U][2U] 
        = vlSelfRef.Top__DOT__weight_wire[0x3aU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[7U][3U] 
        = vlSelfRef.Top__DOT__weight_wire[0x3bU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[7U][4U] 
        = vlSelfRef.Top__DOT__weight_wire[0x3cU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[7U][5U] 
        = vlSelfRef.Top__DOT__weight_wire[0x3dU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[7U][6U] 
        = vlSelfRef.Top__DOT__weight_wire[0x3eU];
    vlSelfRef.Top__DOT__array__DOT__weight_wire[7U][7U] 
        = vlSelfRef.Top__DOT__weight_wire[0x3fU];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [0U][0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [0U][1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [0U][2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [0U][3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [0U][4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [0U][5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [0U][6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [0U][7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [1U][0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [1U][1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [1U][2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [1U][3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [1U][4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [1U][5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [1U][6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [1U][7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [2U][0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [2U][1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [2U][2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [2U][3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [2U][4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [2U][5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [2U][6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [2U][7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [3U][0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [3U][1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [3U][2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [3U][3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [3U][4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [3U][5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [3U][6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [3U][7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [4U][0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [4U][1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [4U][2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [4U][3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [4U][4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [4U][5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [4U][6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [4U][7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [5U][0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [5U][1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [5U][2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [5U][3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [5U][4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [5U][5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [5U][6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [5U][7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [6U][0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [6U][1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [6U][2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [6U][3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [6U][4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [6U][5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [6U][6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [6U][7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [7U][0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [7U][1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [7U][2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [7U][3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [7U][4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [7U][5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [7U][6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT__weight_wire
        [7U][7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
}

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__1(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT__valid_pe = ((0xffU 
                                                 == 
                                                 vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                 [3U]) 
                                                & ((0xffU 
                                                    == 
                                                    vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                    [3U]) 
                                                   & ((0xffU 
                                                       == 
                                                       vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                       [3U]) 
                                                      & ((0xffU 
                                                          == 
                                                          vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                          [3U]) 
                                                         & ((0xffU 
                                                             == 
                                                             vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                             [3U]) 
                                                            & ((0xffU 
                                                                == 
                                                                vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                                [3U]) 
                                                               & ((0xffU 
                                                                   == 
                                                                   vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                                   [3U]) 
                                                                  & (0xffU 
                                                                     == 
                                                                     vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                                                     [3U]))))))));
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[0U][0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[0U][1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[0U][2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[0U][3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[0U][4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[0U][5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[0U][6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[0U][7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[1U][0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[1U][1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[1U][2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[1U][3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[1U][4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[1U][5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[1U][6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[1U][7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U][0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U][1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U][2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U][3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U][4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U][5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U][6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U][7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U][0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U][1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U][2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U][3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U][4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U][5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U][6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U][7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U][0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U][1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U][2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U][3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U][4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U][5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U][6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U][7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U][0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U][1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U][2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U][3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U][4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U][5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U][6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U][7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U][0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U][1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U][2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U][3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U][4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U][5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U][6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U][7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U][0U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U][1U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U][2U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U][3U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U][4U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U][5U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U][6U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U][7U] 
        = vlSelfRef.Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0U] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [0U][0U];
    vlSelfRef.Top__DOT__array__DOT__opsum[1U] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [0U][1U];
    vlSelfRef.Top__DOT__array__DOT__opsum[2U] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [0U][2U];
    vlSelfRef.Top__DOT__array__DOT__opsum[3U] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [0U][3U];
    vlSelfRef.Top__DOT__array__DOT__opsum[4U] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [0U][4U];
    vlSelfRef.Top__DOT__array__DOT__opsum[5U] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [0U][5U];
    vlSelfRef.Top__DOT__array__DOT__opsum[6U] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [0U][6U];
    vlSelfRef.Top__DOT__array__DOT__opsum[7U] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [0U][7U];
    vlSelfRef.Top__DOT__array__DOT__opsum[8U] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [1U][0U];
    vlSelfRef.Top__DOT__array__DOT__opsum[9U] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [1U][1U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0xaU] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [1U][2U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0xbU] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [1U][3U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0xcU] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [1U][4U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0xdU] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [1U][5U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0xeU] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [1U][6U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0xfU] = vlSelfRef.Top__DOT__array__DOT__opsum_wire
        [1U][7U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x10U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U]
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x11U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U]
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x12U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U]
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x13U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U]
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x14U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U]
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x15U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U]
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x16U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U]
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x17U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[2U]
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x18U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U]
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x19U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U]
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x1aU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U]
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x1bU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U]
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x1cU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U]
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x1dU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U]
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x1eU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U]
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x1fU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[3U]
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x20U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U]
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x21U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U]
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x22U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U]
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x23U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U]
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x24U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U]
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x25U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U]
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x26U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U]
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x27U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[4U]
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x28U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U]
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x29U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U]
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x2aU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U]
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x2bU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U]
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x2cU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U]
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x2dU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U]
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x2eU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U]
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x2fU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[5U]
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x30U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U]
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x31U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U]
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x32U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U]
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x33U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U]
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x34U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U]
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x35U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U]
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x36U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U]
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x37U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[6U]
        [7U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x38U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U]
        [0U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x39U] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U]
        [1U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x3aU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U]
        [2U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x3bU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U]
        [3U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x3cU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U]
        [4U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x3dU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U]
        [5U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x3eU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U]
        [6U];
    vlSelfRef.Top__DOT__array__DOT__opsum[0x3fU] = 
        vlSelfRef.Top__DOT__array__DOT__opsum_wire[7U]
        [7U];
}
