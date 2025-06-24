#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include "Eigen/Dense"
#include "vc_hdrs.h"

using Mat = Eigen::MatrixXf;
using Vec = Eigen::VectorXf;

// Forward declarations
struct SGD;
class Param;

// Parameter class for neural network layers
class Param {
public:
    Mat w;
    Vec b;
    Mat dw;
    Vec db;
    
    Param() {}
    
    void init(int out_dim, int in_dim) {
        w = Mat::Random(out_dim, in_dim) / std::sqrt(in_dim);
        b = Vec::Zero(out_dim);
        dw = Mat::Zero(out_dim, in_dim);
        db = Vec::Zero(out_dim);
    }
};

// Stochastic Gradient Descent optimizer
class SGD {
public:
    float lr;
    float weight_decay;
    
    SGD(float learning_rate = 1e-3f, float wd = 1e-4f) 
        : lr(learning_rate), weight_decay(wd) {}
    
    void step(Param& p) {
        p.w -= lr * (p.dw + weight_decay * p.w);
        p.b -= lr * p.db;
        p.dw.setZero();
        p.db.setZero();
    }
};

extern "C" void write_weight_to_hw(const void* data, size_t size);

// -----------------------------------------------------------------------------
// 0. DPI interface with Top.sv
// -----------------------------------------------------------------------------
extern "C" {
    void sv_mlp_forward_64 (const char* in_vec,  char* out_vec);
    void sv_mlp_forward_128(const char* in_vec,  char* out_vec);
    void sv_mlp_load_weight_64(const char* wb_vec);
    void sv_mlp_load_weight_128(const char* wb_vec);
}

// Call hardware MLP via DPI
void call_hw(int dim,
             const std::vector<uint8_t>& in,
             std::vector<uint8_t>&       out)
{
    if (dim == 64)
        sv_mlp_forward_64(reinterpret_cast<const char*>(in.data()),
                  reinterpret_cast<char*>(out.data()));
    else if (dim == 128)
        sv_mlp_forward_128(reinterpret_cast<const char*>(in.data()),
                  reinterpret_cast<char*>(out.data()));
    else
        throw std::runtime_error("unsupported dim");
}

// -----------------------------------------------------------------------------
// 1. Quantization utilities
// -----------------------------------------------------------------------------
struct QParam {
    float  scale  = 1.0f;
    int32_t zp    = 0;      // zero-point (fixed to 0 in this example)
};

inline std::vector<uint8_t> quantize_int8(const Eigen::VectorXf& v,
                                          const QParam& p) {
    std::vector<uint8_t> q(v.size());
    for (int i = 0; i < v.size(); ++i) {
        int32_t t = std::lround(v[i] / p.scale);
        t = std::max(-128, std::min(127, t));
        q[i] = static_cast<uint8_t>(t & 0xFF);
    }
    return q;
}

inline Eigen::VectorXf dequantize_int8(const std::vector<uint8_t>& q,
                                       const QParam& p) {
    Eigen::VectorXf v(q.size());
    for (int i = 0; i < q.size(); ++i) {
        uint8_t s = static_cast<uint8_t>(q[i]);
        v[i] = static_cast<float>(s) * p.scale;
    }
    return v;
}

inline void pack_FP32_to_int8(const Eigen::MatrixXf& m, std::vector<uint8_t>& buf){
    for(int i=0;i<m.size();++i){
        int q = std::lround(m.data()[i] * 127.f);
        q = std::max(-128, std::min(127, q));
        buf.push_back(static_cast<uint8_t>(q & 0xFF));
    }
}

// Hardware embedding layer
class HardwareEmbedding{
public:
    Mat W; 
    Vec b;

    HardwareEmbedding(int out_dim, int in_dim) {
        W = Mat::Random(out_dim, in_dim);
        b = Vec::Zero(out_dim);
    }

    Vec forward(const Vec& x) const { return W * x + b; }
};

// -----------------------------------------------------------------------------
// 2. LayerNorm
// -----------------------------------------------------------------------------
class LayerNorm {
public:
    Vec gamma_, beta_;      // Learnable parameters
    Vec mean_, var_;        // Statistics per position
    float eps_;
    Vec centered_;          // Centered values
    Vec norm_;              // Normalized values
    Vec dgamma_, dbeta_;    // Gradients
    const int dim_;         // Layer dimension

