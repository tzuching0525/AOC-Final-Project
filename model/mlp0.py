import torch
import numpy as np
import os

def verify_mlp_output(input_data, weights, biases, scale, zero_point):
    """
    驗證 MLP 層的輸出
    Args:
        input_data: 輸入張量 [1, 144, 64]
        weights: 量化後的權重矩陣
        biases: 偏差向量
        scale: 量化比例
        zero_point: 零點偏移
    """
    # 1. 反量化權重
    dequantized_weights = (weights.float() - zero_point) * scale
    
    # 2. 執行矩陣乘法
    # output = torch.matmul(input_data, dequantized_weights.t())
    output = torch.matmul(input_data, weights.t())
    if biases is not None:
        output += biases
    
    # 3. 量化輸出
    print((output / scale) + zero_point)
    print("hi")

    quantized_output = ((output / scale) + zero_point).round().clamp(-128, 127).to(torch.int8)

     # 4. 反量化以便進行 GELU
    dequantized = (quantized_output.float() - zero_point) * scale
    
    # 5. 使用 GELU
    gelu_output = torch.nn.functional.gelu(output)
    
    # 6. 最終量化
    final_quantized = ((gelu_output / scale) + zero_point).round().to(torch.int8)
    
    print("input_data")
    print(input_data)
    print("weights")
    print(weights)
    print("biases")
    print(biases)
    print("quantized_output")
    print(quantized_output)
    print("dequantized")
    print(dequantized)
    print("output")
    print(output)

    return quantized_output, output

# 載入測試數據
def load_test_data():
    # 從文件載入權重
    weight_path = "model_weights/layer_7/mlp_0_weight.txt"
    bias_path = "model_weights/layer_7/mlp_0_bias.txt"
    
    # 載入權重
    with open(weight_path, 'r') as f:
        weights_data = f.read().strip().split()
        weights = torch.tensor([float(x) for x in weights_data]).reshape(128, 64)
    
    # 載入偏差
    with open(bias_path, 'r') as f:
        bias_data = f.read().strip().split()
        biases = torch.tensor([float(x) for x in bias_data])
    
    return weights, biases

def load_norm_output():
    """載入 norm layer 的輸出作為 MLP 的輸入"""
    input_path = "layer_outputs/transformer_layers_7_norm2/quantized_output.txt"
    
    with open(input_path, 'r') as f:
        lines = f.readlines()
        # 解析形狀
        shape = eval(lines[0].split(': ')[1])
        
        # 從第 5 行開始讀取數值
        input_data = []
        for line in lines[5:]:  # 跳過前面的統計資訊
            if line.strip():
                values = [int(x) for x in line.strip().split()]
                input_data.extend(values)
                
        # 轉换為 tensor 並重塑為正確的形狀
        input_tensor = torch.tensor(input_data).reshape(shape)
    
    return input_tensor

def save_quantized_output(quantized_output, file_path):
    """
    將量化輸出儲存為 txt 檔案
    Args:
        quantized_output: 量化後的張量
        file_path: 輸出檔案路徑
    """
    with open(file_path, 'w') as f:
        # 寫入形狀資訊
        f.write(f"Shape: {quantized_output.shape}\n")
        
        # 寫入範圍資訊
        f.write(f"Range: [{quantized_output.min().item()}, {quantized_output.max().item()}]\n")
        
        # 寫入平均值
        f.write(f"Mean: {quantized_output.float().mean().item():.4f}\n\n")
        
        # 寫入量化值陣列
        f.write("量化值陣列:\n")
        # 逐行寫入數值，每行 8 個數字
        for i in range(quantized_output.size(1)):  # 144 rows
            for j in range(0, quantized_output.size(2), 8):  # 每行 8 個數字
                end = min(j + 8, quantized_output.size(2))
                values = quantized_output[0, i, j:end].tolist()
                line = " ".join(f"{x:3d}" for x in values)
                f.write(line + "\n")
            f.write("\n")  # 每個 batch 之間加入空行

