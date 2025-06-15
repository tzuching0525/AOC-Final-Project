## VCS
vcs -sverilog -full64 -timescale=1ns/1ps -debug_acc+all -dpiheader /home2/aoc2025/e24106288/final/svdpi.h Top.sv dpi_interfaces.sv sram_weight.sv sram_ofmap.sv sram_ifmap.sv sram_bias.sv PPU.sv PE_block.sv PE_array.sv Controller.sv Adder_tree.sv PE.v
## C++
g++ -std=c++17 -fPIC -shared -I /home2/aoc2025/e24106288/final/eigen/ -I$VCS_HOME/include vit_dpi_trainer.cpp -o libvit_dpi.so
