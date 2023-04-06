#include<stdio.h>
#include<stdlib.h>
#include"little_matrix.h"

/**
 * Função matrixMult realiza a multiplicação de duas matrizes A e B.
 * O resultado da multiplicação fica na matriz C.
 * As matrizes A, B e C já devem estar devidamente alocadas.
 * Além disso, os demais parametros:
 * ra -> número de linhas de A;
 * ca -> número de colunas de A;
 * rb -> número de linhas de B;
 * cb -> número de colunas de B.
 * Para funcionar, ca deve ser igual a rb.
 * A matriz C deve ser de tamanho ra x cb.
 */
void matrixMult(int** A, int ra, int ca, int** B, int rb, int cb, int** C){
    if(ca!=rb){
        return;
    }
    for(int i = 0; i < ra; i++){
        for(int j = 0; j < cb; j++){
            int soma = 0;

            for(int w = 0; w < ca; w++){
                soma += A[i][w]*B[w][j];
            }
            C[i][j] = soma;
        }
    }
}

/**
 * Função memAllocMatrix realiza a alocação de memória para uma matriz de tamanho r por c.
 * Retorna a matriz alocada.
 * Os parâmetros são:
 * r -> número de linhas de M;
 * c -> número de colunas de M.
 */
int** memAllocMatrix(int r, int c){
    int** M;

    M = (int**)malloc(r*sizeof(int*));
    for(int i = 0; i < r; i++){
        M[i] = (int*)malloc(c*sizeof(int));
    }

    return M;
}

/**
 * Função memFreeMatrix realiza a liberação de memória para uma matriz com r linhas.
 * Não retorna nada.
 * Os parâmetros são:
 * M -> matriz que será liberada;
 * r -> número de linhas de M.
 */
void memFreeMatrix(int** M, int r){
    for(int i = 0; i < r; i++){
        free(M[i]);
    }
    free(M);
}

/**
 * Função printMatrix realiza a impressão de uma matriz M de tamanho r por c.
 * Não retorna nada.
 * Os parâmetros são:
 * M -> matriz com valores que serão impressos.
 * r -> número de linhas de M;
 * c -> número de colunas de M.
 */
void printMatrix(int** M, int r, int c){
    for(int i = 0; i<r; i++){
       for(int j = 0; j<c; j++){
            printf("%6d",M[i][j]);
        } 
        printf("\n");
    }    
}
