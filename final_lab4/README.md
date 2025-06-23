# Usage

### Download Miniconda
```
[[ ! -f /tmp/miniconda.sh ]] && wget https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh -O /tmp/miniconda.sh
bash /tmp/miniconda.sh -b -u -p ~/miniconda3
source ~/miniconda3/bin/activate
conda init --all
```

### Create conda virtual environment
- `$ conda create -n vit python=3.11 -y`
- `$ conda activate vit`
- `$ conda install llvmdev=18 -c conda-forge`

### Install dependency packages 
- `$ pip install -r requirements.txt`

### RTL testbench

run `$ tcsh` before executing rtl testbench
1. test rtl
   `$ make test_rtl`
2. test asic_wrapper mlp1
   `$ make test_wrapper0`
3. test asic_wrapper mlp3
   `$ make test_wrapper1`

### Integration testbench (exit tcsh)
activate virtual environment first `$ conda activate vit`
1. generate hardware
  `$ make hardware`
2. test runtime (exit tcsh)
   `$ make test_runtime`

### Clean
1. clean dataset
   `$ make clean_dataset`
2. clean onnx model
   `$ make clean_model`
3. clean all except dataset & model
   `$ make clean`
