BASE_DIR = $(PWD)
TOP      = asic_wrapper
SRC_DIR  = $(BASE_DIR)/rtl
SRC      = $(wildcard $(SRC_DIR)/*.sv)

VFLAGS   = --cc --top-module $(TOP) -I$(SRC_DIR) --Mdir hardware \
           --trace --trace-structs

VC       = verilator
CXX      = g++
AR       = ar
ARFLAGS  = rcs
VERILATOR_ROOT = /opt/verilator-5.034
VERILATOR_INC = $(VERILATOR_ROOT)/share/verilator/include
VERILATOR_SRCS = \
    $(VERILATOR_INC)/verilated.cpp \
    $(VERILATOR_INC)/verilated_vcd_c.cpp \
    $(VERILATOR_INC)/verilated_threads.cpp

CXXFLAGS = -std=c++2a -Os -I. -MMD \
           -I$(VERILATOR_INC) \
           -I$(VERILATOR_INC)/vltstd \
           -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TIMING=0 -DVM_TRACE=1 \
           -DVM_TRACE_FST=0 -DVM_TRACE_VCD=1 \
           -faligned-new -fcf-protection=none \
           -Wno-bool-operation -Wno-sign-compare -Wno-uninitialized \
           -Wno-unused-but-set-variable -Wno-unused-parameter \
           -Wno-unused-variable

.PHONY: all clean hardware compile

all: compile

hardware:
	$(VC) $(VFLAGS) $(SRC_DIR)/$(TOP).sv

compile: hardware
	@cd hardware && \
	echo "Compiling Verilator runtime..." && \
	$(CXX) $(CXXFLAGS) -c $(VERILATOR_SRCS) && \
	echo "Compiling generated code..." && \
	$(CXX) $(CXXFLAGS) -c V$(TOP).cpp && \
	$(CXX) $(CXXFLAGS) -c V$(TOP)_PE_block*.cpp && \
	$(CXX) $(CXXFLAGS) -c V$(TOP)__Syms.cpp && \
	$(CXX) $(CXXFLAGS) -c V$(TOP)___024root*.cpp && \
	$(CXX) $(CXXFLAGS) -c V$(TOP)__Trace*.cpp && \
	echo "Creating libraries..." && \
	$(AR) $(ARFLAGS) libverilated.a verilated.o verilated_threads.o verilated_vcd_c.o && \
	$(AR) $(ARFLAGS) libV$(TOP).a V$(TOP)*.o && \
	echo "Done!"

clean:
	rm -rf hardware/ *.vcd *.log