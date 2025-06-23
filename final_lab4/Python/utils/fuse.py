from tvm.relay import dataflow_pattern as dfp
from tvm.relay import transform
from tvm.relay import qnn
from tvm import relay
import tvm
from tvm.relay.op.contrib.register import register_pattern_table

COMPILER_NAME = "DLA"

def fuse_dense_add_relu():
    # Define the pattern for the operations to be fused
    i = dfp.wildcard()  # Input
    w = dfp.wildcard()  # Weight
    b = dfp.wildcard()  # Bias
    dequantized_i = dfp.is_op("qnn.dequantize")(i,dfp.wildcard(),dfp.wildcard())
    dequantized_w = dfp.is_op("qnn.dequantize")(w,dfp.wildcard(),dfp.wildcard())
    dequantized_b = dfp.is_op("qnn.dequantize")(b,dfp.wildcard(),dfp.wildcard())
    dense_op    = dfp.is_op("nn.dense")(dequantized_i, dequantized_w)
    add_op = dfp.is_op("add")(dense_op, dequantized_b)
    relu_op     = dfp.is_op("nn.relu")(add_op)
    quantize_op = dfp.is_op("qnn.quantize")(relu_op, dfp.wildcard(), dfp.wildcard())
    cast_op     = dfp.is_op("cast")(quantize_op)
    return cast_op

@register_pattern_table(COMPILER_NAME)
def  pattern_table():
    acc_pattern_tables = [
        (f"{COMPILER_NAME}.qlinear_relu", fuse_dense_add_relu())
    ]
    return acc_pattern_tables

# Define the fusion function
def merge_composite_pass(mod):
    with tvm.transform.PassContext(opt_level=3):
        model_progress = dict()
        model_progress['origin'] = mod
        model_progress['MergeComposite'] = transform.MergeComposite(pattern_table())(model_progress['origin'])
        model_progress['AnnotateTarget'] = transform.AnnotateTarget([COMPILER_NAME])(model_progress['MergeComposite'])
        model_progress['MergeCompilerRegions'] = transform.MergeCompilerRegions()(model_progress['AnnotateTarget'])
        model_progress['PartitionGraph'] = transform.PartitionGraph()(model_progress['MergeCompilerRegions'])
    return (model_progress, model_progress['PartitionGraph'])
