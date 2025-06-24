# Usage

### Download Miniconda
```
[[ ! -f /tmp/miniconda.sh ]] && wget https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh -O /tmp/miniconda.sh
bash /tmp/miniconda.sh -b -u -p ~/miniconda3
source ~/miniconda3/bin/activate
conda init --all
```

### Create conda virtual environment
- ```$ conda create -n vit python=3.11 -y```
- `$ conda activate vit`
- `$ conda install llvmdev=18 -c conda-forge`

### Install dependency packages 
- `$ pip install -r requirements.txt`

### RTL testbench

run `$ tcsh` before executing rtl testbench
1. test rtl (mlp1)
   `$ make test_rtl0`
2. testrtl (mlp3)
   `$ make test_rtl1`
3. test asic_wrapper (mlp1)
   `$ make test_wrapper0`
4. test asic_wrapper (mlp3)
   `$ make test_wrapper1`

### Integration testbench (exit tcsh)
activate virtual environment first `$ conda activate vit`
1. generate hardware
  `$ make hardware`
2. test runtime (exit tcsh)
   `$ make test_runtime`
3. convert pt model to onnx model
   `$ make onnx`
4. dump relay_ir graph
   `$ make visuTVM`

### Clean
1. clean dataset
   `$ make clean_dataset`
2. clean onnx model
   `$ make clean_model`
3. clean all except dataset & model
   `$ make clean`
4. clean dataset, model, output
   `$ make clean_all`

### Model
1. training.ipynb           - cifar100 Vit model training
2. vit.pt, quant_vit.py     - model file
3. cifar_test.py            - generate layer_outputs and quant_vit.py accuracy test
4. load.py                  - generate model_weights
5. load_fp.py, load_test.py - used by calculating scaling factor (floating point parameter)
6. mlp0.py, mlp3.py         - generate my_quantized_outputs for hardware testbench
