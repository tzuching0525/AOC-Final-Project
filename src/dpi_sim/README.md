## VCS
```bash
$vcs -sverilog -full64 -timescale=1ns/1ps -debug_acc+all -dpiheader /home2/aoc2025/e24106288/final/svdpi.h Top.sv dpi_interfaces.sv sram_weight.sv sram_ofmap.sv sram_ifmap.sv sram_bias.sv PPU.sv PE_block.sv PE_array.sv Controller.sv Adder_tree.sv PE.v
```
## C++
```bash
$g++ -std=c++17 -fPIC -shared -I /home2/aoc2025/e24106288/final/eigen/ -I$VCS_HOME/include vit_dpi_trainer.cpp -o libvit_dpi.so
```
## VCS+C++
```bash
$vcs -sverilog -full64 -timescale=1ns/1ps Top.sv dpi_interfaces.sv sram_weight.sv sram_ofmap.sv sram_ifmap.sv sram_bias.sv PPU.sv PE_block.sv PE_array.sv Controller.sv Adder_tree.sv PE.v vit_dpi_trainer.cpp -CFLAGS "-std=c++17 -I /home2/aoc2025/e24106288/final/eigen/" -o simv
$./simv
`
