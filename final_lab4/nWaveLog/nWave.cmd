wvSetPosition -win $_nWave1 {("G1" 0)}
wvOpenFile -win $_nWave1 {/home2/aoc2025/e24102153/final_lab4/rtl/tb.fsdb}
wvGetSignalOpen -win $_nWave1
wvGetSignalSetScope -win $_nWave1 "/tb"
wvGetSignalSetScope -win $_nWave1 "/tb/dut"
wvSetPosition -win $_nWave1 {("G1" 8)}
wvSetPosition -win $_nWave1 {("G1" 8)}
wvAddSignal -win $_nWave1 -clear
wvAddSignal -win $_nWave1 -group {"G1" \
{/tb/dut/ACLK} \
{/tb/dut/DATA\[31:0\]} \
{/tb/dut/count\[10:0\]} \
{/tb/dut/count_next\[10:0\]} \
{/tb/dut/current_state\[2:0\]} \
{/tb/dut/next_state\[1:0\]} \
{/tb/dut/write_cnt\[10:0\]} \
{/tb/dut/write_cnt_next\[10:0\]} \
}
wvAddSignal -win $_nWave1 -group {"G2" \
}
wvSelectSignal -win $_nWave1 {( "G1" 1 2 3 4 5 6 7 8 )} 
wvSetPosition -win $_nWave1 {("G1" 8)}
wvSetPosition -win $_nWave1 {("G1" 8)}
wvSetPosition -win $_nWave1 {("G1" 8)}
wvAddSignal -win $_nWave1 -clear
wvAddSignal -win $_nWave1 -group {"G1" \
{/tb/dut/ACLK} \
{/tb/dut/DATA\[31:0\]} \
{/tb/dut/count\[10:0\]} \
{/tb/dut/count_next\[10:0\]} \
{/tb/dut/current_state\[2:0\]} \
{/tb/dut/next_state\[1:0\]} \
{/tb/dut/write_cnt\[10:0\]} \
{/tb/dut/write_cnt_next\[10:0\]} \
}
wvAddSignal -win $_nWave1 -group {"G2" \
}
wvSelectSignal -win $_nWave1 {( "G1" 1 2 3 4 5 6 7 8 )} 
wvSetPosition -win $_nWave1 {("G1" 8)}
wvGetSignalClose -win $_nWave1
wvResizeWindow -win $_nWave1 0 23 1536 801
wvResizeWindow -win $_nWave1 0 23 1536 801
wvSelectSignal -win $_nWave1 {( "G1" 5 )} 
wvSelectSignal -win $_nWave1 {( "G1" 1 )} 
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvSetCursor -win $_nWave1 44082828.735107 -snap {("G1" 3)}
wvZoomOut -win $_nWave1
wvZoomIn -win $_nWave1
wvZoomIn -win $_nWave1
wvZoom -win $_nWave1 42637663.893194 45862327.066846
wvZoom -win $_nWave1 44011846.702721 44272523.067058
wvZoom -win $_nWave1 44168720.802216 44185370.789559
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvSelectSignal -win $_nWave1 {( "G1" 3 )} 
wvSetCursor -win $_nWave1 44180369.146649 -snap {("G1" 2)}
wvSetCursor -win $_nWave1 44174520.049299 -snap {("G1" 2)}
wvSetCursor -win $_nWave1 44171728.434654 -snap {("G1" 2)}
wvSetCursor -win $_nWave1 44179438.608434 -snap {("G1" 2)}
wvSetCursor -win $_nWave1 44168405.083887 -snap {("G1" 3)}
wvSetCursor -win $_nWave1 44180236.212618 -snap {("G1" 2)}
wvSetCursor -win $_nWave1 44173057.774961 -snap {("G1" 2)}
wvSetCursor -win $_nWave1 44169202.688071
wvGetSignalOpen -win $_nWave1
wvGetSignalSetScope -win $_nWave1 "/tb"
wvGetSignalSetScope -win $_nWave1 "/tb/dut"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top"
wvSetPosition -win $_nWave1 {("G1" 10)}
wvSetPosition -win $_nWave1 {("G1" 10)}
wvAddSignal -win $_nWave1 -clear
wvAddSignal -win $_nWave1 -group {"G1" \
{/tb/dut/ACLK} \
{/tb/dut/DATA\[31:0\]} \
{/tb/dut/count\[10:0\]} \
{/tb/dut/count_next\[10:0\]} \
{/tb/dut/current_state\[2:0\]} \
{/tb/dut/next_state\[1:0\]} \
{/tb/dut/write_cnt\[10:0\]} \
{/tb/dut/write_cnt_next\[10:0\]} \
{/tb/dut/Top/data_in\[31:0\]} \
{/tb/dut/Top/ifmap_wire\[0:7\]} \
}
wvAddSignal -win $_nWave1 -group {"G2" \
}
wvSelectSignal -win $_nWave1 {( "G1" 9 10 )} 
wvSetPosition -win $_nWave1 {("G1" 10)}
wvSetPosition -win $_nWave1 {("G1" 10)}
wvSetPosition -win $_nWave1 {("G1" 10)}
wvAddSignal -win $_nWave1 -clear
wvAddSignal -win $_nWave1 -group {"G1" \
{/tb/dut/ACLK} \
{/tb/dut/DATA\[31:0\]} \
{/tb/dut/count\[10:0\]} \
{/tb/dut/count_next\[10:0\]} \
{/tb/dut/current_state\[2:0\]} \
{/tb/dut/next_state\[1:0\]} \
{/tb/dut/write_cnt\[10:0\]} \
{/tb/dut/write_cnt_next\[10:0\]} \
{/tb/dut/Top/data_in\[31:0\]} \
{/tb/dut/Top/ifmap_wire\[0:7\]} \
}
wvAddSignal -win $_nWave1 -group {"G2" \
}
wvSelectSignal -win $_nWave1 {( "G1" 9 10 )} 
wvSetPosition -win $_nWave1 {("G1" 10)}
wvGetSignalClose -win $_nWave1
wvGetSignalOpen -win $_nWave1
wvGetSignalSetScope -win $_nWave1 "/tb"
wvGetSignalSetScope -win $_nWave1 "/tb/dut"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top/GLB_ifmap"
wvSetPosition -win $_nWave1 {("G1" 11)}
wvSetPosition -win $_nWave1 {("G1" 11)}
wvAddSignal -win $_nWave1 -clear
wvAddSignal -win $_nWave1 -group {"G1" \
{/tb/dut/ACLK} \
{/tb/dut/DATA\[31:0\]} \
{/tb/dut/count\[10:0\]} \
{/tb/dut/count_next\[10:0\]} \
{/tb/dut/current_state\[2:0\]} \
{/tb/dut/next_state\[1:0\]} \
{/tb/dut/write_cnt\[10:0\]} \
{/tb/dut/write_cnt_next\[10:0\]} \
{/tb/dut/Top/data_in\[31:0\]} \
{/tb/dut/Top/ifmap_wire\[0:7\]} \
{/tb/dut/Top/GLB_ifmap/ram\[0:31\]} \
}
wvAddSignal -win $_nWave1 -group {"G2" \
}
wvSelectSignal -win $_nWave1 {( "G1" 11 )} 
wvSetPosition -win $_nWave1 {("G1" 11)}
wvGetSignalClose -win $_nWave1
wvSetCursor -win $_nWave1 44179172.740372 -snap {("G1" 11)}
wvSetCursor -win $_nWave1 44170000.292255 -snap {("G1" 11)}
wvSetCursor -win $_nWave1 44179039.806342
wvSelectSignal -win $_nWave1 {( "G1" 3 11 )} 
wvSelectSignal -win $_nWave1 {( "G1" 2 3 11 )} 
wvSelectSignal -win $_nWave1 {( "G1" 2 3 5 11 )} 
wvSelectSignal -win $_nWave1 {( "G1" 2 3 5 6 11 )} 
wvZoomOut -win $_nWave1
wvZoomIn -win $_nWave1
wvSetCursor -win $_nWave1 44170266.160317
wvGetSignalOpen -win $_nWave1
wvGetSignalSetScope -win $_nWave1 "/tb"
wvGetSignalSetScope -win $_nWave1 "/tb/dut"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top/GLB_ifmap"
wvGetSignalSetScope -win $_nWave1 "/tb/dut"
wvSetPosition -win $_nWave1 {("G1" 13)}
wvSetPosition -win $_nWave1 {("G1" 13)}
wvAddSignal -win $_nWave1 -clear
wvAddSignal -win $_nWave1 -group {"G1" \
{/tb/dut/ACLK} \
{/tb/dut/DATA\[31:0\]} \
{/tb/dut/count\[10:0\]} \
{/tb/dut/count_next\[10:0\]} \
{/tb/dut/current_state\[2:0\]} \
{/tb/dut/next_state\[1:0\]} \
{/tb/dut/write_cnt\[10:0\]} \
{/tb/dut/write_cnt_next\[10:0\]} \
{/tb/dut/Top/data_in\[31:0\]} \
{/tb/dut/Top/ifmap_wire\[0:7\]} \
{/tb/dut/Top/GLB_ifmap/ram\[0:31\]} \
{/tb/dut/data_ready_reg} \
{/tb/dut/data_ready_reg_next} \
}
wvAddSignal -win $_nWave1 -group {"G2" \
}
wvSelectSignal -win $_nWave1 {( "G1" 12 13 )} 
wvSetPosition -win $_nWave1 {("G1" 13)}
wvSetPosition -win $_nWave1 {("G1" 13)}
wvSetPosition -win $_nWave1 {("G1" 13)}
wvAddSignal -win $_nWave1 -clear
wvAddSignal -win $_nWave1 -group {"G1" \
{/tb/dut/ACLK} \
{/tb/dut/DATA\[31:0\]} \
{/tb/dut/count\[10:0\]} \
{/tb/dut/count_next\[10:0\]} \
{/tb/dut/current_state\[2:0\]} \
{/tb/dut/next_state\[1:0\]} \
{/tb/dut/write_cnt\[10:0\]} \
{/tb/dut/write_cnt_next\[10:0\]} \
{/tb/dut/Top/data_in\[31:0\]} \
{/tb/dut/Top/ifmap_wire\[0:7\]} \
{/tb/dut/Top/GLB_ifmap/ram\[0:31\]} \
{/tb/dut/data_ready_reg} \
{/tb/dut/data_ready_reg_next} \
}
wvAddSignal -win $_nWave1 -group {"G2" \
}
wvSelectSignal -win $_nWave1 {( "G1" 12 13 )} 
wvSetPosition -win $_nWave1 {("G1" 13)}
wvGetSignalClose -win $_nWave1
wvSetPosition -win $_nWave1 {("G1" 12)}
wvSetPosition -win $_nWave1 {("G1" 9)}
wvSetPosition -win $_nWave1 {("G1" 8)}
wvSetPosition -win $_nWave1 {("G1" 7)}
wvSetPosition -win $_nWave1 {("G1" 6)}
wvSetPosition -win $_nWave1 {("G1" 5)}
wvSetPosition -win $_nWave1 {("G1" 4)}
wvSetPosition -win $_nWave1 {("G1" 3)}
wvSetPosition -win $_nWave1 {("G1" 2)}
wvMoveSelected -win $_nWave1
wvSetPosition -win $_nWave1 {("G1" 2)}
wvSetPosition -win $_nWave1 {("G1" 4)}
wvGetSignalOpen -win $_nWave1
wvGetSignalSetScope -win $_nWave1 "/tb"
wvGetSignalSetScope -win $_nWave1 "/tb/dut"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top/GLB_ifmap"
wvGetSignalSetScope -win $_nWave1 "/tb/dut"
wvSetPosition -win $_nWave1 {("G1" 6)}
wvSetPosition -win $_nWave1 {("G1" 6)}
wvAddSignal -win $_nWave1 -clear
wvAddSignal -win $_nWave1 -group {"G1" \
{/tb/dut/ACLK} \
{/tb/dut/DATA\[31:0\]} \
{/tb/dut/data_ready_reg} \
{/tb/dut/data_ready_reg_next} \
{/tb/dut/data_ready} \
{/tb/dut/data_ready_next} \
{/tb/dut/count\[10:0\]} \
{/tb/dut/count_next\[10:0\]} \
{/tb/dut/current_state\[2:0\]} \
{/tb/dut/next_state\[1:0\]} \
{/tb/dut/write_cnt\[10:0\]} \
{/tb/dut/write_cnt_next\[10:0\]} \
{/tb/dut/Top/data_in\[31:0\]} \
{/tb/dut/Top/ifmap_wire\[0:7\]} \
{/tb/dut/Top/GLB_ifmap/ram\[0:31\]} \
}
wvAddSignal -win $_nWave1 -group {"G2" \
}
wvSelectSignal -win $_nWave1 {( "G1" 5 6 )} 
wvSetPosition -win $_nWave1 {("G1" 6)}
wvGetSignalClose -win $_nWave1
wvSetCursor -win $_nWave1 44167873.347765 -snap {("G1" 5)}
wvSetCursor -win $_nWave1 44169734.424194 -snap {("G1" 5)}
wvSetCursor -win $_nWave1 44170000.292255
wvSelectSignal -win $_nWave1 {( "G1" 5 6 13 )} 
wvSelectSignal -win $_nWave1 {( "G1" 5 6 13 15 )} 
wvSelectSignal -win $_nWave1 {( "G1" 15 )} 
wvSetPosition -win $_nWave1 {("G1" 15)}
wvExpandBus -win $_nWave1 {("G1" 15)}
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvSetCursor -win $_nWave1 44179438.608434
wvSelectSignal -win $_nWave1 {( "G1" 15 )} 
wvSelectSignal -win $_nWave1 {( "G1" 7 15 )} 
wvSelectSignal -win $_nWave1 {( "G1" 3 7 15 )} 
wvSetCursor -win $_nWave1 44169028.552282
wvSelectSignal -win $_nWave1 {( "G1" 3 5 7 15 )} 
wvResizeWindow -win $_nWave1 0 23 1536 801
wvSelectSignal -win $_nWave1 {( "G1" 5 )} 
wvSelectSignal -win $_nWave1 {( "G1" 5 9 )} 
wvSelectSignal -win $_nWave1 {( "G1" 7 )} 
wvSelectSignal -win $_nWave1 {( "G1" 7 )} 
wvSetRadix -win $_nWave1 -format UDec
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoom -win $_nWave1 44152737.859426 44234674.569638
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvSetCursor -win $_nWave1 44420624.202135 -snap {("G1" 7)}
wvSetCursor -win $_nWave1 44420114.751087
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvGetSignalOpen -win $_nWave1
wvGetSignalSetScope -win $_nWave1 "/tb"
wvGetSignalSetScope -win $_nWave1 "/tb/dut"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top/GLB_ifmap"
wvGetSignalSetScope -win $_nWave1 "/tb/dut"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top/ppu"
wvSetPosition -win $_nWave1 {("G1" 48)}
wvSetPosition -win $_nWave1 {("G1" 48)}
wvAddSignal -win $_nWave1 -clear
wvAddSignal -win $_nWave1 -group {"G1" \
{/tb/dut/ACLK} \
{/tb/dut/DATA\[31:0\]} \
{/tb/dut/data_ready_reg} \
{/tb/dut/data_ready_reg_next} \
{/tb/dut/data_ready} \
{/tb/dut/data_ready_next} \
{/tb/dut/count\[10:0\]} \
{/tb/dut/count_next\[10:0\]} \
{/tb/dut/current_state\[2:0\]} \
{/tb/dut/next_state\[1:0\]} \
{/tb/dut/write_cnt\[10:0\]} \
{/tb/dut/write_cnt_next\[10:0\]} \
{/tb/dut/Top/data_in\[31:0\]} \
{/tb/dut/Top/ifmap_wire\[0:7\]} \
{/tb/dut/Top/GLB_ifmap/ram\[0:31\]} \
{/tb/dut/Top/GLB_ifmap/ram\[0\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[1\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[2\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[3\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[4\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[5\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[6\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[7\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[8\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[9\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[10\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[11\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[12\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[13\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[14\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[15\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[16\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[17\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[18\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[19\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[20\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[21\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[22\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[23\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[24\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[25\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[26\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[27\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[28\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[29\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[30\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[31\]\[31:0\]} \
{/tb/dut/Top/ppu/data_in_out\[31:0\]} \
}
wvAddSignal -win $_nWave1 -group {"G2" \
}
wvSelectSignal -win $_nWave1 {( "G1" 48 )} 
wvSetPosition -win $_nWave1 {("G1" 48)}
wvGetSignalClose -win $_nWave1
wvSelectSignal -win $_nWave1 {( "G1" 48 )} 
wvSetCursor -win $_nWave1 44622090.864469 -snap {("G1" 45)}
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvSetCursor -win $_nWave1 112767196.010363 -snap {("G1" 48)}
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvZoom -win $_nWave1 111537455.595855 114488832.590674
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 2
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvZoomIn -win $_nWave1
wvZoomIn -win $_nWave1
wvZoomIn -win $_nWave1
wvZoomIn -win $_nWave1
wvZoomIn -win $_nWave1
wvSetCursor -win $_nWave1 113008556.460601 -snap {("G1" 48)}
wvSelectSignal -win $_nWave1 {( "G1" 48 )} 
wvSetRadix -win $_nWave1 -format UDec
wvSetRadix -win $_nWave1 -2Com
wvSetCursor -win $_nWave1 113010850.276900 -snap {("G1" 48)}
wvSetCursor -win $_nWave1 113020981.298968 -snap {("G1" 48)}
wvSetCursor -win $_nWave1 113030060.988557 -snap {("G1" 48)}
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvGetSignalOpen -win $_nWave1
wvGetSignalSetScope -win $_nWave1 "/tb"
wvGetSignalSetScope -win $_nWave1 "/tb/dut"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top/GLB_ifmap"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top/ppu"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top/controller"
wvSetPosition -win $_nWave1 {("G1" 49)}
wvSetPosition -win $_nWave1 {("G1" 49)}
wvAddSignal -win $_nWave1 -clear
wvAddSignal -win $_nWave1 -group {"G1" \
{/tb/dut/ACLK} \
{/tb/dut/DATA\[31:0\]} \
{/tb/dut/data_ready_reg} \
{/tb/dut/data_ready_reg_next} \
{/tb/dut/data_ready} \
{/tb/dut/data_ready_next} \
{/tb/dut/count\[10:0\]} \
{/tb/dut/count_next\[10:0\]} \
{/tb/dut/current_state\[2:0\]} \
{/tb/dut/next_state\[1:0\]} \
{/tb/dut/write_cnt\[10:0\]} \
{/tb/dut/write_cnt_next\[10:0\]} \
{/tb/dut/Top/data_in\[31:0\]} \
{/tb/dut/Top/ifmap_wire\[0:7\]} \
{/tb/dut/Top/GLB_ifmap/ram\[0:31\]} \
{/tb/dut/Top/GLB_ifmap/ram\[0\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[1\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[2\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[3\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[4\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[5\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[6\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[7\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[8\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[9\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[10\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[11\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[12\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[13\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[14\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[15\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[16\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[17\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[18\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[19\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[20\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[21\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[22\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[23\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[24\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[25\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[26\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[27\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[28\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[29\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[30\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[31\]\[31:0\]} \
{/tb/dut/Top/ppu/data_in_out\[31:0\]} \
{/tb/dut/Top/controller/ppu_count\[7:0\]} \
}
wvAddSignal -win $_nWave1 -group {"G2" \
}
wvSelectSignal -win $_nWave1 {( "G1" 49 )} 
wvSetPosition -win $_nWave1 {("G1" 49)}
wvGetSignalClose -win $_nWave1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvSetCursor -win $_nWave1 113010850.276900 -snap {("G1" 49)}
wvSelectSignal -win $_nWave1 {( "G1" 49 )} 
wvSetRadix -win $_nWave1 -format UDec
wvSetCursor -win $_nWave1 113261616.967039 -snap {("G1" 49)}
wvSetCursor -win $_nWave1 113259801.029121 -snap {("G1" 49)}
wvSetCursor -win $_nWave1 113259801.029121 -snap {("G1" 49)}
wvSetCursor -win $_nWave1 113270409.929588 -snap {("G1" 47)}
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoom -win $_nWave1 56262025.527768 56928761.470639
wvZoom -win $_nWave1 56283443.988101 56329735.499160
wvSetCursor -win $_nWave1 56209161.703250 -snap {("G1" 48)}
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoom -win $_nWave1 52386941.658031 60011332.227979
wvZoom -win $_nWave1 55950257.872586 56795656.619720
wvZoom -win $_nWave1 56208695.831548 56266515.849487
wvZoom -win $_nWave1 56222536.685575 56226491.215299
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvSetCursor -win $_nWave1 56209367.896687 -snap {("G1" 48)}
wvSetCursor -win $_nWave1 56211728.320647 -snap {("G1" 48)}
wvSetCursor -win $_nWave1 56460621.913746 -snap {("G1" 49)}
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 2
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 2
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 2
wvScrollDown -win $_nWave1 2
wvScrollDown -win $_nWave1 3
wvScrollDown -win $_nWave1 2
wvScrollDown -win $_nWave1 3
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 3
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 2
wvScrollDown -win $_nWave1 4
wvScrollDown -win $_nWave1 5
wvScrollDown -win $_nWave1 2
wvScrollDown -win $_nWave1 2
wvSetCursor -win $_nWave1 56308374.410185 -snap {("G1" 49)}
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 2
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvSelectSignal -win $_nWave1 {( "G1" 2 49 )} 
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 3
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 2
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 2
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 3
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 4
wvScrollDown -win $_nWave1 2
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 7
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvSetCursor -win $_nWave1 55202187.948366 -snap {("G1" 2)}
wvZoom -win $_nWave1 55151832.237224 55277721.515079
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvSelectSignal -win $_nWave1 {( "G1" 2 8 49 )} 
wvSelectSignal -win $_nWave1 {( "G1" 2 8 9 49 )} 
wvSelectSignal -win $_nWave1 {( "G1" 2 7 8 9 49 )} 
wvSelectSignal -win $_nWave1 {( "G1" 2 3 7 8 9 49 )} 
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 2
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoomOut -win $_nWave1
wvZoom -win $_nWave1 56010064.451411 56828279.529866
wvZoom -win $_nWave1 56413660.697363 56534061.258131
wvZoomAll -win $_nWave1
wvZoomIn -win $_nWave1
wvZoomIn -win $_nWave1
wvZoomIn -win $_nWave1
wvZoomIn -win $_nWave1
wvZoomIn -win $_nWave1
wvZoomOut -win $_nWave1
wvZoom -win $_nWave1 56049833.063472 56339004.695596
wvZoom -win $_nWave1 56203858.160788 56226032.980246
wvZoomAll -win $_nWave1
wvZoom -win $_nWave1 54108578.238342 57674825.440415
wvZoom -win $_nWave1 56107894.027274 56303760.453916
wvSetCursor -win $_nWave1 56402251.835801
wvSetCursor -win $_nWave1 56412806.296097
wvSetCursor -win $_nWave1 56438583.535665
wvGetSignalOpen -win $_nWave1
wvGetSignalSetScope -win $_nWave1 "/tb"
wvGetSignalSetScope -win $_nWave1 "/tb/dut"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top/GLB_ifmap"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top/ppu"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top/controller"
wvGetSignalSetScope -win $_nWave1 "/tb/dut/Top/GLB_weight"
wvSetPosition -win $_nWave1 {("G1" 50)}
wvSetPosition -win $_nWave1 {("G1" 50)}
wvAddSignal -win $_nWave1 -clear
wvAddSignal -win $_nWave1 -group {"G1" \
{/tb/dut/ACLK} \
{/tb/dut/DATA\[31:0\]} \
{/tb/dut/data_ready_reg} \
{/tb/dut/data_ready_reg_next} \
{/tb/dut/data_ready} \
{/tb/dut/data_ready_next} \
{/tb/dut/count\[10:0\]} \
{/tb/dut/count_next\[10:0\]} \
{/tb/dut/current_state\[2:0\]} \
{/tb/dut/next_state\[1:0\]} \
{/tb/dut/write_cnt\[10:0\]} \
{/tb/dut/write_cnt_next\[10:0\]} \
{/tb/dut/Top/data_in\[31:0\]} \
{/tb/dut/Top/ifmap_wire\[0:7\]} \
{/tb/dut/Top/GLB_ifmap/ram\[0:31\]} \
{/tb/dut/Top/GLB_ifmap/ram\[0\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[1\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[2\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[3\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[4\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[5\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[6\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[7\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[8\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[9\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[10\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[11\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[12\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[13\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[14\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[15\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[16\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[17\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[18\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[19\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[20\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[21\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[22\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[23\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[24\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[25\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[26\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[27\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[28\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[29\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[30\]\[31:0\]} \
{/tb/dut/Top/GLB_ifmap/ram\[31\]\[31:0\]} \
{/tb/dut/Top/ppu/data_in_out\[31:0\]} \
{/tb/dut/Top/controller/ppu_count\[7:0\]} \
{/tb/dut/Top/GLB_weight/ram\[0:1023\]} \
}
wvAddSignal -win $_nWave1 -group {"G2" \
}
wvSelectSignal -win $_nWave1 {( "G1" 50 )} 
wvSetPosition -win $_nWave1 {("G1" 50)}
wvGetSignalClose -win $_nWave1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvSelectSignal -win $_nWave1 {( "G1" 50 )} 
wvExpandBus -win $_nWave1 {("G1" 50)}
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 1
wvScrollDown -win $_nWave1 0
wvScrollUp -win $_nWave1 9
wvScrollUp -win $_nWave1 10
wvScrollUp -win $_nWave1 15
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 19
wvScrollUp -win $_nWave1 25
wvScrollUp -win $_nWave1 14
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 8
wvScrollUp -win $_nWave1 14
wvScrollUp -win $_nWave1 14
wvScrollUp -win $_nWave1 20
wvScrollUp -win $_nWave1 19
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 13
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 9
wvScrollUp -win $_nWave1 10
wvScrollUp -win $_nWave1 17
wvScrollUp -win $_nWave1 25
wvScrollUp -win $_nWave1 26
wvScrollUp -win $_nWave1 22
wvScrollUp -win $_nWave1 12
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 19
wvScrollUp -win $_nWave1 47
wvScrollUp -win $_nWave1 59
wvScrollUp -win $_nWave1 18
wvScrollUp -win $_nWave1 16
wvScrollUp -win $_nWave1 19
wvScrollUp -win $_nWave1 20
wvScrollUp -win $_nWave1 15
wvScrollUp -win $_nWave1 14
wvScrollUp -win $_nWave1 16
wvScrollUp -win $_nWave1 31
wvScrollUp -win $_nWave1 12
wvScrollUp -win $_nWave1 11
wvScrollUp -win $_nWave1 10
wvScrollUp -win $_nWave1 10
wvScrollUp -win $_nWave1 13
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 9
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 9
wvScrollUp -win $_nWave1 9
wvScrollUp -win $_nWave1 14
wvScrollUp -win $_nWave1 11
wvScrollUp -win $_nWave1 7
wvScrollUp -win $_nWave1 9
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 7
wvScrollUp -win $_nWave1 11
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 7
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 8
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 8
wvScrollUp -win $_nWave1 15
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 8
wvScrollUp -win $_nWave1 14
wvScrollUp -win $_nWave1 16
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 7
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 10
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 10
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 3
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 1
wvScrollDown -win $_nWave1 28
wvScrollDown -win $_nWave1 8
wvScrollDown -win $_nWave1 22
wvScrollDown -win $_nWave1 64
wvScrollDown -win $_nWave1 52
wvScrollDown -win $_nWave1 50
wvScrollDown -win $_nWave1 27
wvScrollDown -win $_nWave1 41
wvScrollDown -win $_nWave1 74
wvScrollDown -win $_nWave1 57
wvScrollDown -win $_nWave1 48
wvScrollDown -win $_nWave1 62
wvScrollDown -win $_nWave1 52
wvScrollDown -win $_nWave1 46
wvScrollDown -win $_nWave1 31
wvScrollDown -win $_nWave1 44
wvScrollDown -win $_nWave1 40
wvScrollDown -win $_nWave1 38
wvScrollDown -win $_nWave1 38
wvScrollDown -win $_nWave1 61
wvScrollDown -win $_nWave1 23
wvScrollDown -win $_nWave1 28
wvScrollDown -win $_nWave1 17
wvScrollDown -win $_nWave1 16
wvScrollDown -win $_nWave1 16
wvScrollDown -win $_nWave1 6
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 20
wvScrollUp -win $_nWave1 48
wvScrollUp -win $_nWave1 59
wvScrollUp -win $_nWave1 66
wvScrollUp -win $_nWave1 63
wvScrollUp -win $_nWave1 35
wvScrollUp -win $_nWave1 34
wvScrollUp -win $_nWave1 25
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 7
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 16
wvScrollUp -win $_nWave1 15
wvScrollUp -win $_nWave1 30
wvScrollUp -win $_nWave1 28
wvScrollUp -win $_nWave1 17
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 11
wvScrollUp -win $_nWave1 13
wvScrollUp -win $_nWave1 12
wvScrollUp -win $_nWave1 8
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 8
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 9
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 9
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 7
wvScrollUp -win $_nWave1 10
wvScrollUp -win $_nWave1 12
wvScrollUp -win $_nWave1 8
wvScrollUp -win $_nWave1 8
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 11
wvScrollUp -win $_nWave1 9
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 19
wvScrollUp -win $_nWave1 11
wvScrollUp -win $_nWave1 9
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 8
wvScrollUp -win $_nWave1 25
wvScrollUp -win $_nWave1 29
wvScrollUp -win $_nWave1 10
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 10
wvScrollUp -win $_nWave1 9
wvScrollUp -win $_nWave1 11
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 8
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 4
wvScrollUp -win $_nWave1 7
wvScrollUp -win $_nWave1 6
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 5
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 1
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 2
wvScrollUp -win $_nWave1 3
wvScrollUp -win $_nWave1 2
wvSetCursor -win $_nWave1 56450508.046099 -snap {("G1" 48)}
wvSetCursor -win $_nWave1 56467151.618104 -snap {("G1" 49)}
wvSetCursor -win $_nWave1 56468369.440446
wvSetCursor -win $_nWave1 56479938.752693
wvResizeWindow -win $_nWave1 550 121 893 202
wvResizeWindow -win $_nWave1 0 23 1536 801
wvSetCursor -win $_nWave1 56669056.413859
