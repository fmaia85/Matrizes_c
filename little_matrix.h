#ifndef __LITTLE_MATRIX_H__
#define __LITTLE_MATRIX_H__
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
void matrixMult(int** A, int ra, int ca, int** B, int rb, int cb, int** C);

/**
 * Função memAllocMatrix realiza a alocação de memória para uma matriz de tamanho r por c.
 * Retorna a matriz alocada.
 * Os parâmetros são:
 * r -> número de linhas de M;
 * c -> número de colunas de M;
 * A matriz C deve ser de tamanho ra x cb.
 */
int** memAllocMatrix(int r, int c);

/**
 * Função memFreeMatrix realiza a liberação de memória para uma matriz com r linhas.
 * Não retorna nada.
 * Os parâmetros são:
 * M -> matriz que será liberada.
 * r -> número de linhas de M;
 * A matriz C deve ser de tamanho ra x cb.
 */
void memFreeMatrix(int** M, int r);

/**
 * Função printMatrix realiza a impressão de uma matriz M de tamanho r por c.
 * Não retorna nada.
 * Os parâmetros são:
 * M -> matriz com valores que serão impressos.
 * r -> número de linhas de M;
 * c -> número de colunas de M.
 */
void printMatrix(int** M, int r, int c);

#endif // __LITTLE_MATRIX_H__
