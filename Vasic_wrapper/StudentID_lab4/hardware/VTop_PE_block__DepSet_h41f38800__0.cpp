// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_PE_block.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__0(VTop_PE_block* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[0U]));
    vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[1U]));
    vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[2U]));
    vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
    } else {
        if (vlSymsp->TOP.Top__DOT__i_en_array) {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[0U]);
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[1U]);
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[2U]);
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[3U]);
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[4U]);
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[5U]);
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[6U]);
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[7U]);
        } else {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        }
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [7U]) : 0U);
    }
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [0U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[0U]);
    vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [0U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[1U]);
    vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [0U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[2U]);
    vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [0U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[3U]);
    vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [0U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[4U]);
    vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [0U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[5U]);
    vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [0U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[6U]);
    vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [0U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[7U]);
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [0U] >> 7U)))) << 8U) 
           | vlSymsp->TOP.Top__DOT__ifmap_wire[0U]);
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__opsum[0U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.ofmap[0U] = vlSelfRef.__PVT__opsum[3U]
        [0U];
    vlSelfRef.ofmap[1U] = vlSelfRef.__PVT__opsum[3U]
        [1U];
    vlSelfRef.ofmap[2U] = vlSelfRef.__PVT__opsum[3U]
        [2U];
    vlSelfRef.ofmap[3U] = vlSelfRef.__PVT__opsum[3U]
        [3U];
    vlSelfRef.ofmap[4U] = vlSelfRef.__PVT__opsum[3U]
        [4U];
    vlSelfRef.ofmap[5U] = vlSelfRef.__PVT__opsum[3U]
        [5U];
    vlSelfRef.ofmap[6U] = vlSelfRef.__PVT__opsum[3U]
        [6U];
    vlSelfRef.ofmap[7U] = vlSelfRef.__PVT__opsum[3U]
        [7U];
}

VL_INLINE_OPT void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[0U]));
    vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[1U]));
    vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[2U]));
    vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
    } else {
        if (vlSymsp->TOP.Top__DOT__i_en_array) {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[0U]);
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[1U]);
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[2U]);
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[3U]);
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[4U]);
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[5U]);
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[6U]);
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[7U]);
        } else {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        }
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [7U]) : 0U);
    }
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [1U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[0U]);
    vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [1U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[1U]);
    vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [1U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[2U]);
    vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [1U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[3U]);
    vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [1U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[4U]);
    vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [1U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[5U]);
    vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [1U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[6U]);
    vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [1U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[7U]);
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [1U] >> 7U)))) << 8U) 
           | vlSymsp->TOP.Top__DOT__ifmap_wire[1U]);
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__opsum[0U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.ofmap[0U] = vlSelfRef.__PVT__opsum[3U]
        [0U];
    vlSelfRef.ofmap[1U] = vlSelfRef.__PVT__opsum[3U]
        [1U];
    vlSelfRef.ofmap[2U] = vlSelfRef.__PVT__opsum[3U]
        [2U];
    vlSelfRef.ofmap[3U] = vlSelfRef.__PVT__opsum[3U]
        [3U];
    vlSelfRef.ofmap[4U] = vlSelfRef.__PVT__opsum[3U]
        [4U];
    vlSelfRef.ofmap[5U] = vlSelfRef.__PVT__opsum[3U]
        [5U];
    vlSelfRef.ofmap[6U] = vlSelfRef.__PVT__opsum[3U]
        [6U];
    vlSelfRef.ofmap[7U] = vlSelfRef.__PVT__opsum[3U]
        [7U];
}

