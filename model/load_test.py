import torch
import torch.nn.quantized as nnq
import torch.ao.quantization as tq

from vit_model import ViT

# 1. 建立 ViT 並準備量化
model = ViT(
    image_size=72,
    patch_size=6,
    num_classes=100,
    projection_dim=64,
    num_patches=144,
    num_heads=4,
    transformer_units=[128, 64],
    transformer_layers=8,
    mlp_head_units=[2048, 1024]
)
model.eval()
model.qconfig = tq.get_default_qconfig('fbgemm')

# 2. prepare
model = tq.prepare(model)

# 3. 轉換成量化模型
model = tq.convert(model)

# 4. 包裝 QuantWrapper
model = tq.QuantWrapper(model)

# 5. 載入量化後的 state_dict（忽略未預期的 key）
try:
    state_dict = torch.load("quant_vit.pt", map_location="cpu")
    model.load_state_dict(state_dict, strict=False)  # 加入 strict=False
    print("成功載入量化 state_dict")
except Exception as e:
    print("載入失敗:", e)

# 6. 印出某層的量化權重
mlp_linear = model.module.transformer_layers[0].mlp[0]
if isinstance(mlp_linear, nnq.Linear):
    print("\nMLP 第一層:")
    
    # 1. 取得量化後的 int8 權重
    weight_int8 = mlp_linear.weight().int_repr()
    print("Raw int8 values:", weight_int8)
    
    # 2. 顯示量化參數
    print(f"Scale: {mlp_linear.scale}")
    print(f"Zero point: {mlp_linear.zero_point}")
    
    # 3. 驗證量化公式
    print("\n驗證第一個元素:")
    raw_int8 = weight_int8[0,0].item()
    dequantized = (raw_int8 - mlp_linear.zero_point) * mlp_linear.scale
    print(f"Int8 值: {raw_int8}")
    print(f"反量化值: {dequantized:.4f}")
    print(f"PyTorch 顯示值: {mlp_linear.weight()[0,0].item():.4f}")
else:
    print("不是量化 Linear 層")