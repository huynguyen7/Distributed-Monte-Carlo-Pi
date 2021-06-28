# DISTRIBUTED-MONTE-CARLO-PI
Implementation for Distributed Monte Carlo algorithm for calculating Pi.
- Apply Monte Carlo method to calculate Pi number.
- Just a practice example using OpenMP and MPI.

## Quick-start guide:

- Install OpenMPI: [Click here](https://www.open-mpi.org/software/ompi/v4.1/)

- Configure run.sh for appropriate C library (for OpenMP and OpenMPI), and change the maximum number of threads for OpenMP.

- Go to project directory, run the executable bash script:

```
$ ./run.sh `NUM_TRIALS` `NUM_PROCESSES`
```

## Source:
- Intro to Parallel Programming with MPI and OpenMPI: [Click here](https://princetonuniversity.github.io/PUbootcamp/sessions/parallel-programming/Intro_PP_bootcamp_2018.pdf)
