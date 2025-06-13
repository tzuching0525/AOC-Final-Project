// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop__Syms.h"
#include "VTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval_triggers__ico(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf);
void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__0(VTop_PE_block* vlSelf);
void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf);
void VTop___024root___nba_sequent__TOP__1(VTop___024root* vlSelf);
void VTop___024root___nba_sequent__TOP__2(VTop___024root* vlSelf);

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block));
        VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block));
        VTop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__Top__DOT__controller__DOT__compute_stage;
    __Vdly__Top__DOT__controller__DOT__compute_stage = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__bias_input__v0;
    __VdlySet__Top__DOT__bias_input__v0 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v8;
    __VdlyVal__Top__DOT__bias_input__v8 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__bias_input__v8;
    __VdlySet__Top__DOT__bias_input__v8 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v9;
    __VdlyVal__Top__DOT__bias_input__v9 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v10;
    __VdlyVal__Top__DOT__bias_input__v10 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v11;
    __VdlyVal__Top__DOT__bias_input__v11 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v12;
    __VdlyVal__Top__DOT__bias_input__v12 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v13;
    __VdlyVal__Top__DOT__bias_input__v13 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v14;
    __VdlyVal__Top__DOT__bias_input__v14 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v15;
    __VdlyVal__Top__DOT__bias_input__v15 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v16;
    __VdlyVal__Top__DOT__bias_input__v16 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__bias_input__v16;
    __VdlySet__Top__DOT__bias_input__v16 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v17;
    __VdlyVal__Top__DOT__bias_input__v17 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v18;
    __VdlyVal__Top__DOT__bias_input__v18 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v19;
    __VdlyVal__Top__DOT__bias_input__v19 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v20;
    __VdlyVal__Top__DOT__bias_input__v20 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v21;
    __VdlyVal__Top__DOT__bias_input__v21 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v22;
    __VdlyVal__Top__DOT__bias_input__v22 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v23;
    __VdlyVal__Top__DOT__bias_input__v23 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v24;
    __VdlyVal__Top__DOT__bias_input__v24 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__bias_input__v24;
    __VdlySet__Top__DOT__bias_input__v24 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v25;
    __VdlyVal__Top__DOT__bias_input__v25 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v26;
    __VdlyVal__Top__DOT__bias_input__v26 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v27;
    __VdlyVal__Top__DOT__bias_input__v27 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v28;
    __VdlyVal__Top__DOT__bias_input__v28 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v29;
    __VdlyVal__Top__DOT__bias_input__v29 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v30;
    __VdlyVal__Top__DOT__bias_input__v30 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v31;
    __VdlyVal__Top__DOT__bias_input__v31 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v32;
    __VdlyVal__Top__DOT__bias_input__v32 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__bias_input__v32;
    __VdlySet__Top__DOT__bias_input__v32 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v33;
    __VdlyVal__Top__DOT__bias_input__v33 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v34;
    __VdlyVal__Top__DOT__bias_input__v34 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v35;
    __VdlyVal__Top__DOT__bias_input__v35 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v36;
    __VdlyVal__Top__DOT__bias_input__v36 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v37;
    __VdlyVal__Top__DOT__bias_input__v37 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v38;
    __VdlyVal__Top__DOT__bias_input__v38 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__bias_input__v39;
    __VdlyVal__Top__DOT__bias_input__v39 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__ofmap_wire__v0;
    __VdlySet__Top__DOT__ofmap_wire__v0 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__ofmap_wire__v8;
    __VdlyVal__Top__DOT__ofmap_wire__v8 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__ofmap_wire__v8;
    __VdlySet__Top__DOT__ofmap_wire__v8 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__ofmap_wire__v9;
    __VdlyVal__Top__DOT__ofmap_wire__v9 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__ofmap_wire__v10;
    __VdlyVal__Top__DOT__ofmap_wire__v10 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__ofmap_wire__v11;
    __VdlyVal__Top__DOT__ofmap_wire__v11 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__ofmap_wire__v12;
    __VdlyVal__Top__DOT__ofmap_wire__v12 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__ofmap_wire__v13;
    __VdlyVal__Top__DOT__ofmap_wire__v13 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__ofmap_wire__v14;
    __VdlyVal__Top__DOT__ofmap_wire__v14 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__ofmap_wire__v15;
    __VdlyVal__Top__DOT__ofmap_wire__v15 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__ifmap_wire__v0;
    __VdlyVal__Top__DOT__ifmap_wire__v0 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__ifmap_wire__v0;
    __VdlySet__Top__DOT__ifmap_wire__v0 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__ifmap_wire__v1;
    __VdlyVal__Top__DOT__ifmap_wire__v1 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__ifmap_wire__v2;
    __VdlyVal__Top__DOT__ifmap_wire__v2 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__ifmap_wire__v3;
    __VdlyVal__Top__DOT__ifmap_wire__v3 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__ifmap_wire__v4;
    __VdlyVal__Top__DOT__ifmap_wire__v4 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__ifmap_wire__v5;
    __VdlyVal__Top__DOT__ifmap_wire__v5 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__ifmap_wire__v6;
    __VdlyVal__Top__DOT__ifmap_wire__v6 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__ifmap_wire__v7;
    __VdlyVal__Top__DOT__ifmap_wire__v7 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__GLB_ifmap__DOT__ram__v0;
    __VdlyVal__Top__DOT__GLB_ifmap__DOT__ram__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Top__DOT__GLB_ifmap__DOT__ram__v0;
    __VdlyDim0__Top__DOT__GLB_ifmap__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__GLB_ifmap__DOT__ram__v0;
    __VdlySet__Top__DOT__GLB_ifmap__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__GLB_weight__DOT__ram__v0;
    __VdlyVal__Top__DOT__GLB_weight__DOT__ram__v0 = 0;
    SData/*9:0*/ __VdlyDim0__Top__DOT__GLB_weight__DOT__ram__v0;
    __VdlyDim0__Top__DOT__GLB_weight__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__GLB_weight__DOT__ram__v0;
    __VdlySet__Top__DOT__GLB_weight__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v0;
    __VdlyVal__Top__DOT__weight_wire__v0 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__weight_wire__v0;
    __VdlySet__Top__DOT__weight_wire__v0 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v1;
    __VdlyVal__Top__DOT__weight_wire__v1 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v2;
    __VdlyVal__Top__DOT__weight_wire__v2 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v3;
    __VdlyVal__Top__DOT__weight_wire__v3 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v4;
    __VdlyVal__Top__DOT__weight_wire__v4 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v5;
    __VdlyVal__Top__DOT__weight_wire__v5 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v6;
    __VdlyVal__Top__DOT__weight_wire__v6 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v7;
    __VdlyVal__Top__DOT__weight_wire__v7 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v8;
    __VdlyVal__Top__DOT__weight_wire__v8 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v9;
    __VdlyVal__Top__DOT__weight_wire__v9 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v10;
    __VdlyVal__Top__DOT__weight_wire__v10 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v11;
    __VdlyVal__Top__DOT__weight_wire__v11 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v12;
    __VdlyVal__Top__DOT__weight_wire__v12 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v13;
    __VdlyVal__Top__DOT__weight_wire__v13 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v14;
    __VdlyVal__Top__DOT__weight_wire__v14 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v15;
    __VdlyVal__Top__DOT__weight_wire__v15 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v16;
    __VdlyVal__Top__DOT__weight_wire__v16 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v17;
    __VdlyVal__Top__DOT__weight_wire__v17 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v18;
    __VdlyVal__Top__DOT__weight_wire__v18 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v19;
    __VdlyVal__Top__DOT__weight_wire__v19 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v20;
    __VdlyVal__Top__DOT__weight_wire__v20 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v21;
    __VdlyVal__Top__DOT__weight_wire__v21 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v22;
    __VdlyVal__Top__DOT__weight_wire__v22 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v23;
    __VdlyVal__Top__DOT__weight_wire__v23 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v24;
    __VdlyVal__Top__DOT__weight_wire__v24 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v25;
    __VdlyVal__Top__DOT__weight_wire__v25 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v26;
    __VdlyVal__Top__DOT__weight_wire__v26 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v27;
    __VdlyVal__Top__DOT__weight_wire__v27 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v28;
    __VdlyVal__Top__DOT__weight_wire__v28 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v29;
    __VdlyVal__Top__DOT__weight_wire__v29 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v30;
    __VdlyVal__Top__DOT__weight_wire__v30 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v31;
    __VdlyVal__Top__DOT__weight_wire__v31 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v32;
    __VdlyVal__Top__DOT__weight_wire__v32 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v33;
    __VdlyVal__Top__DOT__weight_wire__v33 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v34;
    __VdlyVal__Top__DOT__weight_wire__v34 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v35;
    __VdlyVal__Top__DOT__weight_wire__v35 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v36;
    __VdlyVal__Top__DOT__weight_wire__v36 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v37;
    __VdlyVal__Top__DOT__weight_wire__v37 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v38;
    __VdlyVal__Top__DOT__weight_wire__v38 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v39;
    __VdlyVal__Top__DOT__weight_wire__v39 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v40;
    __VdlyVal__Top__DOT__weight_wire__v40 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v41;
    __VdlyVal__Top__DOT__weight_wire__v41 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v42;
    __VdlyVal__Top__DOT__weight_wire__v42 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v43;
    __VdlyVal__Top__DOT__weight_wire__v43 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v44;
    __VdlyVal__Top__DOT__weight_wire__v44 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v45;
    __VdlyVal__Top__DOT__weight_wire__v45 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v46;
    __VdlyVal__Top__DOT__weight_wire__v46 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v47;
    __VdlyVal__Top__DOT__weight_wire__v47 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v48;
    __VdlyVal__Top__DOT__weight_wire__v48 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v49;
    __VdlyVal__Top__DOT__weight_wire__v49 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v50;
    __VdlyVal__Top__DOT__weight_wire__v50 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v51;
    __VdlyVal__Top__DOT__weight_wire__v51 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v52;
    __VdlyVal__Top__DOT__weight_wire__v52 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v53;
    __VdlyVal__Top__DOT__weight_wire__v53 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v54;
    __VdlyVal__Top__DOT__weight_wire__v54 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v55;
    __VdlyVal__Top__DOT__weight_wire__v55 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v56;
    __VdlyVal__Top__DOT__weight_wire__v56 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v57;
    __VdlyVal__Top__DOT__weight_wire__v57 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v58;
    __VdlyVal__Top__DOT__weight_wire__v58 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v59;
    __VdlyVal__Top__DOT__weight_wire__v59 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v60;
    __VdlyVal__Top__DOT__weight_wire__v60 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v61;
    __VdlyVal__Top__DOT__weight_wire__v61 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v62;
    __VdlyVal__Top__DOT__weight_wire__v62 = 0;
    CData/*7:0*/ __VdlyVal__Top__DOT__weight_wire__v63;
    __VdlyVal__Top__DOT__weight_wire__v63 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__GLB_bias__DOT__ram__v0;
    __VdlyVal__Top__DOT__GLB_bias__DOT__ram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__Top__DOT__GLB_bias__DOT__ram__v0;
    __VdlyDim0__Top__DOT__GLB_bias__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__GLB_bias__DOT__ram__v0;
    __VdlySet__Top__DOT__GLB_bias__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v0;
    __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v0;
    __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__GLB_ofmap__DOT__ram__v0;
    __VdlySet__Top__DOT__GLB_ofmap__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v1;
    __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v1;
    __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v1 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v2;
    __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v2;
    __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v2 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v3;
    __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v3;
    __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v3 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v4;
    __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v4;
    __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v4 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v5;
    __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v5;
    __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v6;
    __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v6;
    __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v6 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v7;
    __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v7;
    __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v7 = 0;
    // Body
    __VdlySet__Top__DOT__GLB_ofmap__DOT__ram__v0 = 0U;
    __Vdly__Top__DOT__controller__DOT__compute_stage 
        = vlSelfRef.Top__DOT__controller__DOT__compute_stage;
    __VdlySet__Top__DOT__ofmap_wire__v0 = 0U;
    __VdlySet__Top__DOT__ofmap_wire__v8 = 0U;
    __VdlySet__Top__DOT__GLB_bias__DOT__ram__v0 = 0U;
    __VdlySet__Top__DOT__ifmap_wire__v0 = 0U;
    __VdlySet__Top__DOT__GLB_ifmap__DOT__ram__v0 = 0U;
    __VdlySet__Top__DOT__bias_input__v0 = 0U;
    __VdlySet__Top__DOT__bias_input__v8 = 0U;
    __VdlySet__Top__DOT__bias_input__v16 = 0U;
    __VdlySet__Top__DOT__bias_input__v24 = 0U;
    __VdlySet__Top__DOT__bias_input__v32 = 0U;
    vlSelfRef.__Vdly__Top__DOT__data_address = vlSelfRef.Top__DOT__data_address;
    __VdlySet__Top__DOT__GLB_weight__DOT__ram__v0 = 0U;
    __VdlySet__Top__DOT__weight_wire__v0 = 0U;
    vlSelfRef.Top__DOT__i = 8U;
    vlSelfRef.Top__DOT__array__DOT__u_Adder_tree__DOT__i = 8U;
    vlSelfRef.Top__DOT__mode1_step0 = ((~ (IData)(vlSelfRef.rst)) 
                                       & ((IData)(vlSelfRef.mode) 
                                          & ((IData)(vlSelfRef.ready)
                                              ? (~ (IData)(vlSelfRef.Top__DOT__mode1_step0))
                                              : (IData)(vlSelfRef.Top__DOT__mode1_step0))));
    if (((IData)(vlSelfRef.Top__DOT__controller__DOT__compute_stage) 
         & (IData)(vlSelfRef.Top__DOT__valid_array))) {
        __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v0 
            = vlSelfRef.Top__DOT__ofmap_wire[0U];
        __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v0 
            = vlSelfRef.Top__DOT__ofmap_address;
        __VdlySet__Top__DOT__GLB_ofmap__DOT__ram__v0 = 1U;
        __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v1 
            = vlSelfRef.Top__DOT__ofmap_wire[1U];
        __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v1 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.Top__DOT__ofmap_address)));
        __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v2 
            = vlSelfRef.Top__DOT__ofmap_wire[2U];
        __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v2 
            = (0x7fU & ((IData)(2U) + (IData)(vlSelfRef.Top__DOT__ofmap_address)));
        __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v3 
            = vlSelfRef.Top__DOT__ofmap_wire[3U];
        __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v3 
            = (0x7fU & ((IData)(3U) + (IData)(vlSelfRef.Top__DOT__ofmap_address)));
        __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v4 
            = vlSelfRef.Top__DOT__ofmap_wire[4U];
        __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v4 
            = (0x7fU & ((IData)(4U) + (IData)(vlSelfRef.Top__DOT__ofmap_address)));
        __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v5 
            = vlSelfRef.Top__DOT__ofmap_wire[5U];
        __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v5 
            = (0x7fU & ((IData)(5U) + (IData)(vlSelfRef.Top__DOT__ofmap_address)));
        __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v6 
            = vlSelfRef.Top__DOT__ofmap_wire[6U];
        __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v6 
            = (0x7fU & ((IData)(6U) + (IData)(vlSelfRef.Top__DOT__ofmap_address)));
        __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v7 
            = vlSelfRef.Top__DOT__ofmap_wire[7U];
        __VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v7 
            = (0x7fU & ((IData)(7U) + (IData)(vlSelfRef.Top__DOT__ofmap_address)));
    }
    if (vlSelfRef.rst) {
        __Vdly__Top__DOT__controller__DOT__compute_stage = 0U;
        vlSelfRef.Top__DOT__controller__DOT__ppu_count = 0U;
        __VdlySet__Top__DOT__ofmap_wire__v0 = 1U;
        __VdlySet__Top__DOT__bias_input__v0 = 1U;
        vlSelfRef.__Vdly__Top__DOT__data_address = 0U;
        vlSelfRef.Top__DOT__ppu_output = 0U;
        vlSelfRef.Top__DOT__ppu_in_out = 0U;
    } else {
        __Vdly__Top__DOT__controller__DOT__compute_stage 
            = ((IData)(vlSelfRef.ready) ? 0U : (0xfU 
                                                & ((IData)(vlSelfRef.Top__DOT__valid_array)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.Top__DOT__controller__DOT__compute_stage))
                                                    : (IData)(vlSelfRef.Top__DOT__controller__DOT__compute_stage))));
        vlSelfRef.Top__DOT__controller__DOT__ppu_count 
            = ((5U == (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.Top__DOT__controller__DOT__ppu_count)))
                : 0U);
        if ((0xffU == (IData)(vlSelfRef.Top__DOT__array__DOT__valid_chain))) {
            __VdlyVal__Top__DOT__ofmap_wire__v8 = (
                                                   ((((((vlSelfRef.Top__DOT__array__DOT__opsum
                                                         [0U] 
                                                         + 
                                                         vlSelfRef.Top__DOT__array__DOT__opsum
                                                         [8U]) 
                                                        + 
                                                        vlSelfRef.Top__DOT__array__DOT__opsum
                                                        [0x10U]) 
                                                       + 
                                                       vlSelfRef.Top__DOT__array__DOT__opsum
                                                       [0x18U]) 
                                                      + 
                                                      vlSelfRef.Top__DOT__array__DOT__opsum
                                                      [0x20U]) 
                                                     + 
                                                     vlSelfRef.Top__DOT__array__DOT__opsum
                                                     [0x28U]) 
                                                    + 
                                                    vlSelfRef.Top__DOT__array__DOT__opsum
                                                    [0x30U]) 
                                                   + 
                                                   vlSelfRef.Top__DOT__array__DOT__opsum
                                                   [0x38U]);
            __VdlyVal__Top__DOT__ofmap_wire__v9 = (
                                                   ((((((vlSelfRef.Top__DOT__array__DOT__opsum
                                                         [1U] 
                                                         + 
                                                         vlSelfRef.Top__DOT__array__DOT__opsum
                                                         [9U]) 
                                                        + 
                                                        vlSelfRef.Top__DOT__array__DOT__opsum
                                                        [0x11U]) 
                                                       + 
                                                       vlSelfRef.Top__DOT__array__DOT__opsum
                                                       [0x19U]) 
                                                      + 
                                                      vlSelfRef.Top__DOT__array__DOT__opsum
                                                      [0x21U]) 
                                                     + 
                                                     vlSelfRef.Top__DOT__array__DOT__opsum
                                                     [0x29U]) 
                                                    + 
                                                    vlSelfRef.Top__DOT__array__DOT__opsum
                                                    [0x31U]) 
                                                   + 
                                                   vlSelfRef.Top__DOT__array__DOT__opsum
                                                   [0x39U]);
            __VdlyVal__Top__DOT__ofmap_wire__v10 = 
                (((((((vlSelfRef.Top__DOT__array__DOT__opsum
                       [2U] + vlSelfRef.Top__DOT__array__DOT__opsum
                       [0xaU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                      [0x12U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                     [0x1aU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                    [0x22U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                   [0x2aU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                  [0x32U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                 [0x3aU]);
            __VdlyVal__Top__DOT__ofmap_wire__v11 = 
                (((((((vlSelfRef.Top__DOT__array__DOT__opsum
                       [3U] + vlSelfRef.Top__DOT__array__DOT__opsum
                       [0xbU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                      [0x13U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                     [0x1bU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                    [0x23U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                   [0x2bU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                  [0x33U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                 [0x3bU]);
            __VdlyVal__Top__DOT__ofmap_wire__v12 = 
                (((((((vlSelfRef.Top__DOT__array__DOT__opsum
                       [4U] + vlSelfRef.Top__DOT__array__DOT__opsum
                       [0xcU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                      [0x14U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                     [0x1cU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                    [0x24U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                   [0x2cU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                  [0x34U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                 [0x3cU]);
            __VdlyVal__Top__DOT__ofmap_wire__v13 = 
                (((((((vlSelfRef.Top__DOT__array__DOT__opsum
                       [5U] + vlSelfRef.Top__DOT__array__DOT__opsum
                       [0xdU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                      [0x15U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                     [0x1dU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                    [0x25U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                   [0x2dU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                  [0x35U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                 [0x3dU]);
            __VdlyVal__Top__DOT__ofmap_wire__v14 = 
                (((((((vlSelfRef.Top__DOT__array__DOT__opsum
                       [6U] + vlSelfRef.Top__DOT__array__DOT__opsum
                       [0xeU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                      [0x16U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                     [0x1eU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                    [0x26U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                   [0x2eU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                  [0x36U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                 [0x3eU]);
            __VdlyVal__Top__DOT__ofmap_wire__v15 = 
                (((((((vlSelfRef.Top__DOT__array__DOT__opsum
                       [7U] + vlSelfRef.Top__DOT__array__DOT__opsum
                       [0xfU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                      [0x17U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                     [0x1fU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                    [0x27U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                   [0x2fU]) + vlSelfRef.Top__DOT__array__DOT__opsum
                  [0x37U]) + vlSelfRef.Top__DOT__array__DOT__opsum
                 [0x3fU]);
        } else {
            __VdlyVal__Top__DOT__ofmap_wire__v8 = 0U;
            __VdlyVal__Top__DOT__ofmap_wire__v9 = 0U;
            __VdlyVal__Top__DOT__ofmap_wire__v10 = 0U;
            __VdlyVal__Top__DOT__ofmap_wire__v11 = 0U;
            __VdlyVal__Top__DOT__ofmap_wire__v12 = 0U;
            __VdlyVal__Top__DOT__ofmap_wire__v13 = 0U;
            __VdlyVal__Top__DOT__ofmap_wire__v14 = 0U;
            __VdlyVal__Top__DOT__ofmap_wire__v15 = 0U;
        }
        __VdlySet__Top__DOT__ofmap_wire__v8 = 1U;
        if ((0U == (IData)(vlSelfRef.Top__DOT__data_address))) {
            __VdlyVal__Top__DOT__bias_input__v8 = vlSelfRef.Top__DOT__bias_wire
                [0U];
            __VdlySet__Top__DOT__bias_input__v8 = 1U;
            __VdlyVal__Top__DOT__bias_input__v9 = vlSelfRef.Top__DOT__bias_wire
                [1U];
            __VdlyVal__Top__DOT__bias_input__v10 = 
                vlSelfRef.Top__DOT__bias_wire[2U];
            __VdlyVal__Top__DOT__bias_input__v11 = 
                vlSelfRef.Top__DOT__bias_wire[3U];
            __VdlyVal__Top__DOT__bias_input__v12 = 
                vlSelfRef.Top__DOT__bias_wire[4U];
            __VdlyVal__Top__DOT__bias_input__v13 = 
                vlSelfRef.Top__DOT__bias_wire[5U];
            __VdlyVal__Top__DOT__bias_input__v14 = 
                vlSelfRef.Top__DOT__bias_wire[6U];
            __VdlyVal__Top__DOT__bias_input__v15 = 
                vlSelfRef.Top__DOT__bias_wire[7U];
        } else if (((IData)(vlSelfRef.Top__DOT__valid_array) 
                    & (~ (IData)(vlSelfRef.Top__DOT__controller__DOT__compute_stage)))) {
            __VdlyVal__Top__DOT__bias_input__v16 = 
                vlSelfRef.Top__DOT__ofmap_wire[0U];
            __VdlySet__Top__DOT__bias_input__v16 = 1U;
            __VdlyVal__Top__DOT__bias_input__v17 = 
                vlSelfRef.Top__DOT__ofmap_wire[1U];
            __VdlyVal__Top__DOT__bias_input__v18 = 
                vlSelfRef.Top__DOT__ofmap_wire[2U];
            __VdlyVal__Top__DOT__bias_input__v19 = 
                vlSelfRef.Top__DOT__ofmap_wire[3U];
            __VdlyVal__Top__DOT__bias_input__v20 = 
                vlSelfRef.Top__DOT__ofmap_wire[4U];
            __VdlyVal__Top__DOT__bias_input__v21 = 
                vlSelfRef.Top__DOT__ofmap_wire[5U];
            __VdlyVal__Top__DOT__bias_input__v22 = 
                vlSelfRef.Top__DOT__ofmap_wire[6U];
            __VdlyVal__Top__DOT__bias_input__v23 = 
                vlSelfRef.Top__DOT__ofmap_wire[7U];
        } else if (vlSelfRef.Top__DOT__valid_array) {
            __VdlyVal__Top__DOT__bias_input__v24 = 
                vlSelfRef.Top__DOT__bias_wire[0U];
            __VdlySet__Top__DOT__bias_input__v24 = 1U;
            __VdlyVal__Top__DOT__bias_input__v25 = 
                vlSelfRef.Top__DOT__bias_wire[1U];
            __VdlyVal__Top__DOT__bias_input__v26 = 
                vlSelfRef.Top__DOT__bias_wire[2U];
            __VdlyVal__Top__DOT__bias_input__v27 = 
                vlSelfRef.Top__DOT__bias_wire[3U];
            __VdlyVal__Top__DOT__bias_input__v28 = 
                vlSelfRef.Top__DOT__bias_wire[4U];
            __VdlyVal__Top__DOT__bias_input__v29 = 
                vlSelfRef.Top__DOT__bias_wire[5U];
            __VdlyVal__Top__DOT__bias_input__v30 = 
                vlSelfRef.Top__DOT__bias_wire[6U];
            __VdlyVal__Top__DOT__bias_input__v31 = 
                vlSelfRef.Top__DOT__bias_wire[7U];
        } else {
            __VdlyVal__Top__DOT__bias_input__v32 = 
                vlSelfRef.Top__DOT__bias_input[0U];
            __VdlySet__Top__DOT__bias_input__v32 = 1U;
            __VdlyVal__Top__DOT__bias_input__v33 = 
                vlSelfRef.Top__DOT__bias_input[1U];
            __VdlyVal__Top__DOT__bias_input__v34 = 
                vlSelfRef.Top__DOT__bias_input[2U];
            __VdlyVal__Top__DOT__bias_input__v35 = 
                vlSelfRef.Top__DOT__bias_input[3U];
            __VdlyVal__Top__DOT__bias_input__v36 = 
                vlSelfRef.Top__DOT__bias_input[4U];
            __VdlyVal__Top__DOT__bias_input__v37 = 
                vlSelfRef.Top__DOT__bias_input[5U];
            __VdlyVal__Top__DOT__bias_input__v38 = 
                vlSelfRef.Top__DOT__bias_input[6U];
            __VdlyVal__Top__DOT__bias_input__v39 = 
                vlSelfRef.Top__DOT__bias_input[7U];
        }
        vlSelfRef.__Vdly__Top__DOT__data_address = 
            (((IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state) 
              != (IData)(vlSelfRef.Top__DOT__controller__DOT__next_state))
              ? 0U : (0xfffU & ((5U == (IData)(vlSelfRef.Top__DOT__controller__DOT__next_state))
                                 ? ((IData)(1U) + (IData)(vlSelfRef.Top__DOT__data_address))
                                 : ((((1U == (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state)) 
                                      | (2U == (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))) 
                                     | (3U == (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state)))
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelfRef.Top__DOT__data_address))
                                     : (((1U == (3U 
                                                 & (IData)(vlSelfRef.Top__DOT__data_address))) 
                                         & (~ (IData)(vlSelfRef.Top__DOT__i_en_array)))
                                         ? ((IData)(vlSelfRef.Top__DOT__data_address) 
                                            - (IData)(1U))
                                         : ((4U == (IData)(vlSelfRef.Top__DOT__controller__DOT__next_state))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.Top__DOT__data_address))
                                             : (IData)(vlSelfRef.Top__DOT__data_address)))))));
        vlSelfRef.Top__DOT__ppu_output = ((IData)(vlSelfRef.Top__DOT__i_en_ppu)
                                           ? (IData)(vlSelfRef.Top__DOT__ppu__DOT__data_temp)
                                           : 0U);
        vlSelfRef.Top__DOT__ppu_in_out = vlSelfRef.Top__DOT__ppu_input;
    }
    if ((3U == (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))) {
        __VdlyVal__Top__DOT__GLB_bias__DOT__ram__v0 
            = vlSelfRef.data_in;
        __VdlyDim0__Top__DOT__GLB_bias__DOT__ram__v0 
            = (0x7fU & (IData)(vlSelfRef.Top__DOT__data_address));
        __VdlySet__Top__DOT__GLB_bias__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.Top__DOT__ifmap_ren) {
        __VdlyVal__Top__DOT__ifmap_wire__v0 = vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0U];
        __VdlySet__Top__DOT__ifmap_wire__v0 = 1U;
        __VdlyVal__Top__DOT__ifmap_wire__v1 = vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [1U];
        __VdlyVal__Top__DOT__ifmap_wire__v2 = vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [2U];
        __VdlyVal__Top__DOT__ifmap_wire__v3 = vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [3U];
        __VdlyVal__Top__DOT__ifmap_wire__v4 = vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [4U];
        __VdlyVal__Top__DOT__ifmap_wire__v5 = vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [5U];
        __VdlyVal__Top__DOT__ifmap_wire__v6 = vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [6U];
        __VdlyVal__Top__DOT__ifmap_wire__v7 = vlSelfRef.Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [7U];
    }
    if ((1U == (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))) {
        __VdlyVal__Top__DOT__GLB_ifmap__DOT__ram__v0 
            = vlSelfRef.data_in;
        __VdlyDim0__Top__DOT__GLB_ifmap__DOT__ram__v0 
            = (0x1fU & (IData)(vlSelfRef.Top__DOT__data_address));
        __VdlySet__Top__DOT__GLB_ifmap__DOT__ram__v0 = 1U;
    }
    if ((2U == (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))) {
        __VdlyVal__Top__DOT__GLB_weight__DOT__ram__v0 
            = vlSelfRef.data_in;
        __VdlyDim0__Top__DOT__GLB_weight__DOT__ram__v0 
            = (0x3ffU & (IData)(vlSelfRef.Top__DOT__data_address));
        __VdlySet__Top__DOT__GLB_weight__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.Top__DOT__weight_ren) {
        __VdlyVal__Top__DOT__weight_wire__v0 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0U];
        __VdlySet__Top__DOT__weight_wire__v0 = 1U;
        __VdlyVal__Top__DOT__weight_wire__v1 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [1U];
        __VdlyVal__Top__DOT__weight_wire__v2 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [2U];
        __VdlyVal__Top__DOT__weight_wire__v3 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [3U];
        __VdlyVal__Top__DOT__weight_wire__v4 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [4U];
        __VdlyVal__Top__DOT__weight_wire__v5 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [5U];
        __VdlyVal__Top__DOT__weight_wire__v6 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [6U];
        __VdlyVal__Top__DOT__weight_wire__v7 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [7U];
        __VdlyVal__Top__DOT__weight_wire__v8 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [8U];
        __VdlyVal__Top__DOT__weight_wire__v9 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [9U];
        __VdlyVal__Top__DOT__weight_wire__v10 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0xaU];
        __VdlyVal__Top__DOT__weight_wire__v11 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0xbU];
        __VdlyVal__Top__DOT__weight_wire__v12 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0xcU];
        __VdlyVal__Top__DOT__weight_wire__v13 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0xdU];
        __VdlyVal__Top__DOT__weight_wire__v14 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0xeU];
        __VdlyVal__Top__DOT__weight_wire__v15 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0xfU];
        __VdlyVal__Top__DOT__weight_wire__v16 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x10U];
        __VdlyVal__Top__DOT__weight_wire__v17 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x11U];
        __VdlyVal__Top__DOT__weight_wire__v18 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x12U];
        __VdlyVal__Top__DOT__weight_wire__v19 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x13U];
        __VdlyVal__Top__DOT__weight_wire__v20 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x14U];
        __VdlyVal__Top__DOT__weight_wire__v21 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x15U];
        __VdlyVal__Top__DOT__weight_wire__v22 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x16U];
        __VdlyVal__Top__DOT__weight_wire__v23 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x17U];
        __VdlyVal__Top__DOT__weight_wire__v24 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x18U];
        __VdlyVal__Top__DOT__weight_wire__v25 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x19U];
        __VdlyVal__Top__DOT__weight_wire__v26 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x1aU];
        __VdlyVal__Top__DOT__weight_wire__v27 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x1bU];
        __VdlyVal__Top__DOT__weight_wire__v28 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x1cU];
        __VdlyVal__Top__DOT__weight_wire__v29 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x1dU];
        __VdlyVal__Top__DOT__weight_wire__v30 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x1eU];
        __VdlyVal__Top__DOT__weight_wire__v31 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x1fU];
        __VdlyVal__Top__DOT__weight_wire__v32 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x20U];
        __VdlyVal__Top__DOT__weight_wire__v33 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x21U];
        __VdlyVal__Top__DOT__weight_wire__v34 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x22U];
        __VdlyVal__Top__DOT__weight_wire__v35 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x23U];
        __VdlyVal__Top__DOT__weight_wire__v36 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x24U];
        __VdlyVal__Top__DOT__weight_wire__v37 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x25U];
        __VdlyVal__Top__DOT__weight_wire__v38 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x26U];
        __VdlyVal__Top__DOT__weight_wire__v39 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x27U];
        __VdlyVal__Top__DOT__weight_wire__v40 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x28U];
        __VdlyVal__Top__DOT__weight_wire__v41 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x29U];
        __VdlyVal__Top__DOT__weight_wire__v42 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x2aU];
        __VdlyVal__Top__DOT__weight_wire__v43 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x2bU];
        __VdlyVal__Top__DOT__weight_wire__v44 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x2cU];
        __VdlyVal__Top__DOT__weight_wire__v45 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x2dU];
        __VdlyVal__Top__DOT__weight_wire__v46 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x2eU];
        __VdlyVal__Top__DOT__weight_wire__v47 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x2fU];
        __VdlyVal__Top__DOT__weight_wire__v48 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x30U];
        __VdlyVal__Top__DOT__weight_wire__v49 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x31U];
        __VdlyVal__Top__DOT__weight_wire__v50 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x32U];
        __VdlyVal__Top__DOT__weight_wire__v51 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x33U];
        __VdlyVal__Top__DOT__weight_wire__v52 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x34U];
        __VdlyVal__Top__DOT__weight_wire__v53 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x35U];
        __VdlyVal__Top__DOT__weight_wire__v54 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x36U];
        __VdlyVal__Top__DOT__weight_wire__v55 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x37U];
        __VdlyVal__Top__DOT__weight_wire__v56 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x38U];
        __VdlyVal__Top__DOT__weight_wire__v57 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x39U];
        __VdlyVal__Top__DOT__weight_wire__v58 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x3aU];
        __VdlyVal__Top__DOT__weight_wire__v59 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x3bU];
        __VdlyVal__Top__DOT__weight_wire__v60 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x3cU];
        __VdlyVal__Top__DOT__weight_wire__v61 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x3dU];
        __VdlyVal__Top__DOT__weight_wire__v62 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x3eU];
        __VdlyVal__Top__DOT__weight_wire__v63 = vlSelfRef.Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.Top__DOT__data_address))]
            [0x3fU];
    }
    vlSelfRef.valid = ((1U & (~ (IData)(vlSelfRef.rst))) 
                       && (IData)(vlSelfRef.Top__DOT__i_en_ppu));
    vlSelfRef.Top__DOT__bias_ren = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                    && (4U == (IData)(vlSelfRef.Top__DOT__controller__DOT__next_state)));
    if (__VdlySet__Top__DOT__GLB_bias__DOT__ram__v0) {
        vlSelfRef.Top__DOT__GLB_bias__DOT__ram[__VdlyDim0__Top__DOT__GLB_bias__DOT__ram__v0] 
            = __VdlyVal__Top__DOT__GLB_bias__DOT__ram__v0;
    }
    if (__VdlySet__Top__DOT__ifmap_wire__v0) {
        vlSelfRef.Top__DOT__ifmap_wire[0U] = __VdlyVal__Top__DOT__ifmap_wire__v0;
        vlSelfRef.Top__DOT__ifmap_wire[1U] = __VdlyVal__Top__DOT__ifmap_wire__v1;
        vlSelfRef.Top__DOT__ifmap_wire[2U] = __VdlyVal__Top__DOT__ifmap_wire__v2;
        vlSelfRef.Top__DOT__ifmap_wire[3U] = __VdlyVal__Top__DOT__ifmap_wire__v3;
        vlSelfRef.Top__DOT__ifmap_wire[4U] = __VdlyVal__Top__DOT__ifmap_wire__v4;
        vlSelfRef.Top__DOT__ifmap_wire[5U] = __VdlyVal__Top__DOT__ifmap_wire__v5;
        vlSelfRef.Top__DOT__ifmap_wire[6U] = __VdlyVal__Top__DOT__ifmap_wire__v6;
        vlSelfRef.Top__DOT__ifmap_wire[7U] = __VdlyVal__Top__DOT__ifmap_wire__v7;
    }
    if (__VdlySet__Top__DOT__GLB_ifmap__DOT__ram__v0) {
        vlSelfRef.Top__DOT__GLB_ifmap__DOT__ram[__VdlyDim0__Top__DOT__GLB_ifmap__DOT__ram__v0] 
            = __VdlyVal__Top__DOT__GLB_ifmap__DOT__ram__v0;
    }
    vlSelfRef.Top__DOT__controller__DOT__compute_stage 
        = __Vdly__Top__DOT__controller__DOT__compute_stage;
    if (__VdlySet__Top__DOT__ofmap_wire__v0) {
        vlSelfRef.Top__DOT__ofmap_wire[0U] = 0U;
        vlSelfRef.Top__DOT__ofmap_wire[1U] = 0U;
        vlSelfRef.Top__DOT__ofmap_wire[2U] = 0U;
        vlSelfRef.Top__DOT__ofmap_wire[3U] = 0U;
        vlSelfRef.Top__DOT__ofmap_wire[4U] = 0U;
        vlSelfRef.Top__DOT__ofmap_wire[5U] = 0U;
        vlSelfRef.Top__DOT__ofmap_wire[6U] = 0U;
        vlSelfRef.Top__DOT__ofmap_wire[7U] = 0U;
    }
    if (__VdlySet__Top__DOT__ofmap_wire__v8) {
        vlSelfRef.Top__DOT__ofmap_wire[0U] = __VdlyVal__Top__DOT__ofmap_wire__v8;
        vlSelfRef.Top__DOT__ofmap_wire[1U] = __VdlyVal__Top__DOT__ofmap_wire__v9;
        vlSelfRef.Top__DOT__ofmap_wire[2U] = __VdlyVal__Top__DOT__ofmap_wire__v10;
        vlSelfRef.Top__DOT__ofmap_wire[3U] = __VdlyVal__Top__DOT__ofmap_wire__v11;
        vlSelfRef.Top__DOT__ofmap_wire[4U] = __VdlyVal__Top__DOT__ofmap_wire__v12;
        vlSelfRef.Top__DOT__ofmap_wire[5U] = __VdlyVal__Top__DOT__ofmap_wire__v13;
        vlSelfRef.Top__DOT__ofmap_wire[6U] = __VdlyVal__Top__DOT__ofmap_wire__v14;
        vlSelfRef.Top__DOT__ofmap_wire[7U] = __VdlyVal__Top__DOT__ofmap_wire__v15;
    }
    if (__VdlySet__Top__DOT__bias_input__v0) {
        vlSelfRef.Top__DOT__bias_input[0U] = 0U;
        vlSelfRef.Top__DOT__bias_input[1U] = 0U;
        vlSelfRef.Top__DOT__bias_input[2U] = 0U;
        vlSelfRef.Top__DOT__bias_input[3U] = 0U;
        vlSelfRef.Top__DOT__bias_input[4U] = 0U;
        vlSelfRef.Top__DOT__bias_input[5U] = 0U;
        vlSelfRef.Top__DOT__bias_input[6U] = 0U;
        vlSelfRef.Top__DOT__bias_input[7U] = 0U;
    }
    if (__VdlySet__Top__DOT__bias_input__v8) {
        vlSelfRef.Top__DOT__bias_input[0U] = __VdlyVal__Top__DOT__bias_input__v8;
        vlSelfRef.Top__DOT__bias_input[1U] = __VdlyVal__Top__DOT__bias_input__v9;
        vlSelfRef.Top__DOT__bias_input[2U] = __VdlyVal__Top__DOT__bias_input__v10;
        vlSelfRef.Top__DOT__bias_input[3U] = __VdlyVal__Top__DOT__bias_input__v11;
        vlSelfRef.Top__DOT__bias_input[4U] = __VdlyVal__Top__DOT__bias_input__v12;
        vlSelfRef.Top__DOT__bias_input[5U] = __VdlyVal__Top__DOT__bias_input__v13;
        vlSelfRef.Top__DOT__bias_input[6U] = __VdlyVal__Top__DOT__bias_input__v14;
        vlSelfRef.Top__DOT__bias_input[7U] = __VdlyVal__Top__DOT__bias_input__v15;
    }
    if (__VdlySet__Top__DOT__bias_input__v16) {
        vlSelfRef.Top__DOT__bias_input[0U] = __VdlyVal__Top__DOT__bias_input__v16;
        vlSelfRef.Top__DOT__bias_input[1U] = __VdlyVal__Top__DOT__bias_input__v17;
        vlSelfRef.Top__DOT__bias_input[2U] = __VdlyVal__Top__DOT__bias_input__v18;
        vlSelfRef.Top__DOT__bias_input[3U] = __VdlyVal__Top__DOT__bias_input__v19;
        vlSelfRef.Top__DOT__bias_input[4U] = __VdlyVal__Top__DOT__bias_input__v20;
        vlSelfRef.Top__DOT__bias_input[5U] = __VdlyVal__Top__DOT__bias_input__v21;
        vlSelfRef.Top__DOT__bias_input[6U] = __VdlyVal__Top__DOT__bias_input__v22;
        vlSelfRef.Top__DOT__bias_input[7U] = __VdlyVal__Top__DOT__bias_input__v23;
    }
    if (__VdlySet__Top__DOT__bias_input__v24) {
        vlSelfRef.Top__DOT__bias_input[0U] = __VdlyVal__Top__DOT__bias_input__v24;
        vlSelfRef.Top__DOT__bias_input[1U] = __VdlyVal__Top__DOT__bias_input__v25;
        vlSelfRef.Top__DOT__bias_input[2U] = __VdlyVal__Top__DOT__bias_input__v26;
        vlSelfRef.Top__DOT__bias_input[3U] = __VdlyVal__Top__DOT__bias_input__v27;
        vlSelfRef.Top__DOT__bias_input[4U] = __VdlyVal__Top__DOT__bias_input__v28;
        vlSelfRef.Top__DOT__bias_input[5U] = __VdlyVal__Top__DOT__bias_input__v29;
        vlSelfRef.Top__DOT__bias_input[6U] = __VdlyVal__Top__DOT__bias_input__v30;
        vlSelfRef.Top__DOT__bias_input[7U] = __VdlyVal__Top__DOT__bias_input__v31;
    }
    if (__VdlySet__Top__DOT__bias_input__v32) {
        vlSelfRef.Top__DOT__bias_input[0U] = __VdlyVal__Top__DOT__bias_input__v32;
        vlSelfRef.Top__DOT__bias_input[1U] = __VdlyVal__Top__DOT__bias_input__v33;
        vlSelfRef.Top__DOT__bias_input[2U] = __VdlyVal__Top__DOT__bias_input__v34;
        vlSelfRef.Top__DOT__bias_input[3U] = __VdlyVal__Top__DOT__bias_input__v35;
        vlSelfRef.Top__DOT__bias_input[4U] = __VdlyVal__Top__DOT__bias_input__v36;
        vlSelfRef.Top__DOT__bias_input[5U] = __VdlyVal__Top__DOT__bias_input__v37;
        vlSelfRef.Top__DOT__bias_input[6U] = __VdlyVal__Top__DOT__bias_input__v38;
        vlSelfRef.Top__DOT__bias_input[7U] = __VdlyVal__Top__DOT__bias_input__v39;
    }
    if (__VdlySet__Top__DOT__GLB_weight__DOT__ram__v0) {
        vlSelfRef.Top__DOT__GLB_weight__DOT__ram[__VdlyDim0__Top__DOT__GLB_weight__DOT__ram__v0] 
            = __VdlyVal__Top__DOT__GLB_weight__DOT__ram__v0;
    }
    if (__VdlySet__Top__DOT__weight_wire__v0) {
        vlSelfRef.Top__DOT__weight_wire[0U] = __VdlyVal__Top__DOT__weight_wire__v0;
        vlSelfRef.Top__DOT__weight_wire[1U] = __VdlyVal__Top__DOT__weight_wire__v1;
        vlSelfRef.Top__DOT__weight_wire[2U] = __VdlyVal__Top__DOT__weight_wire__v2;
        vlSelfRef.Top__DOT__weight_wire[3U] = __VdlyVal__Top__DOT__weight_wire__v3;
        vlSelfRef.Top__DOT__weight_wire[4U] = __VdlyVal__Top__DOT__weight_wire__v4;
        vlSelfRef.Top__DOT__weight_wire[5U] = __VdlyVal__Top__DOT__weight_wire__v5;
        vlSelfRef.Top__DOT__weight_wire[6U] = __VdlyVal__Top__DOT__weight_wire__v6;
        vlSelfRef.Top__DOT__weight_wire[7U] = __VdlyVal__Top__DOT__weight_wire__v7;
        vlSelfRef.Top__DOT__weight_wire[8U] = __VdlyVal__Top__DOT__weight_wire__v8;
        vlSelfRef.Top__DOT__weight_wire[9U] = __VdlyVal__Top__DOT__weight_wire__v9;
        vlSelfRef.Top__DOT__weight_wire[0xaU] = __VdlyVal__Top__DOT__weight_wire__v10;
        vlSelfRef.Top__DOT__weight_wire[0xbU] = __VdlyVal__Top__DOT__weight_wire__v11;
        vlSelfRef.Top__DOT__weight_wire[0xcU] = __VdlyVal__Top__DOT__weight_wire__v12;
        vlSelfRef.Top__DOT__weight_wire[0xdU] = __VdlyVal__Top__DOT__weight_wire__v13;
        vlSelfRef.Top__DOT__weight_wire[0xeU] = __VdlyVal__Top__DOT__weight_wire__v14;
        vlSelfRef.Top__DOT__weight_wire[0xfU] = __VdlyVal__Top__DOT__weight_wire__v15;
        vlSelfRef.Top__DOT__weight_wire[0x10U] = __VdlyVal__Top__DOT__weight_wire__v16;
        vlSelfRef.Top__DOT__weight_wire[0x11U] = __VdlyVal__Top__DOT__weight_wire__v17;
        vlSelfRef.Top__DOT__weight_wire[0x12U] = __VdlyVal__Top__DOT__weight_wire__v18;
        vlSelfRef.Top__DOT__weight_wire[0x13U] = __VdlyVal__Top__DOT__weight_wire__v19;
        vlSelfRef.Top__DOT__weight_wire[0x14U] = __VdlyVal__Top__DOT__weight_wire__v20;
        vlSelfRef.Top__DOT__weight_wire[0x15U] = __VdlyVal__Top__DOT__weight_wire__v21;
        vlSelfRef.Top__DOT__weight_wire[0x16U] = __VdlyVal__Top__DOT__weight_wire__v22;
        vlSelfRef.Top__DOT__weight_wire[0x17U] = __VdlyVal__Top__DOT__weight_wire__v23;
        vlSelfRef.Top__DOT__weight_wire[0x18U] = __VdlyVal__Top__DOT__weight_wire__v24;
        vlSelfRef.Top__DOT__weight_wire[0x19U] = __VdlyVal__Top__DOT__weight_wire__v25;
        vlSelfRef.Top__DOT__weight_wire[0x1aU] = __VdlyVal__Top__DOT__weight_wire__v26;
        vlSelfRef.Top__DOT__weight_wire[0x1bU] = __VdlyVal__Top__DOT__weight_wire__v27;
        vlSelfRef.Top__DOT__weight_wire[0x1cU] = __VdlyVal__Top__DOT__weight_wire__v28;
        vlSelfRef.Top__DOT__weight_wire[0x1dU] = __VdlyVal__Top__DOT__weight_wire__v29;
        vlSelfRef.Top__DOT__weight_wire[0x1eU] = __VdlyVal__Top__DOT__weight_wire__v30;
        vlSelfRef.Top__DOT__weight_wire[0x1fU] = __VdlyVal__Top__DOT__weight_wire__v31;
        vlSelfRef.Top__DOT__weight_wire[0x20U] = __VdlyVal__Top__DOT__weight_wire__v32;
        vlSelfRef.Top__DOT__weight_wire[0x21U] = __VdlyVal__Top__DOT__weight_wire__v33;
        vlSelfRef.Top__DOT__weight_wire[0x22U] = __VdlyVal__Top__DOT__weight_wire__v34;
        vlSelfRef.Top__DOT__weight_wire[0x23U] = __VdlyVal__Top__DOT__weight_wire__v35;
        vlSelfRef.Top__DOT__weight_wire[0x24U] = __VdlyVal__Top__DOT__weight_wire__v36;
        vlSelfRef.Top__DOT__weight_wire[0x25U] = __VdlyVal__Top__DOT__weight_wire__v37;
        vlSelfRef.Top__DOT__weight_wire[0x26U] = __VdlyVal__Top__DOT__weight_wire__v38;
        vlSelfRef.Top__DOT__weight_wire[0x27U] = __VdlyVal__Top__DOT__weight_wire__v39;
        vlSelfRef.Top__DOT__weight_wire[0x28U] = __VdlyVal__Top__DOT__weight_wire__v40;
        vlSelfRef.Top__DOT__weight_wire[0x29U] = __VdlyVal__Top__DOT__weight_wire__v41;
        vlSelfRef.Top__DOT__weight_wire[0x2aU] = __VdlyVal__Top__DOT__weight_wire__v42;
        vlSelfRef.Top__DOT__weight_wire[0x2bU] = __VdlyVal__Top__DOT__weight_wire__v43;
        vlSelfRef.Top__DOT__weight_wire[0x2cU] = __VdlyVal__Top__DOT__weight_wire__v44;
        vlSelfRef.Top__DOT__weight_wire[0x2dU] = __VdlyVal__Top__DOT__weight_wire__v45;
        vlSelfRef.Top__DOT__weight_wire[0x2eU] = __VdlyVal__Top__DOT__weight_wire__v46;
        vlSelfRef.Top__DOT__weight_wire[0x2fU] = __VdlyVal__Top__DOT__weight_wire__v47;
        vlSelfRef.Top__DOT__weight_wire[0x30U] = __VdlyVal__Top__DOT__weight_wire__v48;
        vlSelfRef.Top__DOT__weight_wire[0x31U] = __VdlyVal__Top__DOT__weight_wire__v49;
        vlSelfRef.Top__DOT__weight_wire[0x32U] = __VdlyVal__Top__DOT__weight_wire__v50;
        vlSelfRef.Top__DOT__weight_wire[0x33U] = __VdlyVal__Top__DOT__weight_wire__v51;
        vlSelfRef.Top__DOT__weight_wire[0x34U] = __VdlyVal__Top__DOT__weight_wire__v52;
        vlSelfRef.Top__DOT__weight_wire[0x35U] = __VdlyVal__Top__DOT__weight_wire__v53;
        vlSelfRef.Top__DOT__weight_wire[0x36U] = __VdlyVal__Top__DOT__weight_wire__v54;
        vlSelfRef.Top__DOT__weight_wire[0x37U] = __VdlyVal__Top__DOT__weight_wire__v55;
        vlSelfRef.Top__DOT__weight_wire[0x38U] = __VdlyVal__Top__DOT__weight_wire__v56;
        vlSelfRef.Top__DOT__weight_wire[0x39U] = __VdlyVal__Top__DOT__weight_wire__v57;
        vlSelfRef.Top__DOT__weight_wire[0x3aU] = __VdlyVal__Top__DOT__weight_wire__v58;
        vlSelfRef.Top__DOT__weight_wire[0x3bU] = __VdlyVal__Top__DOT__weight_wire__v59;
        vlSelfRef.Top__DOT__weight_wire[0x3cU] = __VdlyVal__Top__DOT__weight_wire__v60;
        vlSelfRef.Top__DOT__weight_wire[0x3dU] = __VdlyVal__Top__DOT__weight_wire__v61;
        vlSelfRef.Top__DOT__weight_wire[0x3eU] = __VdlyVal__Top__DOT__weight_wire__v62;
        vlSelfRef.Top__DOT__weight_wire[0x3fU] = __VdlyVal__Top__DOT__weight_wire__v63;
    }
    vlSelfRef.Top__DOT__ifmap_ren = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                     && (4U == (IData)(vlSelfRef.Top__DOT__controller__DOT__next_state)));
    vlSelfRef.Top__DOT__weight_ren = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                      && (4U == (IData)(vlSelfRef.Top__DOT__controller__DOT__next_state)));
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
    vlSelfRef.ofmap = ((IData)(vlSelfRef.Top__DOT__mode1_step0)
                        ? vlSelfRef.Top__DOT__ppu_in_out
                        : (IData)(vlSelfRef.Top__DOT__ppu_output));
    if ((5U == (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))) {
        vlSelfRef.Top__DOT__ppu_input = vlSelfRef.Top__DOT__GLB_ofmap__DOT__ram
            [vlSelfRef.Top__DOT__ofmap_address];
    }
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
    if (__VdlySet__Top__DOT__GLB_ofmap__DOT__ram__v0) {
        vlSelfRef.Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v0] 
            = __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v0;
        vlSelfRef.Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v1] 
            = __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v1;
        vlSelfRef.Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v2] 
            = __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v2;
        vlSelfRef.Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v3] 
            = __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v3;
        vlSelfRef.Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v4] 
            = __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v4;
        vlSelfRef.Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v5] 
            = __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v5;
        vlSelfRef.Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v6] 
            = __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v6;
        vlSelfRef.Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__Top__DOT__GLB_ofmap__DOT__ram__v7] 
            = __VdlyVal__Top__DOT__GLB_ofmap__DOT__ram__v7;
    }
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
    vlSelfRef.Top__DOT__ppu__DOT__relu_out = ((vlSelfRef.Top__DOT__ppu_input 
                                               >> 0x1fU)
                                               ? 0U
                                               : vlSelfRef.Top__DOT__ppu_input);
    vlSelfRef.Top__DOT__ppu__DOT__data_shift = (0xffU 
                                                & VL_DIV_III(32, vlSelfRef.Top__DOT__ppu__DOT__relu_out, (IData)(vlSelfRef.scaling_factor)));
    vlSelfRef.Top__DOT__ppu__DOT__data_temp = vlSelfRef.Top__DOT__ppu__DOT__data_shift;
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__1(VTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.Top__DOT__i_en_array = ((~ (IData)(vlSelfRef.rst)) 
                                      & (((0U == (IData)(vlSelfRef.Top__DOT__data_address)) 
                                          & (4U == (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state))) 
                                         | ((4U == (IData)(vlSelfRef.Top__DOT__controller__DOT__cur_state)) 
                                            & (IData)(vlSelfRef.Top__DOT__valid_array))));
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
    vlSelfRef.Top__DOT__data_address = vlSelfRef.__Vdly__Top__DOT__data_address;
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
    vlSelfRef.Top__DOT__valid_array = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                       && (0xffU == (IData)(vlSelfRef.Top__DOT__array__DOT__valid_chain)));
    vlSelfRef.Top__DOT__controller__DOT__cur_state 
        = ((IData)(vlSelfRef.rst) ? 0U : (IData)(vlSelfRef.Top__DOT__controller__DOT__next_state));
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
    vlSelfRef.Top__DOT__array__DOT__valid_chain = (
                                                   ((IData)(
                                                            (0xffU 
                                                             == 
                                                             vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                             [3U])) 
                                                    << 7U) 
                                                   | (((IData)(
                                                               (0xffU 
                                                                == 
                                                                vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                                [3U])) 
                                                       << 6U) 
                                                      | (((IData)(
                                                                  (0xffU 
                                                                   == 
                                                                   vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                                   [3U])) 
                                                          << 5U) 
                                                         | (((IData)(
                                                                     (0xffU 
                                                                      == 
                                                                      vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                                      [3U])) 
                                                             << 4U) 
                                                            | (((IData)(
                                                                        (0xffU 
                                                                         == 
                                                                         vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                                         [3U])) 
                                                                << 3U) 
                                                               | (((IData)(
                                                                           (0xffU 
                                                                            == 
                                                                            vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                                            [3U])) 
                                                                   << 2U) 
                                                                  | (((IData)(
                                                                              (0xffU 
                                                                               == 
                                                                               vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                                                               [3U])) 
                                                                      << 1U) 
                                                                     | (0xffU 
                                                                        == 
                                                                        vlSymsp->TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                                                        [3U]))))))));
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
}