VL_INLINE_OPT void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[0U]));
    vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[1U]));
    vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[2U]));
    vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
    } else {
        if (vlSymsp->TOP.Top__DOT__i_en_array) {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[0U]);
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[1U]);
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[2U]);
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[3U]);
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[4U]);
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[5U]);
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[6U]);
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[7U]);
        } else {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        }
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [7U]) : 0U);
    }
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [2U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[0U]);
    vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [2U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[1U]);
    vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [2U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[2U]);
    vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [2U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[3U]);
    vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [2U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[4U]);
    vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [2U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[5U]);
    vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [2U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[6U]);
    vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [2U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[7U]);
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [2U] >> 7U)))) << 8U) 
           | vlSymsp->TOP.Top__DOT__ifmap_wire[2U]);
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__opsum[0U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.ofmap[0U] = vlSelfRef.__PVT__opsum[3U]
        [0U];
    vlSelfRef.ofmap[1U] = vlSelfRef.__PVT__opsum[3U]
        [1U];
    vlSelfRef.ofmap[2U] = vlSelfRef.__PVT__opsum[3U]
        [2U];
    vlSelfRef.ofmap[3U] = vlSelfRef.__PVT__opsum[3U]
        [3U];
    vlSelfRef.ofmap[4U] = vlSelfRef.__PVT__opsum[3U]
        [4U];
    vlSelfRef.ofmap[5U] = vlSelfRef.__PVT__opsum[3U]
        [5U];
    vlSelfRef.ofmap[6U] = vlSelfRef.__PVT__opsum[3U]
        [6U];
    vlSelfRef.ofmap[7U] = vlSelfRef.__PVT__opsum[3U]
        [7U];
}

VL_INLINE_OPT void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[0U]));
    vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[1U]));
    vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[2U]));
    vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
    } else {
        if (vlSymsp->TOP.Top__DOT__i_en_array) {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[0U]);
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[1U]);
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[2U]);
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[3U]);
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[4U]);
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[5U]);
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[6U]);
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[7U]);
        } else {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        }
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [7U]) : 0U);
    }
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [3U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[0U]);
    vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [3U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[1U]);
    vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [3U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[2U]);
    vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [3U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[3U]);
    vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [3U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[4U]);
    vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [3U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[5U]);
    vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [3U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[6U]);
    vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [3U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[7U]);
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [3U] >> 7U)))) << 8U) 
           | vlSymsp->TOP.Top__DOT__ifmap_wire[3U]);
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__opsum[0U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.ofmap[0U] = vlSelfRef.__PVT__opsum[3U]
        [0U];
    vlSelfRef.ofmap[1U] = vlSelfRef.__PVT__opsum[3U]
        [1U];
    vlSelfRef.ofmap[2U] = vlSelfRef.__PVT__opsum[3U]
        [2U];
    vlSelfRef.ofmap[3U] = vlSelfRef.__PVT__opsum[3U]
        [3U];
    vlSelfRef.ofmap[4U] = vlSelfRef.__PVT__opsum[3U]
        [4U];
    vlSelfRef.ofmap[5U] = vlSelfRef.__PVT__opsum[3U]
        [5U];
    vlSelfRef.ofmap[6U] = vlSelfRef.__PVT__opsum[3U]
        [6U];
    vlSelfRef.ofmap[7U] = vlSelfRef.__PVT__opsum[3U]
        [7U];
}

VL_INLINE_OPT void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[0U]));
    vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[1U]));
    vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[2U]));
    vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
    } else {
        if (vlSymsp->TOP.Top__DOT__i_en_array) {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[0U]);
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[1U]);
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[2U]);
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[3U]);
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[4U]);
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[5U]);
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[6U]);
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[7U]);
        } else {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        }
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [7U]) : 0U);
    }
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [4U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[0U]);
    vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [4U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[1U]);
    vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [4U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[2U]);
    vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [4U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[3U]);
    vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [4U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[4U]);
    vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [4U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[5U]);
    vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [4U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[6U]);
    vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [4U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[7U]);
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [4U] >> 7U)))) << 8U) 
           | vlSymsp->TOP.Top__DOT__ifmap_wire[4U]);
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__opsum[0U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.ofmap[0U] = vlSelfRef.__PVT__opsum[3U]
        [0U];
    vlSelfRef.ofmap[1U] = vlSelfRef.__PVT__opsum[3U]
        [1U];
    vlSelfRef.ofmap[2U] = vlSelfRef.__PVT__opsum[3U]
        [2U];
    vlSelfRef.ofmap[3U] = vlSelfRef.__PVT__opsum[3U]
        [3U];
    vlSelfRef.ofmap[4U] = vlSelfRef.__PVT__opsum[3U]
        [4U];
    vlSelfRef.ofmap[5U] = vlSelfRef.__PVT__opsum[3U]
        [5U];
    vlSelfRef.ofmap[6U] = vlSelfRef.__PVT__opsum[3U]
        [6U];
    vlSelfRef.ofmap[7U] = vlSelfRef.__PVT__opsum[3U]
        [7U];
}

