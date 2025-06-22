// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vasic_wrapper__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vasic_wrapper::Vasic_wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vasic_wrapper__Syms(contextp(), _vcname__, this)}
    , ACLK{vlSymsp->TOP.ACLK}
    , ARESETn{vlSymsp->TOP.ARESETn}
    , ASIC_interrupt{vlSymsp->TOP.ASIC_interrupt}
    , AWID_S{vlSymsp->TOP.AWID_S}
    , AWLEN_S{vlSymsp->TOP.AWLEN_S}
    , AWSIZE_S{vlSymsp->TOP.AWSIZE_S}
    , AWBURST_S{vlSymsp->TOP.AWBURST_S}
    , AWVALID_S{vlSymsp->TOP.AWVALID_S}
    , AWREADY_S{vlSymsp->TOP.AWREADY_S}
    , WSTRB_S{vlSymsp->TOP.WSTRB_S}
    , WLAST_S{vlSymsp->TOP.WLAST_S}
    , WVALID_S{vlSymsp->TOP.WVALID_S}
    , WREADY_S{vlSymsp->TOP.WREADY_S}
    , BID_S{vlSymsp->TOP.BID_S}
    , BRESP_S{vlSymsp->TOP.BRESP_S}
    , BVALID_S{vlSymsp->TOP.BVALID_S}
    , BREADY_S{vlSymsp->TOP.BREADY_S}
    , ARID_S{vlSymsp->TOP.ARID_S}
    , ARLEN_S{vlSymsp->TOP.ARLEN_S}
    , ARSIZE_S{vlSymsp->TOP.ARSIZE_S}
    , ARBURST_S{vlSymsp->TOP.ARBURST_S}
    , ARVALID_S{vlSymsp->TOP.ARVALID_S}
    , ARREADY_S{vlSymsp->TOP.ARREADY_S}
    , output_cnt{vlSymsp->TOP.output_cnt}
    , current_state{vlSymsp->TOP.current_state}
    , n_state{vlSymsp->TOP.n_state}
    , RID_S{vlSymsp->TOP.RID_S}
    , RRESP_S{vlSymsp->TOP.RRESP_S}
    , RLAST_S{vlSymsp->TOP.RLAST_S}
    , RVALID_S{vlSymsp->TOP.RVALID_S}
    , RREADY_S{vlSymsp->TOP.RREADY_S}
    , output_scale{vlSymsp->TOP.output_scale}
    , dataout{vlSymsp->TOP.dataout}
    , dataout2{vlSymsp->TOP.dataout2}
    , AWADDR_S{vlSymsp->TOP.AWADDR_S}
    , WDATA_S{vlSymsp->TOP.WDATA_S}
    , ARADDR_S{vlSymsp->TOP.ARADDR_S}
    , ASIC_DATA_n{vlSymsp->TOP.ASIC_DATA_n}
    , bias{vlSymsp->TOP.bias}
    , RDATA_S{vlSymsp->TOP.RDATA_S}
    , data_temp{vlSymsp->TOP.data_temp}
    , ifmap{vlSymsp->TOP.ifmap}
    , weight{vlSymsp->TOP.weight}
    , ppu_out_temp{vlSymsp->TOP.ppu_out_temp}
    , __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block{vlSymsp->TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__genblk1__DOT__pe_block}
    , __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block{vlSymsp->TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__genblk1__DOT__pe_block}
    , __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block{vlSymsp->TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__genblk1__DOT__pe_block}
    , __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block{vlSymsp->TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__genblk1__DOT__pe_block}
    , __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block{vlSymsp->TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__genblk1__DOT__pe_block}
    , __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block{vlSymsp->TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__genblk1__DOT__pe_block}
    , __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block{vlSymsp->TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__genblk1__DOT__pe_block}
    , __PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block{vlSymsp->TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__genblk1__DOT__pe_block}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vasic_wrapper::Vasic_wrapper(const char* _vcname__)
    : Vasic_wrapper(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vasic_wrapper::~Vasic_wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vasic_wrapper___024root___eval_debug_assertions(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vasic_wrapper___024root___eval_static(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper___024root___eval_initial(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper___024root___eval_settle(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper___024root___eval(Vasic_wrapper___024root* vlSelf);

void Vasic_wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vasic_wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vasic_wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vasic_wrapper___024root___eval_static(&(vlSymsp->TOP));
        Vasic_wrapper___024root___eval_initial(&(vlSymsp->TOP));
        Vasic_wrapper___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vasic_wrapper___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vasic_wrapper::eventsPending() { return false; }

uint64_t Vasic_wrapper::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vasic_wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vasic_wrapper___024root___eval_final(Vasic_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vasic_wrapper::final() {
    Vasic_wrapper___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vasic_wrapper::hierName() const { return vlSymsp->name(); }
const char* Vasic_wrapper::modelName() const { return "Vasic_wrapper"; }
unsigned Vasic_wrapper::threads() const { return 1; }
void Vasic_wrapper::prepareClone() const { contextp()->prepareClone(); }
void Vasic_wrapper::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vasic_wrapper::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vasic_wrapper___024root__trace_decl_types(VerilatedVcd* tracep);

void Vasic_wrapper___024root__trace_init_top(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vasic_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasic_wrapper___024root*>(voidSelf);
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vasic_wrapper___024root__trace_decl_types(tracep);
    Vasic_wrapper___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_register(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vasic_wrapper::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vasic_wrapper::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vasic_wrapper___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
