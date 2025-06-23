# Usage

### Create conda virtual environment
- `$ conda create -n vit python=3.10 -y`
- `$ conda activate vit`

### Simulation
1. test rtl
   `$ tcsh`
   `$ make test_rtl`
2. test asic_wrapper mlp1
   `$ tcsh`
   `$ make test_wrapper0`
3. test asic wrapper mlp3
   `$ tcsh`
   `$ make test_wrapper1`
4. generate hardware (exit tcsh)
  `$ make hardware`
5. test runtime (exit tcsh)
   `$ make test_runtime`

### Clean
1. clean dataset
   `$ make clean_dataset`
2. clean onnx model
   `$ make clean_model`
3. clean all except dataset & model
   `$ make clean`
