# utils/utils.py

import os
import onnx
from onnx import shape_inference
import tvm
from tvm import relay
from tvm.micro import export_model_library_format
from tvm.relay.backend import Runtime
from tvm.target import Target


def load_onnx_model(model_path, input_name="input", input_shapes=[1, 3, 72, 72]):
    # 1) 构造输入形状字典
    shape_dict = {input_name: input_shapes}

    # 2) Load ONNX and perform shape inference
    onnx_model = onnx.load(model_path)
    onnx_model = shape_inference.infer_shapes(onnx_model)
    # 可选：保存推断后模型以便检查
    inferred_path = model_path.replace(".onnx", "_inferred.onnx")
    onnx.save(onnx_model, inferred_path)
    print(f"[utils] Shape-inferred ONNX saved to: {inferred_path}")

    # 3) 导入到 Relay，指定已知输入形状
    relay_mod, params = relay.frontend.from_onnx(
        onnx_model,
        shape=shape_dict,
        opset=13
    )
    return relay_mod, params


def dump_relay_model(relay_model, path):
    with open(path, "w") as f:
        f.write(repr(relay_model))


def build_model(relay_model, mod_params, opts):
    runtime = Runtime("crt", {"system-lib": True})
    target = "llvm"
    file_format_str = "{name}_c.{ext}"

    with tvm.transform.PassContext(opt_level=3, config={"tir.disable_vectorize": True}):
        graph, lib, params = relay.build(
            relay_model,
            target=target,
            runtime=runtime,
            params=mod_params
        )

    print(lib)

    build_dir = os.path.abspath(opts.out_dir)
    os.makedirs(build_dir, exist_ok=True)

    lib_file_name = os.path.join(build_dir, file_format_str.format(name="model", ext="tar"))
    # fcompile=False: 打包 C 源码 (.c/.h) 而不是编译为 .o
    lib.export_library(
        lib_file_name,
        fcompile=False
    )
