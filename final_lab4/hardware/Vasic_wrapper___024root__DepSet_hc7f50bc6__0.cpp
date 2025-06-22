// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper__Syms.h"
#include "Vasic_wrapper___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__ico(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vasic_wrapper___024root___eval_triggers__ico(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_triggers__ico\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vasic_wrapper___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__act(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vasic_wrapper___024root___eval_triggers__act(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_triggers__act\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.ACLK) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ACLK__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.ACLK)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ACLK__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__ACLK__0 = vlSelfRef.ACLK;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vasic_wrapper___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vasic_wrapper___024root___nba_sequent__TOP__0(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
void Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
void Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
void Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
void Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
void Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
void Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
void Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
void Vasic_wrapper___024root___nba_sequent__TOP__1(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper___024root___nba_sequent__TOP__2(Vasic_wrapper___024root* vlSelf);

void Vasic_wrapper___024root___eval_nba(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_nba\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasic_wrapper___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block));
        Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block));
        Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block));
        Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block));
        Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block));
        Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block));
        Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block));
        Vasic_wrapper_PE_block___nba_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block));
        Vasic_wrapper___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasic_wrapper___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vasic_wrapper___024root___nba_sequent__TOP__0(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___nba_sequent__TOP__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__asic_wrapper__DOT__step;
    __Vdly__asic_wrapper__DOT__step = 0;
    CData/*7:0*/ __Vdly__asic_wrapper__DOT__ofmap_count;
    __Vdly__asic_wrapper__DOT__ofmap_count = 0;
    CData/*3:0*/ __Vdly__asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage;
    __Vdly__asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v0;
    __VdlyVal__data_temp__v0 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v0;
    __VdlySet__data_temp__v0 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v1;
    __VdlyVal__data_temp__v1 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v1;
    __VdlySet__data_temp__v1 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v2;
    __VdlyVal__data_temp__v2 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v2;
    __VdlySet__data_temp__v2 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v3;
    __VdlyVal__data_temp__v3 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v3;
    __VdlySet__data_temp__v3 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v4;
    __VdlyVal__data_temp__v4 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v4;
    __VdlySet__data_temp__v4 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v5;
    __VdlyVal__data_temp__v5 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v5;
    __VdlySet__data_temp__v5 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v6;
    __VdlyVal__data_temp__v6 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v6;
    __VdlySet__data_temp__v6 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v7;
    __VdlyVal__data_temp__v7 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v7;
    __VdlySet__data_temp__v7 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v8;
    __VdlyVal__data_temp__v8 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v8;
    __VdlySet__data_temp__v8 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v9;
    __VdlyVal__data_temp__v9 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v9;
    __VdlySet__data_temp__v9 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v10;
    __VdlyVal__data_temp__v10 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v10;
    __VdlySet__data_temp__v10 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v11;
    __VdlyVal__data_temp__v11 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v11;
    __VdlySet__data_temp__v11 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v12;
    __VdlyVal__data_temp__v12 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v12;
    __VdlySet__data_temp__v12 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v13;
    __VdlyVal__data_temp__v13 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v13;
    __VdlySet__data_temp__v13 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v14;
    __VdlyVal__data_temp__v14 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v14;
    __VdlySet__data_temp__v14 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v15;
    __VdlyVal__data_temp__v15 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v15;
    __VdlySet__data_temp__v15 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v16;
    __VdlyVal__data_temp__v16 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v16;
    __VdlySet__data_temp__v16 = 0;
    IData/*31:0*/ __VdlyVal__data_temp__v17;
    __VdlyVal__data_temp__v17 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v17;
    __VdlySet__data_temp__v17 = 0;
    CData/*0:0*/ __VdlySet__data_temp__v18;
    __VdlySet__data_temp__v18 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__DATA_buffer__v0;
    __VdlyVal__asic_wrapper__DOT__DATA_buffer__v0 = 0;
    SData/*10:0*/ __VdlyDim0__asic_wrapper__DOT__DATA_buffer__v0;
    __VdlyDim0__asic_wrapper__DOT__DATA_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__DATA_buffer__v1;
    __VdlyVal__asic_wrapper__DOT__DATA_buffer__v1 = 0;
    SData/*10:0*/ __VdlyDim0__asic_wrapper__DOT__DATA_buffer__v1;
    __VdlyDim0__asic_wrapper__DOT__DATA_buffer__v1 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__DATA_buffer__v2;
    __VdlyVal__asic_wrapper__DOT__DATA_buffer__v2 = 0;
    SData/*10:0*/ __VdlyDim0__asic_wrapper__DOT__DATA_buffer__v2;
    __VdlyDim0__asic_wrapper__DOT__DATA_buffer__v2 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__ofmap_reg__v0;
    __VdlyVal__asic_wrapper__DOT__ofmap_reg__v0 = 0;
    CData/*6:0*/ __VdlyDim0__asic_wrapper__DOT__ofmap_reg__v0;
    __VdlyDim0__asic_wrapper__DOT__ofmap_reg__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__ofmap_reg__v0;
    __VdlySet__asic_wrapper__DOT__ofmap_reg__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__ofmap_reg__v1;
    __VdlyVal__asic_wrapper__DOT__ofmap_reg__v1 = 0;
    CData/*6:0*/ __VdlyDim0__asic_wrapper__DOT__ofmap_reg__v1;
    __VdlyDim0__asic_wrapper__DOT__ofmap_reg__v1 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__ofmap_reg__v1;
    __VdlySet__asic_wrapper__DOT__ofmap_reg__v1 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v0;
    __VdlyVal__ppu_out_temp__v0 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v0;
    __VdlySet__ppu_out_temp__v0 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v1;
    __VdlyVal__ppu_out_temp__v1 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v1;
    __VdlySet__ppu_out_temp__v1 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v2;
    __VdlyVal__ppu_out_temp__v2 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v2;
    __VdlySet__ppu_out_temp__v2 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v3;
    __VdlyVal__ppu_out_temp__v3 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v3;
    __VdlySet__ppu_out_temp__v3 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v4;
    __VdlyVal__ppu_out_temp__v4 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v4;
    __VdlySet__ppu_out_temp__v4 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v5;
    __VdlyVal__ppu_out_temp__v5 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v5;
    __VdlySet__ppu_out_temp__v5 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v6;
    __VdlyVal__ppu_out_temp__v6 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v6;
    __VdlySet__ppu_out_temp__v6 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v7;
    __VdlyVal__ppu_out_temp__v7 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v7;
    __VdlySet__ppu_out_temp__v7 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v8;
    __VdlyVal__ppu_out_temp__v8 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v8;
    __VdlySet__ppu_out_temp__v8 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v9;
    __VdlyVal__ppu_out_temp__v9 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v9;
    __VdlySet__ppu_out_temp__v9 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v10;
    __VdlyVal__ppu_out_temp__v10 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v10;
    __VdlySet__ppu_out_temp__v10 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v11;
    __VdlyVal__ppu_out_temp__v11 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v11;
    __VdlySet__ppu_out_temp__v11 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v12;
    __VdlyVal__ppu_out_temp__v12 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v12;
    __VdlySet__ppu_out_temp__v12 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v13;
    __VdlyVal__ppu_out_temp__v13 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v13;
    __VdlySet__ppu_out_temp__v13 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v14;
    __VdlyVal__ppu_out_temp__v14 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v14;
    __VdlySet__ppu_out_temp__v14 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v15;
    __VdlyVal__ppu_out_temp__v15 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v16;
    __VdlyVal__ppu_out_temp__v16 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v17;
    __VdlyVal__ppu_out_temp__v17 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v18;
    __VdlyVal__ppu_out_temp__v18 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v19;
    __VdlyVal__ppu_out_temp__v19 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v20;
    __VdlyVal__ppu_out_temp__v20 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v21;
    __VdlyVal__ppu_out_temp__v21 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v22;
    __VdlyVal__ppu_out_temp__v22 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v23;
    __VdlyVal__ppu_out_temp__v23 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v24;
    __VdlyVal__ppu_out_temp__v24 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v25;
    __VdlyVal__ppu_out_temp__v25 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v26;
    __VdlyVal__ppu_out_temp__v26 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v27;
    __VdlyVal__ppu_out_temp__v27 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v28;
    __VdlyVal__ppu_out_temp__v28 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v29;
    __VdlyVal__ppu_out_temp__v29 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v30;
    __VdlyVal__ppu_out_temp__v30 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v31;
    __VdlyVal__ppu_out_temp__v31 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v32;
    __VdlyVal__ppu_out_temp__v32 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v33;
    __VdlyVal__ppu_out_temp__v33 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v34;
    __VdlyVal__ppu_out_temp__v34 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v35;
    __VdlyVal__ppu_out_temp__v35 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v36;
    __VdlyVal__ppu_out_temp__v36 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v37;
    __VdlyVal__ppu_out_temp__v37 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v38;
    __VdlyVal__ppu_out_temp__v38 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v39;
    __VdlyVal__ppu_out_temp__v39 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v40;
    __VdlyVal__ppu_out_temp__v40 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v41;
    __VdlyVal__ppu_out_temp__v41 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v42;
    __VdlyVal__ppu_out_temp__v42 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v43;
    __VdlyVal__ppu_out_temp__v43 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v44;
    __VdlyVal__ppu_out_temp__v44 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v45;
    __VdlyVal__ppu_out_temp__v45 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v46;
    __VdlyVal__ppu_out_temp__v46 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v47;
    __VdlyVal__ppu_out_temp__v47 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v48;
    __VdlyVal__ppu_out_temp__v48 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v49;
    __VdlyVal__ppu_out_temp__v49 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v50;
    __VdlyVal__ppu_out_temp__v50 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v51;
    __VdlyVal__ppu_out_temp__v51 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v52;
    __VdlyVal__ppu_out_temp__v52 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v53;
    __VdlyVal__ppu_out_temp__v53 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v54;
    __VdlyVal__ppu_out_temp__v54 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v55;
    __VdlyVal__ppu_out_temp__v55 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v56;
    __VdlyVal__ppu_out_temp__v56 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v57;
    __VdlyVal__ppu_out_temp__v57 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v58;
    __VdlyVal__ppu_out_temp__v58 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v59;
    __VdlyVal__ppu_out_temp__v59 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v60;
    __VdlyVal__ppu_out_temp__v60 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v61;
    __VdlyVal__ppu_out_temp__v61 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v62;
    __VdlyVal__ppu_out_temp__v62 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v63;
    __VdlyVal__ppu_out_temp__v63 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v64;
    __VdlyVal__ppu_out_temp__v64 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v65;
    __VdlyVal__ppu_out_temp__v65 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v66;
    __VdlyVal__ppu_out_temp__v66 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v67;
    __VdlyVal__ppu_out_temp__v67 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v68;
    __VdlyVal__ppu_out_temp__v68 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v69;
    __VdlyVal__ppu_out_temp__v69 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v70;
    __VdlyVal__ppu_out_temp__v70 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v71;
    __VdlyVal__ppu_out_temp__v71 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v72;
    __VdlyVal__ppu_out_temp__v72 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v73;
    __VdlyVal__ppu_out_temp__v73 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v74;
    __VdlyVal__ppu_out_temp__v74 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v75;
    __VdlyVal__ppu_out_temp__v75 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v76;
    __VdlyVal__ppu_out_temp__v76 = 0;
    IData/*31:0*/ __VdlyVal__ppu_out_temp__v77;
    __VdlyVal__ppu_out_temp__v77 = 0;
    CData/*0:0*/ __VdlySet__ppu_out_temp__v78;
    __VdlySet__ppu_out_temp__v78 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v0;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v0;
    __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v1;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v1 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v2;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v2 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v3;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v3 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v4;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v4 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v5;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v5 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v6;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v6 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v7;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v7 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v8;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v8 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v8;
    __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v8 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v9;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v9 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v10;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v10 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v11;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v11 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v12;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v12 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v13;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v13 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v14;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v14 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v15;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v15 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v16;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v16 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v16;
    __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v16 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v17;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v17 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v18;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v18 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v19;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v19 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v20;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v20 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v21;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v21 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v22;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v22 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v23;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v23 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v24;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v24 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v24;
    __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v24 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v25;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v25 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v26;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v26 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v27;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v27 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v28;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v28 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v29;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v29 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v30;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v30 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v31;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v31 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v32;
    __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v32 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v0;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__ofmap_wire__v0;
    __VdlySet__asic_wrapper__DOT__Top__DOT__ofmap_wire__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v1;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v1 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v2;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v2 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v3;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v3 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v4;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v4 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v5;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v5 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v6;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v6 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v7;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v7 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__ofmap_wire__v8;
    __VdlySet__asic_wrapper__DOT__Top__DOT__ofmap_wire__v8 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v0;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__ifmap_wire__v0;
    __VdlySet__asic_wrapper__DOT__Top__DOT__ifmap_wire__v0 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v1;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v1 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v2;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v2 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v3;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v3 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v4;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v4 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v5;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v5 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v6;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v6 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v7;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v7 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0;
    __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0;
    __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0 = 0;
    SData/*9:0*/ __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0;
    __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0;
    __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v0;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__weight_wire__v0;
    __VdlySet__asic_wrapper__DOT__Top__DOT__weight_wire__v0 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v1;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v1 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v2;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v2 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v3;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v3 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v4;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v4 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v5;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v5 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v6;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v6 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v7;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v7 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v8;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v8 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v9;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v9 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v10;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v10 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v11;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v11 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v12;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v12 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v13;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v13 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v14;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v14 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v15;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v15 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v16;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v16 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v17;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v17 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v18;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v18 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v19;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v19 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v20;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v20 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v21;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v21 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v22;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v22 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v23;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v23 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v24;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v24 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v25;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v25 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v26;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v26 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v27;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v27 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v28;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v28 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v29;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v29 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v30;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v30 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v31;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v31 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v32;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v32 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v33;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v33 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v34;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v34 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v35;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v35 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v36;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v36 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v37;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v37 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v38;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v38 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v39;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v39 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v40;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v40 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v41;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v41 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v42;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v42 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v43;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v43 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v44;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v44 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v45;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v45 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v46;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v46 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v47;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v47 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v48;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v48 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v49;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v49 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v50;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v50 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v51;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v51 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v52;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v52 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v53;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v53 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v54;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v54 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v55;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v55 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v56;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v56 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v57;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v57 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v58;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v58 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v59;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v59 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v60;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v60 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v61;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v61 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v62;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v62 = 0;
    CData/*7:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v63;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v63 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0;
    __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0;
    __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0 = 0;
    CData/*6:0*/ __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0;
    __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0;
    __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v1;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v1 = 0;
    CData/*6:0*/ __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v1;
    __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v1 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v2;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v2 = 0;
    CData/*6:0*/ __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v2;
    __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v2 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v3;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v3 = 0;
    CData/*6:0*/ __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v3;
    __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v3 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v4;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v4 = 0;
    CData/*6:0*/ __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v4;
    __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v4 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v5;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v5 = 0;
    CData/*6:0*/ __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v5;
    __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v6;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v6 = 0;
    CData/*6:0*/ __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v6;
    __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v6 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v7;
    __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v7 = 0;
    CData/*6:0*/ __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v7;
    __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v7 = 0;
    // Body
    __Vdly__asic_wrapper__DOT__step = vlSelfRef.asic_wrapper__DOT__step;
    __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0 = 0U;
    __Vdly__asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage;
    __Vdly__asic_wrapper__DOT__ofmap_count = vlSelfRef.asic_wrapper__DOT__ofmap_count;
    __VdlySet__asic_wrapper__DOT__ofmap_reg__v0 = 0U;
    __VdlySet__asic_wrapper__DOT__ofmap_reg__v1 = 0U;
    __VdlySet__asic_wrapper__DOT__Top__DOT__ofmap_wire__v0 = 0U;
    __VdlySet__asic_wrapper__DOT__Top__DOT__ofmap_wire__v8 = 0U;
    __VdlySet__data_temp__v0 = 0U;
    __VdlySet__data_temp__v1 = 0U;
    __VdlySet__data_temp__v2 = 0U;
    __VdlySet__data_temp__v3 = 0U;
    __VdlySet__data_temp__v4 = 0U;
    __VdlySet__data_temp__v5 = 0U;
    __VdlySet__data_temp__v6 = 0U;
    __VdlySet__data_temp__v7 = 0U;
    __VdlySet__data_temp__v8 = 0U;
    __VdlySet__data_temp__v9 = 0U;
    __VdlySet__data_temp__v10 = 0U;
    __VdlySet__data_temp__v11 = 0U;
    __VdlySet__data_temp__v12 = 0U;
    __VdlySet__data_temp__v13 = 0U;
    __VdlySet__data_temp__v14 = 0U;
    __VdlySet__data_temp__v15 = 0U;
    __VdlySet__data_temp__v16 = 0U;
    __VdlySet__data_temp__v17 = 0U;
    __VdlySet__data_temp__v18 = 0U;
    __VdlySet__ppu_out_temp__v0 = 0U;
    __VdlySet__ppu_out_temp__v1 = 0U;
    __VdlySet__ppu_out_temp__v2 = 0U;
    __VdlySet__ppu_out_temp__v3 = 0U;
    __VdlySet__ppu_out_temp__v4 = 0U;
    __VdlySet__ppu_out_temp__v5 = 0U;
    __VdlySet__ppu_out_temp__v6 = 0U;
    __VdlySet__ppu_out_temp__v7 = 0U;
    __VdlySet__ppu_out_temp__v8 = 0U;
    __VdlySet__ppu_out_temp__v9 = 0U;
    __VdlySet__ppu_out_temp__v10 = 0U;
    __VdlySet__ppu_out_temp__v11 = 0U;
    __VdlySet__ppu_out_temp__v12 = 0U;
    __VdlySet__ppu_out_temp__v13 = 0U;
    __VdlySet__ppu_out_temp__v14 = 0U;
    __VdlySet__ppu_out_temp__v78 = 0U;
    __VdlySet__asic_wrapper__DOT__Top__DOT__ifmap_wire__v0 = 0U;
    __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0 = 0U;
    __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v0 = 0U;
    __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v8 = 0U;
    __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v16 = 0U;
    __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v24 = 0U;
    __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v32 = 0U;
    __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0 = 0U;
    vlSelfRef.__Vdly__asic_wrapper__DOT__Top__DOT__data_address 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address;
    __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0 = 0U;
    __VdlySet__asic_wrapper__DOT__Top__DOT__weight_wire__v0 = 0U;
    vlSelfRef.asic_wrapper__DOT__Top__DOT__i = 8U;
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__u_Adder_tree__DOT__i = 8U;
    if ((1U & (~ (IData)(vlSelfRef.ARESETn)))) {
        vlSelfRef.asic_wrapper__DOT__unnamedblk1__DOT__j = 9U;
        vlSelfRef.asic_wrapper__DOT__unnamedblk3__DOT__j = 0x40U;
    }
    if (vlSelfRef.ARESETn) {
        if ((0x41U != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            if ((7U != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                if ((0xbU != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                    if ((0x18U != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                        if ((0x19U != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                            if ((0x1aU != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                                if ((0x22U != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                                    if ((0x24U != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                                        if ((0x29U 
                                             != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                                            if ((0x2aU 
                                                 != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                                                if (
                                                    (0x2eU 
                                                     != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                                                    if (
                                                        (0x32U 
                                                         != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                                                        if (
                                                            (0x36U 
                                                             != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                                                            if (
                                                                (0x3eU 
                                                                 != (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
                                                                vlSelfRef.asic_wrapper__DOT__unnamedblk4__DOT__j = 0x40U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((0U == (IData)(vlSelfRef.asic_wrapper__DOT__count)) 
                      & (IData)(vlSelfRef.asic_wrapper__DOT__data_ready_reg))))) {
            if ((1U != (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
                if ((2U != (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
                    if ((3U != (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
                        if ((4U != (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
                            if ((5U != (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
                                if ((6U != (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
                                    if ((7U != (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
                                        if ((8U != (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
                                            vlSelfRef.asic_wrapper__DOT__unnamedblk2__DOT__j = 9U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.ARESETn) {
        if (((IData)(vlSelfRef.asic_wrapper__DOT__valid) 
             & (1U == (IData)(vlSelfRef.asic_wrapper__DOT__state)))) {
            vlSelfRef.asic_wrapper__DOT____Vlvbound_hf69f4574__0 
                = vlSelfRef.asic_wrapper__DOT__ofmap;
            if ((0x44fU >= (0x7ffU & ((IData)(0x410U) 
                                      + (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))))) {
                __VdlyVal__asic_wrapper__DOT__DATA_buffer__v0 
                    = vlSelfRef.asic_wrapper__DOT____Vlvbound_hf69f4574__0;
                __VdlyDim0__asic_wrapper__DOT__DATA_buffer__v0 
                    = (0x7ffU & ((IData)(0x410U) + (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count)));
                vlSelfRef.__VdlyCommitQueueasic_wrapper__DOT__DATA_buffer.enqueue(__VdlyVal__asic_wrapper__DOT__DATA_buffer__v0, (IData)(__VdlyDim0__asic_wrapper__DOT__DATA_buffer__v0));
            }
        } else {
            vlSelfRef.asic_wrapper__DOT____Vlvbound_h36234f8c__0 
                = vlSelfRef.asic_wrapper__DOT__ASIC_DATA_next;
            if ((0x44fU >= (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt))) {
                __VdlyVal__asic_wrapper__DOT__DATA_buffer__v1 
                    = vlSelfRef.asic_wrapper__DOT____Vlvbound_h36234f8c__0;
                __VdlyDim0__asic_wrapper__DOT__DATA_buffer__v1 
                    = vlSelfRef.asic_wrapper__DOT__write_cnt;
                vlSelfRef.__VdlyCommitQueueasic_wrapper__DOT__DATA_buffer.enqueue(__VdlyVal__asic_wrapper__DOT__DATA_buffer__v1, (IData)(__VdlyDim0__asic_wrapper__DOT__DATA_buffer__v1));
            }
        }
    } else {
        vlSelfRef.asic_wrapper__DOT__i = 0U;
        while (VL_GTS_III(32, 0x450U, vlSelfRef.asic_wrapper__DOT__i)) {
            vlSelfRef.asic_wrapper__DOT____Vlvbound_haa40a020__0 = 0U;
            if (VL_LIKELY(((0x44fU >= (0x7ffU & vlSelfRef.asic_wrapper__DOT__i))))) {
                __VdlyVal__asic_wrapper__DOT__DATA_buffer__v2 
                    = vlSelfRef.asic_wrapper__DOT____Vlvbound_haa40a020__0;
                __VdlyDim0__asic_wrapper__DOT__DATA_buffer__v2 
                    = (0x7ffU & vlSelfRef.asic_wrapper__DOT__i);
                vlSelfRef.__VdlyCommitQueueasic_wrapper__DOT__DATA_buffer.enqueue(__VdlyVal__asic_wrapper__DOT__DATA_buffer__v2, (IData)(__VdlyDim0__asic_wrapper__DOT__DATA_buffer__v2));
            }
            vlSelfRef.asic_wrapper__DOT__i = ((IData)(1U) 
                                              + vlSelfRef.asic_wrapper__DOT__i);
        }
    }
    if (((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage) 
         & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__valid_array))) {
        __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
            [0U];
        __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address;
        __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0 = 1U;
        __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v1 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
            [1U];
        __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v1 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address)));
        __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v2 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
            [2U];
        __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v2 
            = (0x7fU & ((IData)(2U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address)));
        __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v3 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
            [3U];
        __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v3 
            = (0x7fU & ((IData)(3U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address)));
        __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v4 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
            [4U];
        __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v4 
            = (0x7fU & ((IData)(4U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address)));
        __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v5 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
            [5U];
        __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v5 
            = (0x7fU & ((IData)(5U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address)));
        __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v6 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
            [6U];
        __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v6 
            = (0x7fU & ((IData)(6U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address)));
        __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v7 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
            [7U];
        __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v7 
            = (0x7fU & ((IData)(7U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address)));
    }
    vlSelfRef.asic_wrapper__DOT__Top__DOT__mode1_step0 
        = ((IData)(vlSelfRef.ARESETn) & ((vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                          >> 3U) & 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__data_ready)
                                           ? (~ (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__mode1_step0))
                                           : (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__mode1_step0))));
    if (vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_ren) {
        __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v0 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0U];
        __VdlySet__asic_wrapper__DOT__Top__DOT__ifmap_wire__v0 = 1U;
        __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v1 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [1U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v2 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [2U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v3 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [3U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v4 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [4U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v5 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [5U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v6 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [6U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v7 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [7U];
    }
    if ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))) {
        __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0 
            = vlSelfRef.asic_wrapper__DOT__DATA;
        __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0 
            = (0x7fU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address));
        __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0 = 1U;
    }
    if ((1U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))) {
        __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0 
            = vlSelfRef.asic_wrapper__DOT__DATA;
        __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0 
            = (0x1fU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address));
        __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0 = 1U;
    }
    if ((2U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))) {
        __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0 
            = vlSelfRef.asic_wrapper__DOT__DATA;
        __VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0 
            = (0x3ffU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address));
        __VdlySet__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_ren) {
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v0 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0U];
        __VdlySet__asic_wrapper__DOT__Top__DOT__weight_wire__v0 = 1U;
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v1 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [1U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v2 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [2U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v3 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [3U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v4 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [4U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v5 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [5U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v6 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [6U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v7 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [7U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v8 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [8U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v9 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [9U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v10 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0xaU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v11 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0xbU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v12 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0xcU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v13 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0xdU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v14 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0xeU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v15 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0xfU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v16 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x10U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v17 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x11U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v18 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x12U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v19 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x13U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v20 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x14U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v21 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x15U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v22 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x16U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v23 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x17U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v24 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x18U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v25 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x19U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v26 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x1aU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v27 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x1bU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v28 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x1cU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v29 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x1dU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v30 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x1eU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v31 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x1fU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v32 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x20U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v33 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x21U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v34 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x22U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v35 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x23U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v36 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x24U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v37 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x25U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v38 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x26U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v39 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x27U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v40 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x28U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v41 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x29U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v42 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x2aU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v43 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x2bU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v44 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x2cU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v45 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x2dU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v46 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x2eU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v47 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x2fU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v48 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x30U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v49 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x31U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v50 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x32U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v51 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x33U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v52 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x34U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v53 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x35U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v54 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x36U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v55 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x37U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v56 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x38U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v57 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x39U];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v58 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x3aU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v59 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x3bU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v60 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x3cU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v61 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x3dU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v62 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x3eU];
        __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v63 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire
            [(3U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))]
            [0x3fU];
    }
    vlSelfRef.asic_wrapper__DOT__write_error = ((IData)(vlSelfRef.ARESETn) 
                                                && (IData)(vlSelfRef.asic_wrapper__DOT__write_error_next));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_ren 
        = ((IData)(vlSelfRef.ARESETn) && (4U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__next_state)));
    if (vlSelfRef.ARESETn) {
        if (((~ (IData)(vlSelfRef.asic_wrapper__DOT__step)) 
             & (0x40U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count)))) {
            __Vdly__asic_wrapper__DOT__step = 1U;
        } else if (((IData)(vlSelfRef.asic_wrapper__DOT__step) 
                    & (0x80U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count)))) {
            __Vdly__asic_wrapper__DOT__step = 0U;
        }
        vlSelfRef.asic_wrapper__DOT__step = __Vdly__asic_wrapper__DOT__step;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__ppu_count 
            = ((5U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__ppu_count)))
                : 0U);
        __Vdly__asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage 
            = ((IData)(vlSelfRef.asic_wrapper__DOT__data_ready)
                ? 0U : (0xfU & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__valid_array)
                                 ? ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage))
                                 : (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage))));
        if (vlSelfRef.asic_wrapper__DOT__valid) {
            if ((1U == (IData)(vlSelfRef.asic_wrapper__DOT__state))) {
                __Vdly__asic_wrapper__DOT__ofmap_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count)));
            } else if ((2U == (IData)(vlSelfRef.asic_wrapper__DOT__state))) {
                if ((8U & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)) {
                    __VdlyVal__asic_wrapper__DOT__ofmap_reg__v0 
                        = vlSelfRef.asic_wrapper__DOT__ofmap;
                    __VdlyDim0__asic_wrapper__DOT__ofmap_reg__v0 
                        = (0x7fU & ((IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count) 
                                    - (IData)(0x40U)));
                    __VdlySet__asic_wrapper__DOT__ofmap_reg__v0 = 1U;
                    __Vdly__asic_wrapper__DOT__ofmap_count 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count)));
                } else {
                    __VdlyVal__asic_wrapper__DOT__ofmap_reg__v1 
                        = vlSelfRef.asic_wrapper__DOT__ofmap;
                    __VdlyDim0__asic_wrapper__DOT__ofmap_reg__v1 
                        = (0x7fU & (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count));
                    __VdlySet__asic_wrapper__DOT__ofmap_reg__v1 = 1U;
                    __Vdly__asic_wrapper__DOT__ofmap_count 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count)));
                }
            }
        }
    } else {
        __Vdly__asic_wrapper__DOT__step = 0U;
        vlSelfRef.asic_wrapper__DOT__step = __Vdly__asic_wrapper__DOT__step;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__ppu_count = 0U;
        __Vdly__asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage = 0U;
        __Vdly__asic_wrapper__DOT__ofmap_count = 0U;
    }
    if (__VdlySet__asic_wrapper__DOT__ofmap_reg__v0) {
        vlSelfRef.asic_wrapper__DOT__ofmap_reg[__VdlyDim0__asic_wrapper__DOT__ofmap_reg__v0] 
            = __VdlyVal__asic_wrapper__DOT__ofmap_reg__v0;
    }
    if (__VdlySet__asic_wrapper__DOT__ofmap_reg__v1) {
        vlSelfRef.asic_wrapper__DOT__ofmap_reg[__VdlyDim0__asic_wrapper__DOT__ofmap_reg__v1] 
            = __VdlyVal__asic_wrapper__DOT__ofmap_reg__v1;
    }
    if (vlSelfRef.ARESETn) {
        if ((0xffU == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__valid_chain))) {
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v0 
                = (((((((vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [0U] + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [8U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                        [0x10U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                       [0x18U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                      [0x20U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                     [0x28U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                    [0x30U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                   [0x38U]);
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v1 
                = (((((((vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [1U] + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [9U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                        [0x11U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                       [0x19U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                      [0x21U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                     [0x29U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                    [0x31U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                   [0x39U]);
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v2 
                = (((((((vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [2U] + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [0xaU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                        [0x12U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                       [0x1aU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                      [0x22U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                     [0x2aU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                    [0x32U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                   [0x3aU]);
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v3 
                = (((((((vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [3U] + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [0xbU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                        [0x13U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                       [0x1bU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                      [0x23U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                     [0x2bU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                    [0x33U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                   [0x3bU]);
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v4 
                = (((((((vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [4U] + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [0xcU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                        [0x14U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                       [0x1cU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                      [0x24U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                     [0x2cU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                    [0x34U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                   [0x3cU]);
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v5 
                = (((((((vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [5U] + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [0xdU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                        [0x15U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                       [0x1dU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                      [0x25U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                     [0x2dU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                    [0x35U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                   [0x3dU]);
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v6 
                = (((((((vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [6U] + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [0xeU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                        [0x16U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                       [0x1eU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                      [0x26U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                     [0x2eU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                    [0x36U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                   [0x3eU]);
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v7 
                = (((((((vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [7U] + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                         [0xfU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                        [0x17U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                       [0x1fU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                      [0x27U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                     [0x2fU]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                    [0x37U]) + vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum
                   [0x3fU]);
        } else {
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v0 = 0U;
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v1 = 0U;
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v2 = 0U;
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v3 = 0U;
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v4 = 0U;
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v5 = 0U;
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v6 = 0U;
            __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v7 = 0U;
        }
        __VdlySet__asic_wrapper__DOT__Top__DOT__ofmap_wire__v0 = 1U;
        if (((0U == (IData)(vlSelfRef.asic_wrapper__DOT__count)) 
             & (IData)(vlSelfRef.asic_wrapper__DOT__data_ready_reg))) {
            __VdlyVal__data_temp__v0 = vlSelfRef.asic_wrapper__DOT__DATA;
            __VdlySet__data_temp__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
            __VdlyVal__data_temp__v1 = vlSelfRef.asic_wrapper__DOT__DATA;
            __VdlySet__data_temp__v1 = 1U;
        } else if ((2U == (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
            __VdlyVal__data_temp__v2 = vlSelfRef.asic_wrapper__DOT__DATA;
            __VdlySet__data_temp__v2 = 1U;
        } else if ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
            __VdlyVal__data_temp__v3 = vlSelfRef.asic_wrapper__DOT__DATA;
            __VdlySet__data_temp__v3 = 1U;
        } else if ((4U == (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
            __VdlyVal__data_temp__v4 = vlSelfRef.asic_wrapper__DOT__DATA;
            __VdlySet__data_temp__v4 = 1U;
        } else if ((5U == (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
            __VdlyVal__data_temp__v5 = vlSelfRef.asic_wrapper__DOT__DATA;
            __VdlySet__data_temp__v5 = 1U;
        } else if ((6U == (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
            __VdlyVal__data_temp__v6 = vlSelfRef.asic_wrapper__DOT__DATA;
            __VdlySet__data_temp__v6 = 1U;
        } else if ((7U == (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
            __VdlyVal__data_temp__v7 = vlSelfRef.asic_wrapper__DOT__DATA;
            __VdlySet__data_temp__v7 = 1U;
        } else if ((8U == (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
            __VdlyVal__data_temp__v8 = vlSelfRef.asic_wrapper__DOT__DATA;
            __VdlySet__data_temp__v8 = 1U;
        } else {
            vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0 
                = vlSelfRef.data_temp[0U];
            __VdlyVal__data_temp__v9 = vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0;
            __VdlySet__data_temp__v9 = 1U;
            vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0 
                = vlSelfRef.data_temp[1U];
            __VdlyVal__data_temp__v10 = vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0;
            __VdlySet__data_temp__v10 = 1U;
            vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0 
                = vlSelfRef.data_temp[2U];
            __VdlyVal__data_temp__v11 = vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0;
            __VdlySet__data_temp__v11 = 1U;
            vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0 
                = vlSelfRef.data_temp[3U];
            __VdlyVal__data_temp__v12 = vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0;
            __VdlySet__data_temp__v12 = 1U;
            vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0 
                = vlSelfRef.data_temp[4U];
            __VdlyVal__data_temp__v13 = vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0;
            __VdlySet__data_temp__v13 = 1U;
            vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0 
                = vlSelfRef.data_temp[5U];
            __VdlyVal__data_temp__v14 = vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0;
            __VdlySet__data_temp__v14 = 1U;
            vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0 
                = vlSelfRef.data_temp[6U];
            __VdlyVal__data_temp__v15 = vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0;
            __VdlySet__data_temp__v15 = 1U;
            vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0 
                = vlSelfRef.data_temp[7U];
            __VdlyVal__data_temp__v16 = vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0;
            __VdlySet__data_temp__v16 = 1U;
            vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0 
                = vlSelfRef.data_temp[8U];
            __VdlyVal__data_temp__v17 = vlSelfRef.asic_wrapper__DOT____Vlvbound_hd30f7fe5__0;
            __VdlySet__data_temp__v17 = 1U;
        }
    } else {
        __VdlySet__asic_wrapper__DOT__Top__DOT__ofmap_wire__v8 = 1U;
        __VdlySet__data_temp__v18 = 1U;
    }
    if (__VdlySet__data_temp__v0) {
        vlSelfRef.data_temp[0U] = __VdlyVal__data_temp__v0;
    }
    if (__VdlySet__data_temp__v1) {
        vlSelfRef.data_temp[1U] = __VdlyVal__data_temp__v1;
    }
    if (__VdlySet__data_temp__v2) {
        vlSelfRef.data_temp[2U] = __VdlyVal__data_temp__v2;
    }
    if (__VdlySet__data_temp__v3) {
        vlSelfRef.data_temp[3U] = __VdlyVal__data_temp__v3;
    }
    if (__VdlySet__data_temp__v4) {
        vlSelfRef.data_temp[4U] = __VdlyVal__data_temp__v4;
    }
    if (__VdlySet__data_temp__v5) {
        vlSelfRef.data_temp[5U] = __VdlyVal__data_temp__v5;
    }
    if (__VdlySet__data_temp__v6) {
        vlSelfRef.data_temp[6U] = __VdlyVal__data_temp__v6;
    }
    if (__VdlySet__data_temp__v7) {
        vlSelfRef.data_temp[7U] = __VdlyVal__data_temp__v7;
    }
    if (__VdlySet__data_temp__v8) {
        vlSelfRef.data_temp[8U] = __VdlyVal__data_temp__v8;
    }
    if (__VdlySet__data_temp__v9) {
        vlSelfRef.data_temp[0U] = __VdlyVal__data_temp__v9;
    }
    if (__VdlySet__data_temp__v10) {
        vlSelfRef.data_temp[1U] = __VdlyVal__data_temp__v10;
    }
    if (__VdlySet__data_temp__v11) {
        vlSelfRef.data_temp[2U] = __VdlyVal__data_temp__v11;
    }
    if (__VdlySet__data_temp__v12) {
        vlSelfRef.data_temp[3U] = __VdlyVal__data_temp__v12;
    }
    if (__VdlySet__data_temp__v13) {
        vlSelfRef.data_temp[4U] = __VdlyVal__data_temp__v13;
    }
    if (__VdlySet__data_temp__v14) {
        vlSelfRef.data_temp[5U] = __VdlyVal__data_temp__v14;
    }
    if (__VdlySet__data_temp__v15) {
        vlSelfRef.data_temp[6U] = __VdlyVal__data_temp__v15;
    }
    if (__VdlySet__data_temp__v16) {
        vlSelfRef.data_temp[7U] = __VdlyVal__data_temp__v16;
    }
    if (__VdlySet__data_temp__v17) {
        vlSelfRef.data_temp[8U] = __VdlyVal__data_temp__v17;
    }
    if (__VdlySet__data_temp__v18) {
        vlSelfRef.data_temp[0U] = 0U;
        vlSelfRef.data_temp[1U] = 0U;
        vlSelfRef.data_temp[2U] = 0U;
        vlSelfRef.data_temp[3U] = 0U;
        vlSelfRef.data_temp[4U] = 0U;
        vlSelfRef.data_temp[5U] = 0U;
        vlSelfRef.data_temp[6U] = 0U;
        vlSelfRef.data_temp[7U] = 0U;
        vlSelfRef.data_temp[8U] = 0U;
    }
    if (vlSelfRef.ARESETn) {
        if ((0x41U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v0 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v0 = 1U;
        } else if ((7U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v1 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v1 = 1U;
        } else if ((0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v2 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v2 = 1U;
        } else if ((0x18U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v3 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v3 = 1U;
        } else if ((0x19U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v4 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v4 = 1U;
        } else if ((0x1aU == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v5 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v5 = 1U;
        } else if ((0x22U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v6 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v6 = 1U;
        } else if ((0x24U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v7 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v7 = 1U;
        } else if ((0x29U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v8 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v8 = 1U;
        } else if ((0x2aU == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v9 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v9 = 1U;
        } else if ((0x2eU == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v10 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v10 = 1U;
        } else if ((0x32U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v11 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v11 = 1U;
        } else if ((0x36U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v12 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v12 = 1U;
        } else if ((0x3eU == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            __VdlyVal__ppu_out_temp__v13 = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out;
            __VdlySet__ppu_out_temp__v13 = 1U;
        } else {
            __VdlyVal__ppu_out_temp__v14 = vlSelfRef.ppu_out_temp
                [0U];
            __VdlySet__ppu_out_temp__v14 = 1U;
            __VdlyVal__ppu_out_temp__v15 = vlSelfRef.ppu_out_temp
                [1U];
            __VdlyVal__ppu_out_temp__v16 = vlSelfRef.ppu_out_temp
                [2U];
            __VdlyVal__ppu_out_temp__v17 = vlSelfRef.ppu_out_temp
                [3U];
            __VdlyVal__ppu_out_temp__v18 = vlSelfRef.ppu_out_temp
                [4U];
            __VdlyVal__ppu_out_temp__v19 = vlSelfRef.ppu_out_temp
                [5U];
            __VdlyVal__ppu_out_temp__v20 = vlSelfRef.ppu_out_temp
                [6U];
            __VdlyVal__ppu_out_temp__v21 = vlSelfRef.ppu_out_temp
                [7U];
            __VdlyVal__ppu_out_temp__v22 = vlSelfRef.ppu_out_temp
                [8U];
            __VdlyVal__ppu_out_temp__v23 = vlSelfRef.ppu_out_temp
                [9U];
            __VdlyVal__ppu_out_temp__v24 = vlSelfRef.ppu_out_temp
                [0xaU];
            __VdlyVal__ppu_out_temp__v25 = vlSelfRef.ppu_out_temp
                [0xbU];
            __VdlyVal__ppu_out_temp__v26 = vlSelfRef.ppu_out_temp
                [0xcU];
            __VdlyVal__ppu_out_temp__v27 = vlSelfRef.ppu_out_temp
                [0xdU];
            __VdlyVal__ppu_out_temp__v28 = vlSelfRef.ppu_out_temp
                [0xeU];
            __VdlyVal__ppu_out_temp__v29 = vlSelfRef.ppu_out_temp
                [0xfU];
            __VdlyVal__ppu_out_temp__v30 = vlSelfRef.ppu_out_temp
                [0x10U];
            __VdlyVal__ppu_out_temp__v31 = vlSelfRef.ppu_out_temp
                [0x11U];
            __VdlyVal__ppu_out_temp__v32 = vlSelfRef.ppu_out_temp
                [0x12U];
            __VdlyVal__ppu_out_temp__v33 = vlSelfRef.ppu_out_temp
                [0x13U];
            __VdlyVal__ppu_out_temp__v34 = vlSelfRef.ppu_out_temp
                [0x14U];
            __VdlyVal__ppu_out_temp__v35 = vlSelfRef.ppu_out_temp
                [0x15U];
            __VdlyVal__ppu_out_temp__v36 = vlSelfRef.ppu_out_temp
                [0x16U];
            __VdlyVal__ppu_out_temp__v37 = vlSelfRef.ppu_out_temp
                [0x17U];
            __VdlyVal__ppu_out_temp__v38 = vlSelfRef.ppu_out_temp
                [0x18U];
            __VdlyVal__ppu_out_temp__v39 = vlSelfRef.ppu_out_temp
                [0x19U];
            __VdlyVal__ppu_out_temp__v40 = vlSelfRef.ppu_out_temp
                [0x1aU];
            __VdlyVal__ppu_out_temp__v41 = vlSelfRef.ppu_out_temp
                [0x1bU];
            __VdlyVal__ppu_out_temp__v42 = vlSelfRef.ppu_out_temp
                [0x1cU];
            __VdlyVal__ppu_out_temp__v43 = vlSelfRef.ppu_out_temp
                [0x1dU];
            __VdlyVal__ppu_out_temp__v44 = vlSelfRef.ppu_out_temp
                [0x1eU];
            __VdlyVal__ppu_out_temp__v45 = vlSelfRef.ppu_out_temp
                [0x1fU];
            __VdlyVal__ppu_out_temp__v46 = vlSelfRef.ppu_out_temp
                [0x20U];
            __VdlyVal__ppu_out_temp__v47 = vlSelfRef.ppu_out_temp
                [0x21U];
            __VdlyVal__ppu_out_temp__v48 = vlSelfRef.ppu_out_temp
                [0x22U];
            __VdlyVal__ppu_out_temp__v49 = vlSelfRef.ppu_out_temp
                [0x23U];
            __VdlyVal__ppu_out_temp__v50 = vlSelfRef.ppu_out_temp
                [0x24U];
            __VdlyVal__ppu_out_temp__v51 = vlSelfRef.ppu_out_temp
                [0x25U];
            __VdlyVal__ppu_out_temp__v52 = vlSelfRef.ppu_out_temp
                [0x26U];
            __VdlyVal__ppu_out_temp__v53 = vlSelfRef.ppu_out_temp
                [0x27U];
            __VdlyVal__ppu_out_temp__v54 = vlSelfRef.ppu_out_temp
                [0x28U];
            __VdlyVal__ppu_out_temp__v55 = vlSelfRef.ppu_out_temp
                [0x29U];
            __VdlyVal__ppu_out_temp__v56 = vlSelfRef.ppu_out_temp
                [0x2aU];
            __VdlyVal__ppu_out_temp__v57 = vlSelfRef.ppu_out_temp
                [0x2bU];
            __VdlyVal__ppu_out_temp__v58 = vlSelfRef.ppu_out_temp
                [0x2cU];
            __VdlyVal__ppu_out_temp__v59 = vlSelfRef.ppu_out_temp
                [0x2dU];
            __VdlyVal__ppu_out_temp__v60 = vlSelfRef.ppu_out_temp
                [0x2eU];
            __VdlyVal__ppu_out_temp__v61 = vlSelfRef.ppu_out_temp
                [0x2fU];
            __VdlyVal__ppu_out_temp__v62 = vlSelfRef.ppu_out_temp
                [0x30U];
            __VdlyVal__ppu_out_temp__v63 = vlSelfRef.ppu_out_temp
                [0x31U];
            __VdlyVal__ppu_out_temp__v64 = vlSelfRef.ppu_out_temp
                [0x32U];
            __VdlyVal__ppu_out_temp__v65 = vlSelfRef.ppu_out_temp
                [0x33U];
            __VdlyVal__ppu_out_temp__v66 = vlSelfRef.ppu_out_temp
                [0x34U];
            __VdlyVal__ppu_out_temp__v67 = vlSelfRef.ppu_out_temp
                [0x35U];
            __VdlyVal__ppu_out_temp__v68 = vlSelfRef.ppu_out_temp
                [0x36U];
            __VdlyVal__ppu_out_temp__v69 = vlSelfRef.ppu_out_temp
                [0x37U];
            __VdlyVal__ppu_out_temp__v70 = vlSelfRef.ppu_out_temp
                [0x38U];
            __VdlyVal__ppu_out_temp__v71 = vlSelfRef.ppu_out_temp
                [0x39U];
            __VdlyVal__ppu_out_temp__v72 = vlSelfRef.ppu_out_temp
                [0x3aU];
            __VdlyVal__ppu_out_temp__v73 = vlSelfRef.ppu_out_temp
                [0x3bU];
            __VdlyVal__ppu_out_temp__v74 = vlSelfRef.ppu_out_temp
                [0x3cU];
            __VdlyVal__ppu_out_temp__v75 = vlSelfRef.ppu_out_temp
                [0x3dU];
            __VdlyVal__ppu_out_temp__v76 = vlSelfRef.ppu_out_temp
                [0x3eU];
            __VdlyVal__ppu_out_temp__v77 = vlSelfRef.ppu_out_temp
                [0x3fU];
        }
    } else {
        __VdlySet__ppu_out_temp__v78 = 1U;
    }
    vlSelfRef.asic_wrapper__DOT__ofmap_count = __Vdly__asic_wrapper__DOT__ofmap_count;
    if (__VdlySet__ppu_out_temp__v0) {
        vlSelfRef.ppu_out_temp[1U] = __VdlyVal__ppu_out_temp__v0;
    }
    if (__VdlySet__ppu_out_temp__v1) {
        vlSelfRef.ppu_out_temp[7U] = __VdlyVal__ppu_out_temp__v1;
    }
    if (__VdlySet__ppu_out_temp__v2) {
        vlSelfRef.ppu_out_temp[0xbU] = __VdlyVal__ppu_out_temp__v2;
    }
    if (__VdlySet__ppu_out_temp__v3) {
        vlSelfRef.ppu_out_temp[0x18U] = __VdlyVal__ppu_out_temp__v3;
    }
    if (__VdlySet__ppu_out_temp__v4) {
        vlSelfRef.ppu_out_temp[0x19U] = __VdlyVal__ppu_out_temp__v4;
    }
    if (__VdlySet__ppu_out_temp__v5) {
        vlSelfRef.ppu_out_temp[0x1aU] = __VdlyVal__ppu_out_temp__v5;
    }
    if (__VdlySet__ppu_out_temp__v6) {
        vlSelfRef.ppu_out_temp[0x22U] = __VdlyVal__ppu_out_temp__v6;
    }
    if (__VdlySet__ppu_out_temp__v7) {
        vlSelfRef.ppu_out_temp[0x24U] = __VdlyVal__ppu_out_temp__v7;
    }
    if (__VdlySet__ppu_out_temp__v8) {
        vlSelfRef.ppu_out_temp[0x29U] = __VdlyVal__ppu_out_temp__v8;
    }
    if (__VdlySet__ppu_out_temp__v9) {
        vlSelfRef.ppu_out_temp[0x2aU] = __VdlyVal__ppu_out_temp__v9;
    }
    if (__VdlySet__ppu_out_temp__v10) {
        vlSelfRef.ppu_out_temp[0x2eU] = __VdlyVal__ppu_out_temp__v10;
    }
    if (__VdlySet__ppu_out_temp__v11) {
        vlSelfRef.ppu_out_temp[0x32U] = __VdlyVal__ppu_out_temp__v11;
    }
    if (__VdlySet__ppu_out_temp__v12) {
        vlSelfRef.ppu_out_temp[0x36U] = __VdlyVal__ppu_out_temp__v12;
    }
    if (__VdlySet__ppu_out_temp__v13) {
        vlSelfRef.ppu_out_temp[0x3eU] = __VdlyVal__ppu_out_temp__v13;
    }
    if (__VdlySet__ppu_out_temp__v14) {
        vlSelfRef.ppu_out_temp[0U] = __VdlyVal__ppu_out_temp__v14;
        vlSelfRef.ppu_out_temp[1U] = __VdlyVal__ppu_out_temp__v15;
        vlSelfRef.ppu_out_temp[2U] = __VdlyVal__ppu_out_temp__v16;
        vlSelfRef.ppu_out_temp[3U] = __VdlyVal__ppu_out_temp__v17;
        vlSelfRef.ppu_out_temp[4U] = __VdlyVal__ppu_out_temp__v18;
        vlSelfRef.ppu_out_temp[5U] = __VdlyVal__ppu_out_temp__v19;
        vlSelfRef.ppu_out_temp[6U] = __VdlyVal__ppu_out_temp__v20;
        vlSelfRef.ppu_out_temp[7U] = __VdlyVal__ppu_out_temp__v21;
        vlSelfRef.ppu_out_temp[8U] = __VdlyVal__ppu_out_temp__v22;
        vlSelfRef.ppu_out_temp[9U] = __VdlyVal__ppu_out_temp__v23;
        vlSelfRef.ppu_out_temp[0xaU] = __VdlyVal__ppu_out_temp__v24;
        vlSelfRef.ppu_out_temp[0xbU] = __VdlyVal__ppu_out_temp__v25;
        vlSelfRef.ppu_out_temp[0xcU] = __VdlyVal__ppu_out_temp__v26;
        vlSelfRef.ppu_out_temp[0xdU] = __VdlyVal__ppu_out_temp__v27;
        vlSelfRef.ppu_out_temp[0xeU] = __VdlyVal__ppu_out_temp__v28;
        vlSelfRef.ppu_out_temp[0xfU] = __VdlyVal__ppu_out_temp__v29;
        vlSelfRef.ppu_out_temp[0x10U] = __VdlyVal__ppu_out_temp__v30;
        vlSelfRef.ppu_out_temp[0x11U] = __VdlyVal__ppu_out_temp__v31;
        vlSelfRef.ppu_out_temp[0x12U] = __VdlyVal__ppu_out_temp__v32;
        vlSelfRef.ppu_out_temp[0x13U] = __VdlyVal__ppu_out_temp__v33;
        vlSelfRef.ppu_out_temp[0x14U] = __VdlyVal__ppu_out_temp__v34;
        vlSelfRef.ppu_out_temp[0x15U] = __VdlyVal__ppu_out_temp__v35;
        vlSelfRef.ppu_out_temp[0x16U] = __VdlyVal__ppu_out_temp__v36;
        vlSelfRef.ppu_out_temp[0x17U] = __VdlyVal__ppu_out_temp__v37;
        vlSelfRef.ppu_out_temp[0x18U] = __VdlyVal__ppu_out_temp__v38;
        vlSelfRef.ppu_out_temp[0x19U] = __VdlyVal__ppu_out_temp__v39;
        vlSelfRef.ppu_out_temp[0x1aU] = __VdlyVal__ppu_out_temp__v40;
        vlSelfRef.ppu_out_temp[0x1bU] = __VdlyVal__ppu_out_temp__v41;
        vlSelfRef.ppu_out_temp[0x1cU] = __VdlyVal__ppu_out_temp__v42;
        vlSelfRef.ppu_out_temp[0x1dU] = __VdlyVal__ppu_out_temp__v43;
        vlSelfRef.ppu_out_temp[0x1eU] = __VdlyVal__ppu_out_temp__v44;
        vlSelfRef.ppu_out_temp[0x1fU] = __VdlyVal__ppu_out_temp__v45;
        vlSelfRef.ppu_out_temp[0x20U] = __VdlyVal__ppu_out_temp__v46;
        vlSelfRef.ppu_out_temp[0x21U] = __VdlyVal__ppu_out_temp__v47;
        vlSelfRef.ppu_out_temp[0x22U] = __VdlyVal__ppu_out_temp__v48;
        vlSelfRef.ppu_out_temp[0x23U] = __VdlyVal__ppu_out_temp__v49;
        vlSelfRef.ppu_out_temp[0x24U] = __VdlyVal__ppu_out_temp__v50;
        vlSelfRef.ppu_out_temp[0x25U] = __VdlyVal__ppu_out_temp__v51;
        vlSelfRef.ppu_out_temp[0x26U] = __VdlyVal__ppu_out_temp__v52;
        vlSelfRef.ppu_out_temp[0x27U] = __VdlyVal__ppu_out_temp__v53;
        vlSelfRef.ppu_out_temp[0x28U] = __VdlyVal__ppu_out_temp__v54;
        vlSelfRef.ppu_out_temp[0x29U] = __VdlyVal__ppu_out_temp__v55;
        vlSelfRef.ppu_out_temp[0x2aU] = __VdlyVal__ppu_out_temp__v56;
        vlSelfRef.ppu_out_temp[0x2bU] = __VdlyVal__ppu_out_temp__v57;
        vlSelfRef.ppu_out_temp[0x2cU] = __VdlyVal__ppu_out_temp__v58;
        vlSelfRef.ppu_out_temp[0x2dU] = __VdlyVal__ppu_out_temp__v59;
        vlSelfRef.ppu_out_temp[0x2eU] = __VdlyVal__ppu_out_temp__v60;
        vlSelfRef.ppu_out_temp[0x2fU] = __VdlyVal__ppu_out_temp__v61;
        vlSelfRef.ppu_out_temp[0x30U] = __VdlyVal__ppu_out_temp__v62;
        vlSelfRef.ppu_out_temp[0x31U] = __VdlyVal__ppu_out_temp__v63;
        vlSelfRef.ppu_out_temp[0x32U] = __VdlyVal__ppu_out_temp__v64;
        vlSelfRef.ppu_out_temp[0x33U] = __VdlyVal__ppu_out_temp__v65;
        vlSelfRef.ppu_out_temp[0x34U] = __VdlyVal__ppu_out_temp__v66;
        vlSelfRef.ppu_out_temp[0x35U] = __VdlyVal__ppu_out_temp__v67;
        vlSelfRef.ppu_out_temp[0x36U] = __VdlyVal__ppu_out_temp__v68;
        vlSelfRef.ppu_out_temp[0x37U] = __VdlyVal__ppu_out_temp__v69;
        vlSelfRef.ppu_out_temp[0x38U] = __VdlyVal__ppu_out_temp__v70;
        vlSelfRef.ppu_out_temp[0x39U] = __VdlyVal__ppu_out_temp__v71;
        vlSelfRef.ppu_out_temp[0x3aU] = __VdlyVal__ppu_out_temp__v72;
        vlSelfRef.ppu_out_temp[0x3bU] = __VdlyVal__ppu_out_temp__v73;
        vlSelfRef.ppu_out_temp[0x3cU] = __VdlyVal__ppu_out_temp__v74;
        vlSelfRef.ppu_out_temp[0x3dU] = __VdlyVal__ppu_out_temp__v75;
        vlSelfRef.ppu_out_temp[0x3eU] = __VdlyVal__ppu_out_temp__v76;
        vlSelfRef.ppu_out_temp[0x3fU] = __VdlyVal__ppu_out_temp__v77;
    }
    if (__VdlySet__ppu_out_temp__v78) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.ppu_out_temp[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__ifmap_wire__v0) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[0U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v0;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[1U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v1;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[2U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v2;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[3U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v3;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[4U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v4;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[5U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v5;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[6U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v6;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[7U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ifmap_wire__v7;
    }
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram[__VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram__v0;
    }
    if (vlSelfRef.ARESETn) {
        if ((0U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))) {
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v0 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [0U];
            __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v0 = 1U;
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v1 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [1U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v2 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [2U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v3 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [3U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v4 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [4U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v5 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [5U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v6 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [6U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v7 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [7U];
        } else if (((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__valid_array) 
                    & (~ (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage)))) {
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v8 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
                [0U];
            __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v8 = 1U;
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v9 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
                [1U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v10 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
                [2U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v11 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
                [3U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v12 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
                [4U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v13 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
                [5U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v14 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
                [6U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v15 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire
                [7U];
        } else if (vlSelfRef.asic_wrapper__DOT__Top__DOT__valid_array) {
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v16 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [0U];
            __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v16 = 1U;
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v17 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [1U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v18 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [2U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v19 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [3U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v20 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [4U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v21 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [5U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v22 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [6U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v23 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire
                [7U];
        } else {
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v24 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
                [0U];
            __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v24 = 1U;
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v25 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
                [1U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v26 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
                [2U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v27 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
                [3U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v28 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
                [4U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v29 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
                [5U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v30 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
                [6U];
            __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v31 
                = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
                [7U];
        }
    } else {
        __VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v32 = 1U;
    }
    vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage 
        = __Vdly__asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage;
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__ofmap_wire__v0) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[0U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v0;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[1U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v1;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[2U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v2;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[3U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v3;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[4U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v4;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[5U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v5;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[6U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v6;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[7U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__ofmap_wire__v7;
    }
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__ofmap_wire__v8) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[0U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[1U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[2U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[3U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[4U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[5U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[6U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[7U] = 0U;
    }
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v0) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[0U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v0;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[1U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v1;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[2U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v2;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[3U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v3;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[4U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v4;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[5U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v5;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[6U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v6;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[7U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v7;
    }
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v8) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[0U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v8;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[1U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v9;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[2U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v10;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[3U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v11;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[4U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v12;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[5U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v13;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[6U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v14;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[7U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v15;
    }
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v16) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[0U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v16;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[1U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v17;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[2U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v18;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[3U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v19;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[4U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v20;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[5U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v21;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[6U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v22;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[7U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v23;
    }
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v24) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[0U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v24;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[1U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v25;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[2U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v26;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[3U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v27;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[4U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v28;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[5U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v29;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[6U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v30;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[7U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__bias_input__v31;
    }
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__bias_input__v32) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[0U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[1U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[2U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[3U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[4U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[5U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[6U] = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[7U] = 0U;
    }
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[__VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram__v0;
    }
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram[__VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram__v0;
    }
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__weight_wire__v0) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v0;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[1U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v1;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[2U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v2;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[3U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v3;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[4U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v4;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[5U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v5;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[6U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v6;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[7U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v7;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[8U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v8;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[9U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v9;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0xaU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v10;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0xbU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v11;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0xcU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v12;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0xdU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v13;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0xeU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v14;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0xfU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v15;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x10U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v16;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x11U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v17;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x12U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v18;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x13U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v19;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x14U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v20;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x15U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v21;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x16U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v22;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x17U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v23;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x18U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v24;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x19U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v25;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x1aU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v26;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x1bU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v27;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x1cU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v28;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x1dU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v29;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x1eU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v30;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x1fU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v31;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x20U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v32;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x21U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v33;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x22U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v34;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x23U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v35;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x24U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v36;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x25U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v37;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x26U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v38;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x27U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v39;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x28U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v40;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x29U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v41;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x2aU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v42;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x2bU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v43;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x2cU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v44;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x2dU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v45;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x2eU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v46;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x2fU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v47;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x30U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v48;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x31U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v49;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x32U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v50;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x33U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v51;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x34U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v52;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x35U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v53;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x36U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v54;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x37U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v55;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x38U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v56;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x39U] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v57;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x3aU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v58;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x3bU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v59;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x3cU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v60;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x3dU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v61;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x3eU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v62;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire[0x3fU] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__weight_wire__v63;
    }
    vlSelfRef.asic_wrapper__DOT__data_ready = ((IData)(vlSelfRef.ARESETn) 
                                               && (IData)(vlSelfRef.asic_wrapper__DOT__data_ready_next));
    vlSelfRef.ASIC_interrupt = 0U;
    vlSelfRef.ASIC_interrupt = ((IData)(vlSelfRef.asic_wrapper__DOT__step)
                                 ? ((IData)(vlSelfRef.asic_wrapper__DOT__step) 
                                    && (0x80U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count)))
                                 : (0x40U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count)));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_ren 
        = ((IData)(vlSelfRef.ARESETn) && (4U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__next_state)));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_ren 
        = ((IData)(vlSelfRef.ARESETn) && (4U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__next_state)));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[0U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[0U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[0U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[0U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[0U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[0U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[0U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[0U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[1U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [8U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[1U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [9U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[1U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0xaU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[1U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0xbU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[1U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0xcU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[1U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0xdU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[1U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0xeU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[1U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0xfU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[2U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x10U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[2U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x11U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[2U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x12U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[2U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x13U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[2U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x14U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[2U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x15U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[2U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x16U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[2U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x17U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[3U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x18U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[3U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x19U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[3U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x1aU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[3U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x1bU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[3U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x1cU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[3U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x1dU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[3U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x1eU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[3U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x1fU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[4U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x20U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[4U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x21U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[4U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x22U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[4U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x23U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[4U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x24U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[4U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x25U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[4U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x26U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[4U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x27U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[5U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x28U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[5U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x29U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[5U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x2aU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[5U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x2bU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[5U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x2cU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[5U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x2dU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[5U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x2eU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[5U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x2fU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[6U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x30U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[6U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x31U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[6U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x32U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[6U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x33U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[6U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x34U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[6U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x35U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[6U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x36U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[6U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x37U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[7U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x38U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[7U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x39U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[7U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x3aU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[7U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x3bU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[7U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x3cU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[7U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x3dU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[7U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x3eU];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire[7U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_wire
        [0x3fU];
    if (vlSelfRef.ARESETn) {
        vlSelfRef.__Vdly__asic_wrapper__DOT__Top__DOT__data_address 
            = (((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state) 
                != (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__next_state))
                ? 0U : (0xfffU & ((5U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__next_state))
                                   ? ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))
                                   : ((((1U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state)) 
                                        | (2U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))) 
                                       | (3U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state)))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))
                                       : (((1U == (3U 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))) 
                                           & (~ (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__i_en_array)))
                                           ? ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                              - (IData)(1U))
                                           : ((4U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__next_state))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))
                                               : (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address)))))));
        vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP = vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_next 
            = vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP;
        vlSelfRef.BVALID_S = 0U;
        vlSelfRef.RLAST_S = 0U;
        vlSelfRef.WREADY_S = 0U;
        vlSelfRef.BID_S = vlSelfRef.asic_wrapper__DOT__BID_S_next;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_output 
            = ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__i_en_ppu)
                ? (0x7fU & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_temp) 
                            >> 1U)) : 0U);
        vlSelfRef.output_cnt = vlSelfRef.asic_wrapper__DOT__output_cnt_next;
        vlSelfRef.RID_S = vlSelfRef.asic_wrapper__DOT__RID_S_next;
        vlSelfRef.asic_wrapper__DOT__addr_S_reg = vlSelfRef.asic_wrapper__DOT__addr_S_reg_next;
        vlSelfRef.asic_wrapper__DOT__cs_slave = vlSelfRef.asic_wrapper__DOT__cs_slave_next;
        vlSelfRef.current_state = vlSelfRef.asic_wrapper__DOT__cs_slave;
        vlSelfRef.RRESP_S = 0U;
        vlSelfRef.BRESP_S = 0U;
        vlSelfRef.AWREADY_S = 0U;
        vlSelfRef.ARREADY_S = 0U;
        vlSelfRef.asic_wrapper__DOT__output_cnt_next 
            = vlSelfRef.output_cnt;
        vlSelfRef.asic_wrapper__DOT__write_error_next 
            = vlSelfRef.asic_wrapper__DOT__write_error;
        vlSelfRef.asic_wrapper__DOT__BID_S_next = vlSelfRef.BID_S;
        vlSelfRef.asic_wrapper__DOT__addr_S_reg_next 
            = vlSelfRef.asic_wrapper__DOT__addr_S_reg;
        vlSelfRef.asic_wrapper__DOT__cs_slave_next 
            = vlSelfRef.asic_wrapper__DOT__cs_slave;
        vlSelfRef.asic_wrapper__DOT__RID_S_next = vlSelfRef.RID_S;
        vlSelfRef.RVALID_S = 0U;
        if (vlSelfRef.asic_wrapper__DOT__valid) {
            if ((1U == (IData)(vlSelfRef.asic_wrapper__DOT__state))) {
                vlSelfRef.asic_wrapper__DOT__bias_write = 1U;
            }
        }
    } else {
        vlSelfRef.__Vdly__asic_wrapper__DOT__Top__DOT__data_address = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_next 
            = vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP;
        vlSelfRef.BVALID_S = 0U;
        vlSelfRef.RLAST_S = 0U;
        vlSelfRef.WREADY_S = 0U;
        vlSelfRef.BID_S = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_output = 0U;
        vlSelfRef.output_cnt = 0U;
        vlSelfRef.RID_S = 0U;
        vlSelfRef.asic_wrapper__DOT__addr_S_reg = 0U;
        vlSelfRef.asic_wrapper__DOT__cs_slave = 0U;
        vlSelfRef.current_state = vlSelfRef.asic_wrapper__DOT__cs_slave;
        vlSelfRef.RRESP_S = 0U;
        vlSelfRef.BRESP_S = 0U;
        vlSelfRef.AWREADY_S = 0U;
        vlSelfRef.ARREADY_S = 0U;
        vlSelfRef.asic_wrapper__DOT__output_cnt_next 
            = vlSelfRef.output_cnt;
        vlSelfRef.asic_wrapper__DOT__write_error_next 
            = vlSelfRef.asic_wrapper__DOT__write_error;
        vlSelfRef.asic_wrapper__DOT__BID_S_next = vlSelfRef.BID_S;
        vlSelfRef.asic_wrapper__DOT__addr_S_reg_next 
            = vlSelfRef.asic_wrapper__DOT__addr_S_reg;
        vlSelfRef.asic_wrapper__DOT__cs_slave_next 
            = vlSelfRef.asic_wrapper__DOT__cs_slave;
        vlSelfRef.asic_wrapper__DOT__RID_S_next = vlSelfRef.RID_S;
        vlSelfRef.RVALID_S = 0U;
        vlSelfRef.asic_wrapper__DOT__bias_write = 0U;
    }
    vlSelfRef.asic_wrapper__DOT__valid = ((IData)(vlSelfRef.ARESETn) 
                                          && (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__i_en_ppu));
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
                vlSelfRef.RLAST_S = 1U;
                vlSelfRef.RRESP_S = ((0x10040000U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                      ? 0U : ((0x10040004U 
                                               == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                               ? 0U
                                               : ((0x10040008U 
                                                   == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                                   ? 0U
                                                   : 2U)));
                if ((0x10040000U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    if ((0x10040004U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        if ((0x10040008U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                            vlSelfRef.asic_wrapper__DOT__output_cnt_next 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.output_cnt)));
                        }
                    }
                }
            }
        }
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
    if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
                vlSelfRef.BVALID_S = 1U;
                vlSelfRef.BRESP_S = ((IData)(vlSelfRef.asic_wrapper__DOT__write_error)
                                      ? 2U : 0U);
                vlSelfRef.asic_wrapper__DOT__write_error_next = 0U;
                if (vlSelfRef.BREADY_S) {
                    vlSelfRef.asic_wrapper__DOT__BID_S_next = 0U;
                }
            } else if (vlSelfRef.WVALID_S) {
                if ((0x10040000U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    if ((0x10040004U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        vlSelfRef.asic_wrapper__DOT__write_error_next = 1U;
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
                vlSelfRef.WREADY_S = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
            if (vlSelfRef.AWVALID_S) {
                vlSelfRef.asic_wrapper__DOT__BID_S_next 
                    = vlSelfRef.AWID_S;
            }
        }
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
    }
    if (vlSelfRef.ARESETn) {
        vlSelfRef.asic_wrapper__DOT__write_cnt = vlSelfRef.asic_wrapper__DOT__write_cnt_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE = vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_input;
        if (vlSelfRef.asic_wrapper__DOT__data_ready_reg) {
            vlSelfRef.asic_wrapper__DOT__DATA = ((0x44fU 
                                                  >= (IData)(vlSelfRef.asic_wrapper__DOT__count))
                                                  ? 
                                                 vlSelfRef.asic_wrapper__DOT__DATA_buffer
                                                 [vlSelfRef.asic_wrapper__DOT__count]
                                                  : 0U);
        }
        vlSelfRef.asic_wrapper__DOT__state = vlSelfRef.asic_wrapper__DOT__next_state;
    } else {
        vlSelfRef.asic_wrapper__DOT__write_cnt = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE = 0U;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out = 0U;
        vlSelfRef.asic_wrapper__DOT__DATA = 0U;
        vlSelfRef.asic_wrapper__DOT__state = 0U;
    }
    vlSelfRef.__VdlyCommitQueueasic_wrapper__DOT__DATA_buffer.commit(vlSelfRef.asic_wrapper__DOT__DATA_buffer);
    vlSelfRef.asic_wrapper__DOT__count = ((IData)(vlSelfRef.ARESETn)
                                           ? (IData)(vlSelfRef.asic_wrapper__DOT__count_next)
                                           : 0U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][7U];
    vlSelfRef.n_state = vlSelfRef.asic_wrapper__DOT__cs_slave_next;
    vlSelfRef.dataout = vlSelfRef.asic_wrapper__DOT__write_cnt;
    vlSelfRef.asic_wrapper__DOT__data_ready_next = 
        (((0x44fU == (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt)) 
          & (2U == (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) 
         | (((0x40fU == (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt)) 
             & (2U == (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) 
            & (IData)(vlSelfRef.asic_wrapper__DOT__bias_write)));
    vlSelfRef.asic_wrapper__DOT__write_cnt_next = vlSelfRef.asic_wrapper__DOT__write_cnt;
    vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next = vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE;
    vlSelfRef.asic_wrapper__DOT__ofmap = ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__mode1_step0)
                                           ? vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out
                                           : (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_output));
    if ((5U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_input 
            = vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram
            [vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address];
    }
    vlSelfRef.RDATA_S = 0U;
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
                vlSelfRef.RDATA_S = ((0x10040000U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                      ? vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE
                                      : ((0x10040004U 
                                          == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                          ? vlSelfRef.asic_wrapper__DOT__DATA
                                          : ((0x10040008U 
                                              == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                              ? vlSelfRef.asic_wrapper__DOT__ofmap_reg
                                             [vlSelfRef.output_cnt]
                                              : 0U)));
            }
        }
    }
    vlSelfRef.asic_wrapper__DOT__ASIC_DATA_next = vlSelfRef.asic_wrapper__DOT__DATA;
    if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
                if (vlSelfRef.WVALID_S) {
                    if ((0x10040000U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        if ((0x10040004U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                            vlSelfRef.asic_wrapper__DOT__write_cnt_next 
                                = ((0x44fU == (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt))
                                    ? 0U : (0x7ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt))));
                            vlSelfRef.asic_wrapper__DOT__ASIC_DATA_next 
                                = vlSelfRef.WDATA_S;
                        }
                    }
                    if ((0x10040000U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next 
                            = vlSelfRef.WDATA_S;
                    }
                }
            }
        }
    }
    vlSelfRef.bias = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x428U];
    vlSelfRef.ifmap[0U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0U];
    vlSelfRef.ifmap[1U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [1U];
    vlSelfRef.ifmap[2U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [2U];
    vlSelfRef.ifmap[3U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [3U];
    vlSelfRef.ifmap[4U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [4U];
    vlSelfRef.ifmap[5U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [5U];
    vlSelfRef.ifmap[6U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [6U];
    vlSelfRef.ifmap[7U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [7U];
    vlSelfRef.ifmap[8U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [8U];
    vlSelfRef.ifmap[9U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [9U];
    vlSelfRef.ifmap[0xaU] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0xaU];
    vlSelfRef.ifmap[0xbU] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0xbU];
    vlSelfRef.ifmap[0xcU] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0xcU];
    vlSelfRef.ifmap[0xdU] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0xdU];
    vlSelfRef.ifmap[0xeU] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0xeU];
    vlSelfRef.ifmap[0xfU] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0xfU];
    vlSelfRef.weight[0U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1a0U];
    vlSelfRef.weight[1U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1a1U];
    vlSelfRef.weight[2U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1a2U];
    vlSelfRef.weight[3U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1a3U];
    vlSelfRef.weight[4U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1a4U];
    vlSelfRef.weight[5U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1a5U];
    vlSelfRef.weight[6U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1a6U];
    vlSelfRef.weight[7U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1a7U];
    vlSelfRef.weight[8U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1a8U];
    vlSelfRef.weight[9U] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1a9U];
    vlSelfRef.weight[0xaU] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1aaU];
    vlSelfRef.weight[0xbU] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1abU];
    vlSelfRef.weight[0xcU] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1acU];
    vlSelfRef.weight[0xdU] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1adU];
    vlSelfRef.weight[0xeU] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1aeU];
    vlSelfRef.weight[0xfU] = vlSelfRef.asic_wrapper__DOT__DATA_buffer
        [0x1afU];
    vlSelfRef.asic_wrapper__DOT__data_ready_reg = ((IData)(vlSelfRef.ARESETn) 
                                                   && (IData)(vlSelfRef.asic_wrapper__DOT__data_ready_reg_next));
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__weight
        [7U];
    vlSelfRef.asic_wrapper__DOT__next_state = vlSelfRef.asic_wrapper__DOT__state;
    if ((0U == (IData)(vlSelfRef.asic_wrapper__DOT__state))) {
        vlSelfRef.asic_wrapper__DOT__next_state = (
                                                   (0U 
                                                    == vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
                                                     ? 1U
                                                     : 2U));
    } else if ((1U == (IData)(vlSelfRef.asic_wrapper__DOT__state))) {
        if ((0x3fU == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            vlSelfRef.asic_wrapper__DOT__next_state = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.asic_wrapper__DOT__state))) {
        if ((0x7fU == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count))) {
            vlSelfRef.asic_wrapper__DOT__next_state = 0U;
        }
    } else {
        vlSelfRef.asic_wrapper__DOT__next_state = vlSelfRef.asic_wrapper__DOT__state;
    }
    vlSelfRef.dataout2 = vlSelfRef.asic_wrapper__DOT__write_cnt_next;
    if (__VdlySet__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v0;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v1] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v1;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v2] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v2;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v3] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v3;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v4] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v4;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v5] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v5;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v6] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v6;
        vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram[__VdlyDim0__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v7] 
            = __VdlyVal__asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram__v7;
    }
    vlSelfRef.ASIC_DATA_n = vlSelfRef.asic_wrapper__DOT__ASIC_DATA_next;
    vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__relu_out 
        = ((vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_input 
            >> 0x1fU) ? 0U : vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_input);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_shift 
        = (0x1ffU & (IData)((0x1ffffffffULL & VL_DIV_QQQ(33, 
                                                         ((QData)((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__relu_out)) 
                                                          << 1U), (QData)((IData)(
                                                                                (0xfffU 
                                                                                & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                                                                >> 4U))))))));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_temp 
        = ((0x7fU < (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_shift))
            ? 0xfeU : (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_shift) 
                                 + (1U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_shift)))));
    vlSelfRef.asic_wrapper__DOT__count_next = ((0x44fU 
                                                == (IData)(vlSelfRef.asic_wrapper__DOT__count))
                                                ? 0U
                                                : (0x7ffU 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__data_ready_reg)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.asic_wrapper__DOT__count))
                                                       : (IData)(vlSelfRef.asic_wrapper__DOT__count))));
    vlSelfRef.asic_wrapper__DOT__data_ready_reg_next 
        = ((((0x44fU == (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt)) 
             & (2U == (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) 
            | (((0x40fU == (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt)) 
                & (2U == (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) 
               & (IData)(vlSelfRef.asic_wrapper__DOT__bias_write))) 
           || ((0x44fU != (IData)(vlSelfRef.asic_wrapper__DOT__count)) 
               && (IData)(vlSelfRef.asic_wrapper__DOT__data_ready_reg)));
}

VL_INLINE_OPT void Vasic_wrapper___024root___nba_sequent__TOP__1(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___nba_sequent__TOP__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__i_en_array 
        = ((IData)(vlSelfRef.ARESETn) & (((0U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address)) 
                                          & (4U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))) 
                                         | ((4U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state)) 
                                            & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__valid_array))));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address 
        = vlSelfRef.__Vdly__asic_wrapper__DOT__Top__DOT__data_address;
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [0U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [0U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [0U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [0U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [0U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [0U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [0U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [0U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[8U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [1U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[9U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [1U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0xaU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [1U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0xbU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [1U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0xcU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [1U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0xdU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [1U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0xeU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [1U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0xfU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [1U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x10U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [2U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x11U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [2U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x12U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [2U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x13U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [2U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x14U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [2U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x15U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [2U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x16U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [2U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x17U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [2U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x18U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [3U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x19U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [3U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x1aU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [3U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x1bU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [3U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x1cU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [3U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x1dU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [3U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x1eU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [3U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x1fU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [3U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x20U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [4U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x21U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [4U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x22U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [4U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x23U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [4U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x24U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [4U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x25U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [4U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x26U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [4U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x27U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [4U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x28U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [5U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x29U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [5U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x2aU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [5U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x2bU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [5U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x2cU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [5U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x2dU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [5U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x2eU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [5U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x2fU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [5U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x30U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [6U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x31U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [6U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x32U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [6U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x33U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [6U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x34U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [6U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x35U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [6U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x36U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [6U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x37U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [6U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x38U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [7U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x39U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [7U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x3aU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [7U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x3bU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [7U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x3cU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [7U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x3dU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [7U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x3eU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [7U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum[0x3fU] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire
        [7U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__valid_array 
        = ((IData)(vlSelfRef.ARESETn) && (0xffU == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__valid_chain)));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[0U][0U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & VL_SHIFTL_III(5,32,32, (1U & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                   >> 2U)), 3U))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[0U][1U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[0U][2U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[0U][3U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[0U][4U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(4U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[0U][5U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(5U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[0U][6U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(6U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[0U][7U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(7U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[1U][0U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & VL_SHIFTL_III(5,32,32, 
                                            (1U & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                   >> 2U)), 3U))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[1U][1U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[1U][2U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[1U][3U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[1U][4U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(4U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[1U][5U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(5U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[1U][6U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(6U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[1U][7U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(7U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[2U][0U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & VL_SHIFTL_III(5,32,32, 
                                            (1U & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                   >> 2U)), 3U))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[2U][1U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[2U][2U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[2U][3U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[2U][4U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(4U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[2U][5U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(5U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[2U][6U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(6U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[2U][7U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
                    [(0x1fU & ((IData)(7U) + VL_SHIFTL_III(5,32,32, 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                               >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[3U][0U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & VL_SHIFTL_III(5,32,32, (1U & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                   >> 2U)), 3U))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[3U][1U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[3U][2U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[3U][3U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[3U][4U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(4U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[3U][5U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(5U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[3U][6U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(6U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire[3U][7U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram
           [(0x1fU & ((IData)(7U) + VL_SHIFTL_III(5,32,32, 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                      >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & (VL_SHIFTL_III(10,32,32, (0x7fU 
                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                   >> 3U)), 7U) 
                       + VL_SHIFTL_III(10,32,32, (1U 
                                                  & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                     >> 2U)), 3U)))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][1U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x10U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][2U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x20U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][3U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x30U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][4U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x40U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][5U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x50U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][6U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x60U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][7U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x70U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][8U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(1U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][9U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x11U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0xaU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x21U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0xbU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x31U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0xcU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x41U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0xdU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x51U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0xeU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x61U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0xfU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x71U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x10U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(2U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x11U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x12U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x12U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x22U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x13U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x32U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x14U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x42U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x15U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x52U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x16U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x62U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x17U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x72U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x18U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(3U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x19U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x13U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x1aU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x23U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x1bU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x33U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x1cU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x43U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x1dU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x53U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x1eU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x63U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x1fU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x73U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x20U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(4U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x21U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x14U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x22U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x24U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x23U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x34U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x24U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x44U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x25U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x54U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x26U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x64U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x27U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x74U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x28U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(5U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x29U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x15U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x2aU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x25U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x2bU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x35U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x2cU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x45U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x2dU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x55U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x2eU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x65U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x2fU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x75U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x30U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(6U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x31U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x16U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x32U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x26U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x33U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x36U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x34U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x46U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x35U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x56U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x36U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x66U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x37U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x76U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x38U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(7U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x39U] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x17U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x3aU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x27U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x3bU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x37U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x3cU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x47U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x3dU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x57U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x3eU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x67U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[0U][0x3fU] 
        = (0xffU & vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x77U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))]);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & (VL_SHIFTL_III(10,32,32, 
                                              (0x7fU 
                                               & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                  >> 3U)), 7U) 
                                + VL_SHIFTL_III(10,32,32, 
                                                (1U 
                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                    >> 2U)), 3U)))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][1U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x10U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][2U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x20U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][3U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x30U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][4U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x40U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][5U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x50U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][6U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x60U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][7U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x70U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][8U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(1U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][9U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x11U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0xaU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x21U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0xbU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x31U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0xcU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x41U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0xdU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x51U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0xeU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x61U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0xfU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x71U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x10U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(2U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x11U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x12U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x12U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x22U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x13U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x32U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x14U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x42U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x15U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x52U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x16U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x62U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x17U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x72U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x18U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(3U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x19U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x13U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x1aU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x23U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x1bU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x33U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x1cU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x43U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x1dU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x53U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x1eU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x63U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x1fU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x73U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x20U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(4U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x21U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x14U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x22U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x24U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x23U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x34U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x24U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x44U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x25U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x54U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x26U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x64U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x27U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x74U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x28U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(5U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x29U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x15U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x2aU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x25U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x2bU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x35U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x2cU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x45U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x2dU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x55U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x2eU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x65U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x2fU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x75U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x30U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(6U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x31U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x16U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x32U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x26U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x33U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x36U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x34U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x46U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x35U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x56U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x36U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x66U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x37U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x76U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x38U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(7U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x39U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x17U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x3aU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x27U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x3bU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x37U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x3cU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x47U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x3dU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x57U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x3eU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x67U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[1U][0x3fU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x77U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 8U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & (VL_SHIFTL_III(10,32,32, 
                                              (0x7fU 
                                               & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                  >> 3U)), 7U) 
                                + VL_SHIFTL_III(10,32,32, 
                                                (1U 
                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                    >> 2U)), 3U)))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][1U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x10U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][2U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x20U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][3U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x30U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][4U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x40U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][5U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x50U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][6U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x60U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][7U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x70U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][8U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(1U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][9U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x11U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0xaU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x21U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0xbU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x31U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0xcU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x41U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0xdU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x51U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0xeU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x61U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0xfU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x71U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x10U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(2U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x11U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x12U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x12U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x22U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x13U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x32U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x14U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x42U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x15U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x52U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x16U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x62U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x17U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x72U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x18U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(3U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x19U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x13U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x1aU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x23U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x1bU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x33U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x1cU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x43U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x1dU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x53U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x1eU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x63U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x1fU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x73U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x20U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(4U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x21U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x14U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x22U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x24U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x23U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x34U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x24U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x44U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x25U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x54U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x26U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x64U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x27U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x74U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x28U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(5U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x29U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x15U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x2aU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x25U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x2bU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x35U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x2cU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x45U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x2dU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x55U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x2eU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x65U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x2fU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x75U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x30U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(6U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x31U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x16U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x32U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x26U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x33U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x36U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x34U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x46U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x35U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x56U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x36U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x66U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x37U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x76U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x38U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(7U) + (VL_SHIFTL_III(10,32,32, 
                                                             (0x7fU 
                                                              & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                 >> 3U)), 7U) 
                                               + VL_SHIFTL_III(10,32,32, 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                   >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x39U] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x17U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x3aU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x27U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x3bU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x37U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x3cU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x47U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x3dU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x57U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x3eU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x67U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[2U][0x3fU] 
        = (0xffU & (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
                    [(0x3ffU & ((IData)(0x77U) + (VL_SHIFTL_III(10,32,32, 
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 3U)), 7U) 
                                                  + 
                                                  VL_SHIFTL_III(10,32,32, 
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                                    >> 2U)), 3U))))] 
                    >> 0x10U));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & (VL_SHIFTL_III(10,32,32, (0x7fU 
                                                & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                   >> 3U)), 7U) 
                       + VL_SHIFTL_III(10,32,32, (1U 
                                                  & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                     >> 2U)), 3U)))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][1U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x10U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][2U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x20U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][3U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x30U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][4U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x40U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][5U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x50U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][6U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x60U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][7U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x70U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][8U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(1U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][9U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x11U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0xaU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x21U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0xbU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x31U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0xcU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x41U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0xdU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x51U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0xeU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x61U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0xfU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x71U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x10U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(2U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x11U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x12U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x12U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x22U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x13U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x32U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x14U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x42U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x15U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x52U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x16U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x62U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x17U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x72U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x18U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(3U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x19U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x13U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x1aU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x23U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x1bU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x33U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x1cU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x43U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x1dU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x53U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x1eU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x63U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x1fU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x73U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x20U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(4U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x21U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x14U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x22U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x24U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x23U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x34U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x24U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x44U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x25U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x54U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x26U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x64U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x27U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x74U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x28U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(5U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x29U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x15U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x2aU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x25U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x2bU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x35U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x2cU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x45U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x2dU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x55U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x2eU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x65U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x2fU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x75U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x30U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(6U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x31U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x16U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x32U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x26U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x33U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x36U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x34U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x46U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x35U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x56U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x36U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x66U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x37U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x76U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x38U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(7U) + (VL_SHIFTL_III(10,32,32, 
                                                    (0x7fU 
                                                     & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                        >> 3U)), 7U) 
                                      + VL_SHIFTL_III(10,32,32, 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                          >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x39U] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x17U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x3aU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x27U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x3bU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x37U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x3cU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x47U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x3dU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x57U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x3eU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x67U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire[3U][0x3fU] 
        = (vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram
           [(0x3ffU & ((IData)(0x77U) + (VL_SHIFTL_III(10,32,32, 
                                                       (0x7fU 
                                                        & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                           >> 3U)), 7U) 
                                         + VL_SHIFTL_III(10,32,32, 
                                                         (1U 
                                                          & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                                                             >> 2U)), 3U))))] 
           >> 0x18U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state 
        = ((IData)(vlSelfRef.ARESETn) ? (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__next_state)
            : 0U);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__valid_chain 
        = ((((((IData)((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                        [3U])) << 1U) | (0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                         [3U])) << 6U) 
            | ((((IData)((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                          [3U])) << 1U) | (0xffU == 
                                           vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                           [3U])) << 4U)) 
           | (((((IData)((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                          [3U])) << 1U) | (0xffU == 
                                           vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                           [3U])) << 2U) 
              | (((IData)((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                           [3U])) << 1U) | (0xffU == 
                                            vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                            [3U]))));
    if ((5U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))) {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address 
            = (0x7fU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address));
        vlSelfRef.asic_wrapper__DOT__Top__DOT__i_en_ppu 
            = (0U != (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address));
    } else {
        vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address 
            = (0x7fU & ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address) 
                        - (IData)(8U)));
        vlSelfRef.asic_wrapper__DOT__Top__DOT__i_en_ppu = 0U;
    }
    vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__next_state 
        = ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))
            ? ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))
                ? ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))
                    ? 0U : ((IData)(vlSelfRef.asic_wrapper__DOT__data_ready)
                             ? 1U : 6U)) : ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))
                                             ? ((0x40U 
                                                 == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__ppu_count))
                                                 ? 6U
                                                 : 5U)
                                             : (((0xfU 
                                                  == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage)) 
                                                 & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__valid_array))
                                                 ? 5U
                                                 : 4U)))
            : ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))
                ? ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))
                    ? ((0x3fU == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))
                        ? 4U : 3U) : ((0x3ffU == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))
                                       ? 3U : 2U)) : 
               ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))
                 ? ((0xfU == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))
                     ? 2U : 1U) : ((IData)(vlSelfRef.asic_wrapper__DOT__data_ready)
                                    ? 1U : 0U))));
}
