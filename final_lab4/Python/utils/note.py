from .fuse import COMPILER_NAME
import math

tvm_auto_args_NOTES = {
    f"{COMPILER_NAME}_qlinear_relu":[
        "input",
        "input_scale",
        "input_zero_point",
        "weight",
        "weight_scale",
        "weight_zero_point",
        "bias",
        "bias_scale",
        "bias_zero_point",
        "dequantize_scale",
        "dequantize_zero_point",
    ]
}

def convert_log(x):
    return -int(math.log2(x))

tvm_c_func_call_gen = {
    f"{COMPILER_NAME}_qlinear_relu":lambda config:
f'''
  qlinear_relu_cpu(
    {config["input"]}, {config["weight"]}, {config["output"]},
    {config["bias"]}, {config["output_len"]}, {config["input_len"]}, {config["weight_len"]},
    {convert_log(config["input_scale"] * config["weight_scale"] / config["dequantize_scale"])}
  );
'''
}
