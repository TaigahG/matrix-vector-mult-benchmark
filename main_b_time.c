#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"
#include <time.h>

clock_t start, end;
double cpu_time_used, total_time_used;
int res;




int main(){

    int N = 5000;

    int *matrix = (int *) malloc(N*N*sizeof(int));
    int *vector = (int *) malloc(N*sizeof(int));
    int *result = (int *) malloc(N*sizeof(int));


    for(N = 100; N <= 5000; N += 100){

        initMat(matrix, N); 
        initVec(vector, N);

        start = clock();
        matVectMult(matrix, vector, result, N);
        end = clock();

        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("(%d,%lf),", N, cpu_time_used);
        printf("(%d,%lf),", N/100, cpu_time_used*100);
        printf("Runtime of current step: %lfs   N: %d\n", cpu_time_used, N);
    }





    return 0;
}