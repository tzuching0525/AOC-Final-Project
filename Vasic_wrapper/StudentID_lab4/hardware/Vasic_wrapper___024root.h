// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vasic_wrapper.h for the primary calling header

#ifndef VERILATED_VASIC_WRAPPER___024ROOT_H_
#define VERILATED_VASIC_WRAPPER___024ROOT_H_  // guard

#include "verilated.h"
class Vasic_wrapper_PE_block;


class Vasic_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vasic_wrapper___024root final : public VerilatedModule {
  public:
    // CELLS
    Vasic_wrapper_PE_block* __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block;
    Vasic_wrapper_PE_block* __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block;
    Vasic_wrapper_PE_block* __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block;
    Vasic_wrapper_PE_block* __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block;
    Vasic_wrapper_PE_block* __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block;
    Vasic_wrapper_PE_block* __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block;
    Vasic_wrapper_PE_block* __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block;
    Vasic_wrapper_PE_block* __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(ACLK,0,0);
        VL_IN8(ARESETn,0,0);
        VL_OUT8(ASIC_interrupt,0,0);
        VL_IN8(AWID_S,7,0);
        VL_IN8(AWLEN_S,3,0);
        VL_IN8(AWSIZE_S,2,0);
        VL_IN8(AWBURST_S,1,0);
        VL_IN8(AWVALID_S,0,0);
        VL_OUT8(AWREADY_S,0,0);
        VL_IN8(WSTRB_S,3,0);
        VL_IN8(WLAST_S,0,0);
        VL_IN8(WVALID_S,0,0);
        VL_OUT8(WREADY_S,0,0);
        VL_OUT8(BID_S,7,0);
        VL_OUT8(BRESP_S,1,0);
        VL_OUT8(BVALID_S,0,0);
        VL_IN8(BREADY_S,0,0);
        VL_IN8(ARID_S,7,0);
        VL_IN8(ARLEN_S,3,0);
        VL_IN8(ARSIZE_S,2,0);
        VL_IN8(ARBURST_S,1,0);
        VL_IN8(ARVALID_S,0,0);
        VL_OUT8(ARREADY_S,0,0);
        VL_OUT8(RID_S,7,0);
        VL_OUT8(RRESP_S,1,0);
        VL_OUT8(RLAST_S,0,0);
        VL_OUT8(RVALID_S,0,0);
        VL_IN8(RREADY_S,0,0);
        CData/*0:0*/ asic_wrapper__DOT__data_ready;
        CData/*0:0*/ asic_wrapper__DOT__data_ready_reg;
        CData/*0:0*/ asic_wrapper__DOT__data_ready_reg_next;
        CData/*0:0*/ asic_wrapper__DOT__bias_write;
        CData/*0:0*/ asic_wrapper__DOT__valid;
        CData/*1:0*/ asic_wrapper__DOT__state;
        CData/*1:0*/ asic_wrapper__DOT__next_state;
        CData/*7:0*/ asic_wrapper__DOT__ofmap_count;
        CData/*2:0*/ asic_wrapper__DOT__cs_slave;
        CData/*2:0*/ asic_wrapper__DOT__cs_slave_next;
        CData/*7:0*/ asic_wrapper__DOT__BID_S_next;
        CData/*7:0*/ asic_wrapper__DOT__RID_S_next;
        CData/*0:0*/ asic_wrapper__DOT__write_error;
        CData/*0:0*/ asic_wrapper__DOT__write_error_next;
        CData/*0:0*/ asic_wrapper__DOT__Top__DOT__ifmap_ren;
        CData/*0:0*/ asic_wrapper__DOT__Top__DOT__weight_ren;
        CData/*0:0*/ asic_wrapper__DOT__Top__DOT__bias_ren;
        CData/*0:0*/ asic_wrapper__DOT__Top__DOT__i_en_array;
        CData/*0:0*/ asic_wrapper__DOT__Top__DOT__i_en_ppu;
        CData/*0:0*/ asic_wrapper__DOT__Top__DOT__valid_array;
        CData/*7:0*/ asic_wrapper__DOT__Top__DOT__ppu_output;
        CData/*0:0*/ asic_wrapper__DOT__Top__DOT__mode1_step0;
        CData/*6:0*/ asic_wrapper__DOT__Top__DOT__ofmap_address;
        CData/*2:0*/ asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state;
        CData/*2:0*/ asic_wrapper__DOT__Top__DOT__controller__DOT__next_state;
        CData/*7:0*/ asic_wrapper__DOT__Top__DOT__controller__DOT__ppu_count;
        CData/*3:0*/ asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage;
        CData/*7:0*/ asic_wrapper__DOT__Top__DOT__ppu__DOT__data_temp;
        CData/*0:0*/ asic_wrapper__DOT__Top__DOT__array__DOT__valid_pe;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ACLK__0;
        CData/*0:0*/ __VactContinue;
        SData/*10:0*/ asic_wrapper__DOT__write_cnt;
        SData/*10:0*/ asic_wrapper__DOT__write_cnt_next;
        SData/*10:0*/ asic_wrapper__DOT__count;
    };
    struct {
        SData/*10:0*/ asic_wrapper__DOT__count_next;
        SData/*10:0*/ asic_wrapper__DOT__bias_cnt;
        SData/*11:0*/ asic_wrapper__DOT__Top__DOT__data_address;
        SData/*11:0*/ __Vdly__asic_wrapper__DOT__Top__DOT__data_address;
        VL_IN(AWADDR_S,31,0);
        VL_IN(WDATA_S,31,0);
        VL_IN(ARADDR_S,31,0);
        VL_OUT(RDATA_S,31,0);
        IData/*31:0*/ asic_wrapper__DOT__ofmap;
        IData/*31:0*/ asic_wrapper__DOT__i;
        IData/*31:0*/ asic_wrapper__DOT__addr_S_reg;
        IData/*31:0*/ asic_wrapper__DOT__addr_S_reg_next;
        IData/*31:0*/ asic_wrapper__DOT__ASIC_ENABLE;
        IData/*31:0*/ asic_wrapper__DOT__ASIC_ENABLE_next;
        IData/*31:0*/ asic_wrapper__DOT__DATA;
        IData/*31:0*/ asic_wrapper__DOT__ASIC_DATA_next;
        IData/*31:0*/ asic_wrapper__DOT____Vlvbound_h36234f8c__0;
        IData/*31:0*/ asic_wrapper__DOT____Vlvbound_haa40a020__0;
        IData/*31:0*/ asic_wrapper__DOT____Vlvbound_hf69f4574__0;
        IData/*31:0*/ asic_wrapper__DOT__Top__DOT__ppu_input;
        IData/*31:0*/ asic_wrapper__DOT__Top__DOT__ppu_in_out;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 1104> asic_wrapper__DOT__DATA_buffer;
        VlUnpacked<CData/*7:0*/, 8> asic_wrapper__DOT__Top__DOT__ifmap_wire;
        VlUnpacked<CData/*7:0*/, 64> asic_wrapper__DOT__Top__DOT__weight_wire;
        VlUnpacked<IData/*31:0*/, 8> asic_wrapper__DOT__Top__DOT__bias_wire;
        VlUnpacked<IData/*31:0*/, 8> asic_wrapper__DOT__Top__DOT__ofmap_wire;
        VlUnpacked<IData/*31:0*/, 8> asic_wrapper__DOT__Top__DOT__bias_input;
        VlUnpacked<IData/*31:0*/, 64> asic_wrapper__DOT__Top__DOT__array__DOT__opsum;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 8>, 8> asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 8>, 8> asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire;
        VlUnpacked<IData/*31:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero;
        VlUnpacked<IData/*31:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap;
        VlUnpacked<CData/*7:0*/, 8> asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight;
        VlUnpacked<IData/*31:0*/, 32> asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 8>, 4> asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire;
        VlUnpacked<IData/*31:0*/, 1024> asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__ram;
        VlUnpacked<VlUnpacked<CData/*7:0*/, 64>, 4> asic_wrapper__DOT__Top__DOT__GLB_weight__DOT__DO_wire;
        VlUnpacked<IData/*31:0*/, 128> asic_wrapper__DOT__Top__DOT__GLB_bias__DOT__ram;
        VlUnpacked<IData/*31:0*/, 128> asic_wrapper__DOT__Top__DOT__GLB_ofmap__DOT__ram;
    };
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 1104>, false, IData/*31:0*/, 1> __VdlyCommitQueueasic_wrapper__DOT__DATA_buffer;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vasic_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vasic_wrapper___024root(Vasic_wrapper__Syms* symsp, const char* v__name);
    ~Vasic_wrapper___024root();
    VL_UNCOPYABLE(Vasic_wrapper___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
