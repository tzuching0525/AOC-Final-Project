import torch
from vit import ViT

RAW_PATH   = "../model/quant_vit.pt"
ONNX_PATH  = "../model/quant_vit.onnx"
EXAMPLE_IN = torch.randn(1, 3, 72, 72)  

raw = torch.load(RAW_PATH, map_location="cpu")

if isinstance(raw, torch.nn.Module):
    model = raw
else:
# 參數
# num_classes = 100
# input_shape = (32, 32, 3)
# learning_rate = 0.001
# weight_decay = 0.0001
# batch_size = 256
# num_epochs = 100
# image_size = 72
# patch_size = 6
# num_patches = (image_size // patch_size) ** 2
# projection_dim = 64
# num_heads = 4
# transformer_units = [projection_dim * 2, projection_dim]
# transformer_layers = 8
# mlp_head_units = [2048, 1024]

    model = ViT(
        image_size=72, patch_size=6, num_classes=100,
        projection_dim=64, num_patches=(72//6)**2,
        num_heads=4, transformer_units=[128,64],
        transformer_layers=8, mlp_head_units=[2048,1024]
    )
    sd = raw.get("state_dict", raw)
    clean_sd = {
        k.replace("module.",""): v
        for k,v in sd.items()
        if not any(t in k for t in [".scale",".zero_point","_packed_params"])
    }
    model.load_state_dict(clean_sd, strict=False)

model.eval()

print(f"onnx to  {ONNX_PATH} …")
torch.onnx.export(
    model,                     
    EXAMPLE_IN,                
    ONNX_PATH,                
    input_names=["input"],    
    output_names=["output"],   
    opset_version=13,          
    do_constant_folding=True, 
)

print(f"export {ONNX_PATH}")