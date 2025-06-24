syn_dir  := ../syn
bld_dir  := ../build
TB_RTL0   := tb_top.sv
TB_RTL1   := tb_top1.sv
TB_ASIC0 := tb.sv
TB_ASIC1 := tb_1.sv

VCSFLAG := vcs -R -sverilog -debug_access+all -full64

$(bld_dir):
	mkdir -p $(bld_dir)

$(syn_dir):
	mkdir -p $(syn_dir)

# Default target
rtl_all: rtl
	@echo "Usage: make rtl"

# Compile and run for pre-sim
rtl0:
	$(VCSFLAG) $(TB_RTL0)

rtl1:
	$(VCSFLAG) $(TB_RTL1)

wrapper0:
	$(VCSFLAG) $(TB_ASIC0)

wrapper1:
	$(VCSFLAG) $(TB_ASIC1)

syn:
	vcs -R -sverilog +neg_tchk -negdelay -v /cad/CBDK/Executable_Package/Collaterals/IP/stdcell/N16ADFP_StdCell/VERILOG/N16ADFP_StdCell.v tb.sv -debug_access+all -full64 -diag=sdf:verbose +incdir+./syn +define+SYN

synthesize: | $(bld_dir) $(syn_dir)
	cp ../script/synopsys_dc.setup $(bld_dir)/.synopsys_dc.setup; \
	cd $(bld_dir); \
	dc_shell -no_home_init -f ../script/synthesis.tcl | tee syn_compile.log

# Clean build artifacts
clean:
	rm -rf csrc simv simv.daidir ucli.key DVEfiles *.vpd nWaveLog/ *.fsdb novas* *.lib++ sdfAnnotateInfo $(bld_dir)

clean_syn:
	rm -rf $(syn_dir)