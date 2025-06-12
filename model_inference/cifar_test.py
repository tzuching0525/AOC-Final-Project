import torch
import torch.nn.quantized as nnq
import torch.ao.quantization as tq
from torchvision import datasets, transforms
from torch.utils.data import DataLoader
from tqdm import tqdm
import os
from vit_model import ViT
import numpy as np
DEVICE = "cpu"
# 設定資料轉換
transform = transforms.Compose([
    transforms.Resize((72, 72)),
    transforms.ToTensor(),
    transforms.Normalize((0.5071, 0.4867, 0.4408), 
                       (0.2675, 0.2565, 0.2761))
])

# 載入一筆測試資料
testset = datasets.CIFAR100(root='./data', train=False,
                          download=True, transform=transform)
image, label = testset[0]
image = image.unsqueeze(0)  # 添加批次維度

# 建立模型
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
).eval()

# 載入預訓練權重
model.load_state_dict(torch.load("vit.pt", map_location="cpu"))

# 使用動態量化
quantized_model = torch.quantization.quantize_dynamic(
    model, 
    {torch.nn.Linear}, # 只量化線性層
    dtype=torch.qint8
)

# 執行推論並顯示結果
with torch.no_grad():
    # 顯示輸入圖片數值
    print("\n輸入圖片數值陣列:")
    print("Shape:", image.shape)
    print("數值範圍: [{:.4f}, {:.4f}]".format(image.min(), image.max()))
    for c in range(3):
        print(f"\n通道 {c}:")
        print(image[0, c].numpy())
    
    # 執行推論
    output = quantized_model(image)
    
    # 顯示完整的輸出數值
    print("\n完整模型輸出數值陣列:")
    print("Shape:", output.shape)
    print("Logits 範圍: [{:.4f}, {:.4f}]".format(output.min(), output.max()))
    print("\n所有類別的 logits 值:")
    output_array = output[0].numpy()
    for i, logit in enumerate(output_array):
        print(f"類別 {i:3d}: {logit:8.4f}")

    # 計算並顯示預測結果
    probabilities = torch.nn.functional.softmax(output, dim=1)
    pred = output.argmax(dim=1).item()
    print(f"\n真實標籤: {label}")
    print(f"預測標籤: {pred}")
    
    # 顯示前5個最可能的類別
    top5_prob, top5_indices = torch.topk(probabilities, 5)
    print("\n前5個預測結果:")
    for i, (prob, idx) in enumerate(zip(top5_prob[0], top5_indices[0])):
        print(f"{testset.classes[idx]}: {prob:.4f}")

# 計算模型大小
def get_model_size(model):
    torch.save(model.state_dict(), "temp.pt")
    size = os.path.getsize("temp.pt") / 1024 / 1024  # MB
    # os.remove("temp.pt")
    return size

original_size = get_model_size(model)
quantized_size = get_model_size(quantized_model)

print(f"\n模型大小比較:")
print(f"原始模型: {original_size:.2f} MB")
print(f"量化後: {quantized_size:.2f} MB")
print(f"壓縮比例: {(1 - quantized_size/original_size)*100:.2f}%")

'''
# 執行全部測試資料的推論
print("\n開始評估完整測試集...")
with torch.no_grad():
    total = len(testset)  # 應該是 10000 筆測試資料
    correct_1 = 0
    correct_5 = 0
    loop = tqdm(DataLoader(testset, batch_size=32), desc="測試進度")
    
    for images, labels in loop:
        # 執行推論
        outputs = quantized_model(images)
        
        # 計算 top-1 準確率
        _, preds_1 = outputs.max(1)
        correct_1 += (preds_1 == labels).sum().item()
        
        # 計算 top-5 準確率
        _, preds_5 = outputs.topk(5, 1, True, True)
        correct_5 += sum([1 if label in pred5 else 0 
                         for label, pred5 in zip(labels, preds_5)])
        
        # 更新進度條
        loop.set_postfix({
            'Top-1': f'{100 * correct_1 / total:.2f}%',
            'Top-5': f'{100 * correct_5 / total:.2f}%'
        })

    # 印出最終結果
    print(f"\n完整測試集結果 (共 {total} 筆測試資料):")
    print(f"Top-1 準確率: {100 * correct_1 / total:.2f}%")
    print(f"Top-5 準確率: {100 * correct_5 / total:.2f}%")
'''

