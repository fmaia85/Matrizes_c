#include<stdio.h>
#include"little_matrix.h"


int main(int argc, char const *argv[])
{
    int ra = 4, ca = 3;
    int rb = 3, cb = 4;
    int** A;
    int** B;
    int** C;

    A = memAllocMatrix(ra, ca);
    B = memAllocMatrix(rb, cb);
    C = memAllocMatrix(ra, cb);

    for(int r = 0; r<ra; r++){
       for(int c = 0; c<ca; c++){
            A[r][c] = 1+r+c;
        } 
    }

    for(int r = 0; r<rb; r++){
       for(int c = 0; c<cb; c++){
            B[r][c] = 1+r*c;
        } 
    }

    
    matrixMult(A, ra, ca, B, rb, cb, C);


    printf("Matriz A: \n");
    printMatrix(A, ra, ca);

    printf("Matriz B: \n");
    printMatrix(B, rb, cb);

    printf("Matriz C: \n");
    printMatrix(C, ra, cb);

    memFreeMatrix(A, ra);
    memFreeMatrix(B, rb);
    memFreeMatrix(C, ra);

    printf("\n\n\n");
    return 0;
}
