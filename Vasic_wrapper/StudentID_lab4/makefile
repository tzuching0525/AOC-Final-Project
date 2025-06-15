BASE_DIR       = $(PWD)
TOP            = asic_wrapper
SRC_DIR        = $(BASE_DIR)/rtl
SRC            = $(wildcard $(SRC_DIR)/*.sv)
TB_DIR         = $(BASE_DIR)/sim
TB             = main.cpp

OBJ_DIR        = hardware
VC             = verilator
CXX            = g++
AR             = ar
ARFLAGS        = rcs

VERILATOR_ROOT = /opt/verilator-5.030
VERILATOR_INC  = $(VERILATOR_ROOT)/share/verilator/include

VFLAGS   = --cc --trace --top-module $(TOP) -I$(SRC_DIR) --Mdir $(OBJ_DIR)

CXXFLAGS = -std=c++2a -Os -I. -MMD \
           -I$(VERILATOR_INC) \
           -I$(VERILATOR_INC)/vltstd \
           -DVM_COVERAGE=0 -DVM_SC=0 -DVM_TIMING=0 -DVM_TRACE=1 \
           -DVM_TRACE_VCD=1 -DVM_TRACE_FST=0 \
           -faligned-new -fcf-protection=none

.PHONY: all clean compile hardware

all: hardware compile

# Step 1: 產生 C++ 模型
hardware:
	$(VC) $(VFLAGS) $(SRC_DIR)/$(TOP).sv

# Step 2: 編譯 + 連結成 main.elf
compile:
	cd $(OBJ_DIR) && \
	$(CXX) $(CXXFLAGS) -c $(VERILATOR_INC)/verilated.cpp && \
	$(CXX) $(CXXFLAGS) -c $(VERILATOR_INC)/verilated_threads.cpp && \
	$(CXX) $(CXXFLAGS) -c $(VERILATOR_INC)/verilated_vcd_c.cpp && \
	$(CXX) $(CXXFLAGS) -c ../$(TB_DIR)/$(TB) && \
	$(CXX) $(CXXFLAGS) -o main.elf *.o V$(TOP)*.o

# 清除所有中介檔
clean:
	rm -rf $(OBJ_DIR)/ *.vcd *.log *.elf
