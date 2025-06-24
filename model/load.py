import torch
import torch.nn.quantized as nnq
import torch.ao.quantization as tq
import os

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

# 6. 印出各層的量化權重
def print_layer_info(layer_idx, transformer_layer):
    print(f"\n=== Transformer Layer {layer_idx} ===")
    
    # Norm1
    print("\n--- First Norm ---")
    norm1 = transformer_layer.norm1
    print(f"Weight dtype: {norm1.weight.data.dtype}")  # 檢查數據類型
    print(f"Weight values: {norm1.weight.data}")
    print(f"Scale: {norm1.scale}")
    print(f"Bias: {norm1.bias.data}")
    # print(f"Weight value range: [{norm1.weight.data.min():.4f}, {norm1.weight.data.max():.4f}]")
    
    # Multi-Head Attention
    print("\n--- Multi-Head Attention ---")
    attn = transformer_layer.attn
    
    # Q, K, V weights
    for name, linear in [("Q", attn.linear_Q), ("K", attn.linear_K), ("V", attn.linear_V)]:
        if isinstance(linear, nnq.Linear):
            print(f"\n{name} Linear:")
            weight_int8 = linear.weight().int_repr()
            print(f"Int8 weights:")
            print(weight_int8)  # 直接印出完整矩陣
            print(f"Scale: {linear.scale}")
            print(f"Zero point: {linear.zero_point}")
    
    # Output projection (Wo)
    if isinstance(attn.out_proj, nnq.Linear):
        print("\nOutput Projection (Wo):")
        weight_int8 = attn.out_proj.weight().int_repr()
        print("Int8 weights:")
        print(weight_int8)  # 直接印出完整矩陣
        print(f"Scale: {attn.out_proj.scale}")
        print(f"Zero point: {attn.out_proj.zero_point}")
    
    # Norm2
    print("\n--- Second Norm ---")
    norm2 = transformer_layer.norm2
    print(f"Weight: {norm2.weight.data}")
    print(f"Scale: {norm2.scale}")
    print(f"Bias: {norm2.bias.data}")
    
    # MLP
    print("\n--- MLP ---")
    for i, layer in enumerate(transformer_layer.mlp):
        if isinstance(layer, nnq.Linear):
            print(f"\nMLP Layer {i}:")
            weight_int8 = layer.weight().int_repr()

            weight_float = layer.weight().dequantize()
            weight_dequant = (weight_int8.float() - layer.zero_point) * layer.scale
            print(weight_int8, weight_float, weight_dequant, layer.weight())
            print(layer.scale, layer.zero_point)

            print("Int8 weights:")
            print(weight_int8)  # 直接印出完整矩陣
            print(f"Scale: {layer.scale}")
            print(f"Zero point: {layer.zero_point}")

# 印出所有層的資訊
for i, layer in enumerate(model.module.transformer_layers):
    print_layer_info(i, layer)

# 最後的 Norm
print("\n=== Final Layer Norm ===")
final_norm = model.module.norm
print(f"Weight: {final_norm.weight.data}")
print(f"Bias: {final_norm.bias.data}")


def array_to_string(arr):
    """將張量轉換成易讀的字串格式，每行一個陣列，數字間用空格分隔"""
    if isinstance(arr, torch.Tensor):
        arr = arr.tolist()
    if isinstance(arr[0], list):
        # 2D 陣列
        return '\n'.join(' '.join(str(x) for x in row) for row in arr)
    else:
        # 1D 陣列
        return ' '.join(str(x) for x in arr)

def compute_error(original, quantized, name=""):
    """計算並返回量化誤差統計"""
    if isinstance(original, torch.Tensor):
        original = original.float()
    if isinstance(quantized, torch.Tensor):
        quantized = quantized.float()
    
    abs_error = torch.abs(original - quantized)
    rel_error = abs_error / (torch.abs(original) + 1e-8)  # 避免除以零
    
    stats = {
        "最大絕對誤差": float(torch.max(abs_error)),
        "平均絕對誤差": float(torch.mean(abs_error)),
        "最大相對誤差": float(torch.max(rel_error)),
        "平均相對誤差": float(torch.mean(rel_error))
    }
    
    return stats

