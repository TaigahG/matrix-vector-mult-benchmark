#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main(){
    int N ;
    printf("matrix size: (n*n)\n");
    scanf("%d", &N);
    
    if(N <= 1){
        printf("Error\n");
        return 0;
    }
    else{
    int *matrix = (int *) malloc(N*N*sizeof(int));
    int *vector = (int *) malloc(N*sizeof(int));
    int *result = (int *) malloc(N*sizeof(int));

    printf("matrix values:\n");
    for(int i = 0; i < N*N; i++){
        scanf("%d", &matrix[i]);
    }
    printf("Matrix = ");
    printMat(matrix, N);

    printf("\nvector values:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &vector[i]);
    }
    printf("\nVector = ");
    printVec(vector, N);

    matVectMult(matrix, vector, result, N);

    printf("\nResult = ");
    printVec(result, N);

    free(matrix);
    free(vector);
    free(result);


    }
    return 0;
}