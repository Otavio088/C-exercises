/*
    8) Faça uma função que receba, por parâmetro, uma matriz A contendo seis linhas
    e seis colunas. Essa função deve retornar, por referência, a soma dos elementos da
    sua diagonal principal e da sua diagonal secundária.
*/

#include <stdio.h>
#include <stdlib.h>

void somaDiagonal(int A[][6], int, int*, int*);

int main() {
    int A[6][6], somaDP = 0, somaDS = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            A[i][j] = rand() % 10;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    somaDiagonal(A, 6, &somaDP, &somaDS);

    printf("\nSoma Diagonal Principal: %d", somaDP);
    printf("\nSoma Diagonal Secundaria: %d", somaDS);

    return 0;
}

void somaDiagonal(int A[][6], int N, int* somaDP, int* somaDS) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                *somaDP += A[i][j];
            }
            if ((i+j) == (N-1)) {
                *somaDS += A[i][j];
            }
        }
    }
}