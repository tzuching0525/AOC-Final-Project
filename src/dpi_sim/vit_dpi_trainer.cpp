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

/*---------------------------------------------------------------
 *  0.  與 Top.sv 的 DPI 介面                                   *
 *-------------------------------------------------------------*/
extern "C" {
    void sv_mlp_forward_64 (const char* in_vec,  char* out_vec);
    void sv_mlp_forward_128(const char* in_vec,  char* out_vec);
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
        int8_t s = static_cast<int8_t>(q[i]);
        v[i] = static_cast<float>(s) * p.scale;
    }
    return v;
}

/*---------------------------------------------------------------
 *  2.  硬體加速版兩層 MLP                                       *
 *-------------------------------------------------------------*/
class HardwareAcceleratedMLP {
public:
    HardwareAcceleratedMLP(int in_dim, int hidden_dim, int out_dim,
                           float in_scale = 1.0f/127.f,
                           float out_scale = 1.0f/127.f)
    : in_dim_(in_dim), hid_dim_(hidden_dim), out_dim_(out_dim)
    {
        qp_in_.scale  = in_scale;
        qp_out_.scale = out_scale;
    }

    /* ----- forward:  float32 → int8 → HW → int8 → float32 ----- */
    Eigen::VectorXf forward(const Eigen::VectorXf& x) {
        assert(x.size() == in_dim_);

        /* 1) 量化 */
        std::vector<uint8_t> q_in  = quantize_int8(x, qp_in_);
        std::vector<uint8_t> q_out(out_dim_, 0);

        /* 2) 送進 Top.sv */
        call_hw(in_dim_, q_in, q_out);

        /* 3) 反量化 */
        return dequantize_int8(q_out, qp_out_);
    }

private:
    int   in_dim_, hid_dim_, out_dim_;
    QParam qp_in_, qp_out_;
};

/*---------------------------------------------------------------
 *  3.  迷你 ViT ‑ 只保留 Patch → MLP → 類別首位向量             *
 *-------------------------------------------------------------*/
class MiniViT {
public:
    MiniViT(int img_sz, int patch_sz, int proj_dim,
            int mlp_hidden, int num_classes)
    : img_sz_(img_sz),
      patch_sz_(patch_sz),
      proj_dim_(proj_dim),
      num_patches_((img_sz / patch_sz) * (img_sz / patch_sz)),
      mlp_(proj_dim, mlp_hidden, proj_dim)
    {
        /* 位置編碼 / 分類 head 權重隨機初始化（示範用） */
        pos_embed_ = Eigen::MatrixXf::Random(num_patches_, proj_dim_);
        cls_head_w_ = Eigen::MatrixXf::Random(num_classes, proj_dim_);
        cls_head_b_ = Eigen::VectorXf::Random(num_classes);
    }

    /* image: (H*W*3,)  → logits:(num_classes,) */
    Eigen::VectorXf forward(const Eigen::VectorXf& image) {
        Eigen::MatrixXf patches = create_patches(image);          // [P, D]
        patches.rowwise() += pos_embed_.row(0);                   // +PE

        /* 這裡僅做一次 Transformer Block 中的 MLP，忽略注意力 */
        for (int p = 0; p < num_patches_; ++p)
            patches.row(p) =
                mlp_.forward(patches.row(p).transpose()).transpose();

        /* Pool (mean) */
        Eigen::VectorXf token = patches.colwise().mean();         // [D]

        /* linear cls head */
        return cls_head_w_ * token + cls_head_b_;
    }

private:
    /* 把影像拉成 patch → 線性投影 (Random) */
    Eigen::MatrixXf create_patches(const Eigen::VectorXf& image) {
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
                            patch[k++] = image[base + dx*3 + c];
                    }
                }
                /* 線性投影 */
                patches.row(idx++) = (proj * patch).transpose();
            }
        }
        return patches;
    }

    int img_sz_, patch_sz_, proj_dim_, num_patches_;
    Eigen::MatrixXf pos_embed_;             // [P, D]
    Eigen::MatrixXf cls_head_w_;            // [C, D]
    Eigen::VectorXf cls_head_b_;            // [C]
    HardwareAcceleratedMLP mlp_;
};

/*---------------------------------------------------------------
 *  4.  Mock 訓練迴圈                                            *
 *-------------------------------------------------------------*/
void train_demo(int epochs = 3, int batch = 4) {
    constexpr int IMG = 72, PATCH = 6, DIM = 64, HIDDEN = 128, CLS = 10;

    MiniViT model(IMG, PATCH, DIM, HIDDEN, CLS);

    std::mt19937 rng(0);
    std::normal_distribution<float> N(0.f, 1.f);

    for (int ep = 0; ep < epochs; ++ep) {
        std::cout << "Epoch " << ep << '\n';

        for (int b = 0; b < batch; ++b) {
            /* 產生假影像與 label */
            Eigen::VectorXf img(IMG*IMG*3);
            for (int i = 0; i < img.size(); ++i) img[i] = N(rng);

            int label = rng()%CLS;

            /* forward */
            Eigen::VectorXf logits = model.forward(img);

            /* 假想 loss = -log softmax(label) */
            float maxlog = logits.maxCoeff();
            Eigen::VectorXf expv = (logits.array()-maxlog).exp();
            float sumexp = expv.sum();
            float loss = -std::log(expv[label]/sumexp);

            std::cout << "  batch " << b
                      << "  loss=" << loss << '\n';
        }
    }
}

/*---------------------------------------------------------------
 *  5.  entry point                                              *
 *-------------------------------------------------------------*/
int main() {
    std::cout << "ViT + DPI-MLP demo start …\n";
    train_demo();
    std::cout << "Done.\n";
    return 0;
}