VL_INLINE_OPT void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[0U]));
    vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[1U]));
    vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[2U]));
    vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
    } else {
        if (vlSymsp->TOP.Top__DOT__i_en_array) {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[0U]);
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[1U]);
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[2U]);
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[3U]);
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[4U]);
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[5U]);
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[6U]);
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[7U]);
        } else {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        }
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [7U]) : 0U);
    }
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [5U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[0U]);
    vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [5U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[1U]);
    vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [5U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[2U]);
    vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [5U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[3U]);
    vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [5U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[4U]);
    vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [5U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[5U]);
    vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [5U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[6U]);
    vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [5U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[7U]);
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [5U] >> 7U)))) << 8U) 
           | vlSymsp->TOP.Top__DOT__ifmap_wire[5U]);
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__opsum[0U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.ofmap[0U] = vlSelfRef.__PVT__opsum[3U]
        [0U];
    vlSelfRef.ofmap[1U] = vlSelfRef.__PVT__opsum[3U]
        [1U];
    vlSelfRef.ofmap[2U] = vlSelfRef.__PVT__opsum[3U]
        [2U];
    vlSelfRef.ofmap[3U] = vlSelfRef.__PVT__opsum[3U]
        [3U];
    vlSelfRef.ofmap[4U] = vlSelfRef.__PVT__opsum[3U]
        [4U];
    vlSelfRef.ofmap[5U] = vlSelfRef.__PVT__opsum[3U]
        [5U];
    vlSelfRef.ofmap[6U] = vlSelfRef.__PVT__opsum[3U]
        [6U];
    vlSelfRef.ofmap[7U] = vlSelfRef.__PVT__opsum[3U]
        [7U];
}

VL_INLINE_OPT void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[0U]));
    vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[1U]));
    vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[2U]));
    vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
    } else {
        if (vlSymsp->TOP.Top__DOT__i_en_array) {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[0U]);
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[1U]);
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[2U]);
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[3U]);
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[4U]);
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[5U]);
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[6U]);
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[7U]);
        } else {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        }
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [7U]) : 0U);
    }
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [6U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[0U]);
    vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [6U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[1U]);
    vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [6U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[2U]);
    vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [6U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[3U]);
    vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [6U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[4U]);
    vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [6U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[5U]);
    vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [6U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[6U]);
    vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [6U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[7U]);
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [6U] >> 7U)))) << 8U) 
           | vlSymsp->TOP.Top__DOT__ifmap_wire[6U]);
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__opsum[0U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.ofmap[0U] = vlSelfRef.__PVT__opsum[3U]
        [0U];
    vlSelfRef.ofmap[1U] = vlSelfRef.__PVT__opsum[3U]
        [1U];
    vlSelfRef.ofmap[2U] = vlSelfRef.__PVT__opsum[3U]
        [2U];
    vlSelfRef.ofmap[3U] = vlSelfRef.__PVT__opsum[3U]
        [3U];
    vlSelfRef.ofmap[4U] = vlSelfRef.__PVT__opsum[3U]
        [4U];
    vlSelfRef.ofmap[5U] = vlSelfRef.__PVT__opsum[3U]
        [5U];
    vlSelfRef.ofmap[6U] = vlSelfRef.__PVT__opsum[3U]
        [6U];
    vlSelfRef.ofmap[7U] = vlSelfRef.__PVT__opsum[3U]
        [7U];
}

