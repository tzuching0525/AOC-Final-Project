/********************************************************************
 * Vision Transformer (ViT) training demo with MLP off-loaded to HW *
 *                                                                 *
 * 1. 透過 SystemVerilog DPI 呼叫 Top.sv 中的陣列 + PPU，完成兩層 MLP *
 * 2. 其餘 ViT 子模組以 Eigen 在 C++ 端計算                           *
 * 3. 僅示範「前向 + 假想梯度回傳」流程，方便之後擴充真實訓練          *
 *******************************************************************/

#include <iostream>
#include <vector>
#include <random>
#include <cstdint>
#include <cassert>
#include <Eigen/Dense>
#include "vc_hdrs.h"          // 由 VCS 或 Verilator 編譯 Top.sv 時自動產出

using Vec = Eigen::VectorXf;
using Mat = Eigen::MatrixXf;

struct Param { Mat w; Mat dw; Vec b; Vec db; };

struct SGD {
    float lr = 1e-3f, wd = 1e-4f;
    void step(Param& p){
        p.w -= lr * (p.dw + wd * p.w);
        p.b -= lr * p.db;
        p.dw.setZero(); p.db.setZero();
    }
};
/*---------------------------------------------------------------
 *  0.  與 Top.sv 的 DPI 介面                                   *
 *-------------------------------------------------------------*/
extern "C" {
    void sv_mlp_forward_64 (const char* in_vec,  char* out_vec);
    void sv_mlp_forward_128(const char* in_vec,  char* out_vec);
    void sv_mlp_load_weight_64(const char* wb_vec);
    void sv_mlp_load_weight_128(const char* wb_vec);
}

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
/*---------------------------------------------------------------
 *  1.  通用量化工具                                             *
 *-------------------------------------------------------------*/
