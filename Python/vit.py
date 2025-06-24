import torch
import torch.nn as nn
import torch.nn.quantized as nnq
import torch.ao.quantization as tq

class Patches(nn.Module):
    def __init__(self, patch_size):
        super().__init__()
        self.patch_size = patch_size

    def forward(self, images):
        B, C, H, W = images.shape
        ph, pw = self.patch_size, self.patch_size
        assert H % ph == 0 and W % pw == 0
        patches = images.unfold(2, ph, ph).unfold(3, pw, pw)
        patches = patches.permute(0, 2, 3, 1, 4, 5)
        patches = patches.reshape(B, -1, C * ph * pw)
        return patches

class PatchEncoder(nn.Module):
    def __init__(self, num_patches, projection_dim):
        super().__init__()
        patch_size = 6  # 你的 patch_size
        self.proj = nn.Linear(patch_size * patch_size * 3, projection_dim)
        self.pos_embed = nn.Parameter(torch.randn(1, num_patches, projection_dim))
        self.adder   = nnq.FloatFunctional()
        self.quant   = tq.QuantStub()
        self.dequant = tq.DeQuantStub()
        
    def forward(self, x):
        if x.is_quantized:
            x = self.dequant(x)
        x = self.proj(x) + self.pos_embed
        return self.quant(x)

class TransformerBlock(nn.Module):
    def __init__(self, projection_dim, num_heads, transformer_units, dropout=0.1):
        super().__init__()
        self.norm1 = nn.LayerNorm(projection_dim)
        self.attn = nn.MultiheadAttention(projection_dim, num_heads, dropout=dropout, batch_first=True)
        self.norm2 = nn.LayerNorm(projection_dim)
        self.mlp = nn.Sequential(
            nn.Linear(projection_dim, transformer_units[0]),
            nn.ReLU(),
            nn.Dropout(dropout),
            nn.Linear(transformer_units[0], transformer_units[1]),
            nn.ReLU(),
            nn.Dropout(dropout),
        )

    def forward(self, x):
        x1 = self.norm1(x)
        attn_output, _ = self.attn(x1, x1, x1)
        x2 = attn_output + x
        x3 = self.norm2(x2)
        x3 = self.mlp(x3)
        return x3 + x2

class ViT(nn.Module):
    def __init__(self, image_size, patch_size, num_classes, projection_dim, num_patches, num_heads, transformer_units, transformer_layers, mlp_head_units):
        super().__init__()
        self.patches = Patches(patch_size)
        self.encoder = PatchEncoder(num_patches, projection_dim)
        self.transformer_layers = nn.ModuleList([
            TransformerBlock(projection_dim, num_heads, transformer_units)
            for _ in range(transformer_layers)
        ])
        self.norm = nn.LayerNorm(projection_dim)
        self.flatten = nn.Flatten()
        self.dropout = nn.Dropout(0.5)
        mlp_layers = []
        in_dim = num_patches * projection_dim
        for out_dim in mlp_head_units:
            mlp_layers.append(nn.Linear(in_dim, out_dim))
            mlp_layers.append(nn.GELU())
            mlp_layers.append(nn.Dropout(0.5))
            in_dim = out_dim
        self.mlp_head = nn.Sequential(*mlp_layers)
        self.classifier = nn.Linear(in_dim, num_classes)

    def forward(self, x):
        x = self.patches(x)
        x = self.encoder(x)
        for i, block in enumerate(self.transformer_layers):
            x = block(x)
        x = self.norm(x)
        x = self.flatten(x)
        x = self.dropout(x)
        x = self.mlp_head(x)
        logits = self.classifier(x)
        return logits