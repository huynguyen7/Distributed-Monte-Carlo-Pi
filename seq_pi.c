#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <omp.h>

#define R 1.0

/**
 *
 * Sequential version.
 *
 */

double get_random() {
    return (double) rand() / (double) RAND_MAX;
}

double seq_pi(int num_trials) {
    double pi, x, y;
    int num_points_circle = 0;
    int i;

    srand(time(NULL)); // randomize seed
    for(i = 0; i < num_trials; ++i) {
        x = get_random();
        y = get_random();
        if(x*x+y*y <= R) num_points_circle++;
    }

    pi = 4.0*(num_points_circle/(double) num_trials);
    //printf("PI = %.8f\n", pi);

    return pi;
}

int main(int argc, char* argv[]) {
    const int num_trials = atoi(argv[1]);

    // Sequential
    double start_time = omp_get_wtime();
    double seq_rs = seq_pi(num_trials);
    double time_taken = omp_get_wtime() - start_time;
    printf("PI = %.8f -- Time taken in SEQUENTIAL: %.8fs.\n", seq_rs, time_taken);

    return 0;
}