    LayerNorm(int size) 
        : gamma_(Vec::Ones(size))
        , beta_(Vec::Zero(size))
        , mean_(Vec::Zero(size))
        , var_(Vec::Zero(size))
        , eps_(1e-5)
        , centered_(Vec::Zero(size))
        , norm_(Vec::Zero(size))
        , dgamma_(Vec::Zero(size))
        , dbeta_(Vec::Zero(size))
        , dim_(size) {}
        
    int dim() const { return dim_; }

    Vec forward(const Vec& x) {
        const int N = x.size();
        mean_ = x;
        centered_ = x - mean_;
        var_ = centered_.array().square();
        norm_ = centered_.array() / (var_.array() + eps_).sqrt();
        return gamma_.array() * norm_.array() + beta_.array();
    }

    Vec backward(const Vec& grad_output) {
        const int N = grad_output.size();
        dgamma_ = grad_output.array() * norm_.array();
        dbeta_ = grad_output;
        Vec grad_norm = grad_output.array() * gamma_.array();
        Vec grad_var = grad_norm.array() * centered_.array() * -0.5f *
                      (var_.array() + eps_).pow(-1.5);
        Vec grad_mean = grad_norm.array() * -1.0f / (var_.array() + eps_).sqrt() +
                       grad_var.array() * -2.0f * centered_.array() / N;
        Vec grad_input = grad_norm.array() / (var_.array() + eps_).sqrt() +
                        grad_var.array() * 2.0f * centered_.array() / N +
                        grad_mean.array() / N;
        return grad_input;
    }

    void step(SGD& opt) {
        gamma_ -= opt.lr * dgamma_;
        beta_ -= opt.lr * dbeta_;
        dgamma_.setZero();
        dbeta_.setZero();
    }
};

// -----------------------------------------------------------------------------
// 3. MultiHeadAttention
// -----------------------------------------------------------------------------
class MultiHeadAttn {
private:
    const int dim_;
    const int heads_;
    Vec attn_;
    Param qkv_;
    Param proj_;

public:
    MultiHeadAttn(int d, int h) : dim_(d), heads_(h) {
        if (d % h != 0) {
            throw std::runtime_error("Dimension must be divisible by number of heads");
        }
        qkv_.init(3 * d, d);
        proj_.init(d, d);
    }

    Vec forward(const Vec& x) {
        const int head_dim = dim_ / heads_;
        Vec qkv = qkv_.w * x + qkv_.b;
        Vec output = Vec::Zero(dim_);
        for (int h = 0; h < heads_; h++) {
            Vec q = qkv.segment(h * head_dim, head_dim);
            Vec k = qkv.segment((heads_ + h) * head_dim, head_dim);
            Vec v = qkv.segment((2 * heads_ + h) * head_dim, head_dim);
            float score = q.dot(k) / std::sqrt(float(head_dim));
            output.segment(h * head_dim, head_dim) = v * score;
        }
        attn_ = output;
        return proj_.w * output + proj_.b;
    }

    Vec backward(const Vec& grad_out) {
        Vec grad_qkv = proj_.w.transpose() * grad_out;
        proj_.dw += grad_out * attn_.transpose();
        proj_.db += grad_out;
        qkv_.dw += grad_qkv * attn_.transpose();
        qkv_.db += grad_qkv;
        return qkv_.w.transpose() * grad_qkv;
    }

    void step(SGD& opt) {
        opt.step(qkv_);
        opt.step(proj_);
    }
};

// -----------------------------------------------------------------------------
// 4. Hardware MLP
// -----------------------------------------------------------------------------
class HardwareAcceleratedMLP {
private:
    const int in_;
    const int hid_;
    const int out_;
    Param fc1_;
    Param fc2_;
    Vec last_x_;
    Vec last_h_;

public:
    HardwareAcceleratedMLP(int i, int h, int o) 
        : in_(i), hid_(h), out_(o) {
        fc1_.init(h, i);
        fc2_.init(o, h);
    }

    Vec forward(const Vec& x) {
        last_x_ = x;
        last_h_ = fc1_.w * x + fc1_.b;
        last_h_ = last_h_.array().max(0.f); // ReLU
        return fc2_.w * last_h_ + fc2_.b;
    }

