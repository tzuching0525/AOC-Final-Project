// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vasic_wrapper__Syms.h"


void Vasic_wrapper___024root__trace_chg_0_sub_0(Vasic_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vasic_wrapper___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_chg_0\n"); );
    // Init
    Vasic_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasic_wrapper___024root*>(voidSelf);
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vasic_wrapper___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vasic_wrapper___024root__trace_chg_0_sub_0(Vasic_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_chg_0_sub_0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[7]),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [0U]),32);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [1U]),32);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [2U]),32);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [3U]),32);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [4U]),32);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [5U]),32);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [6U]),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [7U]),32);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [0U]),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [1U]),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [2U]),32);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [3U]),32);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [4U]),32);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [5U]),32);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [6U]),32);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [7U]),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+47,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [0U]),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [1U]),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [2U]),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [3U]),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [4U]),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [5U]),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [6U]),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [7U]),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [0U]),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [1U]),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [2U]),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [3U]),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [4U]),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [5U]),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [6U]),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [7U]),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [0U]),32);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [1U]),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [2U]),32);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [3U]),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [4U]),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [5U]),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [6U]),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [7U]),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [0U]),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [1U]),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [2U]),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                [3U]),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                 [4U]),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                 [5U]),32);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                 [6U]),32);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                 [7U]),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                 [0U]),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                 [1U]),32);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                 [2U]),32);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                 [3U]),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                 [4U]),32);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                 [5U]),32);
        bufp->chgIData(oldp+118,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                 [6U]),32);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                                 [7U]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgSData(oldp+120,(vlSelfRef.asic_wrapper__DOT__write_cnt_next),11);
        bufp->chgCData(oldp+121,(vlSelfRef.asic_wrapper__DOT__cs_slave_next),3);
        bufp->chgIData(oldp+122,(vlSelfRef.asic_wrapper__DOT__addr_S_reg_next),32);
        bufp->chgCData(oldp+123,(vlSelfRef.asic_wrapper__DOT__BID_S_next),8);
        bufp->chgCData(oldp+124,(vlSelfRef.asic_wrapper__DOT__RID_S_next),8);
        bufp->chgBit(oldp+125,(vlSelfRef.asic_wrapper__DOT__write_error_next));
        bufp->chgIData(oldp+126,(vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next),32);
        bufp->chgIData(oldp+127,(vlSelfRef.asic_wrapper__DOT__ASIC_DATA_next),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgSData(oldp+128,(vlSelfRef.asic_wrapper__DOT__write_cnt),11);
        bufp->chgSData(oldp+129,(vlSelfRef.asic_wrapper__DOT__count),11);
        bufp->chgSData(oldp+130,((0x7ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__data_ready_reg)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.asic_wrapper__DOT__count))
                                             : ((0x44fU 
                                                 == (IData)(vlSelfRef.asic_wrapper__DOT__count))
                                                 ? 0U
                                                 : (IData)(vlSelfRef.asic_wrapper__DOT__count))))),11);
        bufp->chgSData(oldp+131,(vlSelfRef.asic_wrapper__DOT__bias_cnt),11);
        bufp->chgIData(oldp+132,(vlSelfRef.asic_wrapper__DOT__ofmap),32);
        bufp->chgBit(oldp+133,(vlSelfRef.asic_wrapper__DOT__data_ready));
        bufp->chgBit(oldp+134,(vlSelfRef.asic_wrapper__DOT__data_ready_reg));
        bufp->chgBit(oldp+135,(vlSelfRef.asic_wrapper__DOT__data_ready_reg_next));
        bufp->chgBit(oldp+136,(vlSelfRef.asic_wrapper__DOT__bias_write));
        bufp->chgBit(oldp+137,(vlSelfRef.asic_wrapper__DOT__valid));
        bufp->chgIData(oldp+138,(vlSelfRef.asic_wrapper__DOT__i),32);
        bufp->chgCData(oldp+139,(vlSelfRef.asic_wrapper__DOT__state),2);
        bufp->chgCData(oldp+140,(vlSelfRef.asic_wrapper__DOT__next_state),2);
        bufp->chgCData(oldp+141,(vlSelfRef.asic_wrapper__DOT__output_cnt_next),7);
        bufp->chgCData(oldp+142,(vlSelfRef.asic_wrapper__DOT__output_cnt),7);
        bufp->chgCData(oldp+143,(vlSelfRef.asic_wrapper__DOT__ofmap_count),8);
        bufp->chgBit(oldp+144,(vlSelfRef.asic_wrapper__DOT__ofmap_valid));
        bufp->chgIData(oldp+145,(vlSelfRef.asic_wrapper__DOT__RDATA),32);
        bufp->chgCData(oldp+146,(vlSelfRef.asic_wrapper__DOT__cs_slave),3);
        bufp->chgIData(oldp+147,(vlSelfRef.asic_wrapper__DOT__addr_S_reg),32);
        bufp->chgBit(oldp+148,(vlSelfRef.asic_wrapper__DOT__write_error));
        bufp->chgIData(oldp+149,(vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE),32);
        bufp->chgIData(oldp+150,(vlSelfRef.asic_wrapper__DOT__DATA),32);
        bufp->chgIData(oldp+151,(vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP),32);
        bufp->chgBit(oldp+152,((1U & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                      >> 3U))));
        bufp->chgSData(oldp+153,((0xfffU & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                            >> 4U))),12);
        bufp->chgBit(oldp+154,((6U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))));
        bufp->chgIData(oldp+155,(vlSelfRef.asic_wrapper__DOT__Top__DOT__i),32);
        bufp->chgBit(oldp+156,((1U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))));
        bufp->chgBit(oldp+157,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_ren));
        bufp->chgBit(oldp+158,((2U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))));
        bufp->chgBit(oldp+159,(vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_ren));
        bufp->chgBit(oldp+160,((3U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))));
        bufp->chgBit(oldp+161,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_ren));
        bufp->chgBit(oldp+162,((5U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))));
        bufp->chgBit(oldp+163,(vlSelfRef.asic_wrapper__DOT__Top__DOT__i_en_array));
        bufp->chgBit(oldp+164,(vlSelfRef.asic_wrapper__DOT__Top__DOT__i_en_ppu));
        bufp->chgCData(oldp+165,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[0]),8);
        bufp->chgCData(oldp+166,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[1]),8);
        bufp->chgCData(oldp+167,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[2]),8);
        bufp->chgCData(oldp+168,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[3]),8);
        bufp->chgCData(oldp+169,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[4]),8);
        bufp->chgCData(oldp+170,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[5]),8);
        bufp->chgCData(oldp+171,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[6]),8);
        bufp->chgCData(oldp+172,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[7]),8);
        bufp->chgIData(oldp+173,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[0]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[1]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[2]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[3]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[4]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[5]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[6]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[7]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[0]),32);
        bufp->chgIData(oldp+182,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[1]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[2]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[3]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[4]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[5]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[6]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[7]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_input),32);
        bufp->chgSData(oldp+190,(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address),12);
        bufp->chgBit(oldp+191,(vlSelfRef.asic_wrapper__DOT__Top__DOT__valid_array));
        bufp->chgCData(oldp+192,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_output),8);
        bufp->chgIData(oldp+193,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out),32);
        bufp->chgBit(oldp+194,(vlSelfRef.asic_wrapper__DOT__Top__DOT__mode1_step0));
        bufp->chgBit(oldp+195,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage))));
        bufp->chgCData(oldp+196,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address),7);
        bufp->chgCData(oldp+197,((0x7fU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))),7);
        bufp->chgCData(oldp+198,((0x1fU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))),5);
        bufp->chgIData(oldp+199,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[0]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[1]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[2]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[3]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[4]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[5]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[6]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[7]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[8]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[9]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[10]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[11]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[12]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[13]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[14]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[15]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[16]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[17]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[18]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[19]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[20]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[21]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[22]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[23]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[24]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[25]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[26]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[27]),32);
        bufp->chgIData(oldp+227,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[28]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[29]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[30]),32);
        bufp->chgIData(oldp+230,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[31]),32);
        bufp->chgCData(oldp+231,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][0U]),8);
        bufp->chgCData(oldp+232,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][1U]),8);
        bufp->chgCData(oldp+233,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][2U]),8);
        bufp->chgCData(oldp+234,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][3U]),8);
        bufp->chgCData(oldp+235,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][4U]),8);
        bufp->chgCData(oldp+236,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][5U]),8);
        bufp->chgCData(oldp+237,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][6U]),8);
        bufp->chgCData(oldp+238,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][7U]),8);
        bufp->chgCData(oldp+239,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][0U]),8);
        bufp->chgCData(oldp+240,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][1U]),8);
        bufp->chgCData(oldp+241,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][2U]),8);
        bufp->chgCData(oldp+242,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][3U]),8);
        bufp->chgCData(oldp+243,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][4U]),8);
        bufp->chgCData(oldp+244,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][5U]),8);
        bufp->chgCData(oldp+245,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][6U]),8);
        bufp->chgCData(oldp+246,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][7U]),8);
        bufp->chgCData(oldp+247,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][0U]),8);
        bufp->chgCData(oldp+248,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][1U]),8);
        bufp->chgCData(oldp+249,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][2U]),8);
        bufp->chgCData(oldp+250,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][3U]),8);
        bufp->chgCData(oldp+251,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][4U]),8);
        bufp->chgCData(oldp+252,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][5U]),8);
        bufp->chgCData(oldp+253,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][6U]),8);
        bufp->chgCData(oldp+254,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][7U]),8);
        bufp->chgCData(oldp+255,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][0U]),8);
        bufp->chgCData(oldp+256,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][1U]),8);
        bufp->chgCData(oldp+257,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][2U]),8);
        bufp->chgCData(oldp+258,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][3U]),8);
        bufp->chgCData(oldp+259,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][4U]),8);
        bufp->chgCData(oldp+260,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][5U]),8);
        bufp->chgCData(oldp+261,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][6U]),8);
        bufp->chgCData(oldp+262,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][7U]),8);
        bufp->chgBit(oldp+263,(((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage) 
                                & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__valid_array))));
        bufp->chgSData(oldp+264,((0x3ffU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))),10);
        bufp->chgCData(oldp+265,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__valid_chain),8);
        bufp->chgBit(oldp+266,((0xffU == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__valid_chain))));
        bufp->chgIData(oldp+267,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__u_Adder_tree__DOT__i),32);
        bufp->chgCData(oldp+268,(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state),3);
        bufp->chgCData(oldp+269,(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__next_state),3);
        bufp->chgCData(oldp+270,(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__ppu_count),8);
        bufp->chgCData(oldp+271,(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage),4);
        bufp->chgIData(oldp+272,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__relu_out),32);
        bufp->chgCData(oldp+273,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_shift),8);
        bufp->chgCData(oldp+274,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_temp),8);
        bufp->chgCData(oldp+275,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                 [0U]),8);
        bufp->chgCData(oldp+276,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+277,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+278,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+279,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+280,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+281,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+282,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+283,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+284,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+285,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+286,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+287,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+288,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+289,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+290,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+291,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+292,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+293,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+294,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+295,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+296,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+297,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+298,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+299,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+300,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                [3U])));
        bufp->chgIData(oldp+301,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgIData(oldp+302,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgIData(oldp+303,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgIData(oldp+304,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgIData(oldp+305,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgIData(oldp+306,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgIData(oldp+307,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgIData(oldp+308,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgIData(oldp+309,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgIData(oldp+310,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgIData(oldp+311,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgIData(oldp+312,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgIData(oldp+313,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgIData(oldp+314,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgIData(oldp+315,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgIData(oldp+316,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgIData(oldp+317,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgIData(oldp+318,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgIData(oldp+319,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgIData(oldp+320,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgIData(oldp+321,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgIData(oldp+322,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgIData(oldp+323,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgIData(oldp+324,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgIData(oldp+325,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [3U][0U]),32);
        bufp->chgIData(oldp+326,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [3U][1U]),32);
        bufp->chgIData(oldp+327,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [3U][2U]),32);
        bufp->chgIData(oldp+328,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [3U][3U]),32);
        bufp->chgIData(oldp+329,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [3U][4U]),32);
        bufp->chgIData(oldp+330,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [3U][5U]),32);
        bufp->chgIData(oldp+331,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [3U][6U]),32);
        bufp->chgIData(oldp+332,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [3U][7U]),32);
        bufp->chgCData(oldp+333,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+334,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+335,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+336,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+337,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                                 [0U]),8);
        bufp->chgIData(oldp+338,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                                 [0U]),32);
        bufp->chgIData(oldp+339,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+340,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+341,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+342,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+343,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                                 [2U]),8);
        bufp->chgIData(oldp+344,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgBit(oldp+345,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 2U))));
        bufp->chgIData(oldp+346,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+347,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+348,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+349,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                                 [3U]),8);
        bufp->chgIData(oldp+350,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgBit(oldp+351,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 3U))));
        bufp->chgIData(oldp+352,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+353,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+354,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+355,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                                 [4U]),8);
        bufp->chgIData(oldp+356,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgBit(oldp+357,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 4U))));
        bufp->chgIData(oldp+358,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+359,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+360,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+361,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                                 [5U]),8);
        bufp->chgIData(oldp+362,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgBit(oldp+363,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 5U))));
        bufp->chgIData(oldp+364,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+365,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+366,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+367,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                                 [6U]),8);
        bufp->chgIData(oldp+368,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgBit(oldp+369,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 6U))));
        bufp->chgIData(oldp+370,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+371,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+372,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+373,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                                 [7U]),8);
        bufp->chgIData(oldp+374,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgBit(oldp+375,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 7U))));
        bufp->chgIData(oldp+376,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+377,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+378,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+379,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgBit(oldp+380,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                [1U])));
        bufp->chgIData(oldp+381,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+382,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+383,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                                 [1U]),8);
        bufp->chgIData(oldp+384,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgBit(oldp+385,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 1U))));
        bufp->chgIData(oldp+386,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+387,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+388,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+389,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgBit(oldp+390,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 2U))));
        bufp->chgIData(oldp+391,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+392,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+393,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgBit(oldp+394,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 3U))));
        bufp->chgIData(oldp+395,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+396,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+397,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                                 [1U]),32);
        bufp->chgIData(oldp+398,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+399,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+400,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgBit(oldp+401,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 4U))));
        bufp->chgIData(oldp+402,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+403,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+404,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgBit(oldp+405,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 5U))));
        bufp->chgIData(oldp+406,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+407,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+408,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgBit(oldp+409,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 6U))));
        bufp->chgIData(oldp+410,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+411,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+412,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgBit(oldp+413,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 7U))));
        bufp->chgIData(oldp+414,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+415,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+416,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgBit(oldp+417,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                [2U])));
        bufp->chgIData(oldp+418,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+419,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+420,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgBit(oldp+421,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 1U))));
        bufp->chgIData(oldp+422,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+423,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+424,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgBit(oldp+425,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 2U))));
        bufp->chgIData(oldp+426,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+427,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+428,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgBit(oldp+429,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 3U))));
        bufp->chgIData(oldp+430,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+431,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+432,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgBit(oldp+433,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 4U))));
        bufp->chgIData(oldp+434,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+435,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+436,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgBit(oldp+437,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 5U))));
        bufp->chgIData(oldp+438,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+439,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+440,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                                 [2U]),32);
        bufp->chgIData(oldp+441,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+442,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+443,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgBit(oldp+444,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 6U))));
        bufp->chgIData(oldp+445,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+446,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+447,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgBit(oldp+448,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 7U))));
        bufp->chgIData(oldp+449,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+450,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+451,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                                 [3U]),32);
        bufp->chgIData(oldp+452,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+453,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+454,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                                 [4U]),32);
        bufp->chgIData(oldp+455,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+456,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+457,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                                 [5U]),32);
        bufp->chgIData(oldp+458,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+459,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+460,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                                 [6U]),32);
        bufp->chgIData(oldp+461,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+462,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+463,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                                 [7U]),32);
        bufp->chgIData(oldp+464,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+465,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+466,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgBit(oldp+467,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                [0U])));
        bufp->chgIData(oldp+468,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+469,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+470,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgBit(oldp+471,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 1U))));
        bufp->chgIData(oldp+472,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+473,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+474,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                 [1U]),8);
        bufp->chgCData(oldp+475,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+476,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+477,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+478,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+479,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+480,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+481,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+482,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+483,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+484,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+485,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+486,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+487,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+488,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+489,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+490,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+491,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                [3U])));
        bufp->chgIData(oldp+492,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgIData(oldp+493,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgIData(oldp+494,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgIData(oldp+495,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgIData(oldp+496,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgIData(oldp+497,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgIData(oldp+498,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgIData(oldp+499,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgIData(oldp+500,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgIData(oldp+501,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgIData(oldp+502,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgIData(oldp+503,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgIData(oldp+504,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgIData(oldp+505,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgIData(oldp+506,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgIData(oldp+507,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgIData(oldp+508,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgIData(oldp+509,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgIData(oldp+510,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgIData(oldp+511,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgIData(oldp+512,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgIData(oldp+513,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgIData(oldp+514,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgIData(oldp+515,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgIData(oldp+516,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][0U]),32);
        bufp->chgIData(oldp+517,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][1U]),32);
        bufp->chgIData(oldp+518,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][2U]),32);
        bufp->chgIData(oldp+519,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][3U]),32);
        bufp->chgIData(oldp+520,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][4U]),32);
        bufp->chgIData(oldp+521,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][5U]),32);
        bufp->chgIData(oldp+522,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][6U]),32);
        bufp->chgIData(oldp+523,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][7U]),32);
        bufp->chgCData(oldp+524,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+525,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+526,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+527,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+528,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [0U]),8);
        bufp->chgIData(oldp+529,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+530,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+531,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+532,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+533,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [2U]),8);
        bufp->chgIData(oldp+534,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgBit(oldp+535,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 2U))));
        bufp->chgIData(oldp+536,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+537,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+538,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+539,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [3U]),8);
        bufp->chgIData(oldp+540,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgBit(oldp+541,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 3U))));
        bufp->chgIData(oldp+542,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+543,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+544,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+545,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [4U]),8);
        bufp->chgIData(oldp+546,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgBit(oldp+547,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 4U))));
        bufp->chgIData(oldp+548,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+549,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+550,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+551,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [5U]),8);
        bufp->chgIData(oldp+552,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgBit(oldp+553,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 5U))));
        bufp->chgIData(oldp+554,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+555,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+556,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+557,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [6U]),8);
        bufp->chgIData(oldp+558,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgBit(oldp+559,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 6U))));
        bufp->chgIData(oldp+560,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+561,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+562,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+563,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [7U]),8);
        bufp->chgIData(oldp+564,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgBit(oldp+565,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 7U))));
        bufp->chgIData(oldp+566,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+567,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+568,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+569,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgBit(oldp+570,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                [1U])));
        bufp->chgIData(oldp+571,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+572,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+573,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [1U]),8);
        bufp->chgIData(oldp+574,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgBit(oldp+575,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 1U))));
        bufp->chgIData(oldp+576,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+577,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+578,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+579,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgBit(oldp+580,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 2U))));
        bufp->chgIData(oldp+581,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+582,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+583,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgBit(oldp+584,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 3U))));
        bufp->chgIData(oldp+585,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+586,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+587,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+588,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+589,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgBit(oldp+590,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 4U))));
        bufp->chgIData(oldp+591,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+592,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+593,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgBit(oldp+594,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 5U))));
        bufp->chgIData(oldp+595,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+596,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+597,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgBit(oldp+598,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 6U))));
        bufp->chgIData(oldp+599,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+600,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+601,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgBit(oldp+602,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 7U))));
        bufp->chgIData(oldp+603,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+604,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+605,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgBit(oldp+606,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                [2U])));
        bufp->chgIData(oldp+607,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+608,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+609,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgBit(oldp+610,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 1U))));
        bufp->chgIData(oldp+611,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+612,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+613,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgBit(oldp+614,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 2U))));
        bufp->chgIData(oldp+615,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+616,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+617,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgBit(oldp+618,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 3U))));
        bufp->chgIData(oldp+619,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+620,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+621,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgBit(oldp+622,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 4U))));
        bufp->chgIData(oldp+623,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+624,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+625,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgBit(oldp+626,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 5U))));
        bufp->chgIData(oldp+627,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+628,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+629,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+630,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+631,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgBit(oldp+632,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 6U))));
        bufp->chgIData(oldp+633,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+634,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+635,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgBit(oldp+636,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 7U))));
        bufp->chgIData(oldp+637,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+638,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+639,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+640,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+641,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+642,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+643,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+644,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+645,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+646,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+647,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+648,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+649,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgBit(oldp+650,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                [0U])));
        bufp->chgIData(oldp+651,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+652,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+653,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgBit(oldp+654,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 1U))));
        bufp->chgIData(oldp+655,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+656,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+657,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                 [2U]),8);
        bufp->chgCData(oldp+658,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+659,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+660,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+661,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+662,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+663,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+664,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+665,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+666,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+667,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+668,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+669,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+670,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+671,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+672,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+673,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+674,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                [3U])));
        bufp->chgIData(oldp+675,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgIData(oldp+676,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgIData(oldp+677,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgIData(oldp+678,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgIData(oldp+679,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgIData(oldp+680,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgIData(oldp+681,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgIData(oldp+682,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgIData(oldp+683,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgIData(oldp+684,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgIData(oldp+685,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgIData(oldp+686,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgIData(oldp+687,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgIData(oldp+688,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgIData(oldp+689,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgIData(oldp+690,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgIData(oldp+691,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgIData(oldp+692,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgIData(oldp+693,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgIData(oldp+694,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgIData(oldp+695,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgIData(oldp+696,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgIData(oldp+697,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgIData(oldp+698,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgIData(oldp+699,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][0U]),32);
        bufp->chgIData(oldp+700,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][1U]),32);
        bufp->chgIData(oldp+701,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][2U]),32);
        bufp->chgIData(oldp+702,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][3U]),32);
        bufp->chgIData(oldp+703,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][4U]),32);
        bufp->chgIData(oldp+704,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][5U]),32);
        bufp->chgIData(oldp+705,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][6U]),32);
        bufp->chgIData(oldp+706,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][7U]),32);
        bufp->chgCData(oldp+707,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+708,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+709,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+710,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+711,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [0U]),8);
        bufp->chgIData(oldp+712,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+713,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+714,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+715,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+716,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [2U]),8);
        bufp->chgIData(oldp+717,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgBit(oldp+718,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 2U))));
        bufp->chgIData(oldp+719,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+720,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+721,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+722,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [3U]),8);
        bufp->chgIData(oldp+723,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgBit(oldp+724,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 3U))));
        bufp->chgIData(oldp+725,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+726,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+727,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+728,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [4U]),8);
        bufp->chgIData(oldp+729,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgBit(oldp+730,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 4U))));
        bufp->chgIData(oldp+731,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+732,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+733,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+734,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [5U]),8);
        bufp->chgIData(oldp+735,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgBit(oldp+736,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 5U))));
        bufp->chgIData(oldp+737,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+738,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+739,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+740,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [6U]),8);
        bufp->chgIData(oldp+741,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgBit(oldp+742,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 6U))));
        bufp->chgIData(oldp+743,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+744,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+745,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+746,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [7U]),8);
        bufp->chgIData(oldp+747,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgBit(oldp+748,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 7U))));
        bufp->chgIData(oldp+749,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+750,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+751,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+752,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgBit(oldp+753,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                [1U])));
        bufp->chgIData(oldp+754,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+755,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+756,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [1U]),8);
        bufp->chgIData(oldp+757,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgBit(oldp+758,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 1U))));
        bufp->chgIData(oldp+759,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+760,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+761,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+762,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgBit(oldp+763,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 2U))));
        bufp->chgIData(oldp+764,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+765,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+766,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgBit(oldp+767,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 3U))));
        bufp->chgIData(oldp+768,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+769,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+770,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+771,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+772,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgBit(oldp+773,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 4U))));
        bufp->chgIData(oldp+774,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+775,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+776,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgBit(oldp+777,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 5U))));
        bufp->chgIData(oldp+778,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+779,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+780,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgBit(oldp+781,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 6U))));
        bufp->chgIData(oldp+782,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+783,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+784,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgBit(oldp+785,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 7U))));
        bufp->chgIData(oldp+786,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+787,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+788,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgBit(oldp+789,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                [2U])));
        bufp->chgIData(oldp+790,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+791,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+792,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgBit(oldp+793,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 1U))));
        bufp->chgIData(oldp+794,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+795,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+796,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgBit(oldp+797,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 2U))));
        bufp->chgIData(oldp+798,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+799,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+800,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgBit(oldp+801,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 3U))));
        bufp->chgIData(oldp+802,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+803,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+804,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgBit(oldp+805,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 4U))));
        bufp->chgIData(oldp+806,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+807,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+808,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgBit(oldp+809,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 5U))));
        bufp->chgIData(oldp+810,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+811,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+812,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+813,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+814,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgBit(oldp+815,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 6U))));
        bufp->chgIData(oldp+816,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+817,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+818,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgBit(oldp+819,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 7U))));
        bufp->chgIData(oldp+820,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+821,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+822,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+823,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+824,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+825,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+826,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+827,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+828,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+829,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+830,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+831,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+832,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgBit(oldp+833,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                [0U])));
        bufp->chgIData(oldp+834,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+835,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+836,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgBit(oldp+837,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 1U))));
        bufp->chgIData(oldp+838,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+839,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+840,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                 [3U]),8);
        bufp->chgCData(oldp+841,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+842,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+843,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+844,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+845,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+846,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+847,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+848,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+849,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+850,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+851,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+852,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+853,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+854,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+855,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+856,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+857,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                [3U])));
        bufp->chgIData(oldp+858,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgIData(oldp+859,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgIData(oldp+860,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgIData(oldp+861,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgIData(oldp+862,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgIData(oldp+863,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgIData(oldp+864,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgIData(oldp+865,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgIData(oldp+866,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgIData(oldp+867,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgIData(oldp+868,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgIData(oldp+869,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgIData(oldp+870,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgIData(oldp+871,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgIData(oldp+872,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgIData(oldp+873,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgIData(oldp+874,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgIData(oldp+875,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgIData(oldp+876,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgIData(oldp+877,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgIData(oldp+878,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgIData(oldp+879,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgIData(oldp+880,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgIData(oldp+881,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgIData(oldp+882,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][0U]),32);
        bufp->chgIData(oldp+883,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][1U]),32);
        bufp->chgIData(oldp+884,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][2U]),32);
        bufp->chgIData(oldp+885,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][3U]),32);
        bufp->chgIData(oldp+886,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][4U]),32);
        bufp->chgIData(oldp+887,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][5U]),32);
        bufp->chgIData(oldp+888,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][6U]),32);
        bufp->chgIData(oldp+889,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [3U][7U]),32);
        bufp->chgCData(oldp+890,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+891,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+892,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+893,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+894,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [0U]),8);
        bufp->chgIData(oldp+895,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+896,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+897,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+898,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+899,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [2U]),8);
        bufp->chgIData(oldp+900,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgBit(oldp+901,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 2U))));
        bufp->chgIData(oldp+902,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+903,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+904,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+905,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [3U]),8);
        bufp->chgIData(oldp+906,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgBit(oldp+907,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 3U))));
        bufp->chgIData(oldp+908,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+909,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+910,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+911,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [4U]),8);
        bufp->chgIData(oldp+912,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgBit(oldp+913,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 4U))));
        bufp->chgIData(oldp+914,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+915,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+916,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+917,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [5U]),8);
        bufp->chgIData(oldp+918,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgBit(oldp+919,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 5U))));
        bufp->chgIData(oldp+920,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+921,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+922,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+923,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [6U]),8);
        bufp->chgIData(oldp+924,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgBit(oldp+925,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 6U))));
        bufp->chgIData(oldp+926,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+927,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+928,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+929,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [7U]),8);
        bufp->chgIData(oldp+930,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgBit(oldp+931,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 7U))));
        bufp->chgIData(oldp+932,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+933,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+934,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+935,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgBit(oldp+936,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                [1U])));
        bufp->chgIData(oldp+937,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+938,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+939,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                 [1U]),8);
        bufp->chgIData(oldp+940,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgBit(oldp+941,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 1U))));
        bufp->chgIData(oldp+942,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+943,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+944,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+945,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgBit(oldp+946,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 2U))));
        bufp->chgIData(oldp+947,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+948,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+949,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgBit(oldp+950,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 3U))));
        bufp->chgIData(oldp+951,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+952,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+953,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+954,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+955,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgBit(oldp+956,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 4U))));
        bufp->chgIData(oldp+957,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+958,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+959,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgBit(oldp+960,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 5U))));
        bufp->chgIData(oldp+961,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+962,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+963,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgBit(oldp+964,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 6U))));
        bufp->chgIData(oldp+965,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+966,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+967,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgBit(oldp+968,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 7U))));
        bufp->chgIData(oldp+969,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+970,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+971,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgBit(oldp+972,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                [2U])));
        bufp->chgIData(oldp+973,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+974,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+975,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgBit(oldp+976,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 1U))));
        bufp->chgIData(oldp+977,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+978,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+979,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgBit(oldp+980,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 2U))));
        bufp->chgIData(oldp+981,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+982,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+983,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgBit(oldp+984,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 3U))));
        bufp->chgIData(oldp+985,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+986,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+987,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgBit(oldp+988,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 4U))));
        bufp->chgIData(oldp+989,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+990,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+991,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgBit(oldp+992,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 5U))));
        bufp->chgIData(oldp+993,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+994,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+995,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+996,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+997,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgBit(oldp+998,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 6U))));
        bufp->chgIData(oldp+999,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1000,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1001,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgBit(oldp+1002,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 7U))));
        bufp->chgIData(oldp+1003,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1004,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1005,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1006,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1007,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1008,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1009,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1010,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1011,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1012,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1013,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1014,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1015,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgBit(oldp+1016,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [0U])));
        bufp->chgIData(oldp+1017,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1018,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1019,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgBit(oldp+1020,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 1U))));
        bufp->chgIData(oldp+1021,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1022,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+1023,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                  [4U]),8);
        bufp->chgCData(oldp+1024,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+1025,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+1026,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+1027,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+1028,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+1029,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+1030,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+1031,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+1032,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+1033,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+1034,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+1035,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+1036,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+1037,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+1038,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+1039,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+1040,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [3U])));
        bufp->chgIData(oldp+1041,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgIData(oldp+1042,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgIData(oldp+1043,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgIData(oldp+1044,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgIData(oldp+1045,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgIData(oldp+1046,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgIData(oldp+1047,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgIData(oldp+1048,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgIData(oldp+1049,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgIData(oldp+1050,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgIData(oldp+1051,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgIData(oldp+1052,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgIData(oldp+1053,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgIData(oldp+1054,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgIData(oldp+1055,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgIData(oldp+1056,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgIData(oldp+1057,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgIData(oldp+1058,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgIData(oldp+1059,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgIData(oldp+1060,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgIData(oldp+1061,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgIData(oldp+1062,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgIData(oldp+1063,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgIData(oldp+1064,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgIData(oldp+1065,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][0U]),32);
        bufp->chgIData(oldp+1066,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][1U]),32);
        bufp->chgIData(oldp+1067,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][2U]),32);
        bufp->chgIData(oldp+1068,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][3U]),32);
        bufp->chgIData(oldp+1069,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][4U]),32);
        bufp->chgIData(oldp+1070,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][5U]),32);
        bufp->chgIData(oldp+1071,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][6U]),32);
        bufp->chgIData(oldp+1072,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][7U]),32);
        bufp->chgCData(oldp+1073,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+1074,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+1075,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [0U]),8);
        bufp->chgIData(oldp+1078,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1079,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1080,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+1081,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1082,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [2U]),8);
        bufp->chgIData(oldp+1083,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgBit(oldp+1084,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 2U))));
        bufp->chgIData(oldp+1085,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1086,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1087,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1088,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [3U]),8);
        bufp->chgIData(oldp+1089,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgBit(oldp+1090,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 3U))));
        bufp->chgIData(oldp+1091,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1092,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1093,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1094,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [4U]),8);
        bufp->chgIData(oldp+1095,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgBit(oldp+1096,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 4U))));
        bufp->chgIData(oldp+1097,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1098,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1099,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1100,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [5U]),8);
        bufp->chgIData(oldp+1101,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgBit(oldp+1102,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 5U))));
        bufp->chgIData(oldp+1103,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1104,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1105,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1106,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [6U]),8);
        bufp->chgIData(oldp+1107,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgBit(oldp+1108,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 6U))));
        bufp->chgIData(oldp+1109,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1110,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1111,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1112,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [7U]),8);
        bufp->chgIData(oldp+1113,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgBit(oldp+1114,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 7U))));
        bufp->chgIData(oldp+1115,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1116,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1117,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1118,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgBit(oldp+1119,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [1U])));
        bufp->chgIData(oldp+1120,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1121,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+1122,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [1U]),8);
        bufp->chgIData(oldp+1123,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgBit(oldp+1124,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 1U))));
        bufp->chgIData(oldp+1125,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1126,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1127,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1128,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgBit(oldp+1129,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 2U))));
        bufp->chgIData(oldp+1130,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1131,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1132,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgBit(oldp+1133,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 3U))));
        bufp->chgIData(oldp+1134,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1136,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1137,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1138,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgBit(oldp+1139,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 4U))));
        bufp->chgIData(oldp+1140,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1141,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1142,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgBit(oldp+1143,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 5U))));
        bufp->chgIData(oldp+1144,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1146,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgBit(oldp+1147,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 6U))));
        bufp->chgIData(oldp+1148,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1149,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1150,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgBit(oldp+1151,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 7U))));
        bufp->chgIData(oldp+1152,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1153,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1154,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgBit(oldp+1155,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [2U])));
        bufp->chgIData(oldp+1156,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1158,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgBit(oldp+1159,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 1U))));
        bufp->chgIData(oldp+1160,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1161,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1162,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgBit(oldp+1163,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 2U))));
        bufp->chgIData(oldp+1164,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1165,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1166,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgBit(oldp+1167,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 3U))));
        bufp->chgIData(oldp+1168,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1169,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1170,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgBit(oldp+1171,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 4U))));
        bufp->chgIData(oldp+1172,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1173,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1174,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgBit(oldp+1175,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 5U))));
        bufp->chgIData(oldp+1176,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1177,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1178,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1179,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1180,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgBit(oldp+1181,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 6U))));
        bufp->chgIData(oldp+1182,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1183,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1184,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgBit(oldp+1185,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 7U))));
        bufp->chgIData(oldp+1186,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1187,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1188,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1189,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1190,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1191,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1192,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1193,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1194,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1195,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1196,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1197,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1198,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgBit(oldp+1199,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [0U])));
        bufp->chgIData(oldp+1200,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1201,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1202,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgBit(oldp+1203,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 1U))));
        bufp->chgIData(oldp+1204,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1205,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+1206,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                  [5U]),8);
        bufp->chgCData(oldp+1207,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+1208,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+1209,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+1210,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+1211,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+1213,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+1214,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+1215,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+1216,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+1217,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+1218,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+1219,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+1220,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+1221,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+1222,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+1223,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [3U])));
        bufp->chgIData(oldp+1224,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgIData(oldp+1225,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgIData(oldp+1226,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgIData(oldp+1227,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgIData(oldp+1228,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgIData(oldp+1229,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgIData(oldp+1230,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgIData(oldp+1231,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgIData(oldp+1232,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgIData(oldp+1233,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgIData(oldp+1234,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgIData(oldp+1235,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgIData(oldp+1236,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgIData(oldp+1237,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgIData(oldp+1238,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgIData(oldp+1239,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgIData(oldp+1240,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgIData(oldp+1241,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgIData(oldp+1242,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgIData(oldp+1243,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgIData(oldp+1244,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgIData(oldp+1245,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgIData(oldp+1246,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgIData(oldp+1247,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgIData(oldp+1248,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][0U]),32);
        bufp->chgIData(oldp+1249,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][1U]),32);
        bufp->chgIData(oldp+1250,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][2U]),32);
        bufp->chgIData(oldp+1251,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][3U]),32);
        bufp->chgIData(oldp+1252,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][4U]),32);
        bufp->chgIData(oldp+1253,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][5U]),32);
        bufp->chgIData(oldp+1254,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][6U]),32);
        bufp->chgIData(oldp+1255,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][7U]),32);
        bufp->chgCData(oldp+1256,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+1257,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+1258,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+1260,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [0U]),8);
        bufp->chgIData(oldp+1261,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1262,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1263,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+1264,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1265,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [2U]),8);
        bufp->chgIData(oldp+1266,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgBit(oldp+1267,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 2U))));
        bufp->chgIData(oldp+1268,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1269,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1270,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1271,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [3U]),8);
        bufp->chgIData(oldp+1272,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgBit(oldp+1273,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 3U))));
        bufp->chgIData(oldp+1274,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1275,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1276,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1277,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [4U]),8);
        bufp->chgIData(oldp+1278,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgBit(oldp+1279,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 4U))));
        bufp->chgIData(oldp+1280,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1281,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1282,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1283,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [5U]),8);
        bufp->chgIData(oldp+1284,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgBit(oldp+1285,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 5U))));
        bufp->chgIData(oldp+1286,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1288,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1289,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [6U]),8);
        bufp->chgIData(oldp+1290,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgBit(oldp+1291,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 6U))));
        bufp->chgIData(oldp+1292,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1293,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1294,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [7U]),8);
        bufp->chgIData(oldp+1296,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgBit(oldp+1297,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 7U))));
        bufp->chgIData(oldp+1298,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1299,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1300,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1301,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgBit(oldp+1302,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [1U])));
        bufp->chgIData(oldp+1303,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1304,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+1305,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [1U]),8);
        bufp->chgIData(oldp+1306,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgBit(oldp+1307,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 1U))));
        bufp->chgIData(oldp+1308,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1309,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1310,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1311,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgBit(oldp+1312,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 2U))));
        bufp->chgIData(oldp+1313,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1314,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1315,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgBit(oldp+1316,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 3U))));
        bufp->chgIData(oldp+1317,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1318,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1319,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1320,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1321,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgBit(oldp+1322,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 4U))));
        bufp->chgIData(oldp+1323,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1324,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1325,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgBit(oldp+1326,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 5U))));
        bufp->chgIData(oldp+1327,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1328,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1329,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgBit(oldp+1330,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 6U))));
        bufp->chgIData(oldp+1331,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1333,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgBit(oldp+1334,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 7U))));
        bufp->chgIData(oldp+1335,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1336,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1337,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgBit(oldp+1338,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [2U])));
        bufp->chgIData(oldp+1339,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1340,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1341,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgBit(oldp+1342,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 1U))));
        bufp->chgIData(oldp+1343,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1344,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1345,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgBit(oldp+1346,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 2U))));
        bufp->chgIData(oldp+1347,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1348,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1349,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgBit(oldp+1350,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 3U))));
        bufp->chgIData(oldp+1351,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1352,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1353,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgBit(oldp+1354,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 4U))));
        bufp->chgIData(oldp+1355,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1356,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1357,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgBit(oldp+1358,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 5U))));
        bufp->chgIData(oldp+1359,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1360,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1361,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1362,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1363,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgBit(oldp+1364,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 6U))));
        bufp->chgIData(oldp+1365,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1366,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1367,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgBit(oldp+1368,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 7U))));
        bufp->chgIData(oldp+1369,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1370,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1371,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1372,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1373,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1374,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1375,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1376,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1377,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1378,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1379,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1380,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1381,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgBit(oldp+1382,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [0U])));
        bufp->chgIData(oldp+1383,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1384,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1385,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgBit(oldp+1386,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 1U))));
        bufp->chgIData(oldp+1387,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1388,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+1389,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                  [6U]),8);
        bufp->chgCData(oldp+1390,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+1391,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+1392,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+1393,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+1394,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+1395,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+1396,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+1397,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+1398,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+1399,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+1400,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+1401,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+1402,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+1403,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+1404,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+1405,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+1406,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [3U])));
        bufp->chgIData(oldp+1407,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgIData(oldp+1408,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgIData(oldp+1409,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgIData(oldp+1410,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgIData(oldp+1411,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgIData(oldp+1412,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgIData(oldp+1413,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgIData(oldp+1414,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgIData(oldp+1415,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgIData(oldp+1416,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgIData(oldp+1417,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgIData(oldp+1418,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgIData(oldp+1419,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgIData(oldp+1420,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgIData(oldp+1421,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgIData(oldp+1422,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgIData(oldp+1423,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgIData(oldp+1424,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgIData(oldp+1425,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgIData(oldp+1426,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgIData(oldp+1427,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgIData(oldp+1428,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgIData(oldp+1429,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgIData(oldp+1430,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgIData(oldp+1431,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][0U]),32);
        bufp->chgIData(oldp+1432,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][1U]),32);
        bufp->chgIData(oldp+1433,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][2U]),32);
        bufp->chgIData(oldp+1434,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][3U]),32);
        bufp->chgIData(oldp+1435,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][4U]),32);
        bufp->chgIData(oldp+1436,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][5U]),32);
        bufp->chgIData(oldp+1437,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][6U]),32);
        bufp->chgIData(oldp+1438,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][7U]),32);
        bufp->chgCData(oldp+1439,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+1440,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+1441,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+1442,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+1443,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [0U]),8);
        bufp->chgIData(oldp+1444,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1445,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1446,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+1447,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1448,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [2U]),8);
        bufp->chgIData(oldp+1449,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgBit(oldp+1450,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 2U))));
        bufp->chgIData(oldp+1451,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1452,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1453,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1454,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [3U]),8);
        bufp->chgIData(oldp+1455,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgBit(oldp+1456,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 3U))));
        bufp->chgIData(oldp+1457,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1458,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1459,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1460,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [4U]),8);
        bufp->chgIData(oldp+1461,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgBit(oldp+1462,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 4U))));
        bufp->chgIData(oldp+1463,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1464,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1465,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1466,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [5U]),8);
        bufp->chgIData(oldp+1467,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgBit(oldp+1468,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 5U))));
        bufp->chgIData(oldp+1469,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1470,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1471,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1472,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [6U]),8);
        bufp->chgIData(oldp+1473,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgBit(oldp+1474,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 6U))));
        bufp->chgIData(oldp+1475,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1476,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1477,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1478,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [7U]),8);
        bufp->chgIData(oldp+1479,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgBit(oldp+1480,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 7U))));
        bufp->chgIData(oldp+1481,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1482,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1483,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1484,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgBit(oldp+1485,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [1U])));
        bufp->chgIData(oldp+1486,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1487,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+1488,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [1U]),8);
        bufp->chgIData(oldp+1489,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgBit(oldp+1490,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 1U))));
        bufp->chgIData(oldp+1491,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1492,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1493,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1494,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgBit(oldp+1495,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 2U))));
        bufp->chgIData(oldp+1496,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1497,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1498,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgBit(oldp+1499,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 3U))));
        bufp->chgIData(oldp+1500,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1501,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1502,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1503,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1504,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgBit(oldp+1505,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 4U))));
        bufp->chgIData(oldp+1506,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1507,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1508,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgBit(oldp+1509,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 5U))));
        bufp->chgIData(oldp+1510,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1511,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1512,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgBit(oldp+1513,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 6U))));
        bufp->chgIData(oldp+1514,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1515,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1516,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgBit(oldp+1517,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 7U))));
        bufp->chgIData(oldp+1518,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1519,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1520,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgBit(oldp+1521,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [2U])));
        bufp->chgIData(oldp+1522,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1523,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1524,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgBit(oldp+1525,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 1U))));
        bufp->chgIData(oldp+1526,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1527,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1528,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgBit(oldp+1529,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 2U))));
        bufp->chgIData(oldp+1530,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1531,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1532,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgBit(oldp+1533,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 3U))));
        bufp->chgIData(oldp+1534,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1535,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1536,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgBit(oldp+1537,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 4U))));
        bufp->chgIData(oldp+1538,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1539,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1540,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgBit(oldp+1541,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 5U))));
        bufp->chgIData(oldp+1542,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1543,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1544,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1545,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1546,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgBit(oldp+1547,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 6U))));
        bufp->chgIData(oldp+1548,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1549,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1550,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgBit(oldp+1551,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 7U))));
        bufp->chgIData(oldp+1552,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1553,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1554,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1555,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1556,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1557,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1558,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1559,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1560,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1561,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1562,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1563,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1564,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgBit(oldp+1565,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [0U])));
        bufp->chgIData(oldp+1566,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1567,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1568,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgBit(oldp+1569,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 1U))));
        bufp->chgIData(oldp+1570,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1571,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+1572,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                  [7U]),8);
        bufp->chgCData(oldp+1573,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+1574,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+1575,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+1576,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+1577,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+1578,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+1579,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+1580,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+1581,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+1582,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+1583,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+1584,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+1585,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+1586,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+1587,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+1588,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+1589,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [3U])));
        bufp->chgIData(oldp+1590,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgIData(oldp+1591,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgIData(oldp+1592,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgIData(oldp+1593,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgIData(oldp+1594,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgIData(oldp+1595,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgIData(oldp+1596,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgIData(oldp+1597,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgIData(oldp+1598,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgIData(oldp+1599,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgIData(oldp+1600,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgIData(oldp+1601,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgIData(oldp+1602,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgIData(oldp+1603,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgIData(oldp+1604,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgIData(oldp+1605,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgIData(oldp+1606,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgIData(oldp+1607,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgIData(oldp+1608,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgIData(oldp+1609,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgIData(oldp+1610,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgIData(oldp+1611,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgIData(oldp+1612,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgIData(oldp+1613,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgIData(oldp+1614,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][0U]),32);
        bufp->chgIData(oldp+1615,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][1U]),32);
        bufp->chgIData(oldp+1616,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][2U]),32);
        bufp->chgIData(oldp+1617,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][3U]),32);
        bufp->chgIData(oldp+1618,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][4U]),32);
        bufp->chgIData(oldp+1619,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][5U]),32);
        bufp->chgIData(oldp+1620,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][6U]),32);
        bufp->chgIData(oldp+1621,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [3U][7U]),32);
        bufp->chgCData(oldp+1622,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+1623,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+1624,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+1625,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+1626,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [0U]),8);
        bufp->chgIData(oldp+1627,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1628,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1629,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+1630,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1631,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [2U]),8);
        bufp->chgIData(oldp+1632,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgBit(oldp+1633,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 2U))));
        bufp->chgIData(oldp+1634,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1635,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1636,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1637,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [3U]),8);
        bufp->chgIData(oldp+1638,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgBit(oldp+1639,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 3U))));
        bufp->chgIData(oldp+1640,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1641,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1642,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1643,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [4U]),8);
        bufp->chgIData(oldp+1644,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgBit(oldp+1645,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 4U))));
        bufp->chgIData(oldp+1646,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1647,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1648,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1649,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [5U]),8);
        bufp->chgIData(oldp+1650,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgBit(oldp+1651,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 5U))));
        bufp->chgIData(oldp+1652,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1653,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1654,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1655,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [6U]),8);
        bufp->chgIData(oldp+1656,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgBit(oldp+1657,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 6U))));
        bufp->chgIData(oldp+1658,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1659,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1660,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1661,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [7U]),8);
        bufp->chgIData(oldp+1662,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgBit(oldp+1663,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 7U))));
        bufp->chgIData(oldp+1664,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1665,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1666,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1667,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgBit(oldp+1668,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [1U])));
        bufp->chgIData(oldp+1669,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1670,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgCData(oldp+1671,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                                  [1U]),8);
        bufp->chgIData(oldp+1672,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgBit(oldp+1673,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 1U))));
        bufp->chgIData(oldp+1674,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1675,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1676,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1677,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgBit(oldp+1678,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 2U))));
        bufp->chgIData(oldp+1679,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1680,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1681,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgBit(oldp+1682,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 3U))));
        bufp->chgIData(oldp+1683,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1684,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1685,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1686,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1687,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgBit(oldp+1688,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 4U))));
        bufp->chgIData(oldp+1689,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1690,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1691,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgBit(oldp+1692,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 5U))));
        bufp->chgIData(oldp+1693,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1694,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1695,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgBit(oldp+1696,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 6U))));
        bufp->chgIData(oldp+1697,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1698,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1699,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgBit(oldp+1700,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 7U))));
        bufp->chgIData(oldp+1701,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1702,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1703,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgBit(oldp+1704,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [2U])));
        bufp->chgIData(oldp+1705,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1706,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1707,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgBit(oldp+1708,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 1U))));
        bufp->chgIData(oldp+1709,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1710,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1711,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgBit(oldp+1712,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 2U))));
        bufp->chgIData(oldp+1713,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1714,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1715,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgBit(oldp+1716,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 3U))));
        bufp->chgIData(oldp+1717,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1718,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1719,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgBit(oldp+1720,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 4U))));
        bufp->chgIData(oldp+1721,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1722,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1723,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgBit(oldp+1724,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 5U))));
        bufp->chgIData(oldp+1725,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1726,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1727,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1728,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1729,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgBit(oldp+1730,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 6U))));
        bufp->chgIData(oldp+1731,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1732,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1733,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgBit(oldp+1734,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 7U))));
        bufp->chgIData(oldp+1735,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1736,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
        bufp->chgIData(oldp+1737,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1738,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1739,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1740,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1741,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1742,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1743,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1744,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1745,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1746,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
        bufp->chgIData(oldp+1747,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgBit(oldp+1748,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                 [0U])));
        bufp->chgIData(oldp+1749,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1750,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
        bufp->chgIData(oldp+1751,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgBit(oldp+1752,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 1U))));
        bufp->chgIData(oldp+1753,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1754,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+1755,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[0]),32);
        bufp->chgIData(oldp+1756,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[1]),32);
        bufp->chgIData(oldp+1757,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[2]),32);
        bufp->chgIData(oldp+1758,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[3]),32);
        bufp->chgIData(oldp+1759,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[4]),32);
        bufp->chgIData(oldp+1760,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[5]),32);
        bufp->chgIData(oldp+1761,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[6]),32);
        bufp->chgIData(oldp+1762,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[7]),32);
    }
    bufp->chgBit(oldp+1763,(vlSelfRef.ACLK));
    bufp->chgBit(oldp+1764,(vlSelfRef.ARESETn));
    bufp->chgBit(oldp+1765,(vlSelfRef.ASIC_interrupt));
    bufp->chgCData(oldp+1766,(vlSelfRef.AWID_S),8);
    bufp->chgIData(oldp+1767,(vlSelfRef.AWADDR_S),32);
    bufp->chgCData(oldp+1768,(vlSelfRef.AWLEN_S),4);
    bufp->chgCData(oldp+1769,(vlSelfRef.AWSIZE_S),3);
    bufp->chgCData(oldp+1770,(vlSelfRef.AWBURST_S),2);
    bufp->chgBit(oldp+1771,(vlSelfRef.AWVALID_S));
    bufp->chgBit(oldp+1772,(vlSelfRef.AWREADY_S));
    bufp->chgIData(oldp+1773,(vlSelfRef.WDATA_S),32);
    bufp->chgCData(oldp+1774,(vlSelfRef.WSTRB_S),4);
    bufp->chgBit(oldp+1775,(vlSelfRef.WLAST_S));
    bufp->chgBit(oldp+1776,(vlSelfRef.WVALID_S));
    bufp->chgBit(oldp+1777,(vlSelfRef.WREADY_S));
    bufp->chgCData(oldp+1778,(vlSelfRef.BID_S),8);
    bufp->chgCData(oldp+1779,(vlSelfRef.BRESP_S),2);
    bufp->chgBit(oldp+1780,(vlSelfRef.BVALID_S));
    bufp->chgBit(oldp+1781,(vlSelfRef.BREADY_S));
    bufp->chgCData(oldp+1782,(vlSelfRef.ARID_S),8);
    bufp->chgIData(oldp+1783,(vlSelfRef.ARADDR_S),32);
    bufp->chgCData(oldp+1784,(vlSelfRef.ARLEN_S),4);
    bufp->chgCData(oldp+1785,(vlSelfRef.ARSIZE_S),3);
    bufp->chgCData(oldp+1786,(vlSelfRef.ARBURST_S),2);
    bufp->chgBit(oldp+1787,(vlSelfRef.ARVALID_S));
    bufp->chgBit(oldp+1788,(vlSelfRef.ARREADY_S));
    bufp->chgCData(oldp+1789,(vlSelfRef.RID_S),8);
    bufp->chgIData(oldp+1790,(vlSelfRef.RDATA_S),32);
    bufp->chgCData(oldp+1791,(vlSelfRef.RRESP_S),2);
    bufp->chgBit(oldp+1792,(vlSelfRef.RLAST_S));
    bufp->chgBit(oldp+1793,(vlSelfRef.RVALID_S));
    bufp->chgBit(oldp+1794,(vlSelfRef.RREADY_S));
    bufp->chgBit(oldp+1795,((1U & (~ (IData)(vlSelfRef.ARESETn)))));
}

void Vasic_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_cleanup\n"); );
    // Init
    Vasic_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasic_wrapper___024root*>(voidSelf);
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