VL_INLINE_OPT void VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__0(VTop_PE_block* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_PE_block___nba_sequent__TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[0U]));
    vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[0U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[1U]));
    vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[1U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & vlSelfRef.__PVT__valid_chain[2U]));
    vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 1U)));
    vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 2U)));
    vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 3U)));
    vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 4U)));
    vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 5U)));
    vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 6U)));
    vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && 
           (1U & (vlSelfRef.__PVT__valid_chain[2U] 
                  >> 7U)));
    vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.rst))) && (IData)(vlSymsp->TOP.Top__DOT__i_en_array));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum = 0U;
    } else {
        if (vlSymsp->TOP.Top__DOT__i_en_array) {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[0U]);
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[1U]);
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[2U]);
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[3U]);
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[4U]);
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[5U]);
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[6U]);
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum 
                = ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.bias[7U]);
        } else {
            vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
            vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = 0U;
        }
        vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[0U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[0U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [0U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[0U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[1U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[1U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [1U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[1U]
                         [7U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((1U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][0U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((2U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][1U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((4U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][2U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((8U & vlSelfRef.__PVT__valid_chain[2U])
                ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                    * vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                   + vlSelfRef.__PVT__opsum[2U][3U])
                : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x10U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [4U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x20U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [5U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x40U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [6U]) : 0U);
        vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum 
            = ((0x80U & vlSelfRef.__PVT__valid_chain
                [2U]) ? ((vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
                          * vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted) 
                         + vlSelfRef.__PVT__opsum[2U]
                         [7U]) : 0U);
    }
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [7U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[0U]);
    vlSelfRef.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [7U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[1U]);
    vlSelfRef.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [7U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[2U]);
    vlSelfRef.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [7U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[3U]);
    vlSelfRef.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [7U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[4U]);
    vlSelfRef.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [7U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[5U]);
    vlSelfRef.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [7U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[6U]);
    vlSelfRef.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [7U] >> 7U)))) << 8U) 
           | vlSelfRef.weight[7U]);
    vlSelfRef.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted 
        = (((- (IData)((1U & (vlSymsp->TOP.Top__DOT__ifmap_wire
                              [7U] >> 7U)))) << 8U) 
           | vlSymsp->TOP.Top__DOT__ifmap_wire[7U]);
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[1U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [1U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[2U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [2U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[3U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [3U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfeU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | (IData)(vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfdU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 1U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xfbU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 2U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xf7U & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 3U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xefU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 4U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xdfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 5U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0xbfU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 6U));
    vlSelfRef.__PVT__valid_chain[0U] = ((0x7fU & vlSelfRef.__PVT__valid_chain
                                         [0U]) | ((IData)(vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid) 
                                                  << 7U));
    vlSelfRef.__PVT__opsum[0U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[0U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[1U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[2U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][0U] = vlSelfRef.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][1U] = vlSelfRef.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][2U] = vlSelfRef.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][3U] = vlSelfRef.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][4U] = vlSelfRef.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][5U] = vlSelfRef.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][6U] = vlSelfRef.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.__PVT__opsum[3U][7U] = vlSelfRef.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    vlSelfRef.ofmap[0U] = vlSelfRef.__PVT__opsum[3U]
        [0U];
    vlSelfRef.ofmap[1U] = vlSelfRef.__PVT__opsum[3U]
        [1U];
    vlSelfRef.ofmap[2U] = vlSelfRef.__PVT__opsum[3U]
        [2U];
    vlSelfRef.ofmap[3U] = vlSelfRef.__PVT__opsum[3U]
        [3U];
    vlSelfRef.ofmap[4U] = vlSelfRef.__PVT__opsum[3U]
        [4U];
    vlSelfRef.ofmap[5U] = vlSelfRef.__PVT__opsum[3U]
        [5U];
    vlSelfRef.ofmap[6U] = vlSelfRef.__PVT__opsum[3U]
        [6U];
    vlSelfRef.ofmap[7U] = vlSelfRef.__PVT__opsum[3U]
        [7U];
}
