#!/bin/sh

export OMP_NUM_THREADS=8

clang -L/opt/homebrew/lib -fopenmp seq_pi.c -o main.out
./main.out $1
rm main.out


clang -L/opt/homebrew/lib -fopenmp omp_pi.c -o main.out
./main.out $1
rm main.out

mpicc -L/opt/homebrew/lib -fopenmp mpi_pi.c -o main.out
mpiexec -np $2 main.out $1
rm main.out

mpicc -L/opt/homebrew/lib -fopenmp mpi_omp_pi.c -o main.out
mpiexec -np $2 main.out $1
rm main.out