def save_layer_info(layer_idx, transformer_layer):
    # 建立該層的目錄
    layer_dir = f"layer_{layer_idx}"
    os.makedirs(layer_dir, exist_ok=True)
    
    # Norm1
    norm1 = transformer_layer.norm1
    with open(f"{layer_dir}/norm1_weight.txt", "w") as f:
        # f.write(f"dtype: {norm1.weight.data.dtype}\n")
        f.write(array_to_string(norm1.weight.data))
    with open(f"{layer_dir}/norm1_bias.txt", "w") as f:
        f.write(array_to_string(norm1.bias.data))
    
    # Multi-Head Attention
    attn = transformer_layer.attn
    
    # Q, K, V weights and biases
    for name, linear in [("Q", attn.linear_Q), ("K", attn.linear_K), ("V", attn.linear_V)]:
        if isinstance(linear, nnq.Linear):
            # 儲存 weight
            with open(f"{layer_dir}/{name}_weight.txt", "w") as f:
                # 取得原始浮點数權重
                # weight_float = linear.weight().dequantize()
                # 取得量化後的 int8 權重
                weight_int8 = linear.weight().int_repr()
                # 反量化回浮點數以比較
                # weight_dequant = (weight_int8.float() - linear.zero_point) * linear.scale
                
                # 計算誤差
                # error_stats = compute_error(weight_float, weight_dequant, f"{name} weight")
                
                # 寫入檔案
                # f.write(f"Shape: {weight_int8.shape}\n")
                # f.write(f"Scale: {linear.scale}\n")
                # f.write(f"Zero point: {linear.zero_point}\n")
                # f.write("\n量化誤差統計:\n")
                #for key, value in error_stats.items():
                #    f.write(f"{key}: {value:.6f}\n")
                #f.write("\nWeights:\n")
                f.write(array_to_string(weight_int8))
            
            # 儲存 bias
            with open(f"{layer_dir}/{name}_bias.txt", "w") as f:
                bias = linear.bias()
                if bias is not None:
                    # 轉換為 int32
                    input_scale = linear.scale
                    weight_scale = linear.scale
                    bias_scale = input_scale * weight_scale
                    bias_float = bias.float()
                    bias_int32 = (bias_float / bias_scale).round().to(torch.int32)
                    # bias_dequant = bias_int32.float() * bias_scale
                    
                    # 計算誤差
                    # error_stats = compute_error(bias_float, bias_dequant, f"{name} bias")
                    
                    # 寫入檔案
                    # f.write(f"Shape: {bias_int32.shape}\n")
                    # f.write(f"Scale: {bias_scale}\n")
                    # f.write("Zero point: 0\n")
                    # f.write("\n量化誤差統計:\n")
                    # for key, value in error_stats.items():
                    #     f.write(f"{key}: {value:.6f}\n")
                    # f.write("\nBias (int32):\n")
                    f.write(array_to_string(bias_int32))
                else:
                    f.write("No bias")
    
    # Output projection (Wo)
    if isinstance(attn.out_proj, nnq.Linear):
        # 儲存 weight
        with open(f"{layer_dir}/Wo_weight.txt", "w") as f:
            weight_int8 = attn.out_proj.weight().int_repr()
            # f.write(f"Shape: {weight_int8.shape}\n")
            # f.write(f"Scale: {attn.out_proj.scale}\n")
            # f.write(f"Zero point: {attn.out_proj.zero_point}\n")
            # f.write("\nWeights:\n")
            f.write(array_to_string(weight_int8))
        
        # 儲存 bias 並轉換為 int32
        with open(f"{layer_dir}/Wo_bias.txt", "w") as f:
            bias = attn.out_proj.bias()
            if bias is not None:
                # 轉換為 int32
                input_scale = attn.out_proj.scale
                weight_scale = attn.out_proj.scale
                bias_scale = input_scale * weight_scale
                bias_float = bias.float()
                bias_int32 = (bias_float / bias_scale).round().to(torch.int32)
                # bias_dequant = bias_int32.float() * bias_scale
                
                # 計算誤差
                # error_stats = compute_error(bias_float, bias_dequant, "Wo bias")
                
                # 寫入檔案
                # f.write(f"Shape: {bias_int32.shape}\n")
                # f.write(f"Scale: {bias_scale}\n")
                # f.write("Zero point: 0\n")
                # f.write("\n量化誤差統計:\n")
                # for key, value in error_stats.items():
                #     f.write(f"{key}: {value:.6f}\n")
                # f.write("\nBias (int32):\n")
                f.write(array_to_string(bias_int32))
            else:
                f.write("No bias")

    # Norm2
    norm2 = transformer_layer.norm2
    with open(f"{layer_dir}/norm2_weight.txt", "w") as f:
        # f.write(f"dtype: {norm2.weight.data.dtype}\n")
        f.write(array_to_string(norm2.weight.data))
    with open(f"{layer_dir}/norm2_bias.txt", "w") as f:
        f.write(array_to_string(norm2.bias.data))
    
    # MLP
    for i, layer in enumerate(transformer_layer.mlp):
        if isinstance(layer, nnq.Linear):
            # 儲存 weight
            with open(f"{layer_dir}/mlp_{i}_weight.txt", "w") as f:
                weight_int8 = layer.weight().int_repr()

                # f.write(f"Shape: {weight_int8.shape}\n")
                # f.write(f"Scale: {layer.scale}\n")
                # f.write(f"Zero point: {layer.zero_point}\n")
                # f.write("\nWeights:\n")
                f.write(array_to_string(weight_int8))
            
            # 儲存 bias 並轉換為 int32
            with open(f"{layer_dir}/mlp_{i}_bias.txt", "w") as f:
                bias = layer.bias()
                if bias is not None:
                    # 轉換為 int32
                    input_scale = layer.scale
                    weight_scale = layer.scale
                    bias_scale = input_scale * weight_scale
                    bias_float = bias.float()
                    bias_int32 = (bias_float / bias_scale).round().to(torch.int32)
                    
                    # f.write(f"Shape: {bias_int32.shape}\n")
                    # f.write(f"Scale: {bias_scale}\n")
                    # f.write("Zero point: 0\n")
                    # f.write("\nBias (int32):\n")
                    f.write(array_to_string(bias_int32))
                else:
                    f.write("No bias")

# 建立主目錄
os.makedirs("model_weights", exist_ok=True)
os.chdir("model_weights")

# 儲存所有層的資訊
for i, layer in enumerate(model.module.transformer_layers):
    save_layer_info(i, layer)

# 最後的 Norm
final_dir = "final_layer"
os.makedirs(final_dir, exist_ok=True)
with open(f"{final_dir}/norm_weight.txt", "w") as f:
    f.write(str(model.module.norm.weight.data.tolist()))
with open(f"{final_dir}/norm_bias.txt", "w") as f:
    f.write(str(model.module.norm.bias.data.tolist()))

print("權重資料已儲存到 model_weights 目錄")