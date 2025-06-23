# Usage

### Create conda virtual environment
- `$ conda create -n vit python=3.10 -y`
- `$ conda activate vit`

### Simulation
1. generate hardware
  `$ make hardware`
2. test rtl
   `$ tcsh`
   `$ make test_rtl`
3. test runtime
   `$ tcsh`
   `$ make test_runtime`

### Clean
1. clean dataset
   `$ make clean_dataset`
2. clean onnx model
   `$ make clean_model`
3. clean all except dataset & model
   `$ make clean`