    Vec backward(const Vec& grad_out) {
        fc2_.dw += grad_out * last_h_.transpose();
        fc2_.db += grad_out;
        Vec grad_h = fc2_.w.transpose() * grad_out;
        grad_h = grad_h.array() * (last_h_.array() > 0.f).cast<float>();
        fc1_.dw += grad_h * last_x_.transpose();
        fc1_.db += grad_h;
        return fc1_.w.transpose() * grad_h;
    }

    void step(SGD& opt) {
        opt.step(fc1_);
        opt.step(fc2_);
    }

    void sync_hw() {
        std::vector<uint8_t> pack;
        pack_FP32_to_int8(fc1_.w, pack);
        write_weight_to_hw(pack.data(), pack.size());
        pack_FP32_to_int8(fc2_.w, pack);
        write_weight_to_hw(pack.data(), pack.size());
    }
};

// -----------------------------------------------------------------------------
// 5. Vision Transformer (ViT)
// -----------------------------------------------------------------------------
class Block{
    LayerNorm ln1_,ln2_;
    MultiHeadAttn attn_;
    HardwareAcceleratedMLP mlp_;
public:
    Block(int d,int h, int hidden) :
        ln1_(d)
        , ln2_(d)
        , attn_(d, h)
        , mlp_(d, hidden, d)
    {
    }

    Vec forward(const Vec& x) {
        // Process each token position separately for layer norm
        const int seq_len = x.size() / ln1_.dim();
        Vec output = Vec::Zero(x.size());
        for (int i = 0; i < seq_len; i++) {
            Vec pos = x.segment(i * ln1_.dim(), ln1_.dim());
            Vec norm1 = ln1_.forward(pos);
            Vec attn_out = attn_.forward(norm1);
            Vec residual = pos + attn_out;
            Vec norm2 = ln2_.forward(residual);
            Vec mlp_out = mlp_.forward(norm2);
            output.segment(i * ln1_.dim(), ln1_.dim()) = residual + mlp_out;
        }
        return output;
    }

    Vec backward(const Vec& grad_out) {
        Vec grad_x = grad_out;
        const int seq_len = grad_out.size() / ln1_.dim();
        Vec grad_input = Vec::Zero(grad_out.size());
        for (int i = 0; i < seq_len; i++) {
            Vec grad_pos = grad_x.segment(i * ln1_.dim(), ln1_.dim());
            Vec grad_mlp = mlp_.backward(grad_pos);
            Vec grad_ln2 = ln2_.backward(grad_mlp);
            Vec grad_attn = attn_.backward(grad_ln2);
            Vec grad_ln1 = ln1_.backward(grad_attn);
            grad_input.segment(i * ln1_.dim(), ln1_.dim()) = grad_ln1;
        }
        return grad_input;
    }

    void step(SGD& opt) {
        ln1_.step(opt);
        ln2_.step(opt);
        attn_.step(opt);
        mlp_.step(opt);
    }
};

class ViT {
private:
    const int img_sz_;
    const int patch_sz_;
    const int proj_dim_;
    const int heads_;
    const int num_patches_;
    const int L_ = 12;  // Number of transformer blocks
    std::vector<Block> blocks_;
    LayerNorm ln_;
    HardwareEmbedding patch_;
    Vec token_;
    Vec output_;
    Vec x_;
    Param head_;  

    // Convert image vector to patch matrix
    Mat img_to_patches(const Vec& img) {
        Mat patches(patch_sz_ * patch_sz_ * 3, num_patches_);
        int patch_size = patch_sz_ * patch_sz_ * 3;
        for (int p = 0; p < num_patches_; p++) {
            int py = (p / (img_sz_ / patch_sz_)) * patch_sz_;
            int px = (p % (img_sz_ / patch_sz_)) * patch_sz_;
            for (int dy = 0; dy < patch_sz_; dy++) {
                for (int dx = 0; dx < patch_sz_; dx++) {
                    for (int c = 0; c < 3; c++) {
                        int img_idx = ((py + dy) * img_sz_ + (px + dx)) * 3 + c;
                        int patch_idx = (dy * patch_sz_ + dx) * 3 + c;
                        patches(patch_idx, p) = img[img_idx];
                    }
                }
            }
        }
        return patches;
    }

public:
    // Constructor
    ViT(int img_sz, int patch_sz, int proj_dim, int heads, int hidden_dim = 256) 
        : img_sz_(img_sz)
        , patch_sz_(patch_sz)
        , proj_dim_(proj_dim)
        , heads_(heads)
        , num_patches_((img_sz/patch_sz) * (img_sz/patch_sz))
        , ln_(proj_dim)
        , patch_(proj_dim, patch_sz * patch_sz * 3)
        , token_(Vec::Zero(proj_dim))
    {
        // Initialize transformer blocks
        blocks_.reserve(L_);
        for (int i = 0; i < L_; i++) {
            blocks_.emplace_back(proj_dim, heads_, hidden_dim);
        }
        // Initialize classification head
        head_.init(proj_dim_, proj_dim_);
    }

