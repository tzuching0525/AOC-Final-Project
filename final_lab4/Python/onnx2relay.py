import onnx
import os
from tvm import relay

onnx_path = "../model/quant_vit.onnx"
output_dir = os.path.abspath("../output")
os.makedirs(output_dir, exist_ok=True)
relay_name = "relay_ir.txt"
output_path = output_dir + '/' + relay_name

print("loading onnx model...")
onnx_model = onnx.load(onnx_path)

shape_dict = {"input": (1, 3, 72, 72)}
mod, params = relay.frontend.from_onnx(onnx_model, shape_dict)

with open(output_path, "w") as f:
    f.write(str(mod))

print(f"relay ir is written to {output_path}")