def inspect_model_params(model, title="模型參數檢查"):
    print(f"\n=== {title} ===")
    for name, module in model.named_modules():
        if isinstance(module, (torch.nn.Linear, torch.nn.quantized.Linear)):
            print(f"\n層級: {name}")
            print(f"類型: {type(module).__name__}")
            
            if isinstance(module, torch.nn.Linear):
                # 原始線性層
                has_bias = module.bias is not None
                if has_bias:
                    print(f"Bias 統計:")
                    print(f"- 範圍: [{module.bias.min().item():.4f}, {module.bias.max().item():.4f}]")
                    print(f"- 形狀: {module.bias.shape}")
                else:
                    print("此層沒有 bias")
            else:
                # 量化線性層
                try:
                    # 顯示量化設定
                    print(f"Weight scale: {module.scale}")
                    if hasattr(module, 'zero_point'):
                        print(f"Zero point: {module.zero_point}")
                    
                    # 嘗試使用不同方法存取參數
                    if hasattr(module, '_packed_params'):
                        print("Packed params info:")
                        packed = module._packed_params
                        
                        # 使用 _packed_params 的其他屬性
                        if hasattr(packed, 'dtype'):
                            print(f"- Dtype: {packed.dtype}")
                        if hasattr(packed, 'size'):
                            print(f"- Size: {packed.size()}")
                            
                        # 嘗試獲取參數的形狀資訊
                        try:
                            weight_shape = packed.w().shape
                            print(f"- Weight shape: {weight_shape}")
                        except:
                            try:
                                # 嘗試從 _weight_bias() 獲取資訊
                                w, b = packed._weight_bias()
                                if w is not None:
                                    print(f"- Weight shape from _weight_bias: {w.shape}")
                                if b is not None:
                                    print(f"- Bias shape from _weight_bias: {b.shape}")
                            except:
                                print("- Cannot access weight and bias info")
                                
                except Exception as e:
                    print(f"檢查參數時發生錯誤: {str(e)}")

def analyze_quantized_params(module):
    try:
        w, b = module._packed_params._weight_bias()
        if w is not None:
            print("\nWeight 統計:")
            print(f"- 數值範圍: [{w.min().item():.4f}, {w.max().item():.4f}]")
            print(f"- 非零元素: {(w != 0).sum().item()}/{w.numel()}")
        if b is not None:
            print("\nBias 統計:")
            print(f"- 數值範圍: [{b.min().item():.4f}, {b.max().item():.4f}]")
            print(f"- 非零元素: {(b != 0).sum().item()}/{b.numel()}")
    except Exception as e:
        print(f"無法分析參數: {e}")

# 檢查原始模型
print("\n檢查原始模型...")
inspect_model_params(model, "原始模型")

# 量化後檢查
print("\n檢查量化後模型...")
inspect_model_params(quantized_model, "量化後模型")

# 顯示量化後模型的參數統計
#print("\n量化後模型參數統計分析...")
#for name, module in quantized_model.named_modules():
#    if isinstance(module, torch.nn.quantized.Linear):
#        analyze_quantized_params(module)


# 建立輸出目錄
os.makedirs("quantized_params", exist_ok=True)

# 儲存每層輸出的字典
layer_outputs = {}
quantized_outputs = {}  # 新增：儲存量化值

# 儲存每層的量化參數
layer_scales = {}
layer_zero_points = {}

# 定義 hook 函數
def get_layer_output(name):
    def hook(module, input, output):
        # 儲存量化參數
        if isinstance(module, torch.nn.quantized.Linear):
            layer_scales[name] = module.scale
            layer_zero_points[name] = module.zero_point
        
        # 儲存輸出
        if isinstance(module, torch.nn.MultiheadAttention):
            # 注意力機制層的輸出
            if ".q_proj" in name:
                # 取出 Q 的部分
                layer_outputs[name] = input[0][:, :, :module.head_dim].detach()
            elif ".k_proj" in name:
                # 取出 K 的部分
                layer_outputs[name] = input[0][:, :, module.head_dim:2*module.head_dim].detach()
            elif ".v_proj" in name:
                # 取出 V 的部分
                layer_outputs[name] = input[0][:, :, 2*module.head_dim:].detach()
            else:
                layer_outputs[name] = output[0].detach() if isinstance(output, tuple) else output.detach()
        else:
            layer_outputs[name] = output.detach()
        
        # 處理量化...
        if isinstance(module, torch.nn.quantized.Linear):
            scale = module.scale
            zero_point = module.zero_point
            quantized = ((output / scale) + zero_point).round().to(torch.int8)
            print(name, output, scale, zero_point)
            quantized_outputs[name] = quantized.detach()
        # 處理其他層的量化...
        elif isinstance(module, (torch.nn.MultiheadAttention, torch.nn.LayerNorm)):
            output_tensor = output[0] if isinstance(output, tuple) else output
            output_np = output_tensor.detach().numpy()
            output_max = max(abs(output_np.max()), abs(output_np.min()))
            scale = output_max / 127.0
            print(scale)
            # scale = 1/10
            
            if scale != 0:
                zero_point = 0
                quantized = ((output_tensor / scale) + zero_point).to(torch.int8)
                quantized_outputs[name] = quantized.detach()
            print(name, output_np, (output_tensor / scale), scale)
    return hook

