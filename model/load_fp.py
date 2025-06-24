import torch

# 載入模型權重檔
state_dict = torch.load("quant_vit.pt", map_location="cpu")

for layer in range(8):  # 你有 8 層 transformer
    print(f"\n=== Layer {layer} ===")
    # 印出 Q/K/V 權重
    for typ in ["Q", "K", "V"]:
        key = f"module.transformer_layers.{layer}.attn.linear_{typ}._packed_params._packed_params"
        if key in state_dict:
            print(f"{key}:")
            print(state_dict[key])  # tuple: (weight, bias)
    # 印出 WO 權重和 bias
    wo_key = f"module.transformer_layers.{layer}.attn.out_proj._packed_params._packed_params"
    if wo_key in state_dict:
        print(f"{wo_key}:")
        print(state_dict[wo_key])  # tuple: (weight, bias)
    # 印出 MLP 兩層 Linear 權重和 bias
    for mlp_idx in [0, 3]:
        mlp_key = f"module.transformer_layers.{layer}.mlp.{mlp_idx}._packed_params._packed_params"
        if mlp_key in state_dict:
            print(f"{mlp_key}:")
            print(state_dict[mlp_key])  # tuple: (weight, bias)