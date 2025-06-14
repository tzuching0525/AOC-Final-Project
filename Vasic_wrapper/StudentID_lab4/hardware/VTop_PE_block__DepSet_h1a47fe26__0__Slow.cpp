// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_PE_block.h"

VL_ATTR_COLD void VTop_PE_block___ctor_var_reset(VTop_PE_block* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_PE_block___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->i_en = VL_RAND_RESET_I(1);
    vlSelf->ifmap = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bias[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ofmap[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__opsum[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__valid_chain[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted = VL_RAND_RESET_I(32);
}