# 註冊 hooks
hooks = []

# 為每一層註冊 hook
for name, module in quantized_model.named_modules():
    if isinstance(module, (torch.nn.quantized.Linear, torch.nn.Linear)):
        hooks.append(module.register_forward_hook(get_layer_output(name)))
    # 處理注意力機制層
    elif isinstance(module, torch.nn.MultiheadAttention):
        # 使用 _qkv_same_embed_dim 來確認是否使用相同的嵌入維度
        is_same_dim = getattr(module, '_qkv_same_embed_dim', True)
        
        if is_same_dim:
            # 當使用相同嵌入維度時，in_proj_weight 包含 Q、K、V 的權重
            weight = module.in_proj_weight
            if weight is not None:
                # 分割 Q、K、V 的權重
                q, k, v = weight.chunk(3, dim=0)
                
                # 為每個部分註冊 hook
                hooks.append(module.register_forward_hook(
                    get_layer_output(f"{name}.q_proj")))
                hooks.append(module.register_forward_hook(
                    get_layer_output(f"{name}.k_proj")))
                hooks.append(module.register_forward_hook(
                    get_layer_output(f"{name}.v_proj")))
        else:
            # 當使用不同嵌入維度時
            if hasattr(module, 'q_proj_weight'):
                hooks.append(module.register_forward_hook(
                    get_layer_output(f"{name}.q_proj")))
            if hasattr(module, 'k_proj_weight'):
                hooks.append(module.register_forward_hook(
                    get_layer_output(f"{name}.k_proj")))
            if hasattr(module, 'v_proj_weight'):
                hooks.append(module.register_forward_hook(
                    get_layer_output(f"{name}.v_proj")))
    
    # 檢查 LayerNorm 層
    elif isinstance(module, torch.nn.LayerNorm):
        hooks.append(module.register_forward_hook(get_layer_output(name)))

# 執行推論
with torch.no_grad():
    outputs = quantized_model(image)

# 顯示每層的輸出統計
print("\n各層輸出統計:")
output_dir = "layer_outputs"
os.makedirs(output_dir, exist_ok=True)

for name in layer_outputs.keys():
    print(f"\n=== {name} ===")
    output = layer_outputs[name]
    print(f"Shape: {output.shape}")
    print(f"Dtype: {output.dtype}")
    print("反量化輸出:")
    print(f"Range: [{output.min().item():.4f}, {output.max().item():.4f}]")
    print(output)
    print(f"Mean: {output.mean().item():.4f}")
    print(f"Std: {output.std().item():.4f}")
    
    # 如果有量化值，顯示量化值的統計並儲存
    if name in quantized_outputs:
        quant = quantized_outputs[name]
        print("\n量化值 (INT8):")
        print(f"Range: [{quant.min().item()}, {quant.max().item()}]")
        print(f"Mean: {quant.float().mean().item():.4f}")
        
        # 建立該層的目錄
        layer_dir = os.path.join(output_dir, name.replace(".", "_"))
        os.makedirs(layer_dir, exist_ok=True)
        
        # 儲存量化值到文字檔
        output_file = os.path.join(layer_dir, "quantized_output.txt")
        with open(output_file, "w") as f:
            # 寫入基本資訊
            f.write(f"Shape: {quant.shape}\n")
            f.write(f"Range: [{quant.min().item()}, {quant.max().item()}]\n")
            f.write(f"Mean: {quant.float().mean().item():.4f}\n")
            f.write("\n量化值陣列:\n")
            
            # 寫入數值
            quant_array = quant.numpy().flatten()
            for i in range(0, len(quant_array), 8):
                row = quant_array[i:i+8]
                f.write(" ".join([f"{int(x):4d}" for x in row]) + "\n")
        '''
        # 顯示在終端機
        print("\n量化值陣列:")
        quant_array = quant.numpy().flatten()
        for i in range(0, len(quant_array), 8):
            row = quant_array[i:i+8]
            print(" ".join([f"{int(x):4d}" for x in row]))
        '''
        print(f"\n已儲存量化值到: {output_file}")
    
    print("-" * 80)

print("\n所有層的量化值已儲存到 layer_outputs 目錄")
'''
# 在執行推論後，印出每層的量化參數
print("\n各層的量化參數:")
for name in sorted(layer_scales.keys()):
    print(f"\n=== {name} ===")
    print(f"Scale: {layer_scales[name]}")
    print(f"Zero point: {layer_zero_points[name]}")
    
    if name in quantized_outputs:
        quant = quantized_outputs[name]
        print(f"輸出範圍: [{quant.min().item()}, {quant.max().item()}]")
        print(f"反量化範圍: [{(quant.min().item() - layer_zero_points[name]) * layer_scales[name]:.4f}, "
              f"{(quant.max().item() - layer_zero_points[name]) * layer_scales[name]:.4f}]")
'''