    Vec forward(const Vec& img) {
        if (img.size() != img_sz_ * img_sz_ * 3) {
            throw std::runtime_error("Invalid input image size");
        }
        // Convert image to patches
        Mat patches = img_to_patches(img);
        // Project patches
        Mat projected_patches = patch_.W * patches;
        for (int i = 0; i < num_patches_; i++) {
            projected_patches.col(i) += patch_.b;
        }
        // Prepare the sequence with class token
        Vec x = Vec::Zero(proj_dim_ * (num_patches_ + 1));
        x.segment(0, proj_dim_) = token_;
        // Add patch embeddings
        for (int i = 0; i < num_patches_; i++) {
            x.segment(proj_dim_ * (i + 1), proj_dim_) = projected_patches.col(i);
        }
        // Forward through transformer blocks
        for (auto& block : blocks_) {
            x = block.forward(x);
        }
        // Final layer norm and classification head
        x = ln_.forward(x.segment(0, proj_dim_));
        x_ = x;
        output_ = head_.w * x + head_.b;
        return head_.w * x + head_.b;
    }

    float backward(const Vec& label) {
        Vec diff = output_ - label;
        float loss = diff.squaredNorm() / diff.size();
        Vec grad = 2.0f * diff / diff.size();
        // Backpropagate to head
        head_.dw += grad * x_.transpose();
        head_.db += grad;
        Vec grad_in = head_.w.transpose() * grad;
        // Backpropagate through transformer blocks
        for (int i = L_-1; i >= 0; --i) grad_in = blocks_[i].backward(grad_in);
        return loss;
    }

    void step(SGD& opt) {
        // Update all blocks
        for (auto& block : blocks_) {
            block.step(opt);
        }
        ln_.step(opt);
    }
};

// -----------------------------------------------------------------------------
// 6. Training loop
// -----------------------------------------------------------------------------
void train_demo(int epochs = 3, int batch = 4) {
    // Model configuration
    const int IMG = 224;      // Image size
    const int PATCH = 16;     // Patch size
    const int DIM = 768;      // Model dimension
    const int HEADS = 12;     // Number of attention heads
    const int HIDDEN = 3072;  // Hidden dimension

    // Create model and optimizer
    ViT model(IMG, PATCH, DIM, HEADS, HIDDEN);
    SGD opt(1e-3f, 1e-4f);

    std::cout << "Created ViT model with:" << std::endl
              << "Image size: " << IMG << "x" << IMG << std::endl
              << "Patch size: " << PATCH << "x" << PATCH << std::endl
              << "Dimension: " << DIM << std::endl
              << "Heads: " << HEADS << std::endl;

    // Setup random number generation
    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<float> normal(0.0f, 1.0f);

    // Training loop
    for(int epoch = 0; epoch < epochs; epoch++) {
        for(int b = 0; b < batch; b++) {
            // Create random input image
            Vec img = Vec::Zero(IMG * IMG * 3);
            for(int i = 0; i < img.size(); i++) {
                img[i] = normal(gen);
            }
            // Create random label vector
            Vec label = Vec::Random(DIM);
            // Forward and backward
            Vec output = model.forward(img);
            float loss = model.backward(label);
            model.step(opt);

            std::cout << "Epoch " << epoch << " Batch " << b << " Loss: " << loss << std::endl;
        }
    }
}

// -----------------------------------------------------------------------------
// 7. C++ entry point for DPI
// -----------------------------------------------------------------------------
extern "C" void run_trainer()
{
    std::cout << "ViT + DPI-MLP demo start …\n";
    train_demo();
    std::cout << "Done.\n";
}
