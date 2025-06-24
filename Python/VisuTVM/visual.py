import os
from visu_tvm import VisuGraph

def main():
    ir_path = "../../output/relay_ir.txt"
    if not os.path.isfile(ir_path):
        print(f"xxxxxxxx no find{ir_path}")
        return

    save_name = "vit"


    vg = VisuGraph(txt_file=ir_path,
                   save_name=save_name,
                   with_info=True)
    vg.codegen()
    out_svg = f"../../output/visu_{save_name}_relay_ir.svg"
    print(f"save to {out_svg}")

if __name__ == "__main__":
    main()
