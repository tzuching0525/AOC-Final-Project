// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTop.h"

// INCLUDE MODULE CLASSES
#include "VTop___024root.h"
#include "VTop_PE_block.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTop___024root                 TOP;
    VTop_PE_block                  TOP__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block;
    VTop_PE_block                  TOP__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block;
    VTop_PE_block                  TOP__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block;
    VTop_PE_block                  TOP__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block;
    VTop_PE_block                  TOP__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block;
    VTop_PE_block                  TOP__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block;
    VTop_PE_block                  TOP__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block;
    VTop_PE_block                  TOP__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block;

    // CONSTRUCTORS
    VTop__Syms(VerilatedContext* contextp, const char* namep, VTop* modelp);
    ~VTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
