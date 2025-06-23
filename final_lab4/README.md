# Usage

### Create conda virtual environment
- `$ conda create -n vit python=3.10 -y`
- `$ conda activate vit`
- `$ pip install -r requirements.txt`

### RTL testbench

run `$ tcsh` before executing rtl testbench
1. test rtl
   `$ make test_rtl`
2. test asic_wrapper mlp1
   `$ make test_wrapper0`
3. test asic wrapper mlp3
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