struct QParam {
    float  scale  = 1.0f;
    int32_t zp    = 0;      // zero-point (本範例固定 0)
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

class HardwareEmbedding{
    Mat W; Vec b;
public:
    HardwareEmbedding(int out,int in){
        W = Mat::Random(out,in) / std::sqrt(float(in));
        b = Vec::Zero(out);
    }
    Vec forward(const Vec& x) const { return W * x + b; }
};


/*---------------------------------------------------------------
 *  1.  LayerNorm                                            *
 *-------------------------------------------------------------*/
class LayerNorm {
    int dim_; float eps_;
    float mean_, var_;                // 這兩個變數在 forward 時計算
    Vec gamma_, beta_, dgamma_, dbeta_, x_norm_;
public:
    LayerNorm(int d,float eps=1e-5):dim_(d),eps_(eps),
      gamma_(Vec::Ones(d)),beta_(Vec::Zero(d)),
      dgamma_(Vec::Zero(d)),dbeta_(Vec::Zero(d)){}
    Vec forward(const Vec& x){
        mean_ = x.mean();
        var_  = (x.array()-mean_).square().mean();
        x_norm_ = (x.array()-mean_) / std::sqrt(var_ + eps_);
        return gamma_.array()*x_norm_.array()+beta_.array();
    }
    Vec backward(const Vec& grad_out){
        int N=dim_;
        Vec dgamma=grad_out.array()*x_norm_.array();
        dgamma_=dgamma;
        dbeta_+=grad_out;
        Vec dx_norm=grad_out.array()*gamma_.array();
        float dvar  = (dx_norm.array()*(x_norm_.array()*-0.5f)).sum()*2.f/N;
        float dmean = dx_norm.sum()*-1.f/std::sqrt(var_+eps_) + dvar*(-2.f*mean_)/N;
        Vec term2 = (2.f*dvar/N) * (x_norm_ * std::sqrt(var_+eps_)).matrix();
        Vec dx    = dx_norm/std::sqrt(var_+eps_) + term2 + Vec::Constant(N, dmean/N);
        return dx;
    }
    void step(SGD& opt){
        gamma_-=opt.lr*dgamma_; beta_-=opt.lr*dbeta_;
        dgamma_.setZero(); dbeta_.setZero();
    }
};

/*---------------------------------------------------------------
 *  1.  MultiHeadAttention                                     *
 *-------------------------------------------------------------*/
class MultiHeadAttn {
    int dim_, heads_, dk_;
    Param qkv_, proj_;
    Vec q_cache_, k_cache_, v_cache_, attn_;
public:
    MultiHeadAttn(int d,int h):dim_(d),heads_(h),
        dk_(d/h){
        qkv_.w = Mat::Random(3*d, d)/sqrt(d);
        qkv_.b = Vec::Zero(3*d);
        proj_.w = Mat::Random(d, d)/sqrt(d);
        proj_.b = Vec::Zero(d);
        qkv_.dw.setZero(); qkv_.db.setZero();
        proj_.dw.setZero(); proj_.db.setZero();
    }
    Vec forward(const Vec& x){                       // 單 token 版
        Vec qkv = qkv_.w * x + qkv_.b;
        q_cache_=qkv.head(dim_);
        k_cache_=qkv.segment(dim_,dim_);
        v_cache_=qkv.tail(dim_);
        float scale = 1.0f/std::sqrt(dk_);
        float score = (q_cache_.array()*k_cache_.array()).sum()*scale;
        float w = 1.0f;                              // 單 token → 權重恒 1
        attn_ = v_cache_*w;
        return proj_.w*attn_ + proj_.b;
    }
    Vec backward(const Vec& grad_out){
        proj_.dw += grad_out*attn_.transpose();
        proj_.db += grad_out;
        Vec datt = proj_.w.transpose()*grad_out;
        /* 略去對 q,k,v 的完整梯度計算以示範核心流程 … */
        Vec dqkv = Vec::Zero(3*dim_);
        dqkv.tail(dim_) = datt;                      // ∂L/∂v
        qkv_.dw += dqkv * attn_.transpose();         // 近似
        qkv_.db += dqkv;
        return qkv_.w.transpose()*dqkv;
    }
    void step(SGD& opt){ opt.step(qkv_); opt.step(proj_); }
};

/*---------------------------------------------------------------
 *  2.  硬體加速版兩層 MLP                                       *
 *-------------------------------------------------------------*/
class HardwareAcceleratedMLP {
    int in_,hid_,out_;
    QParam qp_in_, qp_out_;
    Param fc1_, fc2_;
public:
    HardwareAcceleratedMLP(int i,int h,int o):in_(i),hid_(h),out_(o){
        fc1_.w = Mat::Random(h,i)/sqrt(i);
        fc1_.b = Vec::Zero(h);
        fc2_.w = Mat::Random(o,h)/sqrt(h);
        fc2_.b = Vec::Zero(o);
        fc1_.dw.setZero(); fc1_.db.setZero();
        fc2_.dw.setZero(); fc2_.db.setZero();
    }
    Vec forward(const Vec& x){
        last_x_ = x;                            // 儲存輸入以便反向傳播
        // 量化→硬體→反量化
        std::vector<uint8_t> q_in = quantize_int8(x, qp_in_);
        std::vector<uint8_t> q_out(out_,0);
        call_hw(in_, q_in, q_out);                  // [1]
        return dequantize_int8(q_out, qp_out_);
    }
    Vec backward(const Vec& grad_out){              // 僅軟體梯度
        // 使用軟體仿算梯度：y = W2·ReLU(W1x)
        Vec x1 = fc1_.w * last_x_ + fc1_.b;
        Vec h = x1.cwiseMax(0);
        Vec gx2 = grad_out;
        fc2_.dw += gx2 * h.transpose();
        fc2_.db += gx2;
        Vec gh = fc2_.w.transpose()*gx2;
        Vec gx1 = gh.array()*(x1.array()>0).cast<float>();
        fc1_.dw += gx1 * last_x_.transpose();
        fc1_.db += gx1;
        return fc1_.w.transpose()*gx1;
    }
    void step(SGD& opt){
        opt.step(fc1_); opt.step(fc2_);
        sync_hw();                                   // ⇦ 傳新權重
    }
    void sync_hw(){
        std::vector<uint8_t> pack;
        pack_FP32_to_int8(fc1_.w, pack);
        pack_FP32_to_int8(fc1_.b, pack);   // ← 新增
        pack_FP32_to_int8(fc2_.w, pack);
        pack_FP32_to_int8(fc2_.b, pack);   // ← 新增
        sv_mlp_load_weight_64(reinterpret_cast<char*>(pack.data()));
    }
private:
    Vec last_x_;
};

/*---------------------------------------------------------------
 *  3.  ViT                                                    *
 *-------------------------------------------------------------*/
class Block{
    LayerNorm ln1_,ln2_;
    MultiHeadAttn attn_;
    HardwareAcceleratedMLP mlp_;
public:
    Block(int d,int h,int hidden):
        ln1_(d),ln2_(d),attn_(d,h),mlp_(d,hidden,d){}
    Vec forward(const Vec& x){
        Vec y = x + attn_.forward(ln1_.forward(x));
        return y + mlp_.forward(ln2_.forward(y));
    }
    Vec backward(const Vec& g){
        Vec g2 = mlp_.backward(g);
        Vec g1 = ln2_.backward(g2);
        g1 += attn_.backward(g1);
        Vec gx = ln1_.backward(g1);
        return gx + g2;                              // 殘差
    }
    void step(SGD& opt){
        ln1_.step(opt); ln2_.step(opt);
        attn_.step(opt); mlp_.step(opt);
    }
};

class ViT{
    int L_;
    std::vector<Block> blocks_;
    HardwareEmbedding patch_;
    LayerNorm ln_;
    Param head_;
    int img_sz_, patch_sz_, proj_dim_, num_patches_, heads_;
    Vec token_, probs_;
public:
    ViT(int img,int patch,int dim,int heads,int hidden,int cls)
  : img_sz_(img), patch_sz_(patch), proj_dim_(dim), heads_(heads),
    num_patches_((img/patch)*(img/patch)),
    patch_(dim, patch*patch*3), ln_(dim){
        for(int i=0;i<L_;++i) blocks_.emplace_back(dim,heads,hidden);
        head_.w = Mat::Random(cls,dim)/sqrt(dim);
        head_.b = Vec::Zero(cls);
        head_.dw.setZero(); head_.db.setZero();
    }
    Vec forward(const Vec& img){ 
        static Eigen::MatrixXf proj =
            Eigen::MatrixXf::Random(proj_dim_, patch_sz_*patch_sz_*3);

        Eigen::MatrixXf patches(num_patches_, proj_dim_);

        int stride = patch_sz_ * 3;          // RGB 每行
        int idx = 0;
        for (int y = 0; y < img_sz_; y += patch_sz_) {
            for (int x = 0; x < img_sz_; x += patch_sz_) {
                /* 擷取一塊 patch */
                Eigen::VectorXf patch(patch_sz_*patch_sz_*3);
                int k = 0;
                for (int dy = 0; dy < patch_sz_; ++dy) {
                    int base = (y + dy) * img_sz_ * 3 + x * 3;
                    for (int dx = 0; dx < patch_sz_; ++dx) {
                        for (int c = 0; c < 3; ++c)
                            patch[k++] = img[base + dx*3 + c];
                    }
                }
                /* 線性投影 */
                patches.row(idx++) = (proj * patch).transpose();
                //patches.col(idx++) =  proj * patch;
            }
        }
        return patches;
    }      // 與原 create_patches 相同
    float backward(int label){            // 交叉熵
        Vec grad_logits = probs_;
        grad_logits[label]-=1.f;
        head_.dw += grad_logits*token_.transpose();
        head_.db += grad_logits;
         Vec gtok = head_.w.transpose()*grad_logits / num_patches_;
        for(int i=L_-1;i>=0;--i) gtok = blocks_[i].backward(gtok);
        return -std::log(probs_[label]);
    }
    void step(SGD& opt){
        opt.step(head_);
        for(auto& b:blocks_) b.step(opt);
    }
};

/*---------------------------------------------------------------
 *  4.  Mock 訓練迴圈                                            *
 *-------------------------------------------------------------*/
void train_demo(int epochs = 3, int batch = 4) {
    constexpr int IMG = 72, PATCH = 6, DIM = 64, HIDDEN = 128, CLS = 10, HEADS  = 4;

    ViT model(IMG, PATCH, DIM, HEADS, HIDDEN, CLS);   // 改版後 ViT[3]
    SGD opt{1e-3f, 1e-4f};                     // 新增優化器

    std::mt19937 rng(0);
    std::normal_distribution<float> N(0.f, 1.f);

    for (int ep = 0; ep < epochs; ++ep) {
        float ep_loss = 0.f;

        for (int b = 0; b < batch; ++b) {
            /* 產生隨機影像與標籤 */
            Eigen::VectorXf img(IMG*IMG*3);
            for (int i = 0; i < img.size(); ++i) img[i] = N(rng);
            int label = rng() % CLS;

            /* forward → backward → update */
            model.forward(img);
            float loss = model.backward(label);
            model.step(opt);

            ep_loss += loss;
            std::cout << "  batch " << b
                      << "  loss=" << loss << '\n';
        }
        std::cout << "Epoch " << ep
                  << "  avg_loss=" << ep_loss / batch << "\n\n";
    }
}


/*---------------------------------------------------------------
 *  5.  entry point                                              *
 *-------------------------------------------------------------*/
extern "C" void run_trainer()
{
    std::cout << "ViT + DPI-MLP demo start …\n";
    train_demo();
    std::cout << "Done.\n";
}
