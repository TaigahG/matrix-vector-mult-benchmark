#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main(){

    int N;
    printf("N: \n");
    scanf("%d", &N);

    int matrix[N*N];
    int vector[N];
    int result[N];

    initMat(matrix, N);
    initVec(vector, N);

    while(1){
        matVectMult(matrix, vector, result, N);
    }
    return 0;
}