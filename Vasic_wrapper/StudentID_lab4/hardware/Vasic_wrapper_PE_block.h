// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vasic_wrapper.h for the primary calling header

#ifndef VERILATED_VASIC_WRAPPER_PE_BLOCK_H_
#define VERILATED_VASIC_WRAPPER_PE_BLOCK_H_  // guard

#include "verilated.h"


class Vasic_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vasic_wrapper_PE_block final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(i_en,0,0);
        VL_IN8(ifmap,7,0);
        VL_OUT8(valid,0,0);
        CData/*0:0*/ __Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid;
        CData/*0:0*/ __Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid;
        IData/*31:0*/ __Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum;
    };
    struct {
        IData/*31:0*/ __Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum;
        IData/*31:0*/ __Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum;
        IData/*31:0*/ __PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted;
        IData/*31:0*/ __PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted;
        IData/*31:0*/ __PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted;
        IData/*31:0*/ __PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted;
        IData/*31:0*/ __PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted;
        IData/*31:0*/ __PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted;
        IData/*31:0*/ __PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted;
        IData/*31:0*/ __PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted;
        IData/*31:0*/ __PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted;
        VL_IN8(weight[8],7,0);
        VL_IN(bias[8],31,0);
        VL_OUT(ofmap[8],31,0);
        VlUnpacked<VlUnpacked<IData/*31:0*/, 8>, 4> __PVT__opsum;
        VlUnpacked<CData/*7:0*/, 4> __PVT__valid_chain;
    };

    // INTERNAL VARIABLES
    Vasic_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vasic_wrapper_PE_block(Vasic_wrapper__Syms* symsp, const char* v__name);
    ~Vasic_wrapper_PE_block();
    VL_UNCOPYABLE(Vasic_wrapper_PE_block);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
