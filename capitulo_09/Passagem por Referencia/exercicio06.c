/*
    6) Crie uma função que receba uma matriz A contendo cinco linhas e cinco colunas.
    Calcule na própria matriz A a sua transposta (se B é a matriz transposta de A,
    então A[i][j] = B[j][i]).
*/

#include <stdio.h>
#include <stdlib.h>

void matriz(int m[][5], int);

int main() {
    int A[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            A[i][j] = rand() % 10;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    matriz(A, 5);

    printf("\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void matriz(int A[][5], int N) {
    int aux = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j > i) {
                aux = A[i][j];
                A[i][j] = A[j][i];
                A[j][i] = aux;
            }
        }
    }
}