def save_original_output(original_output, file_path):
    """
    將原始輸出儲存為 txt 檔案
    Args:
        original_output: 原始輸出張量
        file_path: 輸出檔案路徑
    """
    with open(file_path, 'w') as f:
        # 寫入形狀資訊
        f.write(f"Shape: {original_output.shape}\n")
        
        # 寫入範圍資訊
        f.write(f"Range: [{original_output.min().item()}, {original_output.max().item()}]\n")
        
        # 寫入平均值
        f.write(f"Mean: {original_output.float().mean().item():.4f}\n\n")
        
        # 寫入原始值陣列
        f.write("原始值陣列:\n")
        # 逐行寫入數值，每行 8 個數字
        for i in range(original_output.size(1)):  # 144 rows
            for j in range(0, original_output.size(2), 8):  # 每行 8 個數字
                end = min(j + 8, original_output.size(2))
                values = original_output[0, i, j:end].tolist()
                line = " ".join(f"{x:10.4f}" for x in values)
                f.write(line + "\n")
            f.write("\n")  # 每個 batch 之間加入空行

# 主要測試函數
def test_mlp():
    print("開始驗證 MLP 層...")
    
    # 1. 載入權重和偏差
    weights, biases = load_test_data()
    print(f"權重形狀: {weights.shape}")
    print(f"偏差形狀: {biases.shape}")
    
    # 2. 載入 norm layer 的輸出作為輸入
    input_data = load_norm_output()
    print(f"輸入形狀: {input_data.shape}")
    print(f"輸入範圍: [{input_data.min().item()}, {input_data.max().item()}]")
    
    # 3. 設置量化參數（從您的模型中獲取）
    scale = 1006 # 1 / (layer_norm2.scale * layer_mlp_0.scale) 
    # 6 mlp0 = 2041.36
    # 7 mlp0 = 969.566
    # norm2.scale from cifar_test (x scale)
    # mlp_0.scale from load_fp.py (weight scale)
    zero_point = 0
    
    # 4. 執行 MLP 層計算
    quantized_output, original_output = verify_mlp_output(
        input_data.float(), weights, biases, scale, zero_point
    )

    print(original_output)
    
    # 儲存量化輸出
    output_dir = "my_quantized_outputs"
    os.makedirs(output_dir, exist_ok=True)
    save_quantized_output(quantized_output, 
                         os.path.join(output_dir, "mlp0_quantized_output.txt"))
    
    # 儲存原始輸出
    save_original_output(original_output,
                        os.path.join(output_dir, "mlp0_original_output.txt"))
    
    print(f"\n量化輸出已儲存至 {output_dir}/mlp0_quantized_output.txt")
    print(f"原始輸出已儲存至 {output_dir}/mlp0_original_output.txt")
    
    # 5. 載入實際輸出進行比較
    output_path = "layer_outputs/transformer_layers_7_mlp_0/quantized_output.txt"
    with open(output_path, 'r') as f:
        lines = f.readlines()
        actual_shape = eval(lines[0].split(': ')[1])  # 解析形狀
        actual_range = eval(lines[1].split(': ')[1])  # 解析範圍
        
        # 跳過前幾行，讀取實際數值
        actual_data = []
        for line in lines[5:]:  # 從第5行開始是數值
            if line.strip():
                values = [int(x) for x in line.strip().split()]
                actual_data.extend(values)
        actual_output = torch.tensor(actual_data).reshape(actual_shape)
    
    # 6. 比較結果
    print("\n比較結果:")
    print(f"計算出的形狀: {quantized_output.shape}")
    print(f"實際輸出形狀: {actual_shape}")
    
    print(f"\n計算出的範圍: [{quantized_output.min().item()}, {quantized_output.max().item()}]")
    print(f"實際輸出範圍: {actual_range}")
    
    # 計算誤差
    error = (quantized_output - actual_output).abs().float().mean()
    print(f"\n平均絕對誤差: {error:.4f}")
    
    # 顯示部分數值比較
    print("\n部分數值比較 (前5x8個元素):")
    print("計算值:")
    print(quantized_output)
    print("\n實際值:")
    print(actual_output)

    scaling_factor = extract_scaling_factor(original_output/scale)
    print(f"Scaling Factor: {scaling_factor}")

def extract_scaling_factor(float_tensor):
    """計算 INT8 量化的 scaling factor"""
    # 找出張量的最大最小值
    max_val = float_tensor.max().item()
    min_val = float_tensor.min().item()
    
    # 計算對稱量化的範圍
    abs_max = max(abs(max_val), abs(min_val))
    
    # 計算 scale (範圍除以127，因為INT8範圍是-128到127)
    scale = abs_max / 127.0
    
    return scale

# 使用範例



if __name__ == "__main__":
    test_mlp()