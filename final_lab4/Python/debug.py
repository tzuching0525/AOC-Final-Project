import onnx
model = onnx.load("../model/quant_vit.onnx")
ops = {node.op_type for node in model.graph.node}
print(ops)