## DPI Interface
#### 需求
- `vcs`
- `gcc\g++`
- lib `eigen`

#### 編譯指令
`vcs -sverilog -full64 -timescale=1ns/1ps Top.sv dpi_interfaces.sv sram_weight.sv sram_ofmap.sv sram_ifmap.sv sram_bias.sv PPU.sv PE_block.sv PE_array.sv Controller.sv Adder_tree.sv PE.v demo.cpp -CFLAGS "-std=c++17 -I /home2/aoc2025/e24106288/final/eigen/" -o simv`
