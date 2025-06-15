BASE_DIR = $(PWD)
TOP      = asic_wrapper
SRC_DIR  = $(BASE_DIR)/rtl
SRC      = $(wildcard $(SRC_DIR)/*.sv)
TB_DIR   = $(BASE_DIR)/sim
TB       = main.cpp

VFLAGS   = --cc --top-module $(TOP) -I$(SRC_DIR) --Mdir hardware
TBFLAGS  = --cc --exe --build -I$(SRC_DIR) --Mdir hardware

VC       = verilator
CXX      = g++
AR       = ar
ARFLAGS  = rcs
VERILATOR_ROOT = /opt/verilator-5.030
VERILATOR_INC = $(VERILATOR_ROOT)/share/verilator/include

CXXFLAGS = -std=c++2a -Os -I. -MMD \
           -I$(VERILATOR_INC) \
           -I$(VERILATOR_INC)/vltstd \
           -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TIMING=0 -DVM_TRACE=1 \
           -DVM_TRACE_FST=0 -DVM_TRACE_VCD=1 \
           -faligned-new -fcf-protection=none

.PHONY: all clean tb hardware compile

all: hardware

hardware:
	$(VC) $(VFLAGS) $(SRC_DIR)/$(TOP).sv

compile: hardware
	@cd hardware && \
	$(CXX) $(CXXFLAGS) -c $(VERILATOR_INC)/verilated.cpp && \
	$(CXX) $(CXXFLAGS) -c $(VERILATOR_INC)/verilated_threads.cpp && \
	$(CXX) $(CXXFLAGS) -c $(VERILATOR_INC)/verilated_vcd_c.cpp && \
	$(CXX) $(CXXFLAGS) -c *.cpp && \
	$(AR) $(ARFLAGS) libverilated.a verilated.o verilated_threads.o verilated_vcd_c.o && \
	$(AR) $(ARFLAGS) libV$(TOP).a V$(TOP)*.o

tb:
	$(VC) $(TBFLAGS) $(TB_DIR)/$(TB) $(SRC_DIR)/$(TOP).sv

clean:
	rm -rf hardware/ *.vcd *.log