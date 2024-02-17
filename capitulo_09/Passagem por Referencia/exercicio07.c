/*
    7) Crie uma função que receba uma matriz A contendo 10 linhas e 10 colunas e
    retorne a soma dos seus elementos.
*/

#include <stdio.h>
#include <stdlib.h>

void somaMatriz(int A[][10], int, int*);

int main() {
    int A[10][10], soma = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            A[i][j] = rand() % 10;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    somaMatriz(A, 10, &soma);

    printf("\nSoma dos elementos da matriz A: %d", soma);

    return 0;
}

void somaMatriz(int A[][10], int N, int *s) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            *s += A[i][j];
        }
    }
}