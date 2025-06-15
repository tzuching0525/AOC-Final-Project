// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vasic_wrapper__Syms.h"


VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_init_sub__TOP__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1762,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1763,0,"ARESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1764,0,"ASIC_interrupt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1765,0,"AWID_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1766,0,"AWADDR_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1767,0,"AWLEN_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1768,0,"AWSIZE_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1769,0,"AWBURST_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1770,0,"AWVALID_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1771,0,"AWREADY_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1772,0,"WDATA_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1773,0,"WSTRB_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1774,0,"WLAST_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1775,0,"WVALID_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1776,0,"WREADY_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1777,0,"BID_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1778,0,"BRESP_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1779,0,"BVALID_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1780,0,"BREADY_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1781,0,"ARID_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1782,0,"ARADDR_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1783,0,"ARLEN_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1784,0,"ARSIZE_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1785,0,"ARBURST_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1786,0,"ARVALID_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1787,0,"ARREADY_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1788,0,"current_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1789,0,"n_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1790,0,"RID_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1791,0,"RDATA_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1792,0,"RRESP_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1793,0,"RLAST_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1794,0,"RVALID_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1795,0,"RREADY_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("asic_wrapper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1763,0,"ARESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1764,0,"ASIC_interrupt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1765,0,"AWID_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1766,0,"AWADDR_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1767,0,"AWLEN_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1768,0,"AWSIZE_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1769,0,"AWBURST_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1770,0,"AWVALID_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1771,0,"AWREADY_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1772,0,"WDATA_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1773,0,"WSTRB_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1774,0,"WLAST_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1775,0,"WVALID_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1776,0,"WREADY_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1777,0,"BID_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1778,0,"BRESP_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1779,0,"BVALID_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1780,0,"BREADY_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1781,0,"ARID_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1782,0,"ARADDR_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1783,0,"ARLEN_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1784,0,"ARSIZE_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1785,0,"ARBURST_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1786,0,"ARVALID_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1787,0,"ARREADY_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1788,0,"current_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1789,0,"n_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1790,0,"RID_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1791,0,"RDATA_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1792,0,"RRESP_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1793,0,"RLAST_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1794,0,"RVALID_S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1795,0,"RREADY_S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"write_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+121,0,"write_cnt_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+130,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+131,0,"count_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+132,0,"bias_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+133,0,"ofmap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"data_ready_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"data_ready_reg_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"bias_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+140,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"output_cnt_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+143,0,"output_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+144,0,"ofmap_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+145,0,"cs_slave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+122,0,"cs_slave_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+146,0,"addr_S_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"addr_S_reg_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"BID_S_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"RID_S_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+147,0,"write_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"write_error_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"ASIC_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"ASIC_ENABLE_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"ASIC_DATA_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"ASIC_OFMAP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"ASIC_OFMAP_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"scaling_factor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+134,0,"ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"ofmap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+153,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+155,0,"ifmap_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"ifmap_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"weight_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"weight_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"bias_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"bias_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"ofmap_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"i_en_array",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"i_en_ppu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ifmap_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+164+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bias_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1754+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ofmap_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+172+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bias_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+180+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+188,0,"ppu_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"data_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+190,0,"valid_array",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"ppu_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+192,0,"ppu_in_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"mode1_step0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"compute_stage0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"ofmap_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("GLB_bias", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1797,0,"ADDR_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1762,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+160,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"WE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("DO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1754+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GLB_ifmap", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1798,0,"ADDR_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1762,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+156,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"WE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("DO", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+164+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+198+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("DO_wire", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+230,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+234,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+238,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+239,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+240,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+241,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+242,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+243,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+244,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+245,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+246,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+247,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+249,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+250,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+251,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+252,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+253,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+254,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+255,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+256,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+257,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+259,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+260,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+261,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("GLB_ofmap", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1797,0,"ADDR_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1762,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+161,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"WE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DI", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+172+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+188,0,"DO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("GLB_weight", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"ADDR_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1762,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+158,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"WE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ifmap", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+164+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+180+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ofmap", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+172+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+190,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"valid_chain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+265,0,"valid_pe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bias_zero", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PE_array[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_array0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_block", VerilatedTracePrefixType::SCOPE_MODULE);
    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_array[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_array1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_block", VerilatedTracePrefixType::SCOPE_MODULE);
    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_array[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_array1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_block", VerilatedTracePrefixType::SCOPE_MODULE);
    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_array[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_array1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_block", VerilatedTracePrefixType::SCOPE_MODULE);
    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_array[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_array1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_block", VerilatedTracePrefixType::SCOPE_MODULE);
    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_array[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_array1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_block", VerilatedTracePrefixType::SCOPE_MODULE);
    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_array[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_array1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_block", VerilatedTracePrefixType::SCOPE_MODULE);
    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_array[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_array1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe_block", VerilatedTracePrefixType::SCOPE_MODULE);
    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_Adder_tree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("data_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+172+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+190,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"i_en_array",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"i_en_ppu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"ifmap_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"ifmap_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"weight_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"weight_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"bias_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"bias_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"ofmap_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"data_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+194,0,"compute_stage0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"valid_array",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"mode1_step0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1800,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1801,0,"READ_IFMAP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1802,0,"READ_WEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1803,0,"READ_BIAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1804,0,"ARRAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1805,0,"PPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1806,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+267,0,"cur_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+268,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+269,0,"ppu_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+270,0,"compute_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("ppu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"scaling_factor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+191,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+138,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"data_in_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"relu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"data_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+273,0,"data_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("weight", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+275+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+283+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ofmap", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+291+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+299,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("opsum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+300,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+308,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+316,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+324,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_chain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+332+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+336,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+337,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+338,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+339,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+342,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+343,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+344,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+346,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+348,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+349,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+350,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+351,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+352,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+354,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+355,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+356,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+357,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+358,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+360,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+361,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+362,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+363,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+364,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+365,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+366,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+367,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+368,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+369,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+370,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+372,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+373,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+374,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+375,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+376,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+336,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+378,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+379,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+380,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+381,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+382,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+383,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+384,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+386,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+342,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+388,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+389,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+391,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+348,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+392,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+393,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+394,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+395,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+382,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+396,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+397,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+398,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+354,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+399,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+400,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+401,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+402,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+360,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+403,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+404,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+405,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+406,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+365,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+366,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+407,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+408,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+409,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+410,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+372,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+411,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+412,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+413,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+414,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+336,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+415,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+416,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+418,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+382,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+419,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+420,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+421,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+342,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+423,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+424,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+425,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+426,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+348,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+427,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+428,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+429,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+430,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+354,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+431,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+432,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+434,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+360,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+435,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+436,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+438,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+365,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+342,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+439,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+440,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+441,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+366,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+442,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+443,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+444,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+445,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+372,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+446,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+447,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+449,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+348,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+450,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+451,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+452,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+354,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+453,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+454,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+455,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+360,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+456,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+457,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+458,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+365,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+366,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+459,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+460,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+461,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+372,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+462,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+463,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+464,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+336,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+465,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+466,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+468,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+382,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+469,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+470,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+471,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+472,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("weight", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+474+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ofmap", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+482+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+490,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("opsum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+491,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+492,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+493,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+494,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+497,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+499,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+500,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+502,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+503,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+505,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+507,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+510,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+512,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+513,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+514,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+515,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+516,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+517,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+518,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+519,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+520,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+521,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+522,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_chain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+523+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+527,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+528,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+529,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+531,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+532,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+533,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+534,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+535,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+536,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+538,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+539,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+540,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+541,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+542,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+544,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+545,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+546,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+547,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+548,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+550,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+551,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+552,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+553,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+554,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+555,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+556,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+557,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+558,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+559,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+560,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+562,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+563,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+564,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+565,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+566,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+527,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+568,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+569,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+570,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+571,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+531,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+572,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+573,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+574,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+575,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+576,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+532,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+578,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+579,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+580,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+581,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+538,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+582,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+583,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+584,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+585,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+572,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+586,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+587,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+544,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+588,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+589,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+590,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+591,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+550,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+592,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+593,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+594,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+595,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+555,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+556,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+596,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+597,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+598,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+599,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+562,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+600,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+601,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+603,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+527,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+604,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+605,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+606,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+607,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+531,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+572,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+608,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+609,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+610,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+611,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+532,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+612,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+613,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+614,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+615,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+538,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+616,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+617,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+618,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+619,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+544,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+620,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+621,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+622,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+623,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+550,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+624,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+625,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+626,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+627,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+555,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+532,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+628,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+629,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+556,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+630,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+631,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+632,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+633,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+562,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+634,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+635,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+636,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+637,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+538,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+638,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+639,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+544,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+640,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+641,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+550,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+642,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+643,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+555,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+556,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+644,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+645,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+562,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+646,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+647,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+527,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+648,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+649,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+650,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+651,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+531,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+572,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+652,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+653,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+654,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+655,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+530,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("weight", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+657+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+25+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ofmap", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+665+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+673,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("opsum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+674,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+675,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+676,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+677,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+678,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+679,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+680,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+681,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+682,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+683,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+684,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+685,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+686,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+687,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+688,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+689,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+690,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+691,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+692,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+693,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+694,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+695,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+696,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+697,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+698,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+699,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+700,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+701,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+702,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+703,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+704,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+705,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_chain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+706+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+710,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+711,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+712,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+714,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+715,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+716,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+717,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+718,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+719,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+720,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+721,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+722,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+723,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+724,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+725,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+726,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+727,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+728,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+729,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+731,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+732,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+733,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+734,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+735,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+736,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+737,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+738,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+739,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+740,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+741,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+742,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+743,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+744,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+745,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+746,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+747,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+749,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+750,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+710,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+751,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+752,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+754,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+714,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+755,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+756,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+757,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+758,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+759,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+760,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+715,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+761,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+762,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+764,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+720,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+721,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+765,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+766,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+767,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+768,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+726,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+755,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+769,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+770,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+760,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+727,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+771,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+772,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+773,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+774,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+732,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+733,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+775,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+776,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+777,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+778,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+738,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+739,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+779,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+780,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+781,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+782,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+744,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+745,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+783,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+784,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+786,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+750,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+710,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+787,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+788,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+789,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+790,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+714,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+755,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+791,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+792,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+793,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+794,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+760,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+715,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+795,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+796,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+797,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+798,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+720,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+721,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+799,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+800,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+801,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+802,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+726,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+727,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+803,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+804,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+805,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+806,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+732,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+733,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+807,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+808,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+809,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+810,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+738,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+715,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+811,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+812,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+720,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+739,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+813,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+814,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+815,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+816,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+744,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+745,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+817,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+818,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+819,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+820,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+750,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+721,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+821,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+822,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+726,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+727,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+823,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+824,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+732,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+733,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+825,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+826,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+738,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+739,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+827,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+828,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+744,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+745,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+829,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+830,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+750,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+710,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+831,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+832,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+833,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+834,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+714,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+755,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+835,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+836,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+837,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+838,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+760,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("weight", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+840+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+41+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ofmap", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+848+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+856,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("opsum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+857,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+858,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+859,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+860,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+861,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+862,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+863,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+865,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+866,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+867,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+868,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+869,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+870,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+872,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+873,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+874,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+876,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+878,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+879,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+880,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+881,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+882,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+883,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+884,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+885,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+887,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+888,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_chain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+889+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+893,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+894,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+895,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+897,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+898,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+899,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+900,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+901,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+902,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+903,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+904,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+905,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+906,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+907,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+908,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+909,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+910,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+911,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+912,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+913,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+914,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+915,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+916,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+917,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+918,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+919,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+920,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+921,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+922,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+923,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+924,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+925,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+926,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+927,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+928,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+929,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+930,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+931,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+932,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+933,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+893,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+934,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+935,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+936,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+937,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+897,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+938,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+939,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+940,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+941,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+942,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+898,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+944,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+945,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+946,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+947,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+903,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+904,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+948,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+949,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+950,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+951,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+909,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+938,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+50,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+952,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+953,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+910,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+954,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+955,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+956,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+957,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+915,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+916,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+958,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+959,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+960,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+961,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+921,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+922,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+962,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+963,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+964,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+965,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+927,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+928,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+966,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+967,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+968,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+969,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+933,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+893,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+970,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+971,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+972,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+973,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+897,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+938,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+974,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+975,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+976,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+977,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+898,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+978,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+979,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+980,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+981,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+903,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+904,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+982,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+983,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+984,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+985,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+909,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+910,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+986,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+987,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+988,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+989,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+915,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+916,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+990,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+991,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+993,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+921,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+898,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+994,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+995,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+903,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+922,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+996,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+997,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+998,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+999,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+927,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+928,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1000,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1001,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1002,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1003,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+933,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+904,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1004,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1005,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+909,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+910,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1006,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1007,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+915,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+916,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1008,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1009,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+921,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+922,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1010,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+927,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+928,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1013,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+933,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+893,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1014,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1015,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1016,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1017,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+897,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+938,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1018,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1019,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1020,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1021,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("weight", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1023+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+57+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ofmap", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1031+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1039,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("opsum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1040,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1041,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1042,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1043,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1044,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1045,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1046,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1047,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1048,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1049,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1050,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1051,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1052,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1053,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1054,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1056,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1057,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1058,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1059,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1060,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1061,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1062,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1063,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1064,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1068,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1070,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1071,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_chain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1072+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1076,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1077,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1078,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1080,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1081,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1082,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1084,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1085,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1086,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1087,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1088,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1089,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1090,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1091,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1093,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1094,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1095,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1096,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1097,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1098,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1099,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1100,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1101,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1102,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1103,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1104,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1105,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1106,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1107,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1108,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1109,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1110,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1111,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1112,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1113,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1114,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1115,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1116,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1076,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1117,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1118,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1119,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1120,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1080,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1121,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1122,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1123,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1124,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1125,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1126,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1081,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1127,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1128,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1129,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1130,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1086,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1087,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1131,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1133,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1134,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1121,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1135,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1136,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1126,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1093,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1137,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1138,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1139,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1140,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1098,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1099,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1141,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1142,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1143,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1144,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1104,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1105,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1145,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1146,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1147,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1148,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1110,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1111,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1149,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1150,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1151,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1152,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1116,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1076,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1153,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1154,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1155,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1156,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1080,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1121,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1157,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1158,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1159,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1160,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1126,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1081,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1161,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1163,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1164,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1086,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1087,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1165,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1166,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1167,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1168,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1093,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1169,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1170,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1171,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1172,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1098,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1099,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1173,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1174,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1175,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1176,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1104,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1081,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1177,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1178,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1086,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1105,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1179,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1180,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1181,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1182,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1110,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1111,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1183,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1185,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1186,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1116,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1087,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1187,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1188,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1093,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1189,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1190,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1098,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1099,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+70,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1191,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1192,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1104,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1105,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1193,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1194,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1110,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1111,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+72,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1195,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1196,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1116,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1076,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1197,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1198,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1199,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1200,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1080,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1121,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1201,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1202,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1203,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1204,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1079,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1126,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("weight", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1206+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+73+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ofmap", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1214+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1222,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("opsum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1223,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1224,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1225,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1226,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1227,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1228,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1229,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1230,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1231,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1232,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1233,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1234,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1235,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1236,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1237,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1238,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1239,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1240,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1241,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1242,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1243,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1244,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1245,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1246,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1247,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1248,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1249,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1250,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1251,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1252,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1253,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1254,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_chain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1255+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1259,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1260,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1261,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1263,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1264,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1265,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1266,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1267,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1268,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1269,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1270,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1271,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1272,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1273,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1274,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1275,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1276,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1277,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1278,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1279,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1280,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1281,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1282,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1283,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1284,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1285,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1286,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1287,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1288,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1289,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1290,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1291,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1292,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1293,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1294,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1295,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1296,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1297,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1298,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1299,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1259,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1300,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1301,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1302,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1303,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1263,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1304,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1305,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1306,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1307,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1308,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1309,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1264,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1310,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1311,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1312,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1313,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1269,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1270,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1314,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1315,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1316,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1317,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1275,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1304,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1318,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1319,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1309,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1276,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1320,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1321,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1322,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1323,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1281,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1282,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1324,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1325,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1326,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1327,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1287,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1288,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1328,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1329,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1330,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1331,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1293,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1294,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1332,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1333,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1334,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1335,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1299,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1259,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1336,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1337,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1338,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1339,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1263,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1304,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1340,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1341,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1342,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1343,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1309,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1264,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1344,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1345,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1346,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1347,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1269,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1270,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1348,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1349,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1350,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1351,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1275,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1276,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1352,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1353,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1354,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1355,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1281,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1282,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1356,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1357,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1358,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1359,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1287,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1264,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1360,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1361,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1269,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1288,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1362,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1363,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1365,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1293,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1294,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1367,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1369,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1299,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1270,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1370,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1371,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1275,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1276,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1372,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1373,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1281,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1282,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1374,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1375,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1287,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1288,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1376,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1377,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1293,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1294,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+88,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1378,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1379,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1299,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1259,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1380,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1381,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1382,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1383,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1263,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1304,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1384,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1385,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1386,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1387,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1309,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("weight", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1389+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+89+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ofmap", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1397+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1405,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("opsum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1406,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1407,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1408,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1409,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1411,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1412,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1413,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1414,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1415,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1416,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1417,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1418,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1419,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1420,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1421,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1422,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1423,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1424,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1425,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1426,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1427,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1428,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1429,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1430,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1431,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1432,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1433,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1434,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1435,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1436,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1437,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_chain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1438+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1442,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1443,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1444,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1446,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1447,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1448,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1449,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1450,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1451,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1452,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1453,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1454,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1455,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1456,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1457,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1458,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1459,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1460,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1461,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1462,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1463,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1464,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1465,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1466,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1467,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1468,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1469,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1470,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1471,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1472,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1473,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1474,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1475,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1476,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1477,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1478,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1479,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1480,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1481,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1482,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1442,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1483,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1484,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1485,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1486,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1446,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1487,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1488,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1489,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1490,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1491,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1492,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1447,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1493,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1494,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1495,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1496,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1452,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1453,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1497,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1498,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1499,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1500,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1458,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1487,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+98,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1501,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1502,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1492,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1459,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1503,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1504,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1505,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1506,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1464,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1465,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1507,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1508,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1509,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1510,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1470,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1471,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1511,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1512,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1513,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1514,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1476,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1477,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1515,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1516,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1517,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1518,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1482,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1442,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1519,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1520,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1521,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1522,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1446,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1487,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1523,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1524,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1525,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1526,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1492,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1447,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1527,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1528,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1529,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1530,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1452,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1453,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1531,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1532,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1533,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1534,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1458,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1459,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1535,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1536,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1537,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1538,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1464,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1465,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1539,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1540,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1541,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1542,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1470,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1447,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+99,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1543,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1544,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1452,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1471,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1545,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1546,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1547,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1548,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1476,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1477,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1549,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1550,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1551,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1552,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1482,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1453,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1553,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1554,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1458,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1459,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1555,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1556,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1464,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1465,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+102,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1557,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1558,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1470,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1471,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1559,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1560,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1476,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1477,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1561,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1562,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1482,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1442,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1563,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1564,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1565,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1566,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1446,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1487,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1567,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1568,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1569,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1570,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1492,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_init_sub__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"i_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("weight", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1572+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bias", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+105+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ofmap", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1580+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1588,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("opsum", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1589,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1591,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1592,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1593,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1594,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1595,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1596,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1597,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1598,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1599,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1600,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1601,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1602,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1603,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1604,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1605,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1606,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1607,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1608,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1609,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1610,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1611,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1612,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1613,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1614,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1615,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1616,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1617,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1618,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1619,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1620,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_chain", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1621+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1625,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+113,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1626,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1627,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1629,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1630,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1631,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1632,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1633,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1634,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1635,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1636,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1637,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1638,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1639,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1640,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1641,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1642,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1643,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1644,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1645,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1646,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1647,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1648,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1649,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1650,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1651,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1652,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1653,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1654,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1655,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1656,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1657,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1658,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1659,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1660,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1661,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1662,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1663,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1664,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1625,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1666,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1667,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1668,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1669,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1629,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1670,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1671,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1672,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1673,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1674,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1675,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1630,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1676,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1677,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1679,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1635,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1636,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1680,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1681,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1683,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1641,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1670,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+114,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1685,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1675,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1642,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1686,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1687,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1689,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1647,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1648,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1690,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1691,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1692,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1693,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1653,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1654,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1694,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1695,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1696,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1697,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1659,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1660,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1698,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1699,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1700,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1701,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1625,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1702,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1703,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1704,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1705,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1629,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1670,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1706,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1707,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1708,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1709,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1675,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1630,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1710,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1711,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1712,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1713,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1635,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1636,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1714,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1715,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1716,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1717,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1641,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1642,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1718,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1719,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1720,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1721,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1647,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1648,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1722,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1723,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1724,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1725,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1653,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1630,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+115,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1726,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1727,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1635,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1654,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1728,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1729,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1730,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1731,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1659,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1660,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1732,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1733,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1734,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1735,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1636,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+116,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1736,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1737,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1641,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1642,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+117,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1738,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1739,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1647,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1648,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1740,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1741,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1653,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1654,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1742,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1743,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1659,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1660,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+120,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1744,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1745,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1625,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1746,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1747,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1748,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1749,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1629,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_block[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_PE_block1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1762,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1796,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1571,0,"ifmap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1670,0,"weight",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1750,0,"bias",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1751,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1752,0,"opsum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1753,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1628,0,"ifmap_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1675,0,"weight_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_init_top(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_init_top\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vasic_wrapper___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vasic_wrapper___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasic_wrapper___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasic_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vasic_wrapper___024root__trace_register(Vasic_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_register\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vasic_wrapper___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vasic_wrapper___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vasic_wrapper___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vasic_wrapper___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_const_0_sub_0(Vasic_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vasic_wrapper___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_const_0\n"); );
    // Init
    Vasic_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasic_wrapper___024root*>(voidSelf);
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vasic_wrapper___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_const_0_sub_0(Vasic_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_const_0_sub_0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1797,(7U),32);
    bufp->fullIData(oldp+1798,(5U),32);
    bufp->fullIData(oldp+1799,(0xaU),32);
    bufp->fullCData(oldp+1800,(0U),3);
    bufp->fullCData(oldp+1801,(1U),3);
    bufp->fullCData(oldp+1802,(2U),3);
    bufp->fullCData(oldp+1803,(3U),3);
    bufp->fullCData(oldp+1804,(4U),3);
    bufp->fullCData(oldp+1805,(5U),3);
    bufp->fullCData(oldp+1806,(6U),3);
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_full_0_sub_0(Vasic_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vasic_wrapper___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_full_0\n"); );
    // Init
    Vasic_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasic_wrapper___024root*>(voidSelf);
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vasic_wrapper___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vasic_wrapper___024root__trace_full_0_sub_0(Vasic_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_full_0_sub_0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero[7]),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [0U]),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [1U]),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [2U]),32);
    bufp->fullIData(oldp+20,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [3U]),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [4U]),32);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [5U]),32);
    bufp->fullIData(oldp+23,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [6U]),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [7U]),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [0U]),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [1U]),32);
    bufp->fullIData(oldp+35,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [2U]),32);
    bufp->fullIData(oldp+36,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [3U]),32);
    bufp->fullIData(oldp+37,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [4U]),32);
    bufp->fullIData(oldp+38,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [5U]),32);
    bufp->fullIData(oldp+39,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [6U]),32);
    bufp->fullIData(oldp+40,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [7U]),32);
    bufp->fullIData(oldp+41,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
    bufp->fullIData(oldp+42,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
    bufp->fullIData(oldp+43,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
    bufp->fullIData(oldp+44,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
    bufp->fullIData(oldp+45,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
    bufp->fullIData(oldp+46,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
    bufp->fullIData(oldp+47,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
    bufp->fullIData(oldp+48,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
    bufp->fullIData(oldp+49,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [0U]),32);
    bufp->fullIData(oldp+50,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [1U]),32);
    bufp->fullIData(oldp+51,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [2U]),32);
    bufp->fullIData(oldp+52,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [3U]),32);
    bufp->fullIData(oldp+53,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [4U]),32);
    bufp->fullIData(oldp+54,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [5U]),32);
    bufp->fullIData(oldp+55,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [6U]),32);
    bufp->fullIData(oldp+56,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [7U]),32);
    bufp->fullIData(oldp+57,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
    bufp->fullIData(oldp+59,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
    bufp->fullIData(oldp+61,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
    bufp->fullIData(oldp+62,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
    bufp->fullIData(oldp+63,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
    bufp->fullIData(oldp+64,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
    bufp->fullIData(oldp+65,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [0U]),32);
    bufp->fullIData(oldp+66,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [1U]),32);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [2U]),32);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [3U]),32);
    bufp->fullIData(oldp+69,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [4U]),32);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [5U]),32);
    bufp->fullIData(oldp+71,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [6U]),32);
    bufp->fullIData(oldp+72,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [7U]),32);
    bufp->fullIData(oldp+73,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
    bufp->fullIData(oldp+75,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
    bufp->fullIData(oldp+76,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
    bufp->fullIData(oldp+77,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
    bufp->fullIData(oldp+78,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
    bufp->fullIData(oldp+79,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
    bufp->fullIData(oldp+80,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
    bufp->fullIData(oldp+81,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [0U]),32);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [1U]),32);
    bufp->fullIData(oldp+83,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [2U]),32);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [3U]),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [4U]),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [5U]),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [6U]),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [7U]),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [0U]),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [1U]),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                             [2U]),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [3U]),32);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [4U]),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [5U]),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [6U]),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [7U]),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0]),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1]),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2]),32);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3]),32);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4]),32);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5]),32);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6]),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7]),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [0U]),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [1U]),32);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [2U]),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [3U]),32);
    bufp->fullIData(oldp+117,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [4U]),32);
    bufp->fullIData(oldp+118,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [5U]),32);
    bufp->fullIData(oldp+119,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [6U]),32);
    bufp->fullIData(oldp+120,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias
                              [7U]),32);
    bufp->fullSData(oldp+121,(vlSelfRef.asic_wrapper__DOT__write_cnt_next),11);
    bufp->fullCData(oldp+122,(vlSelfRef.asic_wrapper__DOT__cs_slave_next),3);
    bufp->fullIData(oldp+123,(vlSelfRef.asic_wrapper__DOT__addr_S_reg_next),32);
    bufp->fullCData(oldp+124,(vlSelfRef.asic_wrapper__DOT__BID_S_next),8);
    bufp->fullCData(oldp+125,(vlSelfRef.asic_wrapper__DOT__RID_S_next),8);
    bufp->fullBit(oldp+126,(vlSelfRef.asic_wrapper__DOT__write_error_next));
    bufp->fullIData(oldp+127,(vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next),32);
    bufp->fullIData(oldp+128,(vlSelfRef.asic_wrapper__DOT__ASIC_DATA_next),32);
    bufp->fullSData(oldp+129,(vlSelfRef.asic_wrapper__DOT__write_cnt),11);
    bufp->fullSData(oldp+130,(vlSelfRef.asic_wrapper__DOT__count),11);
    bufp->fullSData(oldp+131,((0x7ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__data_ready_reg)
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelfRef.asic_wrapper__DOT__count))
                                          : ((0x44fU 
                                              == (IData)(vlSelfRef.asic_wrapper__DOT__count))
                                              ? 0U : (IData)(vlSelfRef.asic_wrapper__DOT__count))))),11);
    bufp->fullSData(oldp+132,(vlSelfRef.asic_wrapper__DOT__bias_cnt),11);
    bufp->fullIData(oldp+133,(vlSelfRef.asic_wrapper__DOT__ofmap),32);
    bufp->fullBit(oldp+134,(vlSelfRef.asic_wrapper__DOT__data_ready));
    bufp->fullBit(oldp+135,(vlSelfRef.asic_wrapper__DOT__data_ready_reg));
    bufp->fullBit(oldp+136,(vlSelfRef.asic_wrapper__DOT__data_ready_reg_next));
    bufp->fullBit(oldp+137,(vlSelfRef.asic_wrapper__DOT__bias_write));
    bufp->fullBit(oldp+138,(vlSelfRef.asic_wrapper__DOT__valid));
    bufp->fullIData(oldp+139,(vlSelfRef.asic_wrapper__DOT__i),32);
    bufp->fullCData(oldp+140,(vlSelfRef.asic_wrapper__DOT__state),2);
    bufp->fullCData(oldp+141,(vlSelfRef.asic_wrapper__DOT__next_state),2);
    bufp->fullCData(oldp+142,(vlSelfRef.asic_wrapper__DOT__output_cnt_next),7);
    bufp->fullCData(oldp+143,(vlSelfRef.asic_wrapper__DOT__output_cnt),7);
    bufp->fullCData(oldp+144,(vlSelfRef.asic_wrapper__DOT__ofmap_count),8);
    bufp->fullCData(oldp+145,(vlSelfRef.asic_wrapper__DOT__cs_slave),3);
    bufp->fullIData(oldp+146,(vlSelfRef.asic_wrapper__DOT__addr_S_reg),32);
    bufp->fullBit(oldp+147,(vlSelfRef.asic_wrapper__DOT__write_error));
    bufp->fullIData(oldp+148,(vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE),32);
    bufp->fullIData(oldp+149,(vlSelfRef.asic_wrapper__DOT__DATA),32);
    bufp->fullIData(oldp+150,(vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP),32);
    bufp->fullBit(oldp+151,((1U & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                   >> 3U))));
    bufp->fullSData(oldp+152,((0xfffU & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                         >> 4U))),12);
    bufp->fullBit(oldp+153,((6U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))));
    bufp->fullIData(oldp+154,(vlSelfRef.asic_wrapper__DOT__Top__DOT__i),32);
    bufp->fullBit(oldp+155,((1U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))));
    bufp->fullBit(oldp+156,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_ren));
    bufp->fullBit(oldp+157,((2U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))));
    bufp->fullBit(oldp+158,(vlSelfRef.asic_wrapper__DOT__Top__DOT__weight_ren));
    bufp->fullBit(oldp+159,((3U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))));
    bufp->fullBit(oldp+160,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_ren));
    bufp->fullBit(oldp+161,((5U == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state))));
    bufp->fullBit(oldp+162,(vlSelfRef.asic_wrapper__DOT__Top__DOT__i_en_array));
    bufp->fullBit(oldp+163,(vlSelfRef.asic_wrapper__DOT__Top__DOT__i_en_ppu));
    bufp->fullCData(oldp+164,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[0]),8);
    bufp->fullCData(oldp+165,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[1]),8);
    bufp->fullCData(oldp+166,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[2]),8);
    bufp->fullCData(oldp+167,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[3]),8);
    bufp->fullCData(oldp+168,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[4]),8);
    bufp->fullCData(oldp+169,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[5]),8);
    bufp->fullCData(oldp+170,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[6]),8);
    bufp->fullCData(oldp+171,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire[7]),8);
    bufp->fullIData(oldp+172,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[0]),32);
    bufp->fullIData(oldp+173,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[1]),32);
    bufp->fullIData(oldp+174,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[2]),32);
    bufp->fullIData(oldp+175,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[3]),32);
    bufp->fullIData(oldp+176,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[4]),32);
    bufp->fullIData(oldp+177,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[5]),32);
    bufp->fullIData(oldp+178,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[6]),32);
    bufp->fullIData(oldp+179,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_wire[7]),32);
    bufp->fullIData(oldp+180,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[0]),32);
    bufp->fullIData(oldp+181,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[1]),32);
    bufp->fullIData(oldp+182,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[2]),32);
    bufp->fullIData(oldp+183,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[3]),32);
    bufp->fullIData(oldp+184,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[4]),32);
    bufp->fullIData(oldp+185,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[5]),32);
    bufp->fullIData(oldp+186,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[6]),32);
    bufp->fullIData(oldp+187,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input[7]),32);
    bufp->fullIData(oldp+188,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_input),32);
    bufp->fullSData(oldp+189,(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address),12);
    bufp->fullBit(oldp+190,(vlSelfRef.asic_wrapper__DOT__Top__DOT__valid_array));
    bufp->fullCData(oldp+191,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_output),8);
    bufp->fullIData(oldp+192,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out),32);
    bufp->fullBit(oldp+193,(vlSelfRef.asic_wrapper__DOT__Top__DOT__mode1_step0));
    bufp->fullBit(oldp+194,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage))));
    bufp->fullCData(oldp+195,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ofmap_address),7);
    bufp->fullCData(oldp+196,((0x7fU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))),7);
    bufp->fullCData(oldp+197,((0x1fU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))),5);
    bufp->fullIData(oldp+198,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[0]),32);
    bufp->fullIData(oldp+199,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[1]),32);
    bufp->fullIData(oldp+200,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[2]),32);
    bufp->fullIData(oldp+201,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[3]),32);
    bufp->fullIData(oldp+202,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[4]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[5]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[6]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[7]),32);
    bufp->fullIData(oldp+206,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[8]),32);
    bufp->fullIData(oldp+207,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[9]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[10]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[11]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[12]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[13]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[14]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[15]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[16]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[17]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[18]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[19]),32);
    bufp->fullIData(oldp+218,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[20]),32);
    bufp->fullIData(oldp+219,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[21]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[22]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[23]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[24]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[25]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[26]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[27]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[28]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[29]),32);
    bufp->fullIData(oldp+228,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[30]),32);
    bufp->fullIData(oldp+229,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__ram[31]),32);
    bufp->fullCData(oldp+230,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [0U][0U]),8);
    bufp->fullCData(oldp+231,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [0U][1U]),8);
    bufp->fullCData(oldp+232,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [0U][2U]),8);
    bufp->fullCData(oldp+233,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [0U][3U]),8);
    bufp->fullCData(oldp+234,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [0U][4U]),8);
    bufp->fullCData(oldp+235,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [0U][5U]),8);
    bufp->fullCData(oldp+236,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [0U][6U]),8);
    bufp->fullCData(oldp+237,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [0U][7U]),8);
    bufp->fullCData(oldp+238,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [1U][0U]),8);
    bufp->fullCData(oldp+239,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [1U][1U]),8);
    bufp->fullCData(oldp+240,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [1U][2U]),8);
    bufp->fullCData(oldp+241,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [1U][3U]),8);
    bufp->fullCData(oldp+242,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [1U][4U]),8);
    bufp->fullCData(oldp+243,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [1U][5U]),8);
    bufp->fullCData(oldp+244,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [1U][6U]),8);
    bufp->fullCData(oldp+245,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [1U][7U]),8);
    bufp->fullCData(oldp+246,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [2U][0U]),8);
    bufp->fullCData(oldp+247,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [2U][1U]),8);
    bufp->fullCData(oldp+248,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [2U][2U]),8);
    bufp->fullCData(oldp+249,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [2U][3U]),8);
    bufp->fullCData(oldp+250,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [2U][4U]),8);
    bufp->fullCData(oldp+251,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [2U][5U]),8);
    bufp->fullCData(oldp+252,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [2U][6U]),8);
    bufp->fullCData(oldp+253,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [2U][7U]),8);
    bufp->fullCData(oldp+254,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [3U][0U]),8);
    bufp->fullCData(oldp+255,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [3U][1U]),8);
    bufp->fullCData(oldp+256,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [3U][2U]),8);
    bufp->fullCData(oldp+257,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [3U][3U]),8);
    bufp->fullCData(oldp+258,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [3U][4U]),8);
    bufp->fullCData(oldp+259,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [3U][5U]),8);
    bufp->fullCData(oldp+260,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [3U][6U]),8);
    bufp->fullCData(oldp+261,(vlSelfRef.asic_wrapper__DOT__Top__DOT__GLB_ifmap__DOT__DO_wire
                              [3U][7U]),8);
    bufp->fullBit(oldp+262,(((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage) 
                             & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__valid_array))));
    bufp->fullSData(oldp+263,((0x3ffU & (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__data_address))),10);
    bufp->fullCData(oldp+264,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__valid_chain),8);
    bufp->fullBit(oldp+265,((0xffU == (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__valid_chain))));
    bufp->fullIData(oldp+266,(vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__u_Adder_tree__DOT__i),32);
    bufp->fullCData(oldp+267,(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__cur_state),3);
    bufp->fullCData(oldp+268,(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__next_state),3);
    bufp->fullCData(oldp+269,(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__ppu_count),8);
    bufp->fullCData(oldp+270,(vlSelfRef.asic_wrapper__DOT__Top__DOT__controller__DOT__compute_stage),4);
    bufp->fullIData(oldp+271,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__relu_out),32);
    bufp->fullCData(oldp+272,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_shift),8);
    bufp->fullCData(oldp+273,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_temp),8);
    bufp->fullCData(oldp+274,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                              [0U]),8);
    bufp->fullCData(oldp+275,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[0]),8);
    bufp->fullCData(oldp+276,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[1]),8);
    bufp->fullCData(oldp+277,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[2]),8);
    bufp->fullCData(oldp+278,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[3]),8);
    bufp->fullCData(oldp+279,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[4]),8);
    bufp->fullCData(oldp+280,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[5]),8);
    bufp->fullCData(oldp+281,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[6]),8);
    bufp->fullCData(oldp+282,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[7]),8);
    bufp->fullIData(oldp+283,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[0]),32);
    bufp->fullIData(oldp+284,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[1]),32);
    bufp->fullIData(oldp+285,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[2]),32);
    bufp->fullIData(oldp+286,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[3]),32);
    bufp->fullIData(oldp+287,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[4]),32);
    bufp->fullIData(oldp+288,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[5]),32);
    bufp->fullIData(oldp+289,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[6]),32);
    bufp->fullIData(oldp+290,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[7]),32);
    bufp->fullIData(oldp+291,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[0]),32);
    bufp->fullIData(oldp+292,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[1]),32);
    bufp->fullIData(oldp+293,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[2]),32);
    bufp->fullIData(oldp+294,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[3]),32);
    bufp->fullIData(oldp+295,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[4]),32);
    bufp->fullIData(oldp+296,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[5]),32);
    bufp->fullIData(oldp+297,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[6]),32);
    bufp->fullIData(oldp+298,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap[7]),32);
    bufp->fullBit(oldp+299,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                             [3U])));
    bufp->fullIData(oldp+300,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][0U]),32);
    bufp->fullIData(oldp+301,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][1U]),32);
    bufp->fullIData(oldp+302,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][2U]),32);
    bufp->fullIData(oldp+303,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][3U]),32);
    bufp->fullIData(oldp+304,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][4U]),32);
    bufp->fullIData(oldp+305,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][5U]),32);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][6U]),32);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][7U]),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][0U]),32);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][1U]),32);
    bufp->fullIData(oldp+310,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][2U]),32);
    bufp->fullIData(oldp+311,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][3U]),32);
    bufp->fullIData(oldp+312,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][4U]),32);
    bufp->fullIData(oldp+313,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][5U]),32);
    bufp->fullIData(oldp+314,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][6U]),32);
    bufp->fullIData(oldp+315,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][7U]),32);
    bufp->fullIData(oldp+316,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][0U]),32);
    bufp->fullIData(oldp+317,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][1U]),32);
    bufp->fullIData(oldp+318,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][2U]),32);
    bufp->fullIData(oldp+319,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][3U]),32);
    bufp->fullIData(oldp+320,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][4U]),32);
    bufp->fullIData(oldp+321,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][5U]),32);
    bufp->fullIData(oldp+322,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][6U]),32);
    bufp->fullIData(oldp+323,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][7U]),32);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [3U][0U]),32);
    bufp->fullIData(oldp+325,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [3U][1U]),32);
    bufp->fullIData(oldp+326,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [3U][2U]),32);
    bufp->fullIData(oldp+327,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [3U][3U]),32);
    bufp->fullIData(oldp+328,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [3U][4U]),32);
    bufp->fullIData(oldp+329,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [3U][5U]),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [3U][6U]),32);
    bufp->fullIData(oldp+331,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [3U][7U]),32);
    bufp->fullCData(oldp+332,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain[0]),8);
    bufp->fullCData(oldp+333,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain[1]),8);
    bufp->fullCData(oldp+334,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain[2]),8);
    bufp->fullCData(oldp+335,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain[3]),8);
    bufp->fullCData(oldp+336,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                              [0U]),8);
    bufp->fullIData(oldp+337,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                              [0U]),32);
    bufp->fullIData(oldp+338,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+339,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+340,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
    bufp->fullIData(oldp+341,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+342,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                              [2U]),8);
    bufp->fullIData(oldp+343,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][2U]),32);
    bufp->fullBit(oldp+344,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 2U))));
    bufp->fullIData(oldp+345,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+346,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+347,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+348,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                              [3U]),8);
    bufp->fullIData(oldp+349,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][3U]),32);
    bufp->fullBit(oldp+350,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 3U))));
    bufp->fullIData(oldp+351,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+352,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+353,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+354,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                              [4U]),8);
    bufp->fullIData(oldp+355,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][4U]),32);
    bufp->fullBit(oldp+356,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 4U))));
    bufp->fullIData(oldp+357,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+358,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+359,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+360,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                              [5U]),8);
    bufp->fullIData(oldp+361,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][5U]),32);
    bufp->fullBit(oldp+362,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 5U))));
    bufp->fullIData(oldp+363,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+364,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+365,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+366,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                              [6U]),8);
    bufp->fullIData(oldp+367,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][6U]),32);
    bufp->fullBit(oldp+368,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 6U))));
    bufp->fullIData(oldp+369,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+370,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+371,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+372,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                              [7U]),8);
    bufp->fullIData(oldp+373,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][7U]),32);
    bufp->fullBit(oldp+374,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 7U))));
    bufp->fullIData(oldp+375,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+376,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+377,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+378,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][0U]),32);
    bufp->fullBit(oldp+379,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                             [1U])));
    bufp->fullIData(oldp+380,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+381,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+382,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight
                              [1U]),8);
    bufp->fullIData(oldp+383,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][1U]),32);
    bufp->fullBit(oldp+384,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 1U))));
    bufp->fullIData(oldp+385,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+386,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+387,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+388,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][2U]),32);
    bufp->fullBit(oldp+389,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 2U))));
    bufp->fullIData(oldp+390,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+391,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+392,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][3U]),32);
    bufp->fullBit(oldp+393,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 3U))));
    bufp->fullIData(oldp+394,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+395,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+396,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                              [1U]),32);
    bufp->fullIData(oldp+397,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+398,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+399,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][4U]),32);
    bufp->fullBit(oldp+400,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 4U))));
    bufp->fullIData(oldp+401,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+402,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+403,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][5U]),32);
    bufp->fullBit(oldp+404,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 5U))));
    bufp->fullIData(oldp+405,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+406,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+407,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][6U]),32);
    bufp->fullBit(oldp+408,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 6U))));
    bufp->fullIData(oldp+409,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+410,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+411,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [1U][7U]),32);
    bufp->fullBit(oldp+412,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 7U))));
    bufp->fullIData(oldp+413,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+414,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+415,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][0U]),32);
    bufp->fullBit(oldp+416,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                             [2U])));
    bufp->fullIData(oldp+417,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+418,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+419,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][1U]),32);
    bufp->fullBit(oldp+420,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 1U))));
    bufp->fullIData(oldp+421,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+422,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+423,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][2U]),32);
    bufp->fullBit(oldp+424,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 2U))));
    bufp->fullIData(oldp+425,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+426,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+427,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][3U]),32);
    bufp->fullBit(oldp+428,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 3U))));
    bufp->fullIData(oldp+429,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+430,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+431,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][4U]),32);
    bufp->fullBit(oldp+432,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 4U))));
    bufp->fullIData(oldp+433,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+434,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+435,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][5U]),32);
    bufp->fullBit(oldp+436,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 5U))));
    bufp->fullIData(oldp+437,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+438,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+439,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                              [2U]),32);
    bufp->fullIData(oldp+440,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+441,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+442,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][6U]),32);
    bufp->fullBit(oldp+443,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 6U))));
    bufp->fullIData(oldp+444,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+445,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+446,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [2U][7U]),32);
    bufp->fullBit(oldp+447,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 7U))));
    bufp->fullIData(oldp+448,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+449,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+450,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                              [3U]),32);
    bufp->fullIData(oldp+451,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+452,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+453,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                              [4U]),32);
    bufp->fullIData(oldp+454,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+455,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+456,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                              [5U]),32);
    bufp->fullIData(oldp+457,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+458,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+459,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                              [6U]),32);
    bufp->fullIData(oldp+460,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+461,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+462,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias
                              [7U]),32);
    bufp->fullIData(oldp+463,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+464,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+465,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][0U]),32);
    bufp->fullBit(oldp+466,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                             [0U])));
    bufp->fullIData(oldp+467,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+468,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+469,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__opsum
                              [0U][1U]),32);
    bufp->fullBit(oldp+470,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 1U))));
    bufp->fullIData(oldp+471,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+472,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+473,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                              [1U]),8);
    bufp->fullCData(oldp+474,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
    bufp->fullCData(oldp+475,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
    bufp->fullCData(oldp+476,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
    bufp->fullCData(oldp+477,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
    bufp->fullCData(oldp+478,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
    bufp->fullCData(oldp+479,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
    bufp->fullCData(oldp+480,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
    bufp->fullCData(oldp+481,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
    bufp->fullIData(oldp+482,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
    bufp->fullIData(oldp+483,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
    bufp->fullIData(oldp+484,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
    bufp->fullIData(oldp+485,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
    bufp->fullIData(oldp+486,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
    bufp->fullIData(oldp+487,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
    bufp->fullIData(oldp+488,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
    bufp->fullIData(oldp+489,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
    bufp->fullBit(oldp+490,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                             [3U])));
    bufp->fullIData(oldp+491,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][0U]),32);
    bufp->fullIData(oldp+492,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][1U]),32);
    bufp->fullIData(oldp+493,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][2U]),32);
    bufp->fullIData(oldp+494,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][3U]),32);
    bufp->fullIData(oldp+495,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][4U]),32);
    bufp->fullIData(oldp+496,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][5U]),32);
    bufp->fullIData(oldp+497,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][6U]),32);
    bufp->fullIData(oldp+498,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][7U]),32);
    bufp->fullIData(oldp+499,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][0U]),32);
    bufp->fullIData(oldp+500,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][1U]),32);
    bufp->fullIData(oldp+501,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][2U]),32);
    bufp->fullIData(oldp+502,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][3U]),32);
    bufp->fullIData(oldp+503,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][4U]),32);
    bufp->fullIData(oldp+504,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][5U]),32);
    bufp->fullIData(oldp+505,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][6U]),32);
    bufp->fullIData(oldp+506,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][7U]),32);
    bufp->fullIData(oldp+507,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][0U]),32);
    bufp->fullIData(oldp+508,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][1U]),32);
    bufp->fullIData(oldp+509,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][2U]),32);
    bufp->fullIData(oldp+510,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][3U]),32);
    bufp->fullIData(oldp+511,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][4U]),32);
    bufp->fullIData(oldp+512,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][5U]),32);
    bufp->fullIData(oldp+513,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][6U]),32);
    bufp->fullIData(oldp+514,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][7U]),32);
    bufp->fullIData(oldp+515,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][0U]),32);
    bufp->fullIData(oldp+516,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][1U]),32);
    bufp->fullIData(oldp+517,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][2U]),32);
    bufp->fullIData(oldp+518,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][3U]),32);
    bufp->fullIData(oldp+519,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][4U]),32);
    bufp->fullIData(oldp+520,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][5U]),32);
    bufp->fullIData(oldp+521,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][6U]),32);
    bufp->fullIData(oldp+522,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][7U]),32);
    bufp->fullCData(oldp+523,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
    bufp->fullCData(oldp+524,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
    bufp->fullCData(oldp+525,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
    bufp->fullCData(oldp+526,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
    bufp->fullCData(oldp+527,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [0U]),8);
    bufp->fullIData(oldp+528,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+529,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+530,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
    bufp->fullIData(oldp+531,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+532,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [2U]),8);
    bufp->fullIData(oldp+533,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][2U]),32);
    bufp->fullBit(oldp+534,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 2U))));
    bufp->fullIData(oldp+535,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+536,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+537,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+538,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [3U]),8);
    bufp->fullIData(oldp+539,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][3U]),32);
    bufp->fullBit(oldp+540,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 3U))));
    bufp->fullIData(oldp+541,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+542,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+543,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+544,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [4U]),8);
    bufp->fullIData(oldp+545,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][4U]),32);
    bufp->fullBit(oldp+546,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 4U))));
    bufp->fullIData(oldp+547,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+548,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+549,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+550,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [5U]),8);
    bufp->fullIData(oldp+551,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][5U]),32);
    bufp->fullBit(oldp+552,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 5U))));
    bufp->fullIData(oldp+553,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+554,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+555,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+556,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [6U]),8);
    bufp->fullIData(oldp+557,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][6U]),32);
    bufp->fullBit(oldp+558,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 6U))));
    bufp->fullIData(oldp+559,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+560,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+561,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+562,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [7U]),8);
    bufp->fullIData(oldp+563,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][7U]),32);
    bufp->fullBit(oldp+564,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 7U))));
    bufp->fullIData(oldp+565,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+566,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+567,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+568,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][0U]),32);
    bufp->fullBit(oldp+569,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                             [1U])));
    bufp->fullIData(oldp+570,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+571,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+572,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [1U]),8);
    bufp->fullIData(oldp+573,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][1U]),32);
    bufp->fullBit(oldp+574,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 1U))));
    bufp->fullIData(oldp+575,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+576,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+577,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+578,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][2U]),32);
    bufp->fullBit(oldp+579,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 2U))));
    bufp->fullIData(oldp+580,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+581,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+582,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][3U]),32);
    bufp->fullBit(oldp+583,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 3U))));
    bufp->fullIData(oldp+584,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+585,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+586,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+587,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+588,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][4U]),32);
    bufp->fullBit(oldp+589,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 4U))));
    bufp->fullIData(oldp+590,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+591,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+592,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][5U]),32);
    bufp->fullBit(oldp+593,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 5U))));
    bufp->fullIData(oldp+594,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+595,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+596,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][6U]),32);
    bufp->fullBit(oldp+597,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 6U))));
    bufp->fullIData(oldp+598,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+599,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+600,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][7U]),32);
    bufp->fullBit(oldp+601,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 7U))));
    bufp->fullIData(oldp+602,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+603,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+604,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][0U]),32);
    bufp->fullBit(oldp+605,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                             [2U])));
    bufp->fullIData(oldp+606,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+607,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+608,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][1U]),32);
    bufp->fullBit(oldp+609,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 1U))));
    bufp->fullIData(oldp+610,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+611,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+612,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][2U]),32);
    bufp->fullBit(oldp+613,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 2U))));
    bufp->fullIData(oldp+614,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+615,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+616,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][3U]),32);
    bufp->fullBit(oldp+617,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 3U))));
    bufp->fullIData(oldp+618,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+619,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+620,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][4U]),32);
    bufp->fullBit(oldp+621,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 4U))));
    bufp->fullIData(oldp+622,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+623,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+624,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][5U]),32);
    bufp->fullBit(oldp+625,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 5U))));
    bufp->fullIData(oldp+626,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+627,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+628,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+629,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+630,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][6U]),32);
    bufp->fullBit(oldp+631,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 6U))));
    bufp->fullIData(oldp+632,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+633,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+634,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][7U]),32);
    bufp->fullBit(oldp+635,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 7U))));
    bufp->fullIData(oldp+636,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+637,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+638,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+639,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+640,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+641,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+642,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+643,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+644,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+645,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+646,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+647,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+648,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][0U]),32);
    bufp->fullBit(oldp+649,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                             [0U])));
    bufp->fullIData(oldp+650,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+651,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+652,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][1U]),32);
    bufp->fullBit(oldp+653,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 1U))));
    bufp->fullIData(oldp+654,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+655,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+656,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                              [2U]),8);
    bufp->fullCData(oldp+657,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
    bufp->fullCData(oldp+658,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
    bufp->fullCData(oldp+659,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
    bufp->fullCData(oldp+660,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
    bufp->fullCData(oldp+661,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
    bufp->fullCData(oldp+662,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
    bufp->fullCData(oldp+663,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
    bufp->fullCData(oldp+664,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
    bufp->fullIData(oldp+665,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
    bufp->fullIData(oldp+666,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
    bufp->fullIData(oldp+667,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
    bufp->fullIData(oldp+668,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
    bufp->fullIData(oldp+669,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
    bufp->fullIData(oldp+670,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
    bufp->fullIData(oldp+671,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
    bufp->fullIData(oldp+672,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
    bufp->fullBit(oldp+673,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                             [3U])));
    bufp->fullIData(oldp+674,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][0U]),32);
    bufp->fullIData(oldp+675,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][1U]),32);
    bufp->fullIData(oldp+676,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][2U]),32);
    bufp->fullIData(oldp+677,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][3U]),32);
    bufp->fullIData(oldp+678,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][4U]),32);
    bufp->fullIData(oldp+679,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][5U]),32);
    bufp->fullIData(oldp+680,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][6U]),32);
    bufp->fullIData(oldp+681,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][7U]),32);
    bufp->fullIData(oldp+682,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][0U]),32);
    bufp->fullIData(oldp+683,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][1U]),32);
    bufp->fullIData(oldp+684,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][2U]),32);
    bufp->fullIData(oldp+685,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][3U]),32);
    bufp->fullIData(oldp+686,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][4U]),32);
    bufp->fullIData(oldp+687,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][5U]),32);
    bufp->fullIData(oldp+688,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][6U]),32);
    bufp->fullIData(oldp+689,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][7U]),32);
    bufp->fullIData(oldp+690,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][0U]),32);
    bufp->fullIData(oldp+691,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][1U]),32);
    bufp->fullIData(oldp+692,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][2U]),32);
    bufp->fullIData(oldp+693,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][3U]),32);
    bufp->fullIData(oldp+694,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][4U]),32);
    bufp->fullIData(oldp+695,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][5U]),32);
    bufp->fullIData(oldp+696,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][6U]),32);
    bufp->fullIData(oldp+697,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][7U]),32);
    bufp->fullIData(oldp+698,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][0U]),32);
    bufp->fullIData(oldp+699,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][1U]),32);
    bufp->fullIData(oldp+700,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][2U]),32);
    bufp->fullIData(oldp+701,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][3U]),32);
    bufp->fullIData(oldp+702,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][4U]),32);
    bufp->fullIData(oldp+703,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][5U]),32);
    bufp->fullIData(oldp+704,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][6U]),32);
    bufp->fullIData(oldp+705,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][7U]),32);
    bufp->fullCData(oldp+706,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
    bufp->fullCData(oldp+707,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
    bufp->fullCData(oldp+708,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
    bufp->fullCData(oldp+709,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
    bufp->fullCData(oldp+710,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [0U]),8);
    bufp->fullIData(oldp+711,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+712,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+713,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
    bufp->fullIData(oldp+714,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+715,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [2U]),8);
    bufp->fullIData(oldp+716,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][2U]),32);
    bufp->fullBit(oldp+717,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 2U))));
    bufp->fullIData(oldp+718,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+719,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+720,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+721,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [3U]),8);
    bufp->fullIData(oldp+722,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][3U]),32);
    bufp->fullBit(oldp+723,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 3U))));
    bufp->fullIData(oldp+724,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+725,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+726,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+727,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [4U]),8);
    bufp->fullIData(oldp+728,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][4U]),32);
    bufp->fullBit(oldp+729,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 4U))));
    bufp->fullIData(oldp+730,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+731,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+732,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+733,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [5U]),8);
    bufp->fullIData(oldp+734,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][5U]),32);
    bufp->fullBit(oldp+735,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 5U))));
    bufp->fullIData(oldp+736,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+737,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+738,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+739,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [6U]),8);
    bufp->fullIData(oldp+740,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][6U]),32);
    bufp->fullBit(oldp+741,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 6U))));
    bufp->fullIData(oldp+742,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+743,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+744,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+745,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [7U]),8);
    bufp->fullIData(oldp+746,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][7U]),32);
    bufp->fullBit(oldp+747,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 7U))));
    bufp->fullIData(oldp+748,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+749,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+750,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+751,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][0U]),32);
    bufp->fullBit(oldp+752,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                             [1U])));
    bufp->fullIData(oldp+753,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+754,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+755,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [1U]),8);
    bufp->fullIData(oldp+756,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][1U]),32);
    bufp->fullBit(oldp+757,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 1U))));
    bufp->fullIData(oldp+758,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+759,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+760,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+761,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][2U]),32);
    bufp->fullBit(oldp+762,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 2U))));
    bufp->fullIData(oldp+763,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+764,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+765,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][3U]),32);
    bufp->fullBit(oldp+766,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 3U))));
    bufp->fullIData(oldp+767,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+768,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+769,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+770,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+771,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][4U]),32);
    bufp->fullBit(oldp+772,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 4U))));
    bufp->fullIData(oldp+773,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+774,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+775,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][5U]),32);
    bufp->fullBit(oldp+776,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 5U))));
    bufp->fullIData(oldp+777,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+778,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+779,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][6U]),32);
    bufp->fullBit(oldp+780,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 6U))));
    bufp->fullIData(oldp+781,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+782,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+783,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][7U]),32);
    bufp->fullBit(oldp+784,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 7U))));
    bufp->fullIData(oldp+785,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+786,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+787,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][0U]),32);
    bufp->fullBit(oldp+788,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                             [2U])));
    bufp->fullIData(oldp+789,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+790,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+791,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][1U]),32);
    bufp->fullBit(oldp+792,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 1U))));
    bufp->fullIData(oldp+793,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+794,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+795,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][2U]),32);
    bufp->fullBit(oldp+796,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 2U))));
    bufp->fullIData(oldp+797,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+798,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+799,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][3U]),32);
    bufp->fullBit(oldp+800,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 3U))));
    bufp->fullIData(oldp+801,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+802,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+803,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][4U]),32);
    bufp->fullBit(oldp+804,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 4U))));
    bufp->fullIData(oldp+805,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+806,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+807,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][5U]),32);
    bufp->fullBit(oldp+808,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 5U))));
    bufp->fullIData(oldp+809,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+810,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+811,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+812,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+813,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][6U]),32);
    bufp->fullBit(oldp+814,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 6U))));
    bufp->fullIData(oldp+815,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+816,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+817,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][7U]),32);
    bufp->fullBit(oldp+818,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 7U))));
    bufp->fullIData(oldp+819,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+820,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+821,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+822,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+823,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+824,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+825,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+826,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+827,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+828,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+829,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+830,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+831,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][0U]),32);
    bufp->fullBit(oldp+832,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                             [0U])));
    bufp->fullIData(oldp+833,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+834,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+835,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][1U]),32);
    bufp->fullBit(oldp+836,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 1U))));
    bufp->fullIData(oldp+837,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+838,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+839,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                              [3U]),8);
    bufp->fullCData(oldp+840,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
    bufp->fullCData(oldp+841,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
    bufp->fullCData(oldp+842,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
    bufp->fullCData(oldp+843,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
    bufp->fullCData(oldp+844,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
    bufp->fullCData(oldp+845,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
    bufp->fullCData(oldp+846,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
    bufp->fullCData(oldp+847,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
    bufp->fullIData(oldp+848,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
    bufp->fullIData(oldp+849,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
    bufp->fullIData(oldp+850,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
    bufp->fullIData(oldp+851,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
    bufp->fullIData(oldp+852,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
    bufp->fullIData(oldp+853,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
    bufp->fullIData(oldp+854,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
    bufp->fullIData(oldp+855,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
    bufp->fullBit(oldp+856,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                             [3U])));
    bufp->fullIData(oldp+857,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][0U]),32);
    bufp->fullIData(oldp+858,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][1U]),32);
    bufp->fullIData(oldp+859,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][2U]),32);
    bufp->fullIData(oldp+860,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][3U]),32);
    bufp->fullIData(oldp+861,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][4U]),32);
    bufp->fullIData(oldp+862,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][5U]),32);
    bufp->fullIData(oldp+863,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][6U]),32);
    bufp->fullIData(oldp+864,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][7U]),32);
    bufp->fullIData(oldp+865,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][0U]),32);
    bufp->fullIData(oldp+866,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][1U]),32);
    bufp->fullIData(oldp+867,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][2U]),32);
    bufp->fullIData(oldp+868,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][3U]),32);
    bufp->fullIData(oldp+869,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][4U]),32);
    bufp->fullIData(oldp+870,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][5U]),32);
    bufp->fullIData(oldp+871,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][6U]),32);
    bufp->fullIData(oldp+872,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][7U]),32);
    bufp->fullIData(oldp+873,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][0U]),32);
    bufp->fullIData(oldp+874,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][1U]),32);
    bufp->fullIData(oldp+875,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][2U]),32);
    bufp->fullIData(oldp+876,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][3U]),32);
    bufp->fullIData(oldp+877,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][4U]),32);
    bufp->fullIData(oldp+878,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][5U]),32);
    bufp->fullIData(oldp+879,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][6U]),32);
    bufp->fullIData(oldp+880,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][7U]),32);
    bufp->fullIData(oldp+881,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][0U]),32);
    bufp->fullIData(oldp+882,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][1U]),32);
    bufp->fullIData(oldp+883,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][2U]),32);
    bufp->fullIData(oldp+884,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][3U]),32);
    bufp->fullIData(oldp+885,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][4U]),32);
    bufp->fullIData(oldp+886,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][5U]),32);
    bufp->fullIData(oldp+887,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][6U]),32);
    bufp->fullIData(oldp+888,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [3U][7U]),32);
    bufp->fullCData(oldp+889,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
    bufp->fullCData(oldp+890,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
    bufp->fullCData(oldp+891,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
    bufp->fullCData(oldp+892,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
    bufp->fullCData(oldp+893,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [0U]),8);
    bufp->fullIData(oldp+894,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+895,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+896,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
    bufp->fullIData(oldp+897,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+898,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [2U]),8);
    bufp->fullIData(oldp+899,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][2U]),32);
    bufp->fullBit(oldp+900,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 2U))));
    bufp->fullIData(oldp+901,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+902,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+903,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+904,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [3U]),8);
    bufp->fullIData(oldp+905,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][3U]),32);
    bufp->fullBit(oldp+906,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 3U))));
    bufp->fullIData(oldp+907,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+908,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+909,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+910,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [4U]),8);
    bufp->fullIData(oldp+911,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][4U]),32);
    bufp->fullBit(oldp+912,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 4U))));
    bufp->fullIData(oldp+913,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+914,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+915,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+916,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [5U]),8);
    bufp->fullIData(oldp+917,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][5U]),32);
    bufp->fullBit(oldp+918,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 5U))));
    bufp->fullIData(oldp+919,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+920,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+921,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+922,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [6U]),8);
    bufp->fullIData(oldp+923,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][6U]),32);
    bufp->fullBit(oldp+924,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 6U))));
    bufp->fullIData(oldp+925,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+926,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+927,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+928,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [7U]),8);
    bufp->fullIData(oldp+929,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [0U][7U]),32);
    bufp->fullBit(oldp+930,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [0U] >> 7U))));
    bufp->fullIData(oldp+931,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+932,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+933,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+934,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][0U]),32);
    bufp->fullBit(oldp+935,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                             [1U])));
    bufp->fullIData(oldp+936,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+937,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+938,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                              [1U]),8);
    bufp->fullIData(oldp+939,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][1U]),32);
    bufp->fullBit(oldp+940,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 1U))));
    bufp->fullIData(oldp+941,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+942,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+943,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+944,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][2U]),32);
    bufp->fullBit(oldp+945,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 2U))));
    bufp->fullIData(oldp+946,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+947,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+948,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][3U]),32);
    bufp->fullBit(oldp+949,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 3U))));
    bufp->fullIData(oldp+950,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+951,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+952,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+953,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+954,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][4U]),32);
    bufp->fullBit(oldp+955,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 4U))));
    bufp->fullIData(oldp+956,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+957,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+958,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][5U]),32);
    bufp->fullBit(oldp+959,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 5U))));
    bufp->fullIData(oldp+960,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+961,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+962,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][6U]),32);
    bufp->fullBit(oldp+963,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 6U))));
    bufp->fullIData(oldp+964,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+965,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+966,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [1U][7U]),32);
    bufp->fullBit(oldp+967,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [1U] >> 7U))));
    bufp->fullIData(oldp+968,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+969,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+970,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][0U]),32);
    bufp->fullBit(oldp+971,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                             [2U])));
    bufp->fullIData(oldp+972,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+973,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+974,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][1U]),32);
    bufp->fullBit(oldp+975,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 1U))));
    bufp->fullIData(oldp+976,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+977,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+978,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][2U]),32);
    bufp->fullBit(oldp+979,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 2U))));
    bufp->fullIData(oldp+980,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+981,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+982,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][3U]),32);
    bufp->fullBit(oldp+983,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 3U))));
    bufp->fullIData(oldp+984,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+985,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+986,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][4U]),32);
    bufp->fullBit(oldp+987,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 4U))));
    bufp->fullIData(oldp+988,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+989,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+990,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][5U]),32);
    bufp->fullBit(oldp+991,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 5U))));
    bufp->fullIData(oldp+992,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+993,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+994,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+995,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+996,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                              [2U][6U]),32);
    bufp->fullBit(oldp+997,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                   [2U] >> 6U))));
    bufp->fullIData(oldp+998,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+999,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1000,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][7U]),32);
    bufp->fullBit(oldp+1001,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 7U))));
    bufp->fullIData(oldp+1002,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1003,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1004,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1005,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1006,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1007,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1008,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1009,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1010,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1011,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1012,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1013,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1014,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][0U]),32);
    bufp->fullBit(oldp+1015,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [0U])));
    bufp->fullIData(oldp+1016,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1017,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1018,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][1U]),32);
    bufp->fullBit(oldp+1019,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 1U))));
    bufp->fullIData(oldp+1020,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1021,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+1022,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                               [4U]),8);
    bufp->fullCData(oldp+1023,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
    bufp->fullCData(oldp+1024,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
    bufp->fullCData(oldp+1025,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
    bufp->fullCData(oldp+1026,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
    bufp->fullCData(oldp+1027,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
    bufp->fullCData(oldp+1028,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
    bufp->fullCData(oldp+1029,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
    bufp->fullCData(oldp+1030,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
    bufp->fullIData(oldp+1031,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
    bufp->fullIData(oldp+1032,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
    bufp->fullIData(oldp+1033,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
    bufp->fullIData(oldp+1034,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
    bufp->fullIData(oldp+1035,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
    bufp->fullIData(oldp+1036,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
    bufp->fullIData(oldp+1037,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
    bufp->fullIData(oldp+1038,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
    bufp->fullBit(oldp+1039,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [3U])));
    bufp->fullIData(oldp+1040,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][0U]),32);
    bufp->fullIData(oldp+1041,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][1U]),32);
    bufp->fullIData(oldp+1042,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][2U]),32);
    bufp->fullIData(oldp+1043,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][3U]),32);
    bufp->fullIData(oldp+1044,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][4U]),32);
    bufp->fullIData(oldp+1045,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][5U]),32);
    bufp->fullIData(oldp+1046,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][6U]),32);
    bufp->fullIData(oldp+1047,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][7U]),32);
    bufp->fullIData(oldp+1048,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][0U]),32);
    bufp->fullIData(oldp+1049,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][1U]),32);
    bufp->fullIData(oldp+1050,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][2U]),32);
    bufp->fullIData(oldp+1051,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][3U]),32);
    bufp->fullIData(oldp+1052,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][4U]),32);
    bufp->fullIData(oldp+1053,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][5U]),32);
    bufp->fullIData(oldp+1054,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][6U]),32);
    bufp->fullIData(oldp+1055,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][7U]),32);
    bufp->fullIData(oldp+1056,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][0U]),32);
    bufp->fullIData(oldp+1057,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][1U]),32);
    bufp->fullIData(oldp+1058,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][2U]),32);
    bufp->fullIData(oldp+1059,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][3U]),32);
    bufp->fullIData(oldp+1060,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][4U]),32);
    bufp->fullIData(oldp+1061,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][5U]),32);
    bufp->fullIData(oldp+1062,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][6U]),32);
    bufp->fullIData(oldp+1063,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][7U]),32);
    bufp->fullIData(oldp+1064,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][0U]),32);
    bufp->fullIData(oldp+1065,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][1U]),32);
    bufp->fullIData(oldp+1066,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][2U]),32);
    bufp->fullIData(oldp+1067,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][3U]),32);
    bufp->fullIData(oldp+1068,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][4U]),32);
    bufp->fullIData(oldp+1069,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][5U]),32);
    bufp->fullIData(oldp+1070,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][6U]),32);
    bufp->fullIData(oldp+1071,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][7U]),32);
    bufp->fullCData(oldp+1072,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
    bufp->fullCData(oldp+1073,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
    bufp->fullCData(oldp+1074,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
    bufp->fullCData(oldp+1075,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
    bufp->fullCData(oldp+1076,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [0U]),8);
    bufp->fullIData(oldp+1077,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1078,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1079,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
    bufp->fullIData(oldp+1080,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1081,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [2U]),8);
    bufp->fullIData(oldp+1082,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][2U]),32);
    bufp->fullBit(oldp+1083,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 2U))));
    bufp->fullIData(oldp+1084,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1085,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1086,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1087,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [3U]),8);
    bufp->fullIData(oldp+1088,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][3U]),32);
    bufp->fullBit(oldp+1089,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 3U))));
    bufp->fullIData(oldp+1090,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1091,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1092,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1093,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [4U]),8);
    bufp->fullIData(oldp+1094,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][4U]),32);
    bufp->fullBit(oldp+1095,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 4U))));
    bufp->fullIData(oldp+1096,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1097,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1098,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1099,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [5U]),8);
    bufp->fullIData(oldp+1100,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][5U]),32);
    bufp->fullBit(oldp+1101,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 5U))));
    bufp->fullIData(oldp+1102,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1103,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1104,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1105,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [6U]),8);
    bufp->fullIData(oldp+1106,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][6U]),32);
    bufp->fullBit(oldp+1107,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 6U))));
    bufp->fullIData(oldp+1108,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1109,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1110,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1111,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [7U]),8);
    bufp->fullIData(oldp+1112,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][7U]),32);
    bufp->fullBit(oldp+1113,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 7U))));
    bufp->fullIData(oldp+1114,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1115,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1116,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+1117,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][0U]),32);
    bufp->fullBit(oldp+1118,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [1U])));
    bufp->fullIData(oldp+1119,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1120,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+1121,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [1U]),8);
    bufp->fullIData(oldp+1122,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][1U]),32);
    bufp->fullBit(oldp+1123,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 1U))));
    bufp->fullIData(oldp+1124,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1125,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1126,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+1127,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][2U]),32);
    bufp->fullBit(oldp+1128,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 2U))));
    bufp->fullIData(oldp+1129,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1130,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1131,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][3U]),32);
    bufp->fullBit(oldp+1132,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 3U))));
    bufp->fullIData(oldp+1133,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1134,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1135,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1136,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1137,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][4U]),32);
    bufp->fullBit(oldp+1138,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 4U))));
    bufp->fullIData(oldp+1139,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1140,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1141,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][5U]),32);
    bufp->fullBit(oldp+1142,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 5U))));
    bufp->fullIData(oldp+1143,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1144,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1145,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][6U]),32);
    bufp->fullBit(oldp+1146,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 6U))));
    bufp->fullIData(oldp+1147,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1148,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1149,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][7U]),32);
    bufp->fullBit(oldp+1150,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 7U))));
    bufp->fullIData(oldp+1151,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1152,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1153,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][0U]),32);
    bufp->fullBit(oldp+1154,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [2U])));
    bufp->fullIData(oldp+1155,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1156,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1157,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][1U]),32);
    bufp->fullBit(oldp+1158,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 1U))));
    bufp->fullIData(oldp+1159,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1160,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1161,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][2U]),32);
    bufp->fullBit(oldp+1162,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 2U))));
    bufp->fullIData(oldp+1163,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1164,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1165,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][3U]),32);
    bufp->fullBit(oldp+1166,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 3U))));
    bufp->fullIData(oldp+1167,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1168,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1169,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][4U]),32);
    bufp->fullBit(oldp+1170,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 4U))));
    bufp->fullIData(oldp+1171,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1172,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1173,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][5U]),32);
    bufp->fullBit(oldp+1174,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 5U))));
    bufp->fullIData(oldp+1175,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1176,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1177,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1178,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1179,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][6U]),32);
    bufp->fullBit(oldp+1180,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 6U))));
    bufp->fullIData(oldp+1181,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1182,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1183,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][7U]),32);
    bufp->fullBit(oldp+1184,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 7U))));
    bufp->fullIData(oldp+1185,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1186,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1187,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1188,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1189,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1190,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1191,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1192,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1193,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1194,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1195,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1196,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1197,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][0U]),32);
    bufp->fullBit(oldp+1198,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [0U])));
    bufp->fullIData(oldp+1199,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1200,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1201,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][1U]),32);
    bufp->fullBit(oldp+1202,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 1U))));
    bufp->fullIData(oldp+1203,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1204,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+1205,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                               [5U]),8);
    bufp->fullCData(oldp+1206,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
    bufp->fullCData(oldp+1207,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
    bufp->fullCData(oldp+1208,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
    bufp->fullCData(oldp+1209,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
    bufp->fullCData(oldp+1210,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
    bufp->fullCData(oldp+1211,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
    bufp->fullCData(oldp+1212,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
    bufp->fullCData(oldp+1213,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
    bufp->fullIData(oldp+1214,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
    bufp->fullIData(oldp+1215,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
    bufp->fullIData(oldp+1216,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
    bufp->fullIData(oldp+1217,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
    bufp->fullIData(oldp+1218,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
    bufp->fullIData(oldp+1219,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
    bufp->fullIData(oldp+1220,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
    bufp->fullIData(oldp+1221,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
    bufp->fullBit(oldp+1222,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [3U])));
    bufp->fullIData(oldp+1223,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][0U]),32);
    bufp->fullIData(oldp+1224,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][1U]),32);
    bufp->fullIData(oldp+1225,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][2U]),32);
    bufp->fullIData(oldp+1226,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][3U]),32);
    bufp->fullIData(oldp+1227,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][4U]),32);
    bufp->fullIData(oldp+1228,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][5U]),32);
    bufp->fullIData(oldp+1229,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][6U]),32);
    bufp->fullIData(oldp+1230,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][7U]),32);
    bufp->fullIData(oldp+1231,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][0U]),32);
    bufp->fullIData(oldp+1232,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][1U]),32);
    bufp->fullIData(oldp+1233,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][2U]),32);
    bufp->fullIData(oldp+1234,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][3U]),32);
    bufp->fullIData(oldp+1235,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][4U]),32);
    bufp->fullIData(oldp+1236,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][5U]),32);
    bufp->fullIData(oldp+1237,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][6U]),32);
    bufp->fullIData(oldp+1238,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][7U]),32);
    bufp->fullIData(oldp+1239,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][0U]),32);
    bufp->fullIData(oldp+1240,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][1U]),32);
    bufp->fullIData(oldp+1241,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][2U]),32);
    bufp->fullIData(oldp+1242,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][3U]),32);
    bufp->fullIData(oldp+1243,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][4U]),32);
    bufp->fullIData(oldp+1244,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][5U]),32);
    bufp->fullIData(oldp+1245,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][6U]),32);
    bufp->fullIData(oldp+1246,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][7U]),32);
    bufp->fullIData(oldp+1247,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][0U]),32);
    bufp->fullIData(oldp+1248,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][1U]),32);
    bufp->fullIData(oldp+1249,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][2U]),32);
    bufp->fullIData(oldp+1250,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][3U]),32);
    bufp->fullIData(oldp+1251,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][4U]),32);
    bufp->fullIData(oldp+1252,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][5U]),32);
    bufp->fullIData(oldp+1253,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][6U]),32);
    bufp->fullIData(oldp+1254,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][7U]),32);
    bufp->fullCData(oldp+1255,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
    bufp->fullCData(oldp+1256,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
    bufp->fullCData(oldp+1257,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
    bufp->fullCData(oldp+1258,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
    bufp->fullCData(oldp+1259,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [0U]),8);
    bufp->fullIData(oldp+1260,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1261,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1262,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
    bufp->fullIData(oldp+1263,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1264,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [2U]),8);
    bufp->fullIData(oldp+1265,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][2U]),32);
    bufp->fullBit(oldp+1266,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 2U))));
    bufp->fullIData(oldp+1267,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1268,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1269,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1270,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [3U]),8);
    bufp->fullIData(oldp+1271,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][3U]),32);
    bufp->fullBit(oldp+1272,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 3U))));
    bufp->fullIData(oldp+1273,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1274,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1275,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1276,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [4U]),8);
    bufp->fullIData(oldp+1277,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][4U]),32);
    bufp->fullBit(oldp+1278,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 4U))));
    bufp->fullIData(oldp+1279,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1280,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1281,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1282,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [5U]),8);
    bufp->fullIData(oldp+1283,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][5U]),32);
    bufp->fullBit(oldp+1284,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 5U))));
    bufp->fullIData(oldp+1285,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1286,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1287,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1288,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [6U]),8);
    bufp->fullIData(oldp+1289,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][6U]),32);
    bufp->fullBit(oldp+1290,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 6U))));
    bufp->fullIData(oldp+1291,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1292,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1293,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1294,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [7U]),8);
    bufp->fullIData(oldp+1295,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][7U]),32);
    bufp->fullBit(oldp+1296,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 7U))));
    bufp->fullIData(oldp+1297,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1298,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1299,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+1300,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][0U]),32);
    bufp->fullBit(oldp+1301,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [1U])));
    bufp->fullIData(oldp+1302,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1303,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+1304,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [1U]),8);
    bufp->fullIData(oldp+1305,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][1U]),32);
    bufp->fullBit(oldp+1306,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 1U))));
    bufp->fullIData(oldp+1307,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1308,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1309,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+1310,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][2U]),32);
    bufp->fullBit(oldp+1311,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 2U))));
    bufp->fullIData(oldp+1312,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1313,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1314,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][3U]),32);
    bufp->fullBit(oldp+1315,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 3U))));
    bufp->fullIData(oldp+1316,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1317,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1318,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1319,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1320,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][4U]),32);
    bufp->fullBit(oldp+1321,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 4U))));
    bufp->fullIData(oldp+1322,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1323,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1324,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][5U]),32);
    bufp->fullBit(oldp+1325,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 5U))));
    bufp->fullIData(oldp+1326,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1327,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1328,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][6U]),32);
    bufp->fullBit(oldp+1329,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 6U))));
    bufp->fullIData(oldp+1330,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1331,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1332,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][7U]),32);
    bufp->fullBit(oldp+1333,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 7U))));
    bufp->fullIData(oldp+1334,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1335,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1336,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][0U]),32);
    bufp->fullBit(oldp+1337,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [2U])));
    bufp->fullIData(oldp+1338,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1339,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1340,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][1U]),32);
    bufp->fullBit(oldp+1341,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 1U))));
    bufp->fullIData(oldp+1342,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1343,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1344,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][2U]),32);
    bufp->fullBit(oldp+1345,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 2U))));
    bufp->fullIData(oldp+1346,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1347,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1348,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][3U]),32);
    bufp->fullBit(oldp+1349,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 3U))));
    bufp->fullIData(oldp+1350,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1351,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1352,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][4U]),32);
    bufp->fullBit(oldp+1353,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 4U))));
    bufp->fullIData(oldp+1354,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1355,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1356,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][5U]),32);
    bufp->fullBit(oldp+1357,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 5U))));
    bufp->fullIData(oldp+1358,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1359,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1360,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1361,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1362,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][6U]),32);
    bufp->fullBit(oldp+1363,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 6U))));
    bufp->fullIData(oldp+1364,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1365,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1366,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][7U]),32);
    bufp->fullBit(oldp+1367,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 7U))));
    bufp->fullIData(oldp+1368,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1369,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1370,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1371,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1372,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1373,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1374,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1375,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1376,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1377,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1378,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1379,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1380,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][0U]),32);
    bufp->fullBit(oldp+1381,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [0U])));
    bufp->fullIData(oldp+1382,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1383,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1384,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][1U]),32);
    bufp->fullBit(oldp+1385,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 1U))));
    bufp->fullIData(oldp+1386,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1387,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+1388,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                               [6U]),8);
    bufp->fullCData(oldp+1389,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
    bufp->fullCData(oldp+1390,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
    bufp->fullCData(oldp+1391,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
    bufp->fullCData(oldp+1392,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
    bufp->fullCData(oldp+1393,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
    bufp->fullCData(oldp+1394,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
    bufp->fullCData(oldp+1395,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
    bufp->fullCData(oldp+1396,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
    bufp->fullIData(oldp+1397,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
    bufp->fullIData(oldp+1398,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
    bufp->fullIData(oldp+1399,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
    bufp->fullIData(oldp+1400,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
    bufp->fullIData(oldp+1401,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
    bufp->fullIData(oldp+1402,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
    bufp->fullIData(oldp+1403,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
    bufp->fullIData(oldp+1404,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
    bufp->fullBit(oldp+1405,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [3U])));
    bufp->fullIData(oldp+1406,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][0U]),32);
    bufp->fullIData(oldp+1407,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][1U]),32);
    bufp->fullIData(oldp+1408,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][2U]),32);
    bufp->fullIData(oldp+1409,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][3U]),32);
    bufp->fullIData(oldp+1410,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][4U]),32);
    bufp->fullIData(oldp+1411,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][5U]),32);
    bufp->fullIData(oldp+1412,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][6U]),32);
    bufp->fullIData(oldp+1413,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][7U]),32);
    bufp->fullIData(oldp+1414,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][0U]),32);
    bufp->fullIData(oldp+1415,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][1U]),32);
    bufp->fullIData(oldp+1416,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][2U]),32);
    bufp->fullIData(oldp+1417,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][3U]),32);
    bufp->fullIData(oldp+1418,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][4U]),32);
    bufp->fullIData(oldp+1419,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][5U]),32);
    bufp->fullIData(oldp+1420,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][6U]),32);
    bufp->fullIData(oldp+1421,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][7U]),32);
    bufp->fullIData(oldp+1422,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][0U]),32);
    bufp->fullIData(oldp+1423,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][1U]),32);
    bufp->fullIData(oldp+1424,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][2U]),32);
    bufp->fullIData(oldp+1425,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][3U]),32);
    bufp->fullIData(oldp+1426,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][4U]),32);
    bufp->fullIData(oldp+1427,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][5U]),32);
    bufp->fullIData(oldp+1428,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][6U]),32);
    bufp->fullIData(oldp+1429,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][7U]),32);
    bufp->fullIData(oldp+1430,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][0U]),32);
    bufp->fullIData(oldp+1431,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][1U]),32);
    bufp->fullIData(oldp+1432,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][2U]),32);
    bufp->fullIData(oldp+1433,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][3U]),32);
    bufp->fullIData(oldp+1434,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][4U]),32);
    bufp->fullIData(oldp+1435,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][5U]),32);
    bufp->fullIData(oldp+1436,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][6U]),32);
    bufp->fullIData(oldp+1437,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][7U]),32);
    bufp->fullCData(oldp+1438,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
    bufp->fullCData(oldp+1439,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
    bufp->fullCData(oldp+1440,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
    bufp->fullCData(oldp+1441,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
    bufp->fullCData(oldp+1442,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [0U]),8);
    bufp->fullIData(oldp+1443,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1444,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1445,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
    bufp->fullIData(oldp+1446,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1447,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [2U]),8);
    bufp->fullIData(oldp+1448,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][2U]),32);
    bufp->fullBit(oldp+1449,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 2U))));
    bufp->fullIData(oldp+1450,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1451,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1452,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1453,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [3U]),8);
    bufp->fullIData(oldp+1454,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][3U]),32);
    bufp->fullBit(oldp+1455,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 3U))));
    bufp->fullIData(oldp+1456,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1457,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1458,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1459,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [4U]),8);
    bufp->fullIData(oldp+1460,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][4U]),32);
    bufp->fullBit(oldp+1461,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 4U))));
    bufp->fullIData(oldp+1462,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1463,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1464,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1465,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [5U]),8);
    bufp->fullIData(oldp+1466,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][5U]),32);
    bufp->fullBit(oldp+1467,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 5U))));
    bufp->fullIData(oldp+1468,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1469,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1470,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1471,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [6U]),8);
    bufp->fullIData(oldp+1472,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][6U]),32);
    bufp->fullBit(oldp+1473,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 6U))));
    bufp->fullIData(oldp+1474,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1475,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1476,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1477,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [7U]),8);
    bufp->fullIData(oldp+1478,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][7U]),32);
    bufp->fullBit(oldp+1479,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 7U))));
    bufp->fullIData(oldp+1480,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1481,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1482,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+1483,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][0U]),32);
    bufp->fullBit(oldp+1484,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [1U])));
    bufp->fullIData(oldp+1485,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1486,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+1487,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [1U]),8);
    bufp->fullIData(oldp+1488,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][1U]),32);
    bufp->fullBit(oldp+1489,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 1U))));
    bufp->fullIData(oldp+1490,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1491,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1492,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+1493,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][2U]),32);
    bufp->fullBit(oldp+1494,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 2U))));
    bufp->fullIData(oldp+1495,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1496,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1497,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][3U]),32);
    bufp->fullBit(oldp+1498,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 3U))));
    bufp->fullIData(oldp+1499,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1500,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1501,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1502,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1503,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][4U]),32);
    bufp->fullBit(oldp+1504,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 4U))));
    bufp->fullIData(oldp+1505,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1506,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1507,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][5U]),32);
    bufp->fullBit(oldp+1508,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 5U))));
    bufp->fullIData(oldp+1509,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1510,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1511,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][6U]),32);
    bufp->fullBit(oldp+1512,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 6U))));
    bufp->fullIData(oldp+1513,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1514,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1515,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][7U]),32);
    bufp->fullBit(oldp+1516,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 7U))));
    bufp->fullIData(oldp+1517,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1518,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1519,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][0U]),32);
    bufp->fullBit(oldp+1520,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [2U])));
    bufp->fullIData(oldp+1521,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1522,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1523,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][1U]),32);
    bufp->fullBit(oldp+1524,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 1U))));
    bufp->fullIData(oldp+1525,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1526,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1527,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][2U]),32);
    bufp->fullBit(oldp+1528,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 2U))));
    bufp->fullIData(oldp+1529,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1530,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1531,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][3U]),32);
    bufp->fullBit(oldp+1532,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 3U))));
    bufp->fullIData(oldp+1533,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1534,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1535,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][4U]),32);
    bufp->fullBit(oldp+1536,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 4U))));
    bufp->fullIData(oldp+1537,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1538,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1539,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][5U]),32);
    bufp->fullBit(oldp+1540,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 5U))));
    bufp->fullIData(oldp+1541,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1542,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1543,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1544,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1545,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][6U]),32);
    bufp->fullBit(oldp+1546,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 6U))));
    bufp->fullIData(oldp+1547,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1548,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1549,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][7U]),32);
    bufp->fullBit(oldp+1550,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 7U))));
    bufp->fullIData(oldp+1551,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1552,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1553,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1554,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1555,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1556,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1557,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1558,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1559,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1560,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1561,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1562,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1563,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][0U]),32);
    bufp->fullBit(oldp+1564,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [0U])));
    bufp->fullIData(oldp+1565,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1566,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1567,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][1U]),32);
    bufp->fullBit(oldp+1568,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 1U))));
    bufp->fullIData(oldp+1569,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1570,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+1571,(vlSelfRef.asic_wrapper__DOT__Top__DOT__ifmap_wire
                               [7U]),8);
    bufp->fullCData(oldp+1572,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0]),8);
    bufp->fullCData(oldp+1573,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1]),8);
    bufp->fullCData(oldp+1574,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2]),8);
    bufp->fullCData(oldp+1575,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3]),8);
    bufp->fullCData(oldp+1576,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4]),8);
    bufp->fullCData(oldp+1577,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5]),8);
    bufp->fullCData(oldp+1578,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6]),8);
    bufp->fullCData(oldp+1579,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7]),8);
    bufp->fullIData(oldp+1580,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[0]),32);
    bufp->fullIData(oldp+1581,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[1]),32);
    bufp->fullIData(oldp+1582,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[2]),32);
    bufp->fullIData(oldp+1583,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[3]),32);
    bufp->fullIData(oldp+1584,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[4]),32);
    bufp->fullIData(oldp+1585,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[5]),32);
    bufp->fullIData(oldp+1586,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[6]),32);
    bufp->fullIData(oldp+1587,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap[7]),32);
    bufp->fullBit(oldp+1588,((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [3U])));
    bufp->fullIData(oldp+1589,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][0U]),32);
    bufp->fullIData(oldp+1590,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][1U]),32);
    bufp->fullIData(oldp+1591,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][2U]),32);
    bufp->fullIData(oldp+1592,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][3U]),32);
    bufp->fullIData(oldp+1593,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][4U]),32);
    bufp->fullIData(oldp+1594,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][5U]),32);
    bufp->fullIData(oldp+1595,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][6U]),32);
    bufp->fullIData(oldp+1596,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][7U]),32);
    bufp->fullIData(oldp+1597,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][0U]),32);
    bufp->fullIData(oldp+1598,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][1U]),32);
    bufp->fullIData(oldp+1599,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][2U]),32);
    bufp->fullIData(oldp+1600,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][3U]),32);
    bufp->fullIData(oldp+1601,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][4U]),32);
    bufp->fullIData(oldp+1602,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][5U]),32);
    bufp->fullIData(oldp+1603,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][6U]),32);
    bufp->fullIData(oldp+1604,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][7U]),32);
    bufp->fullIData(oldp+1605,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][0U]),32);
    bufp->fullIData(oldp+1606,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][1U]),32);
    bufp->fullIData(oldp+1607,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][2U]),32);
    bufp->fullIData(oldp+1608,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][3U]),32);
    bufp->fullIData(oldp+1609,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][4U]),32);
    bufp->fullIData(oldp+1610,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][5U]),32);
    bufp->fullIData(oldp+1611,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][6U]),32);
    bufp->fullIData(oldp+1612,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][7U]),32);
    bufp->fullIData(oldp+1613,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][0U]),32);
    bufp->fullIData(oldp+1614,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][1U]),32);
    bufp->fullIData(oldp+1615,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][2U]),32);
    bufp->fullIData(oldp+1616,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][3U]),32);
    bufp->fullIData(oldp+1617,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][4U]),32);
    bufp->fullIData(oldp+1618,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][5U]),32);
    bufp->fullIData(oldp+1619,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][6U]),32);
    bufp->fullIData(oldp+1620,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [3U][7U]),32);
    bufp->fullCData(oldp+1621,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[0]),8);
    bufp->fullCData(oldp+1622,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[1]),8);
    bufp->fullCData(oldp+1623,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[2]),8);
    bufp->fullCData(oldp+1624,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain[3]),8);
    bufp->fullCData(oldp+1625,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [0U]),8);
    bufp->fullIData(oldp+1626,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1627,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1628,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__ifmap_adjusted),32);
    bufp->fullIData(oldp+1629,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__0__KET____DOT__gen_PE_block0__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1630,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [2U]),8);
    bufp->fullIData(oldp+1631,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][2U]),32);
    bufp->fullBit(oldp+1632,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 2U))));
    bufp->fullIData(oldp+1633,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1634,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1635,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__10__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1636,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [3U]),8);
    bufp->fullIData(oldp+1637,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][3U]),32);
    bufp->fullBit(oldp+1638,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 3U))));
    bufp->fullIData(oldp+1639,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1640,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1641,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__11__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1642,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [4U]),8);
    bufp->fullIData(oldp+1643,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][4U]),32);
    bufp->fullBit(oldp+1644,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 4U))));
    bufp->fullIData(oldp+1645,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1646,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1647,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__12__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1648,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [5U]),8);
    bufp->fullIData(oldp+1649,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][5U]),32);
    bufp->fullBit(oldp+1650,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 5U))));
    bufp->fullIData(oldp+1651,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1652,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1653,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__13__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1654,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [6U]),8);
    bufp->fullIData(oldp+1655,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][6U]),32);
    bufp->fullBit(oldp+1656,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 6U))));
    bufp->fullIData(oldp+1657,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1658,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1659,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__14__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullCData(oldp+1660,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [7U]),8);
    bufp->fullIData(oldp+1661,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][7U]),32);
    bufp->fullBit(oldp+1662,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 7U))));
    bufp->fullIData(oldp+1663,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1664,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1665,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__15__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+1666,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][0U]),32);
    bufp->fullBit(oldp+1667,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [1U])));
    bufp->fullIData(oldp+1668,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1669,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__16__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullCData(oldp+1670,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight
                               [1U]),8);
    bufp->fullIData(oldp+1671,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][1U]),32);
    bufp->fullBit(oldp+1672,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 1U))));
    bufp->fullIData(oldp+1673,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1674,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1675,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__PE_block__BRA__17__KET____DOT__gen_PE_block1__DOT__pe__DOT__weight_adjusted),32);
    bufp->fullIData(oldp+1676,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][2U]),32);
    bufp->fullBit(oldp+1677,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 2U))));
    bufp->fullIData(oldp+1678,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1679,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__18__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1680,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][3U]),32);
    bufp->fullBit(oldp+1681,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 3U))));
    bufp->fullIData(oldp+1682,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1683,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__19__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1684,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1685,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__1__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1686,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][4U]),32);
    bufp->fullBit(oldp+1687,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 4U))));
    bufp->fullIData(oldp+1688,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1689,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__20__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1690,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][5U]),32);
    bufp->fullBit(oldp+1691,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 5U))));
    bufp->fullIData(oldp+1692,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1693,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__21__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1694,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][6U]),32);
    bufp->fullBit(oldp+1695,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 6U))));
    bufp->fullIData(oldp+1696,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1697,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__22__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1698,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [1U][7U]),32);
    bufp->fullBit(oldp+1699,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [1U] >> 7U))));
    bufp->fullIData(oldp+1700,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1701,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__23__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1702,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][0U]),32);
    bufp->fullBit(oldp+1703,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [2U])));
    bufp->fullIData(oldp+1704,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1705,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__24__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1706,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][1U]),32);
    bufp->fullBit(oldp+1707,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 1U))));
    bufp->fullIData(oldp+1708,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1709,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__25__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1710,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][2U]),32);
    bufp->fullBit(oldp+1711,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 2U))));
    bufp->fullIData(oldp+1712,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1713,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__26__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1714,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][3U]),32);
    bufp->fullBit(oldp+1715,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 3U))));
    bufp->fullIData(oldp+1716,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1717,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__27__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1718,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][4U]),32);
    bufp->fullBit(oldp+1719,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 4U))));
    bufp->fullIData(oldp+1720,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1721,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__28__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1722,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][5U]),32);
    bufp->fullBit(oldp+1723,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 5U))));
    bufp->fullIData(oldp+1724,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1725,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__29__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1726,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1727,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__2__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1728,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][6U]),32);
    bufp->fullBit(oldp+1729,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 6U))));
    bufp->fullIData(oldp+1730,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1731,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__30__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1732,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [2U][7U]),32);
    bufp->fullBit(oldp+1733,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [2U] >> 7U))));
    bufp->fullIData(oldp+1734,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1735,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__31__KET____DOT__gen_PE_block2__DOT__pe__valid));
    bufp->fullIData(oldp+1736,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1737,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__3__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1738,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1739,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__4__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1740,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1741,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__5__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1742,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1743,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__6__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1744,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1745,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__7__KET____DOT__gen_PE_block0__DOT__pe__valid));
    bufp->fullIData(oldp+1746,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][0U]),32);
    bufp->fullBit(oldp+1747,((1U & vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                              [0U])));
    bufp->fullIData(oldp+1748,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1749,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__8__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1750,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__opsum
                               [0U][1U]),32);
    bufp->fullBit(oldp+1751,((1U & (vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                    [0U] >> 1U))));
    bufp->fullIData(oldp+1752,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__opsum),32);
    bufp->fullBit(oldp+1753,(vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vcellout__PE_block__BRA__9__KET____DOT__gen_PE_block1__DOT__pe__valid));
    bufp->fullIData(oldp+1754,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[0]),32);
    bufp->fullIData(oldp+1755,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[1]),32);
    bufp->fullIData(oldp+1756,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[2]),32);
    bufp->fullIData(oldp+1757,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[3]),32);
    bufp->fullIData(oldp+1758,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[4]),32);
    bufp->fullIData(oldp+1759,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[5]),32);
    bufp->fullIData(oldp+1760,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[6]),32);
    bufp->fullIData(oldp+1761,(vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_wire[7]),32);
    bufp->fullBit(oldp+1762,(vlSelfRef.ACLK));
    bufp->fullBit(oldp+1763,(vlSelfRef.ARESETn));
    bufp->fullBit(oldp+1764,(vlSelfRef.ASIC_interrupt));
    bufp->fullCData(oldp+1765,(vlSelfRef.AWID_S),8);
    bufp->fullIData(oldp+1766,(vlSelfRef.AWADDR_S),32);
    bufp->fullCData(oldp+1767,(vlSelfRef.AWLEN_S),4);
    bufp->fullCData(oldp+1768,(vlSelfRef.AWSIZE_S),3);
    bufp->fullCData(oldp+1769,(vlSelfRef.AWBURST_S),2);
    bufp->fullBit(oldp+1770,(vlSelfRef.AWVALID_S));
    bufp->fullBit(oldp+1771,(vlSelfRef.AWREADY_S));
    bufp->fullIData(oldp+1772,(vlSelfRef.WDATA_S),32);
    bufp->fullCData(oldp+1773,(vlSelfRef.WSTRB_S),4);
    bufp->fullBit(oldp+1774,(vlSelfRef.WLAST_S));
    bufp->fullBit(oldp+1775,(vlSelfRef.WVALID_S));
    bufp->fullBit(oldp+1776,(vlSelfRef.WREADY_S));
    bufp->fullCData(oldp+1777,(vlSelfRef.BID_S),8);
    bufp->fullCData(oldp+1778,(vlSelfRef.BRESP_S),2);
    bufp->fullBit(oldp+1779,(vlSelfRef.BVALID_S));
    bufp->fullBit(oldp+1780,(vlSelfRef.BREADY_S));
    bufp->fullCData(oldp+1781,(vlSelfRef.ARID_S),8);
    bufp->fullIData(oldp+1782,(vlSelfRef.ARADDR_S),32);
    bufp->fullCData(oldp+1783,(vlSelfRef.ARLEN_S),4);
    bufp->fullCData(oldp+1784,(vlSelfRef.ARSIZE_S),3);
    bufp->fullCData(oldp+1785,(vlSelfRef.ARBURST_S),2);
    bufp->fullBit(oldp+1786,(vlSelfRef.ARVALID_S));
    bufp->fullBit(oldp+1787,(vlSelfRef.ARREADY_S));
    bufp->fullCData(oldp+1788,(vlSelfRef.current_state),3);
    bufp->fullCData(oldp+1789,(vlSelfRef.n_state),3);
    bufp->fullCData(oldp+1790,(vlSelfRef.RID_S),8);
    bufp->fullIData(oldp+1791,(vlSelfRef.RDATA_S),32);
    bufp->fullCData(oldp+1792,(vlSelfRef.RRESP_S),2);
    bufp->fullBit(oldp+1793,(vlSelfRef.RLAST_S));
    bufp->fullBit(oldp+1794,(vlSelfRef.RVALID_S));
    bufp->fullBit(oldp+1795,(vlSelfRef.RREADY_S));
    bufp->fullBit(oldp+1796,((1U & (~ (IData)(vlSelfRef.ARESETn)))));
}
