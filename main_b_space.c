#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main(){

    int N;
    printf("N: \n");
    scanf("%d", &N);

    int mtrx[N*N];
    int vctr[N];
    int rslt[N];

    initMat(mtrx, N);
    initVec(vctr, N);

    while(1){
        mtrVctMult(mtrx, vctr, rslt, N);
    }
    return 0;
}