BASE_DIR = $(PWD)
TOP      = asic_wrapper
RTL_DIR  = $(BASE_DIR)/rtl
RTL      = $(wildcard $(RTL_DIR)/*.sv)
HW_DIR   = $(BASE_DIR)/simulation/hardware
MODEL=./model/quant_vit.onnx
OUTPUT_DIR = ./output
LOG_DIR = $(OUTPUT_DIR)/relay
C_CODEGEN_DIR = $(OUTPUT_DIR)/Ccodegen
BIN_SOURCE_DIR = $(OUTPUT_DIR)/bin
CACHE_DIR = ./Python/utils/__pycache__
BUILD_SCRIPT = ./Python/build_model.py
TEST_DIR = ./tests
DATASET = ./data
VISUTAM = Python/VisuTVM/main.py

VFLAGS   = --cc --top-module $(TOP) -I$(RTL_DIR) --Mdir $(HW_DIR) \
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

.PHONY: all clean gen_hardware hardware build_model test_dla vizuTVM 

all: hardware build_model test_cpu test_dla vizuTVM

gen_hardware:
	$(VC) $(VFLAGS) $(RTL_DIR)/$(TOP).sv

hardware: gen_hardware
	@cd $(HW_DIR) && \
	echo "Compiling Verilator runtime..." && \
	$(CXX) $(CXXFLAGS) -c $(VERILATOR_SRCS) && \
	echo "Compiling generated code..." && \
	$(CXX) $(CXXFLAGS) -c V$(TOP).cpp && \
	$(CXX) $(CXXFLAGS) -c V$(TOP)_PE_block*.cpp && \
	$(CXX) $(CXXFLAGS) -c V$(TOP)__Syms.cpp && \
	$(CXX) $(CXXFLAGS) -c V$(TOP)___024root*.cpp && \
	$(CXX) $(CXXFLAGS) -c V$(TOP)__Trace*.cpp && \
	echo "Creating libraries..." && \
	$(AR) $(ARFLAGS) libV$(TOP).a V$(TOP)*.o && \
	echo "Done!"

onnx:
	$(QUIET)cd Python && \
	python export_onnx.py
	
build_model:
	$(QUIET)echo "Building model..."
	$(QUIET)mkdir -p $(OUTPUT_DIR)
	$(QUIET)mkdir -p $(LOG_DIR)
	$(QUIET)python $(BUILD_SCRIPT) -m $(MODEL) -o $(OUTPUT_DIR) -l $(LOG_DIR) -d $(DATASET)

	$(QUIET)echo "Extracting tar..."
	$(QUIET)mkdir -p $(OUTPUT_DIR)/model_c
	$(QUIET)tar xvf $(OUTPUT_DIR)/model_c.tar -C $(OUTPUT_DIR)/model_c
	$(QUIET)echo "Moving source files..."
	$(QUIET)mkdir -p $(C_CODEGEN_DIR)
	$(QUIET)mv $(OUTPUT_DIR)/model_c/lib2.c $(C_CODEGEN_DIR)/model.cpp
	$(QUIET)mv $(OUTPUT_DIR)/*.c $(C_CODEGEN_DIR)
	$(QUIET)mv $(OUTPUT_DIR)/*.h $(C_CODEGEN_DIR)
	$(QUIET)echo "Moving binary files..."
	$(QUIET)mkdir -p $(BIN_SOURCE_DIR)
	$(QUIET)mv $(OUTPUT_DIR)/*.bin $(BIN_SOURCE_DIR)

synthesize:
	$(QUIET)cd $(RTL_DIR) && make synthesize && cd-

test:
	$(QUIET)echo "Cleaning ..."
	$(QUIET)cd $(TEST_DIR)/integration && make clean && cd -
	$(QUIET)echo "Running program..."
	$(QUIET)cd $(TEST_DIR)/integration && make test && cd -

test_runtime:
	$(QUIET)echo "Cleaning ..."
	$(QUIET)cd $(TEST_DIR)/runtime && make clean && cd -
	$(QUIET)echo "Running program..."
	$(QUIET)cd $(TEST_DIR)/runtime && make test && cd -

test_rtl:
	$(QUIET)echo "Cleaning ..."
	$(QUIET)cd $(RTL_DIR) && make clean && cd -
	$(QUIET)echo "Running program..."
	$(QUIET)cd $(RTL_DIR) && make rtl && cd -

test_wrapper0:
	$(QUIET)echo "Cleaning ..."
	$(QUIET)cd $(RTL_DIR) && make clean && cd -
	$(QUIET)echo "Running program..."
	$(QUIET)cd $(RTL_DIR) && make wrapper0 && cd -

test_wrapper1:
	$(QUIET)echo "Cleaning ..."
	$(QUIET)cd $(RTL_DIR) && make clean && cd -
	$(QUIET)echo "Running program..."
	$(QUIET)cd $(RTL_DIR) && make wrapper1 && cd -

visuTVM:
	python $(VISUTAM) \
	-bp $(LOG_DIR)/relay_mc_origin_model.txt \
	-ap $(LOG_DIR)/relay_mc_MergeComposite_model.txt \
	-pn AllPass  \
	-sn VGG8 \
	-wi

clean:
	$(QUIET)echo "Cleaning up..."
	rm -rf $(HW_DIR) *.vcd *.log
	$(QUIET)cd $(TEST_DIR)/integration && make clean && cd -
	$(QUIET)cd $(TEST_DIR)/runtime && make clean && cd -
	$(QUIET)cd $(RTL_DIR) && make clean && cd -
	$(QUIET)rm -rf $(OUTPUT_DIR) $(CACHE_DIR) $(BIN_SOURCE_DIR) $(LOG_DIR) $(C_CODEGEN_DIR)
	
clean_data:
	$(QUIET)echo "Cleaning up dataset..."
	$(QUIET)rm -rf $(DATASET)

clean_model:
	$(QUIET)cd model && rm *.onnx
