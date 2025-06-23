#!/usr/bin/env python3
# file: render_relay.py

import os
from visu_tvm import VisuGraph

def main():
    # 你的 Relay IR 文本文件
    ir_path = "relay_ir.txt"
    if not os.path.isfile(ir_path):
        print(f"xxxxxxxx no find{ir_path}")
        return

    # 可选：改成你想要的输出名字
    save_name = "vit"


    vg = VisuGraph(txt_file=ir_path,
                   save_name=save_name,
                   with_info=True)
    vg.codegen()
    out_svg = f"output/visu_{save_name}_relay_ir.svg"
    print(f"okok{out_svg}")

if __name__ == "__main__":
    main()
