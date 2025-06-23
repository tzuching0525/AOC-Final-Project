# Usage

### Create conda virtual environment
conda create -n vit python=3.10 -y
conda activate vit

### Simulation
1. generate hardware
  `$ make hardware`
2. test rtl
   `$ tcsh`
   `$ make test_rtl`
3. test runtime
   `$ tcsh`
   `$ make test_runtime`
