// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class VTop_PE_block;


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VTop_PE_block* __PVT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block;
    VTop_PE_block* __PVT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block;
    VTop_PE_block* __PVT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block;
    VTop_PE_block* __PVT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block;
    VTop_PE_block* __PVT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block;
    VTop_PE_block* __PVT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block;
    VTop_PE_block* __PVT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block;
    VTop_PE_block* __PVT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(mode,0,0);
        VL_IN8(ready,0,0);
        VL_OUT8(valid,0,0);
        VL_OUT8(done,0,0);
        CData/*0:0*/ Top__DOT__ifmap_ren;
        CData/*0:0*/ Top__DOT__weight_ren;
        CData/*0:0*/ Top__DOT__bias_ren;
        CData/*0:0*/ Top__DOT__i_en_array;
        CData/*0:0*/ Top__DOT__i_en_ppu;
        CData/*0:0*/ Top__DOT__valid_array;
        CData/*7:0*/ Top__DOT__ppu_output;
        CData/*0:0*/ Top__DOT__mode1_step0;
        CData/*6:0*/ Top__DOT__ofmap_address;
        CData/*2:0*/ Top__DOT__controller__DOT__cur_state;
        CData/*2:0*/ Top__DOT__controller__DOT__next_state;
        CData/*7:0*/ Top__DOT__controller__DOT__ppu_count;
        CData/*3:0*/ Top__DOT__controller__DOT__compute_stage;
        CData/*7:0*/ Top__DOT__ppu__DOT__data_shift;
        CData/*7:0*/ Top__DOT__ppu__DOT__data_temp;
        CData/*7:0*/ Top__DOT__array__DOT__valid_chain;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(scaling_factor,11,0);
        SData/*11:0*/ Top__DOT__data_address;
        SData/*11:0*/ __Vdly__Top__DOT__data_address;
        VL_IN(data_in,31,0);
        VL_OUT(ofmap,31,0);
        IData/*31:0*/ Top__DOT__i;
        IData/*31:0*/ Top__DOT__ppu_input;
        IData/*31:0*/ Top__DOT__ppu_in_out;
        IData/*31:0*/ Top__DOT__ppu__DOT__relu_out;
        IData/*31:0*/ Top__DOT__array__DOT__u_Adder_tree__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 8> Top__DOT__ifmap_wire;
        VlUnpacked<CData/*7:0*/, 64> Top__DOT__weight_wire;
        VlUnpacked<IData/*31:0*/, 8> Top__DOT__bias_wire;
        VlUnpacked<IData/*31:0*/, 8> Top__DOT__ofmap_wire;
        VlUnpacked<IData/*31:0*/, 8> Top__DOT__bias_input;
        VlUnpacked<IData/*31:0*/, 64> Top__DOT__array__DOT__opsum;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 8>, 8> Top__DOT__array__DOT__weight_wire;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 8>, 8> Top__DOT__array__DOT__opsum_wire;
        VlUnpacked<IData/*31:0*/, 8> Top__DOT__array__DOT__bias_zero;
        VlUnpacked<IData/*31:0*/, 8> Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 32> Top__DOT__GLB_ifmap__DOT__ram;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 8>, 4> Top__DOT__GLB_ifmap__DOT__DO_wire;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 1024> Top__DOT__GLB_weight__DOT__ram;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 64>, 4> Top__DOT__GLB_weight__DOT__DO_wire;
        VlUnpacked<IData/*31:0*/, 128> Top__DOT__GLB_bias__DOT__ram;
        VlUnpacked<IData/*31:0*/, 128> Top__DOT__GLB_ofmap__DOT__ram;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* v__name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
