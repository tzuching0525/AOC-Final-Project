// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper.h"
#include "Vasic_wrapper___024root.h"
#include "Vasic_wrapper_PE_block.h"

// FUNCTIONS
Vasic_wrapper__Syms::~Vasic_wrapper__Syms()
{
}

Vasic_wrapper__Syms::Vasic_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vasic_wrapper* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block{this, Verilated::catName(namep, "asic_wrapper.Top.array.PE_array[0].gen_PE_array0.pe_block")}
    , TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block{this, Verilated::catName(namep, "asic_wrapper.Top.array.PE_array[1].gen_PE_array1.pe_block")}
    , TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block{this, Verilated::catName(namep, "asic_wrapper.Top.array.PE_array[2].gen_PE_array1.pe_block")}
    , TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block{this, Verilated::catName(namep, "asic_wrapper.Top.array.PE_array[3].gen_PE_array1.pe_block")}
    , TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block{this, Verilated::catName(namep, "asic_wrapper.Top.array.PE_array[4].gen_PE_array1.pe_block")}
    , TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block{this, Verilated::catName(namep, "asic_wrapper.Top.array.PE_array[5].gen_PE_array1.pe_block")}
    , TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block{this, Verilated::catName(namep, "asic_wrapper.Top.array.PE_array[6].gen_PE_array1.pe_block")}
    , TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block{this, Verilated::catName(namep, "asic_wrapper.Top.array.PE_array[7].gen_PE_array1.pe_block")}
{
        // Check resources
        Verilated::stackCheck(1801);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block = &TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block;
    TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block = &TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block;
    TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block = &TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block;
    TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block = &TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block;
    TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block = &TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block;
    TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block = &TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block;
    TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block = &TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block;
    TOP.__PVT__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block = &TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__0__KET____DOT__gen_PE_array0__DOT__pe_block.__Vconfigure(true);
    TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__1__KET____DOT__gen_PE_array1__DOT__pe_block.__Vconfigure(false);
    TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__2__KET____DOT__gen_PE_array1__DOT__pe_block.__Vconfigure(false);
    TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__3__KET____DOT__gen_PE_array1__DOT__pe_block.__Vconfigure(false);
    TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__4__KET____DOT__gen_PE_array1__DOT__pe_block.__Vconfigure(false);
    TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__5__KET____DOT__gen_PE_array1__DOT__pe_block.__Vconfigure(false);
    TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__6__KET____DOT__gen_PE_array1__DOT__pe_block.__Vconfigure(false);
    TOP__asic_wrapper__DOT__Top__DOT__array__DOT__PE_array__BRA__7__KET____DOT__gen_PE_array1__DOT__pe_block.__Vconfigure(false);
}
