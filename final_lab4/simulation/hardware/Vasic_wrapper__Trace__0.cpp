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
        bufp->chgIData(oldp+8,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias
                                [0U]),32);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias
                                [1U]),32);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias
                                [2U]),32);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias
                                [3U]),32);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias
                                [4U]),32);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias
                                [5U]),32);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias
                                [6U]),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.bias
                                [7U]),32);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias
                                [0U]),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias
                                [1U]),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias
                                [2U]),32);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias
                                [3U]),32);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias
                                [4U]),32);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias
                                [5U]),32);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias
                                [6U]),32);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.bias
                                [7U]),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+47,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias
                                [0U]),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias
                                [1U]),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias
                                [2U]),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias
                                [3U]),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias
                                [4U]),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias
                                [5U]),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias
                                [6U]),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.bias
                                [7U]),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias
                                [0U]),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias
                                [1U]),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias
                                [2U]),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias
                                [3U]),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias
                                [4U]),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias
                                [5U]),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias
                                [6U]),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.bias
                                [7U]),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias
                                [0U]),32);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias
                                [1U]),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias
                                [2U]),32);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias
                                [3U]),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias
                                [4U]),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias
                                [5U]),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias
                                [6U]),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.bias
                                [7U]),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias
                                [0U]),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias
                                [1U]),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias
                                [2U]),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias
                                [3U]),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias
                                 [4U]),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias
                                 [5U]),32);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias
                                 [6U]),32);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.bias
                                 [7U]),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias
                                 [0U]),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias
                                 [1U]),32);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias
                                 [2U]),32);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias
                                 [3U]),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias
                                 [4U]),32);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias
                                 [5U]),32);
        bufp->chgIData(oldp+118,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias
                                 [6U]),32);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.bias
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
        bufp->chgSData(oldp+130,(((0x44fU == (IData)(vlSelfRef.asic_wrapper__DOT__count))
                                   ? 0U : (0x7ffU & 
                                           ((IData)(vlSelfRef.asic_wrapper__DOT__data_ready_reg)
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelfRef.asic_wrapper__DOT__count))
                                             : (IData)(vlSelfRef.asic_wrapper__DOT__count))))),11);
        bufp->chgSData(oldp+131,((0x7ffU & ((IData)(0x410U) 
                                            + (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count)))),11);
        bufp->chgIData(oldp+132,(vlSelfRef.asic_wrapper__DOT__ofmap),32);
        bufp->chgBit(oldp+133,(vlSelfRef.asic_wrapper__DOT__data_ready));
        bufp->chgBit(oldp+134,(vlSelfRef.asic_wrapper__DOT__data_ready_next));
        bufp->chgBit(oldp+135,(vlSelfRef.asic_wrapper__DOT__data_ready_reg));
        bufp->chgBit(oldp+136,(vlSelfRef.asic_wrapper__DOT__data_ready_reg_next));
        bufp->chgBit(oldp+137,(vlSelfRef.asic_wrapper__DOT__bias_write));
        bufp->chgBit(oldp+138,(vlSelfRef.asic_wrapper__DOT__valid));
        bufp->chgIData(oldp+139,(vlSelfRef.asic_wrapper__DOT__i),32);
        bufp->chgCData(oldp+140,(vlSelfRef.asic_wrapper__DOT__state),2);
        bufp->chgCData(oldp+141,(vlSelfRef.asic_wrapper__DOT__next_state),2);
        bufp->chgCData(oldp+142,(vlSelfRef.asic_wrapper__DOT__output_cnt_next),7);
        bufp->chgCData(oldp+143,(vlSelfRef.asic_wrapper__DOT__ofmap_count),8);
        bufp->chgBit(oldp+144,(vlSelfRef.asic_wrapper__DOT__step));
        bufp->chgCData(oldp+145,(vlSelfRef.asic_wrapper__DOT__cs_slave),3);
        bufp->chgIData(oldp+146,(vlSelfRef.asic_wrapper__DOT__addr_S_reg),32);
        bufp->chgBit(oldp+147,(vlSelfRef.asic_wrapper__DOT__write_error));
        bufp->chgIData(oldp+148,(vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE),32);
        bufp->chgIData(oldp+149,(vlSelfRef.asic_wrapper__DOT__DATA),32);
        bufp->chgIData(oldp+150,(vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP),32);
        bufp->chgIData(oldp+151,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out),32);
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
        bufp->chgCData(oldp+192,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_output),7);
        bufp->chgBit(oldp+193,(vlSelfRef.asic_wrapper__DOT__Top__DOT__mode1_step0));
        bufp->chgBit(oldp+194,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage))));
        bufp->chgCData(oldp+195,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address),7);
        bufp->chgCData(oldp+196,((0x7fU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))),7);
        bufp->chgCData(oldp+197,((0x1fU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))),5);
        bufp->chgIData(oldp+198,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[0]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[1]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[2]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[3]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[4]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[5]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[6]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[7]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[8]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[9]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[10]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[11]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[12]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[13]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[14]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[15]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[16]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[17]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[18]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[19]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[20]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[21]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[22]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[23]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[24]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[25]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[26]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[27]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[28]),32);
        bufp->chgIData(oldp+227,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[29]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[30]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[31]),32);
        bufp->chgCData(oldp+230,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][0U]),8);
        bufp->chgCData(oldp+231,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][1U]),8);
        bufp->chgCData(oldp+232,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][2U]),8);
        bufp->chgCData(oldp+233,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][3U]),8);
        bufp->chgCData(oldp+234,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][4U]),8);
        bufp->chgCData(oldp+235,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][5U]),8);
        bufp->chgCData(oldp+236,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][6U]),8);
        bufp->chgCData(oldp+237,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [0U][7U]),8);
        bufp->chgCData(oldp+238,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][0U]),8);
        bufp->chgCData(oldp+239,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][1U]),8);
        bufp->chgCData(oldp+240,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][2U]),8);
        bufp->chgCData(oldp+241,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][3U]),8);
        bufp->chgCData(oldp+242,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][4U]),8);
        bufp->chgCData(oldp+243,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][5U]),8);
        bufp->chgCData(oldp+244,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][6U]),8);
        bufp->chgCData(oldp+245,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [1U][7U]),8);
        bufp->chgCData(oldp+246,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][0U]),8);
        bufp->chgCData(oldp+247,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][1U]),8);
        bufp->chgCData(oldp+248,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][2U]),8);
        bufp->chgCData(oldp+249,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][3U]),8);
        bufp->chgCData(oldp+250,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][4U]),8);
        bufp->chgCData(oldp+251,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][5U]),8);
        bufp->chgCData(oldp+252,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][6U]),8);
        bufp->chgCData(oldp+253,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [2U][7U]),8);
        bufp->chgCData(oldp+254,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][0U]),8);
        bufp->chgCData(oldp+255,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][1U]),8);
        bufp->chgCData(oldp+256,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][2U]),8);
        bufp->chgCData(oldp+257,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][3U]),8);
        bufp->chgCData(oldp+258,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][4U]),8);
        bufp->chgCData(oldp+259,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][5U]),8);
        bufp->chgCData(oldp+260,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][6U]),8);
        bufp->chgCData(oldp+261,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                                 [3U][7U]),8);
        bufp->chgBit(oldp+262,(((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage) 
                                & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__valid_array))));
        bufp->chgSData(oldp+263,((0x3ffU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))),10);
        bufp->chgCData(oldp+264,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__valid_chain),8);
        bufp->chgBit(oldp+265,((0xffU == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__valid_chain))));
        bufp->chgIData(oldp+266,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__u_Adder_tree__DOT__i),32);
        bufp->chgCData(oldp+267,(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state),3);
        bufp->chgCData(oldp+268,(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__next_state),3);
        bufp->chgCData(oldp+269,(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__ppu_count),8);
        bufp->chgCData(oldp+270,(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage),4);
        bufp->chgIData(oldp+271,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__relu_out),32);
        bufp->chgSData(oldp+272,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_shift),9);
        bufp->chgSData(oldp+273,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_temp),9);
        bufp->chgIData(oldp+274,(vlSelfRef.asic_wrapper__DOT__unnamedblk1__DOT__j),32);
        bufp->chgIData(oldp+275,(vlSelfRef.asic_wrapper__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+276,(vlSelfRef.asic_wrapper__DOT__unnamedblk3__DOT__j),32);
        bufp->chgIData(oldp+277,(vlSelfRef.asic_wrapper__DOT__unnamedblk4__DOT__j),32);
        bufp->chgCData(oldp+278,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                 [0U]),8);
        bufp->chgCData(oldp+279,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+280,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+281,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+282,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+283,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+284,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+285,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+286,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+287,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[0]),32);
        bufp->chgIData(oldp+288,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[1]),32);
        bufp->chgIData(oldp+289,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[2]),32);
        bufp->chgIData(oldp+290,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[3]),32);
        bufp->chgIData(oldp+291,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[4]),32);
        bufp->chgIData(oldp+292,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[5]),32);
        bufp->chgIData(oldp+293,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[6]),32);
        bufp->chgIData(oldp+294,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias[7]),32);
        bufp->chgIData(oldp+295,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+296,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+297,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+298,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+299,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+300,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+301,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+302,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+303,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [3U])));
        bufp->chgIData(oldp+304,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgIData(oldp+305,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgIData(oldp+306,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgIData(oldp+307,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgIData(oldp+308,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgIData(oldp+309,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgIData(oldp+310,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgIData(oldp+311,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgIData(oldp+312,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgIData(oldp+313,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgIData(oldp+314,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgIData(oldp+315,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgIData(oldp+316,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgIData(oldp+317,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgIData(oldp+318,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgIData(oldp+319,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgIData(oldp+320,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgIData(oldp+321,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgIData(oldp+322,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgIData(oldp+323,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgIData(oldp+324,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgIData(oldp+325,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgIData(oldp+326,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgIData(oldp+327,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgIData(oldp+328,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][0U]),32);
        bufp->chgIData(oldp+329,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][1U]),32);
        bufp->chgIData(oldp+330,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][2U]),32);
        bufp->chgIData(oldp+331,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][3U]),32);
        bufp->chgIData(oldp+332,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][4U]),32);
        bufp->chgIData(oldp+333,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][5U]),32);
        bufp->chgIData(oldp+334,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][6U]),32);
        bufp->chgIData(oldp+335,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][7U]),32);
        bufp->chgCData(oldp+336,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+337,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+338,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+339,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+340,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight
                                 [0U]),8);
        bufp->chgIData(oldp+341,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias
                                 [0U]),32);
        bufp->chgIData(oldp+342,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+343,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+344,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+345,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+346,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight
                                 [2U]),8);
        bufp->chgIData(oldp+347,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgBit(oldp+348,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 2U))));
        bufp->chgIData(oldp+349,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+350,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+351,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+352,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight
                                 [3U]),8);
        bufp->chgIData(oldp+353,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgBit(oldp+354,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 3U))));
        bufp->chgIData(oldp+355,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+356,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+357,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+358,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight
                                 [4U]),8);
        bufp->chgIData(oldp+359,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgBit(oldp+360,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 4U))));
        bufp->chgIData(oldp+361,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+362,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+363,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+364,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight
                                 [5U]),8);
        bufp->chgIData(oldp+365,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgBit(oldp+366,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 5U))));
        bufp->chgIData(oldp+367,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+368,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+369,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+370,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight
                                 [6U]),8);
        bufp->chgIData(oldp+371,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgBit(oldp+372,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 6U))));
        bufp->chgIData(oldp+373,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+374,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+375,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+376,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight
                                 [7U]),8);
        bufp->chgIData(oldp+377,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgBit(oldp+378,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 7U))));
        bufp->chgIData(oldp+379,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+380,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+381,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+382,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgBit(oldp+383,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [1U])));
        bufp->chgIData(oldp+384,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+385,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+386,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.weight
                                 [1U]),8);
        bufp->chgIData(oldp+387,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgBit(oldp+388,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 1U))));
        bufp->chgIData(oldp+389,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+390,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+391,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+392,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgBit(oldp+393,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 2U))));
        bufp->chgIData(oldp+394,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+395,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+396,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgBit(oldp+397,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 3U))));
        bufp->chgIData(oldp+398,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+399,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+400,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias
                                 [1U]),32);
        bufp->chgIData(oldp+401,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+402,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+403,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgBit(oldp+404,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 4U))));
        bufp->chgIData(oldp+405,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+406,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+407,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgBit(oldp+408,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 5U))));
        bufp->chgIData(oldp+409,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+410,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+411,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgBit(oldp+412,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 6U))));
        bufp->chgIData(oldp+413,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+414,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+415,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgBit(oldp+416,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 7U))));
        bufp->chgIData(oldp+417,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+418,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+419,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgBit(oldp+420,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [2U])));
        bufp->chgIData(oldp+421,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+422,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+423,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgBit(oldp+424,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 1U))));
        bufp->chgIData(oldp+425,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+426,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+427,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgBit(oldp+428,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 2U))));
        bufp->chgIData(oldp+429,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+430,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+431,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgBit(oldp+432,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 3U))));
        bufp->chgIData(oldp+433,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+434,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+435,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgBit(oldp+436,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 4U))));
        bufp->chgIData(oldp+437,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+438,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+439,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgBit(oldp+440,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 5U))));
        bufp->chgIData(oldp+441,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+442,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+443,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias
                                 [2U]),32);
        bufp->chgIData(oldp+444,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+445,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+446,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgBit(oldp+447,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 6U))));
        bufp->chgIData(oldp+448,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+449,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+450,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgBit(oldp+451,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 7U))));
        bufp->chgIData(oldp+452,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+453,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+454,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias
                                 [3U]),32);
        bufp->chgIData(oldp+455,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+456,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+457,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias
                                 [4U]),32);
        bufp->chgIData(oldp+458,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+459,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+460,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias
                                 [5U]),32);
        bufp->chgIData(oldp+461,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+462,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+463,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias
                                 [6U]),32);
        bufp->chgIData(oldp+464,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+465,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+466,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.bias
                                 [7U]),32);
        bufp->chgIData(oldp+467,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+468,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+469,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgBit(oldp+470,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [0U])));
        bufp->chgIData(oldp+471,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+472,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+473,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgBit(oldp+474,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 1U))));
        bufp->chgIData(oldp+475,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+476,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+477,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                 [1U]),8);
        bufp->chgCData(oldp+478,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+479,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+480,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+481,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+482,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+483,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+484,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+485,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+486,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+487,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+488,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+489,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+490,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+491,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+492,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+493,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+494,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [3U])));
        bufp->chgIData(oldp+495,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgIData(oldp+496,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgIData(oldp+497,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgIData(oldp+498,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgIData(oldp+499,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgIData(oldp+500,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgIData(oldp+501,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgIData(oldp+502,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgIData(oldp+503,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgIData(oldp+504,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgIData(oldp+505,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgIData(oldp+506,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgIData(oldp+507,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgIData(oldp+508,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgIData(oldp+509,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgIData(oldp+510,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgIData(oldp+511,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgIData(oldp+512,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgIData(oldp+513,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgIData(oldp+514,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgIData(oldp+515,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgIData(oldp+516,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgIData(oldp+517,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgIData(oldp+518,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgIData(oldp+519,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][0U]),32);
        bufp->chgIData(oldp+520,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][1U]),32);
        bufp->chgIData(oldp+521,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][2U]),32);
        bufp->chgIData(oldp+522,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][3U]),32);
        bufp->chgIData(oldp+523,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][4U]),32);
        bufp->chgIData(oldp+524,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][5U]),32);
        bufp->chgIData(oldp+525,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][6U]),32);
        bufp->chgIData(oldp+526,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][7U]),32);
        bufp->chgCData(oldp+527,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+528,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+529,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+530,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+531,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight
                                 [0U]),8);
        bufp->chgIData(oldp+532,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+533,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+534,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+535,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+536,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight
                                 [2U]),8);
        bufp->chgIData(oldp+537,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgBit(oldp+538,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 2U))));
        bufp->chgIData(oldp+539,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+540,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+541,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+542,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight
                                 [3U]),8);
        bufp->chgIData(oldp+543,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgBit(oldp+544,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 3U))));
        bufp->chgIData(oldp+545,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+546,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+547,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+548,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight
                                 [4U]),8);
        bufp->chgIData(oldp+549,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgBit(oldp+550,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 4U))));
        bufp->chgIData(oldp+551,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+552,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+553,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+554,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight
                                 [5U]),8);
        bufp->chgIData(oldp+555,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgBit(oldp+556,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 5U))));
        bufp->chgIData(oldp+557,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+558,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+559,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+560,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight
                                 [6U]),8);
        bufp->chgIData(oldp+561,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgBit(oldp+562,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 6U))));
        bufp->chgIData(oldp+563,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+564,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+565,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+566,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight
                                 [7U]),8);
        bufp->chgIData(oldp+567,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgBit(oldp+568,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 7U))));
        bufp->chgIData(oldp+569,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+570,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+571,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+572,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgBit(oldp+573,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [1U])));
        bufp->chgIData(oldp+574,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+575,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+576,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.weight
                                 [1U]),8);
        bufp->chgIData(oldp+577,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgBit(oldp+578,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 1U))));
        bufp->chgIData(oldp+579,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+580,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+581,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+582,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgBit(oldp+583,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 2U))));
        bufp->chgIData(oldp+584,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+585,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+586,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgBit(oldp+587,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 3U))));
        bufp->chgIData(oldp+588,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+589,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+590,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+591,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+592,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgBit(oldp+593,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 4U))));
        bufp->chgIData(oldp+594,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+595,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+596,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgBit(oldp+597,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 5U))));
        bufp->chgIData(oldp+598,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+599,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+600,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgBit(oldp+601,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 6U))));
        bufp->chgIData(oldp+602,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+603,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+604,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgBit(oldp+605,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 7U))));
        bufp->chgIData(oldp+606,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+607,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+608,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgBit(oldp+609,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [2U])));
        bufp->chgIData(oldp+610,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+611,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+612,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgBit(oldp+613,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 1U))));
        bufp->chgIData(oldp+614,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+615,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+616,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgBit(oldp+617,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 2U))));
        bufp->chgIData(oldp+618,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+619,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+620,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgBit(oldp+621,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 3U))));
        bufp->chgIData(oldp+622,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+623,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+624,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgBit(oldp+625,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 4U))));
        bufp->chgIData(oldp+626,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+627,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+628,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgBit(oldp+629,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 5U))));
        bufp->chgIData(oldp+630,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+631,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+632,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+633,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+634,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgBit(oldp+635,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 6U))));
        bufp->chgIData(oldp+636,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+637,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+638,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgBit(oldp+639,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 7U))));
        bufp->chgIData(oldp+640,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+641,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+642,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+643,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+644,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+645,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+646,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+647,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+648,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+649,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+650,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+651,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+652,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgBit(oldp+653,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [0U])));
        bufp->chgIData(oldp+654,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+655,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+656,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgBit(oldp+657,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 1U))));
        bufp->chgIData(oldp+658,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+659,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+660,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                 [2U]),8);
        bufp->chgCData(oldp+661,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+662,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+663,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+664,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+665,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+666,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+667,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+668,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+669,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+670,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+671,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+672,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+673,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+674,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+675,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+676,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+677,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [3U])));
        bufp->chgIData(oldp+678,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgIData(oldp+679,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgIData(oldp+680,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgIData(oldp+681,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgIData(oldp+682,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgIData(oldp+683,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgIData(oldp+684,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgIData(oldp+685,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgIData(oldp+686,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgIData(oldp+687,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgIData(oldp+688,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgIData(oldp+689,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgIData(oldp+690,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgIData(oldp+691,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgIData(oldp+692,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgIData(oldp+693,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgIData(oldp+694,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgIData(oldp+695,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgIData(oldp+696,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgIData(oldp+697,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgIData(oldp+698,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgIData(oldp+699,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgIData(oldp+700,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgIData(oldp+701,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgIData(oldp+702,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][0U]),32);
        bufp->chgIData(oldp+703,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][1U]),32);
        bufp->chgIData(oldp+704,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][2U]),32);
        bufp->chgIData(oldp+705,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][3U]),32);
        bufp->chgIData(oldp+706,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][4U]),32);
        bufp->chgIData(oldp+707,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][5U]),32);
        bufp->chgIData(oldp+708,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][6U]),32);
        bufp->chgIData(oldp+709,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][7U]),32);
        bufp->chgCData(oldp+710,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+711,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+712,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+713,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+714,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight
                                 [0U]),8);
        bufp->chgIData(oldp+715,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+716,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+717,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+718,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+719,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight
                                 [2U]),8);
        bufp->chgIData(oldp+720,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgBit(oldp+721,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 2U))));
        bufp->chgIData(oldp+722,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+723,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+724,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+725,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight
                                 [3U]),8);
        bufp->chgIData(oldp+726,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgBit(oldp+727,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 3U))));
        bufp->chgIData(oldp+728,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+729,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+730,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+731,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight
                                 [4U]),8);
        bufp->chgIData(oldp+732,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgBit(oldp+733,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 4U))));
        bufp->chgIData(oldp+734,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+735,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+736,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+737,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight
                                 [5U]),8);
        bufp->chgIData(oldp+738,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgBit(oldp+739,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 5U))));
        bufp->chgIData(oldp+740,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+741,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+742,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+743,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight
                                 [6U]),8);
        bufp->chgIData(oldp+744,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgBit(oldp+745,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 6U))));
        bufp->chgIData(oldp+746,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+747,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+748,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+749,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight
                                 [7U]),8);
        bufp->chgIData(oldp+750,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgBit(oldp+751,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 7U))));
        bufp->chgIData(oldp+752,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+753,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+754,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+755,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgBit(oldp+756,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [1U])));
        bufp->chgIData(oldp+757,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+758,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+759,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.weight
                                 [1U]),8);
        bufp->chgIData(oldp+760,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgBit(oldp+761,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 1U))));
        bufp->chgIData(oldp+762,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+763,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+764,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+765,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgBit(oldp+766,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 2U))));
        bufp->chgIData(oldp+767,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+768,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+769,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgBit(oldp+770,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 3U))));
        bufp->chgIData(oldp+771,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+772,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+773,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+774,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+775,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgBit(oldp+776,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 4U))));
        bufp->chgIData(oldp+777,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+778,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+779,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgBit(oldp+780,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 5U))));
        bufp->chgIData(oldp+781,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+782,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+783,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgBit(oldp+784,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 6U))));
        bufp->chgIData(oldp+785,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+786,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+787,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgBit(oldp+788,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 7U))));
        bufp->chgIData(oldp+789,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+790,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+791,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgBit(oldp+792,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [2U])));
        bufp->chgIData(oldp+793,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+794,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+795,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgBit(oldp+796,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 1U))));
        bufp->chgIData(oldp+797,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+798,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+799,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgBit(oldp+800,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 2U))));
        bufp->chgIData(oldp+801,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+802,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+803,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgBit(oldp+804,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 3U))));
        bufp->chgIData(oldp+805,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+806,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+807,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgBit(oldp+808,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 4U))));
        bufp->chgIData(oldp+809,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+810,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+811,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgBit(oldp+812,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 5U))));
        bufp->chgIData(oldp+813,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+814,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+815,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+816,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+817,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgBit(oldp+818,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 6U))));
        bufp->chgIData(oldp+819,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+820,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+821,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgBit(oldp+822,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 7U))));
        bufp->chgIData(oldp+823,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+824,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+825,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+826,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+827,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+828,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+829,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+830,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+831,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+832,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+833,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+834,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+835,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgBit(oldp+836,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [0U])));
        bufp->chgIData(oldp+837,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+838,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+839,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgBit(oldp+840,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 1U))));
        bufp->chgIData(oldp+841,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+842,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+843,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                 [3U]),8);
        bufp->chgCData(oldp+844,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+845,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+846,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+847,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+848,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+849,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+850,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+851,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+852,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+853,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+854,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+855,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+856,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+857,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+858,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+859,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+860,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [3U])));
        bufp->chgIData(oldp+861,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][0U]),32);
        bufp->chgIData(oldp+862,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][1U]),32);
        bufp->chgIData(oldp+863,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgIData(oldp+864,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgIData(oldp+865,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgIData(oldp+866,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgIData(oldp+867,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgIData(oldp+868,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgIData(oldp+869,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgIData(oldp+870,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgIData(oldp+871,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgIData(oldp+872,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgIData(oldp+873,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgIData(oldp+874,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgIData(oldp+875,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgIData(oldp+876,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgIData(oldp+877,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgIData(oldp+878,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgIData(oldp+879,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgIData(oldp+880,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgIData(oldp+881,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgIData(oldp+882,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgIData(oldp+883,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][6U]),32);
        bufp->chgIData(oldp+884,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][7U]),32);
        bufp->chgIData(oldp+885,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][0U]),32);
        bufp->chgIData(oldp+886,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][1U]),32);
        bufp->chgIData(oldp+887,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][2U]),32);
        bufp->chgIData(oldp+888,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][3U]),32);
        bufp->chgIData(oldp+889,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][4U]),32);
        bufp->chgIData(oldp+890,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][5U]),32);
        bufp->chgIData(oldp+891,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][6U]),32);
        bufp->chgIData(oldp+892,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [3U][7U]),32);
        bufp->chgCData(oldp+893,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+894,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+895,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+896,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+897,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight
                                 [0U]),8);
        bufp->chgIData(oldp+898,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+899,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+900,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+901,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+902,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight
                                 [2U]),8);
        bufp->chgIData(oldp+903,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][2U]),32);
        bufp->chgBit(oldp+904,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 2U))));
        bufp->chgIData(oldp+905,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+906,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+907,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+908,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight
                                 [3U]),8);
        bufp->chgIData(oldp+909,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][3U]),32);
        bufp->chgBit(oldp+910,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 3U))));
        bufp->chgIData(oldp+911,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+912,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+913,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+914,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight
                                 [4U]),8);
        bufp->chgIData(oldp+915,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][4U]),32);
        bufp->chgBit(oldp+916,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 4U))));
        bufp->chgIData(oldp+917,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+918,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+919,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+920,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight
                                 [5U]),8);
        bufp->chgIData(oldp+921,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][5U]),32);
        bufp->chgBit(oldp+922,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 5U))));
        bufp->chgIData(oldp+923,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+924,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+925,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+926,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight
                                 [6U]),8);
        bufp->chgIData(oldp+927,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][6U]),32);
        bufp->chgBit(oldp+928,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 6U))));
        bufp->chgIData(oldp+929,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+930,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+931,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+932,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight
                                 [7U]),8);
        bufp->chgIData(oldp+933,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [0U][7U]),32);
        bufp->chgBit(oldp+934,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [0U] >> 7U))));
        bufp->chgIData(oldp+935,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+936,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+937,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+938,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][0U]),32);
        bufp->chgBit(oldp+939,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [1U])));
        bufp->chgIData(oldp+940,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+941,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+942,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.weight
                                 [1U]),8);
        bufp->chgIData(oldp+943,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][1U]),32);
        bufp->chgBit(oldp+944,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 1U))));
        bufp->chgIData(oldp+945,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+946,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+947,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+948,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][2U]),32);
        bufp->chgBit(oldp+949,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 2U))));
        bufp->chgIData(oldp+950,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+951,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+952,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][3U]),32);
        bufp->chgBit(oldp+953,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 3U))));
        bufp->chgIData(oldp+954,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+955,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+956,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+957,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+958,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][4U]),32);
        bufp->chgBit(oldp+959,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 4U))));
        bufp->chgIData(oldp+960,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+961,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+962,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][5U]),32);
        bufp->chgBit(oldp+963,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 5U))));
        bufp->chgIData(oldp+964,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+965,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+966,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][6U]),32);
        bufp->chgBit(oldp+967,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 6U))));
        bufp->chgIData(oldp+968,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+969,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+970,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [1U][7U]),32);
        bufp->chgBit(oldp+971,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [1U] >> 7U))));
        bufp->chgIData(oldp+972,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+973,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+974,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][0U]),32);
        bufp->chgBit(oldp+975,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                [2U])));
        bufp->chgIData(oldp+976,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+977,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+978,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][1U]),32);
        bufp->chgBit(oldp+979,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 1U))));
        bufp->chgIData(oldp+980,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+981,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+982,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][2U]),32);
        bufp->chgBit(oldp+983,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 2U))));
        bufp->chgIData(oldp+984,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+985,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+986,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][3U]),32);
        bufp->chgBit(oldp+987,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 3U))));
        bufp->chgIData(oldp+988,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+989,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+990,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][4U]),32);
        bufp->chgBit(oldp+991,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 4U))));
        bufp->chgIData(oldp+992,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+993,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+994,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                 [2U][5U]),32);
        bufp->chgBit(oldp+995,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                      [2U] >> 5U))));
        bufp->chgIData(oldp+996,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+997,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+998,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+999,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1000,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgBit(oldp+1001,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 6U))));
        bufp->chgIData(oldp+1002,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1003,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1004,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgBit(oldp+1005,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 7U))));
        bufp->chgIData(oldp+1006,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1007,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1008,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1009,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1010,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1011,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1012,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1013,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1014,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1015,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1016,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1017,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1018,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgBit(oldp+1019,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [0U])));
        bufp->chgIData(oldp+1020,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1021,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1022,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgBit(oldp+1023,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 1U))));
        bufp->chgIData(oldp+1024,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1025,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+1026,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                  [4U]),8);
        bufp->chgCData(oldp+1027,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+1028,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+1029,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+1030,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+1031,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+1032,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+1033,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+1034,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+1035,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+1036,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+1037,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+1038,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+1039,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+1040,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+1041,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+1042,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+1043,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [3U])));
        bufp->chgIData(oldp+1044,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgIData(oldp+1045,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgIData(oldp+1046,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgIData(oldp+1047,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgIData(oldp+1048,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgIData(oldp+1049,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgIData(oldp+1050,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgIData(oldp+1051,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgIData(oldp+1052,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgIData(oldp+1053,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgIData(oldp+1054,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgIData(oldp+1055,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgIData(oldp+1056,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgIData(oldp+1057,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgIData(oldp+1058,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgIData(oldp+1059,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgIData(oldp+1060,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgIData(oldp+1061,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgIData(oldp+1062,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgIData(oldp+1063,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgIData(oldp+1064,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgIData(oldp+1065,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgIData(oldp+1066,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgIData(oldp+1067,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgIData(oldp+1068,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][0U]),32);
        bufp->chgIData(oldp+1069,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][1U]),32);
        bufp->chgIData(oldp+1070,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][2U]),32);
        bufp->chgIData(oldp+1071,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][3U]),32);
        bufp->chgIData(oldp+1072,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][4U]),32);
        bufp->chgIData(oldp+1073,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][5U]),32);
        bufp->chgIData(oldp+1074,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][6U]),32);
        bufp->chgIData(oldp+1075,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][7U]),32);
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+1078,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+1080,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight
                                  [0U]),8);
        bufp->chgIData(oldp+1081,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1082,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1083,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+1084,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1085,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight
                                  [2U]),8);
        bufp->chgIData(oldp+1086,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgBit(oldp+1087,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 2U))));
        bufp->chgIData(oldp+1088,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1089,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1090,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1091,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight
                                  [3U]),8);
        bufp->chgIData(oldp+1092,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgBit(oldp+1093,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 3U))));
        bufp->chgIData(oldp+1094,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1095,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1096,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1097,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight
                                  [4U]),8);
        bufp->chgIData(oldp+1098,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgBit(oldp+1099,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 4U))));
        bufp->chgIData(oldp+1100,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1101,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1102,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1103,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight
                                  [5U]),8);
        bufp->chgIData(oldp+1104,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgBit(oldp+1105,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 5U))));
        bufp->chgIData(oldp+1106,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1107,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1108,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1109,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight
                                  [6U]),8);
        bufp->chgIData(oldp+1110,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgBit(oldp+1111,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 6U))));
        bufp->chgIData(oldp+1112,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1113,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1114,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1115,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight
                                  [7U]),8);
        bufp->chgIData(oldp+1116,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgBit(oldp+1117,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 7U))));
        bufp->chgIData(oldp+1118,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1119,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1120,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1121,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgBit(oldp+1122,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [1U])));
        bufp->chgIData(oldp+1123,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1124,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+1125,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.weight
                                  [1U]),8);
        bufp->chgIData(oldp+1126,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgBit(oldp+1127,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 1U))));
        bufp->chgIData(oldp+1128,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1129,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1130,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1131,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgBit(oldp+1132,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 2U))));
        bufp->chgIData(oldp+1133,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1134,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1135,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgBit(oldp+1136,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 3U))));
        bufp->chgIData(oldp+1137,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1138,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1139,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1140,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1141,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgBit(oldp+1142,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 4U))));
        bufp->chgIData(oldp+1143,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1144,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1145,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgBit(oldp+1146,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 5U))));
        bufp->chgIData(oldp+1147,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1148,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1149,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgBit(oldp+1150,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 6U))));
        bufp->chgIData(oldp+1151,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1152,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1153,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgBit(oldp+1154,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 7U))));
        bufp->chgIData(oldp+1155,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1156,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1157,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgBit(oldp+1158,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [2U])));
        bufp->chgIData(oldp+1159,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1160,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1161,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgBit(oldp+1162,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 1U))));
        bufp->chgIData(oldp+1163,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1164,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1165,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgBit(oldp+1166,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 2U))));
        bufp->chgIData(oldp+1167,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1168,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1169,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgBit(oldp+1170,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 3U))));
        bufp->chgIData(oldp+1171,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1172,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1173,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgBit(oldp+1174,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 4U))));
        bufp->chgIData(oldp+1175,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1176,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1177,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgBit(oldp+1178,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 5U))));
        bufp->chgIData(oldp+1179,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1180,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1181,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1182,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1183,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgBit(oldp+1184,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 6U))));
        bufp->chgIData(oldp+1185,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1186,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1187,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgBit(oldp+1188,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 7U))));
        bufp->chgIData(oldp+1189,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1190,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1191,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1192,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1193,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1194,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1195,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1196,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1197,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1198,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1199,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1200,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1201,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgBit(oldp+1202,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [0U])));
        bufp->chgIData(oldp+1203,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1204,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1205,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgBit(oldp+1206,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 1U))));
        bufp->chgIData(oldp+1207,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1208,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+1209,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                  [5U]),8);
        bufp->chgCData(oldp+1210,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+1211,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+1213,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+1214,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+1215,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+1216,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+1217,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+1218,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+1219,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+1220,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+1221,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+1222,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+1223,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+1224,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+1225,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+1226,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [3U])));
        bufp->chgIData(oldp+1227,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgIData(oldp+1228,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgIData(oldp+1229,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgIData(oldp+1230,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgIData(oldp+1231,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgIData(oldp+1232,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgIData(oldp+1233,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgIData(oldp+1234,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgIData(oldp+1235,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgIData(oldp+1236,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgIData(oldp+1237,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgIData(oldp+1238,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgIData(oldp+1239,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgIData(oldp+1240,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgIData(oldp+1241,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgIData(oldp+1242,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgIData(oldp+1243,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgIData(oldp+1244,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgIData(oldp+1245,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgIData(oldp+1246,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgIData(oldp+1247,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgIData(oldp+1248,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgIData(oldp+1249,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgIData(oldp+1250,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgIData(oldp+1251,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][0U]),32);
        bufp->chgIData(oldp+1252,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][1U]),32);
        bufp->chgIData(oldp+1253,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][2U]),32);
        bufp->chgIData(oldp+1254,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][3U]),32);
        bufp->chgIData(oldp+1255,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][4U]),32);
        bufp->chgIData(oldp+1256,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][5U]),32);
        bufp->chgIData(oldp+1257,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][6U]),32);
        bufp->chgIData(oldp+1258,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][7U]),32);
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+1260,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+1261,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+1262,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+1263,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight
                                  [0U]),8);
        bufp->chgIData(oldp+1264,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1265,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1266,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+1267,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1268,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight
                                  [2U]),8);
        bufp->chgIData(oldp+1269,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgBit(oldp+1270,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 2U))));
        bufp->chgIData(oldp+1271,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1272,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1273,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1274,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight
                                  [3U]),8);
        bufp->chgIData(oldp+1275,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgBit(oldp+1276,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 3U))));
        bufp->chgIData(oldp+1277,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1278,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1279,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1280,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight
                                  [4U]),8);
        bufp->chgIData(oldp+1281,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgBit(oldp+1282,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 4U))));
        bufp->chgIData(oldp+1283,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1284,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1285,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1286,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight
                                  [5U]),8);
        bufp->chgIData(oldp+1287,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgBit(oldp+1288,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 5U))));
        bufp->chgIData(oldp+1289,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1291,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1292,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight
                                  [6U]),8);
        bufp->chgIData(oldp+1293,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgBit(oldp+1294,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 6U))));
        bufp->chgIData(oldp+1295,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1296,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1297,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1298,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight
                                  [7U]),8);
        bufp->chgIData(oldp+1299,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgBit(oldp+1300,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 7U))));
        bufp->chgIData(oldp+1301,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1302,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1303,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1304,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgBit(oldp+1305,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [1U])));
        bufp->chgIData(oldp+1306,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1307,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+1308,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.weight
                                  [1U]),8);
        bufp->chgIData(oldp+1309,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgBit(oldp+1310,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 1U))));
        bufp->chgIData(oldp+1311,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1312,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1313,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1314,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgBit(oldp+1315,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 2U))));
        bufp->chgIData(oldp+1316,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1317,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1318,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgBit(oldp+1319,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 3U))));
        bufp->chgIData(oldp+1320,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1321,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1322,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1323,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1324,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgBit(oldp+1325,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 4U))));
        bufp->chgIData(oldp+1326,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1327,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1328,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgBit(oldp+1329,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 5U))));
        bufp->chgIData(oldp+1330,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1332,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgBit(oldp+1333,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 6U))));
        bufp->chgIData(oldp+1334,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1335,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1336,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgBit(oldp+1337,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 7U))));
        bufp->chgIData(oldp+1338,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1339,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1340,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgBit(oldp+1341,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [2U])));
        bufp->chgIData(oldp+1342,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1343,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1344,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgBit(oldp+1345,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 1U))));
        bufp->chgIData(oldp+1346,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1347,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1348,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgBit(oldp+1349,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 2U))));
        bufp->chgIData(oldp+1350,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1351,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1352,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgBit(oldp+1353,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 3U))));
        bufp->chgIData(oldp+1354,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1355,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1356,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgBit(oldp+1357,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 4U))));
        bufp->chgIData(oldp+1358,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1359,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1360,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgBit(oldp+1361,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 5U))));
        bufp->chgIData(oldp+1362,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1363,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1364,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1365,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1366,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgBit(oldp+1367,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 6U))));
        bufp->chgIData(oldp+1368,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1369,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1370,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgBit(oldp+1371,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 7U))));
        bufp->chgIData(oldp+1372,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1373,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1374,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1375,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1376,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1377,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1378,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1379,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1380,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1381,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1382,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1383,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1384,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgBit(oldp+1385,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [0U])));
        bufp->chgIData(oldp+1386,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1387,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1388,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgBit(oldp+1389,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 1U))));
        bufp->chgIData(oldp+1390,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1391,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+1392,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                  [6U]),8);
        bufp->chgCData(oldp+1393,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+1394,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+1395,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+1396,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+1397,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+1398,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+1399,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+1400,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+1401,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+1402,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+1403,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+1404,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+1405,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+1406,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+1407,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+1408,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+1409,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [3U])));
        bufp->chgIData(oldp+1410,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgIData(oldp+1411,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgIData(oldp+1412,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgIData(oldp+1413,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgIData(oldp+1414,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgIData(oldp+1415,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgIData(oldp+1416,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgIData(oldp+1417,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgIData(oldp+1418,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgIData(oldp+1419,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgIData(oldp+1420,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgIData(oldp+1421,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgIData(oldp+1422,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgIData(oldp+1423,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgIData(oldp+1424,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgIData(oldp+1425,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgIData(oldp+1426,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgIData(oldp+1427,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgIData(oldp+1428,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgIData(oldp+1429,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgIData(oldp+1430,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgIData(oldp+1431,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgIData(oldp+1432,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgIData(oldp+1433,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgIData(oldp+1434,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][0U]),32);
        bufp->chgIData(oldp+1435,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][1U]),32);
        bufp->chgIData(oldp+1436,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][2U]),32);
        bufp->chgIData(oldp+1437,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][3U]),32);
        bufp->chgIData(oldp+1438,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][4U]),32);
        bufp->chgIData(oldp+1439,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][5U]),32);
        bufp->chgIData(oldp+1440,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][6U]),32);
        bufp->chgIData(oldp+1441,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][7U]),32);
        bufp->chgCData(oldp+1442,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+1443,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+1444,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+1445,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+1446,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight
                                  [0U]),8);
        bufp->chgIData(oldp+1447,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1448,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1449,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+1450,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1451,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight
                                  [2U]),8);
        bufp->chgIData(oldp+1452,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgBit(oldp+1453,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 2U))));
        bufp->chgIData(oldp+1454,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1455,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1456,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1457,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight
                                  [3U]),8);
        bufp->chgIData(oldp+1458,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgBit(oldp+1459,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 3U))));
        bufp->chgIData(oldp+1460,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1461,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1462,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1463,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight
                                  [4U]),8);
        bufp->chgIData(oldp+1464,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgBit(oldp+1465,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 4U))));
        bufp->chgIData(oldp+1466,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1467,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1468,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1469,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight
                                  [5U]),8);
        bufp->chgIData(oldp+1470,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgBit(oldp+1471,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 5U))));
        bufp->chgIData(oldp+1472,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1473,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1474,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1475,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight
                                  [6U]),8);
        bufp->chgIData(oldp+1476,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgBit(oldp+1477,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 6U))));
        bufp->chgIData(oldp+1478,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1479,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1480,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1481,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight
                                  [7U]),8);
        bufp->chgIData(oldp+1482,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgBit(oldp+1483,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 7U))));
        bufp->chgIData(oldp+1484,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1485,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1486,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1487,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgBit(oldp+1488,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [1U])));
        bufp->chgIData(oldp+1489,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1490,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+1491,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.weight
                                  [1U]),8);
        bufp->chgIData(oldp+1492,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgBit(oldp+1493,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 1U))));
        bufp->chgIData(oldp+1494,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1495,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1496,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1497,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgBit(oldp+1498,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 2U))));
        bufp->chgIData(oldp+1499,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1500,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1501,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgBit(oldp+1502,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 3U))));
        bufp->chgIData(oldp+1503,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1504,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1505,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1506,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1507,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgBit(oldp+1508,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 4U))));
        bufp->chgIData(oldp+1509,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1510,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1511,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgBit(oldp+1512,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 5U))));
        bufp->chgIData(oldp+1513,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1514,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1515,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgBit(oldp+1516,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 6U))));
        bufp->chgIData(oldp+1517,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1518,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1519,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgBit(oldp+1520,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 7U))));
        bufp->chgIData(oldp+1521,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1522,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1523,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgBit(oldp+1524,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [2U])));
        bufp->chgIData(oldp+1525,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1526,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1527,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgBit(oldp+1528,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 1U))));
        bufp->chgIData(oldp+1529,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1530,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1531,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgBit(oldp+1532,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 2U))));
        bufp->chgIData(oldp+1533,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1534,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1535,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgBit(oldp+1536,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 3U))));
        bufp->chgIData(oldp+1537,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1538,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1539,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgBit(oldp+1540,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 4U))));
        bufp->chgIData(oldp+1541,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1542,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1543,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgBit(oldp+1544,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 5U))));
        bufp->chgIData(oldp+1545,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1546,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1547,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1548,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1549,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgBit(oldp+1550,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 6U))));
        bufp->chgIData(oldp+1551,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1552,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1553,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgBit(oldp+1554,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 7U))));
        bufp->chgIData(oldp+1555,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1556,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1557,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1558,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1559,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1560,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1561,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1562,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1563,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1564,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1565,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1566,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1567,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgBit(oldp+1568,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [0U])));
        bufp->chgIData(oldp+1569,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1570,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1571,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgBit(oldp+1572,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 1U))));
        bufp->chgIData(oldp+1573,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1574,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+1575,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                                  [7U]),8);
        bufp->chgCData(oldp+1576,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[0]),8);
        bufp->chgCData(oldp+1577,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[1]),8);
        bufp->chgCData(oldp+1578,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[2]),8);
        bufp->chgCData(oldp+1579,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[3]),8);
        bufp->chgCData(oldp+1580,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[4]),8);
        bufp->chgCData(oldp+1581,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[5]),8);
        bufp->chgCData(oldp+1582,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[6]),8);
        bufp->chgCData(oldp+1583,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight[7]),8);
        bufp->chgIData(oldp+1584,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap[0]),32);
        bufp->chgIData(oldp+1585,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap[1]),32);
        bufp->chgIData(oldp+1586,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap[2]),32);
        bufp->chgIData(oldp+1587,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap[3]),32);
        bufp->chgIData(oldp+1588,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap[4]),32);
        bufp->chgIData(oldp+1589,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap[5]),32);
        bufp->chgIData(oldp+1590,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap[6]),32);
        bufp->chgIData(oldp+1591,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.ofmap[7]),32);
        bufp->chgBit(oldp+1592,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [3U])));
        bufp->chgIData(oldp+1593,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgIData(oldp+1594,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgIData(oldp+1595,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgIData(oldp+1596,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgIData(oldp+1597,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgIData(oldp+1598,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgIData(oldp+1599,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgIData(oldp+1600,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgIData(oldp+1601,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgIData(oldp+1602,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgIData(oldp+1603,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgIData(oldp+1604,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgIData(oldp+1605,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgIData(oldp+1606,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgIData(oldp+1607,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgIData(oldp+1608,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgIData(oldp+1609,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgIData(oldp+1610,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgIData(oldp+1611,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgIData(oldp+1612,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgIData(oldp+1613,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgIData(oldp+1614,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgIData(oldp+1615,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgIData(oldp+1616,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgIData(oldp+1617,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][0U]),32);
        bufp->chgIData(oldp+1618,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][1U]),32);
        bufp->chgIData(oldp+1619,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][2U]),32);
        bufp->chgIData(oldp+1620,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][3U]),32);
        bufp->chgIData(oldp+1621,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][4U]),32);
        bufp->chgIData(oldp+1622,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][5U]),32);
        bufp->chgIData(oldp+1623,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][6U]),32);
        bufp->chgIData(oldp+1624,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [3U][7U]),32);
        bufp->chgCData(oldp+1625,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[0]),8);
        bufp->chgCData(oldp+1626,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[1]),8);
        bufp->chgCData(oldp+1627,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[2]),8);
        bufp->chgCData(oldp+1628,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain[3]),8);
        bufp->chgCData(oldp+1629,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight
                                  [0U]),8);
        bufp->chgIData(oldp+1630,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1631,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1632,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__ifmap_adjusted),32);
        bufp->chgIData(oldp+1633,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1634,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight
                                  [2U]),8);
        bufp->chgIData(oldp+1635,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][2U]),32);
        bufp->chgBit(oldp+1636,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 2U))));
        bufp->chgIData(oldp+1637,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1638,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1639,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1640,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight
                                  [3U]),8);
        bufp->chgIData(oldp+1641,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][3U]),32);
        bufp->chgBit(oldp+1642,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 3U))));
        bufp->chgIData(oldp+1643,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1644,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1645,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1646,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight
                                  [4U]),8);
        bufp->chgIData(oldp+1647,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][4U]),32);
        bufp->chgBit(oldp+1648,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 4U))));
        bufp->chgIData(oldp+1649,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1650,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1651,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1652,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight
                                  [5U]),8);
        bufp->chgIData(oldp+1653,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][5U]),32);
        bufp->chgBit(oldp+1654,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 5U))));
        bufp->chgIData(oldp+1655,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1656,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1657,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1658,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight
                                  [6U]),8);
        bufp->chgIData(oldp+1659,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][6U]),32);
        bufp->chgBit(oldp+1660,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 6U))));
        bufp->chgIData(oldp+1661,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1662,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1663,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgCData(oldp+1664,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight
                                  [7U]),8);
        bufp->chgIData(oldp+1665,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][7U]),32);
        bufp->chgBit(oldp+1666,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 7U))));
        bufp->chgIData(oldp+1667,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1668,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1669,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1670,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][0U]),32);
        bufp->chgBit(oldp+1671,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [1U])));
        bufp->chgIData(oldp+1672,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1673,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgCData(oldp+1674,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.weight
                                  [1U]),8);
        bufp->chgIData(oldp+1675,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][1U]),32);
        bufp->chgBit(oldp+1676,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 1U))));
        bufp->chgIData(oldp+1677,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1678,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1679,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__genblk1__DOT__pe__DOT__weight_adjusted),32);
        bufp->chgIData(oldp+1680,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][2U]),32);
        bufp->chgBit(oldp+1681,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 2U))));
        bufp->chgIData(oldp+1682,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1683,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1684,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][3U]),32);
        bufp->chgBit(oldp+1685,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 3U))));
        bufp->chgIData(oldp+1686,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1687,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1688,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1689,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1690,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][4U]),32);
        bufp->chgBit(oldp+1691,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 4U))));
        bufp->chgIData(oldp+1692,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1693,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1694,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][5U]),32);
        bufp->chgBit(oldp+1695,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 5U))));
        bufp->chgIData(oldp+1696,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1697,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1698,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][6U]),32);
        bufp->chgBit(oldp+1699,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 6U))));
        bufp->chgIData(oldp+1700,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1701,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1702,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [1U][7U]),32);
        bufp->chgBit(oldp+1703,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [1U] >> 7U))));
        bufp->chgIData(oldp+1704,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1705,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1706,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][0U]),32);
        bufp->chgBit(oldp+1707,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [2U])));
        bufp->chgIData(oldp+1708,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1709,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1710,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][1U]),32);
        bufp->chgBit(oldp+1711,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 1U))));
        bufp->chgIData(oldp+1712,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1713,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1714,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][2U]),32);
        bufp->chgBit(oldp+1715,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 2U))));
        bufp->chgIData(oldp+1716,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1717,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1718,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][3U]),32);
        bufp->chgBit(oldp+1719,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 3U))));
        bufp->chgIData(oldp+1720,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1721,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1722,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][4U]),32);
        bufp->chgBit(oldp+1723,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 4U))));
        bufp->chgIData(oldp+1724,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1725,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1726,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][5U]),32);
        bufp->chgBit(oldp+1727,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 5U))));
        bufp->chgIData(oldp+1728,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1729,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1730,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1731,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1732,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][6U]),32);
        bufp->chgBit(oldp+1733,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 6U))));
        bufp->chgIData(oldp+1734,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1735,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1736,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [2U][7U]),32);
        bufp->chgBit(oldp+1737,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [2U] >> 7U))));
        bufp->chgIData(oldp+1738,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1739,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1740,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1741,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1742,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1743,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1744,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1745,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1746,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1747,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1748,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1749,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1750,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][0U]),32);
        bufp->chgBit(oldp+1751,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                 [0U])));
        bufp->chgIData(oldp+1752,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1753,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__genblk1__DOT__pe__valid));
        bufp->chgIData(oldp+1754,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__opsum
                                  [0U][1U]),32);
        bufp->chgBit(oldp+1755,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__PVT__valid_chain
                                       [0U] >> 1U))));
        bufp->chgIData(oldp+1756,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__opsum),32);
        bufp->chgBit(oldp+1757,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__genblk1__DOT__pe__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+1758,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[0]),32);
        bufp->chgIData(oldp+1759,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[1]),32);
        bufp->chgIData(oldp+1760,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[2]),32);
        bufp->chgIData(oldp+1761,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[3]),32);
        bufp->chgIData(oldp+1762,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[4]),32);
        bufp->chgIData(oldp+1763,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[5]),32);
        bufp->chgIData(oldp+1764,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[6]),32);
        bufp->chgIData(oldp+1765,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[7]),32);
    }
    bufp->chgBit(oldp+1766,(vlSelfRef.ACLK));
    bufp->chgBit(oldp+1767,(vlSelfRef.ARESETn));
    bufp->chgBit(oldp+1768,(vlSelfRef.ASIC_interrupt));
    bufp->chgCData(oldp+1769,(vlSelfRef.AWID_S),8);
    bufp->chgIData(oldp+1770,(vlSelfRef.AWADDR_S),32);
    bufp->chgCData(oldp+1771,(vlSelfRef.AWLEN_S),4);
    bufp->chgCData(oldp+1772,(vlSelfRef.AWSIZE_S),3);
    bufp->chgCData(oldp+1773,(vlSelfRef.AWBURST_S),2);
    bufp->chgBit(oldp+1774,(vlSelfRef.AWVALID_S));
    bufp->chgBit(oldp+1775,(vlSelfRef.AWREADY_S));
    bufp->chgIData(oldp+1776,(vlSelfRef.WDATA_S),32);
    bufp->chgCData(oldp+1777,(vlSelfRef.WSTRB_S),4);
    bufp->chgBit(oldp+1778,(vlSelfRef.WLAST_S));
    bufp->chgBit(oldp+1779,(vlSelfRef.WVALID_S));
    bufp->chgBit(oldp+1780,(vlSelfRef.WREADY_S));
    bufp->chgCData(oldp+1781,(vlSelfRef.BID_S),8);
    bufp->chgCData(oldp+1782,(vlSelfRef.BRESP_S),2);
    bufp->chgBit(oldp+1783,(vlSelfRef.BVALID_S));
    bufp->chgBit(oldp+1784,(vlSelfRef.BREADY_S));
    bufp->chgCData(oldp+1785,(vlSelfRef.ARID_S),8);
    bufp->chgIData(oldp+1786,(vlSelfRef.ARADDR_S),32);
    bufp->chgCData(oldp+1787,(vlSelfRef.ARLEN_S),4);
    bufp->chgCData(oldp+1788,(vlSelfRef.ARSIZE_S),3);
    bufp->chgCData(oldp+1789,(vlSelfRef.ARBURST_S),2);
    bufp->chgBit(oldp+1790,(vlSelfRef.ARVALID_S));
    bufp->chgBit(oldp+1791,(vlSelfRef.ARREADY_S));
    bufp->chgSData(oldp+1792,(vlSelfRef.output_scale),12);
    bufp->chgCData(oldp+1793,(vlSelfRef.output_cnt),7);
    bufp->chgCData(oldp+1794,(vlSelfRef.current_state),3);
    bufp->chgCData(oldp+1795,(vlSelfRef.n_state),3);
    bufp->chgSData(oldp+1796,(vlSelfRef.dataout),11);
    bufp->chgSData(oldp+1797,(vlSelfRef.dataout2),11);
    bufp->chgIData(oldp+1798,(vlSelfRef.ASIC_DATA_n),32);
    bufp->chgIData(oldp+1799,(vlSelfRef.data_temp[0]),32);
    bufp->chgIData(oldp+1800,(vlSelfRef.data_temp[1]),32);
    bufp->chgIData(oldp+1801,(vlSelfRef.data_temp[2]),32);
    bufp->chgIData(oldp+1802,(vlSelfRef.data_temp[3]),32);
    bufp->chgIData(oldp+1803,(vlSelfRef.data_temp[4]),32);
    bufp->chgIData(oldp+1804,(vlSelfRef.data_temp[5]),32);
    bufp->chgIData(oldp+1805,(vlSelfRef.data_temp[6]),32);
    bufp->chgIData(oldp+1806,(vlSelfRef.data_temp[7]),32);
    bufp->chgIData(oldp+1807,(vlSelfRef.data_temp[8]),32);
    bufp->chgIData(oldp+1808,(vlSelfRef.ifmap[0]),32);
    bufp->chgIData(oldp+1809,(vlSelfRef.ifmap[1]),32);
    bufp->chgIData(oldp+1810,(vlSelfRef.ifmap[2]),32);
    bufp->chgIData(oldp+1811,(vlSelfRef.ifmap[3]),32);
    bufp->chgIData(oldp+1812,(vlSelfRef.ifmap[4]),32);
    bufp->chgIData(oldp+1813,(vlSelfRef.ifmap[5]),32);
    bufp->chgIData(oldp+1814,(vlSelfRef.ifmap[6]),32);
    bufp->chgIData(oldp+1815,(vlSelfRef.ifmap[7]),32);
    bufp->chgIData(oldp+1816,(vlSelfRef.ifmap[8]),32);
    bufp->chgIData(oldp+1817,(vlSelfRef.ifmap[9]),32);
    bufp->chgIData(oldp+1818,(vlSelfRef.ifmap[10]),32);
    bufp->chgIData(oldp+1819,(vlSelfRef.ifmap[11]),32);
    bufp->chgIData(oldp+1820,(vlSelfRef.ifmap[12]),32);
    bufp->chgIData(oldp+1821,(vlSelfRef.ifmap[13]),32);
    bufp->chgIData(oldp+1822,(vlSelfRef.ifmap[14]),32);
    bufp->chgIData(oldp+1823,(vlSelfRef.ifmap[15]),32);
    bufp->chgIData(oldp+1824,(vlSelfRef.weight[0]),32);
    bufp->chgIData(oldp+1825,(vlSelfRef.weight[1]),32);
    bufp->chgIData(oldp+1826,(vlSelfRef.weight[2]),32);
    bufp->chgIData(oldp+1827,(vlSelfRef.weight[3]),32);
    bufp->chgIData(oldp+1828,(vlSelfRef.weight[4]),32);
    bufp->chgIData(oldp+1829,(vlSelfRef.weight[5]),32);
    bufp->chgIData(oldp+1830,(vlSelfRef.weight[6]),32);
    bufp->chgIData(oldp+1831,(vlSelfRef.weight[7]),32);
    bufp->chgIData(oldp+1832,(vlSelfRef.weight[8]),32);
    bufp->chgIData(oldp+1833,(vlSelfRef.weight[9]),32);
    bufp->chgIData(oldp+1834,(vlSelfRef.weight[10]),32);
    bufp->chgIData(oldp+1835,(vlSelfRef.weight[11]),32);
    bufp->chgIData(oldp+1836,(vlSelfRef.weight[12]),32);
    bufp->chgIData(oldp+1837,(vlSelfRef.weight[13]),32);
    bufp->chgIData(oldp+1838,(vlSelfRef.weight[14]),32);
    bufp->chgIData(oldp+1839,(vlSelfRef.weight[15]),32);
    bufp->chgIData(oldp+1840,(vlSelfRef.bias),32);
    bufp->chgCData(oldp+1841,(vlSelfRef.RID_S),8);
    bufp->chgIData(oldp+1842,(vlSelfRef.RDATA_S),32);
    bufp->chgCData(oldp+1843,(vlSelfRef.RRESP_S),2);
    bufp->chgBit(oldp+1844,(vlSelfRef.RLAST_S));
    bufp->chgBit(oldp+1845,(vlSelfRef.RVALID_S));
    bufp->chgBit(oldp+1846,(vlSelfRef.RREADY_S));
    bufp->chgBit(oldp+1847,((1U & (~ (IData)(vlSelfRef.ARESETn)))));
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
