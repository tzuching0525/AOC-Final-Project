#!/usr/bin/env python3
# export_onnx.py

import torch
from torch.onnx import OperatorExportTypes
from torch.quantization import quantize_dynamic
from vit import ViT

if __name__ == "__main__":
    # —— 配置区域 —— 
    PT_MODEL_PATH    = "../model/quant_vit.pt"      # 你的 PyTorch 检查点
    ONNX_EXPORT_PATH = "../model/quant_vit_int8.onnx"  # 导出的 ONNX 路径
    BATCH_SIZE       = 1
    N_CHANNELS       = 3
    IMAGE_SIZE       = 72
    # ————————

    # 1. 构建 float32 的 ViT 并 load 权重
    print("1) Loading float model and weights…")
    num_classes        = 100
    patch_size         = 6
    projection_dim     = 64
    num_patches        = (IMAGE_SIZE // patch_size) ** 2
    num_heads          = 4
    transformer_units  = [projection_dim * 2, projection_dim]
    transformer_layers = 8
    mlp_head_units     = [2048, 1024]

    model_fp = ViT(
        image_size=IMAGE_SIZE,
        patch_size=patch_size,
        num_classes=num_classes,
        projection_dim=projection_dim,
        num_patches=num_patches,
        num_heads=num_heads,
        transformer_units=transformer_units,
        transformer_layers=transformer_layers,
        mlp_head_units=mlp_head_units
    ).eval()

    ckpt = torch.load(PT_MODEL_PATH, map_location="cpu")
    state_dict = ckpt.get("state_dict", ckpt)
    # 如果键里带 'module.' 前缀，可以去掉
    state_dict = {k.replace("module.", ""): v for k, v in state_dict.items()}
    missing, unexpected = model_fp.load_state_dict(state_dict, strict=False)
    print("   missing keys:", missing)
    print("   unexpected keys:", unexpected)

    # 2. 对所有 Linear 层做动态量化
    print("2) Applying dynamic quantization to Linear layers…")
    model_int8 = quantize_dynamic(
        model_fp,                     # 要量化的模型
        {torch.nn.Linear},            # 只对哪些算子做量化
        dtype=torch.qint8             # 量化到 int8
    )
    print("   ✔ dynamic quantization done.")

    # 3. 导出到 ONNX（包含 QuantizeLinear/DequantizeLinear/QLinearMatMul 等节点）
    print("3) Exporting quantized model to ONNX…")
    dummy = torch.randn(BATCH_SIZE, N_CHANNELS, IMAGE_SIZE, IMAGE_SIZE)
    torch.onnx.export(
        model_int8,
        dummy,
        ONNX_EXPORT_PATH,
        input_names=["input"],
        output_names=["logits"],
        opset_version=13,
        do_constant_folding=False,                # 不折叠常量，保留量化/反量化节点
        operator_export_type=OperatorExportTypes.ONNX,  
        dynamic_axes={
            "input":  {0: "batch"},
            "logits": {0: "batch"},
        },
        verbose=False,
    )
    print(f"✔ Exported INT8-quantized ONNX to {ONNX_EXPORT_PATH}")
