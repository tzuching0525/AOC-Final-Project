// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper__Syms.h"
#include "Vasic_wrapper___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__stl(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vasic_wrapper___024root___eval_triggers__stl(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_triggers__stl\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vasic_wrapper___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vasic_wrapper___024root___stl_sequent__TOP__0(Vasic_wrapper___024root* vlSelf);
VL_ATTR_COLD void Vasic_wrapper___024root____Vm_traceActivitySetAll(Vasic_wrapper___024root* vlSelf);
VL_ATTR_COLD void Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
VL_ATTR_COLD void Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
VL_ATTR_COLD void Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
VL_ATTR_COLD void Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
VL_ATTR_COLD void Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
VL_ATTR_COLD void Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
VL_ATTR_COLD void Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
VL_ATTR_COLD void Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__0(Vasic_wrapper_PE_block* vlSelf);
VL_ATTR_COLD void Vasic_wrapper___024root___stl_sequent__TOP__1(Vasic_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vasic_wrapper___024root___eval_stl(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_stl\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vasic_wrapper___024root___stl_sequent__TOP__0(vlSelf);
        Vasic_wrapper___024root____Vm_traceActivitySetAll(vlSelf);
        Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block));
        Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block));
        Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block));
        Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block));
        Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block));
        Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block));
        Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block));
        Vasic_wrapper_PE_block___stl_sequent__TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__0((&vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block));
        Vasic_wrapper___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vasic_wrapper___024root___stl_sequent__TOP__0(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___stl_sequent__TOP__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BVALID_S = 0U;
    vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_next = vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP;
    vlSelfRef.RLAST_S = 0U;
    vlSelfRef.WREADY_S = 0U;
    vlSelfRef.ASIC_interrupt = ((0x40U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count)) 
                                | (0x80U == (IData)(vlSelfRef.asic_wrapper__DOT__ofmap_count)));
    vlSelfRef.current_state = vlSelfRef.asic_wrapper__DOT__cs_slave;
    vlSelfRef.asic_wrapper__DOT__count_next = (0x7ffU 
                                               & ((IData)(vlSelfRef.asic_wrapper__DOT__data_ready_reg)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.asic_wrapper__DOT__count))
                                                   : 
                                                  ((0x44fU 
                                                    == (IData)(vlSelfRef.asic_wrapper__DOT__count))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.asic_wrapper__DOT__count))));
    vlSelfRef.RRESP_S = 0U;
    vlSelfRef.RDATA_S = 0U;
    vlSelfRef.BRESP_S = 0U;
    vlSelfRef.AWREADY_S = 0U;
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
    vlSelfRef.asic_wrapper__DOT__next_state = vlSelfRef.asic_wrapper__DOT__state;
    if ((0U == (IData)(vlSelfRef.asic_wrapper__DOT__state))) {
        vlSelfRef.asic_wrapper__DOT__next_state = (
                                                   (8U 
                                                    & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
                                                    ? 1U
                                                    : 2U);
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
    vlSelfRef.ARREADY_S = 0U;
    vlSelfRef.asic_wrapper__DOT__output_cnt_next = vlSelfRef.asic_wrapper__DOT__output_cnt;
    vlSelfRef.asic_wrapper__DOT__ofmap = ((IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__mode1_step0)
                                           ? vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_in_out
                                           : (IData)(vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_output));
    if (((0x44fU == (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt)) 
         | ((IData)(vlSelfRef.asic_wrapper__DOT__bias_write) 
            & (0x40fU == (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt))))) {
        vlSelfRef.asic_wrapper__DOT__data_ready_reg_next = 1U;
    } else {
        if ((0x44fU == (IData)(vlSelfRef.asic_wrapper__DOT__count))) {
            vlSelfRef.asic_wrapper__DOT__data_ready_reg_next = 0U;
        }
        vlSelfRef.asic_wrapper__DOT__data_ready_reg_next 
            = vlSelfRef.asic_wrapper__DOT__data_ready_reg;
    }
    vlSelfRef.asic_wrapper__DOT__write_cnt_next = vlSelfRef.asic_wrapper__DOT__write_cnt;
    vlSelfRef.asic_wrapper__DOT__write_error_next = vlSelfRef.asic_wrapper__DOT__write_error;
    vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next = vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE;
    vlSelfRef.asic_wrapper__DOT__ASIC_DATA_next = vlSelfRef.asic_wrapper__DOT__DATA;
    vlSelfRef.asic_wrapper__DOT__BID_S_next = vlSelfRef.BID_S;
    vlSelfRef.asic_wrapper__DOT__addr_S_reg_next = vlSelfRef.asic_wrapper__DOT__addr_S_reg;
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
    vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__relu_out 
        = ((vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_input 
            >> 0x1fU) ? 0U : vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu_input);
    vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_shift 
        = (0xffU & VL_DIV_III(32, vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__relu_out, 
                              (0xfffU & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                         >> 4U))));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_temp 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__ppu__DOT__data_shift;
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.bias[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__bias_input
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.bias[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__bias_zero
        [7U];
    vlSelfRef.asic_wrapper__DOT__data_ready = ((0x44fU 
                                                == (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt)) 
                                               | ((IData)(vlSelfRef.asic_wrapper__DOT__bias_write) 
                                                  & (0x40fU 
                                                     == (IData)(vlSelfRef.asic_wrapper__DOT__write_cnt))));
    vlSelfRef.asic_wrapper__DOT__cs_slave_next = vlSelfRef.asic_wrapper__DOT__cs_slave;
    vlSelfRef.asic_wrapper__DOT__RID_S_next = vlSelfRef.RID_S;
    vlSelfRef.RVALID_S = 0U;
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
                vlSelfRef.RLAST_S = 1U;
                if ((0x10040000U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    vlSelfRef.RRESP_S = 0U;
                    vlSelfRef.asic_wrapper__DOT__RDATA 
                        = vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE;
                } else if ((0x10040004U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    vlSelfRef.RRESP_S = 0U;
                    vlSelfRef.asic_wrapper__DOT__RDATA 
                        = vlSelfRef.asic_wrapper__DOT__DATA;
                } else if ((0x10040008U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    vlSelfRef.RRESP_S = 0U;
                    vlSelfRef.asic_wrapper__DOT__RDATA 
                        = vlSelfRef.asic_wrapper__DOT__ofmap_reg
                        [vlSelfRef.asic_wrapper__DOT__output_cnt];
                } else {
                    vlSelfRef.RRESP_S = 2U;
                }
                if ((0x10040000U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    if ((0x10040004U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        if ((0x10040008U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                            vlSelfRef.RDATA_S = 0U;
                        }
                        if ((0x10040008U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                            vlSelfRef.asic_wrapper__DOT__output_cnt_next 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.asic_wrapper__DOT__output_cnt)));
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
    vlSelfRef.n_state = vlSelfRef.asic_wrapper__DOT__cs_slave_next;
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [0U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [1U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [2U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [3U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [4U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [5U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [6U][7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__weight_wire
        [7U][7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [0U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [1U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [2U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [3U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [4U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [5U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [6U];
    vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.weight[7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellinp__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__weight
        [7U];
}

VL_ATTR_COLD void Vasic_wrapper___024root___stl_sequent__TOP__1(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___stl_sequent__TOP__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__valid_chain 
        = ((((((IData)((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                        [3U])) << 1U) | (0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                         [3U])) << 6U) 
            | ((((IData)((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                          [3U])) << 1U) | (0xffU == 
                                           vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                           [3U])) << 4U)) 
           | (((((IData)((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                          [3U])) << 1U) | (0xffU == 
                                           vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                                           [3U])) << 2U) 
              | (((IData)((0xffU == vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__PVT__valid_chain
                           [3U])) << 1U) | (0xffU == 
                                            vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__PVT__valid_chain
                                            [3U]))));
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[6U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap[7U] 
        = vlSymsp->TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[0U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[1U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[2U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[3U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[4U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[5U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[6U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][0U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [0U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][1U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [1U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][2U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [2U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][3U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [3U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][4U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [4U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][5U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [5U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][6U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [6U];
    vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT__opsum_wire[7U][7U] 
        = vlSelfRef.asic_wrapper__DOT__Top__DOT__array__DOT____Vcellout__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block__ofmap
        [7U];
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
}
