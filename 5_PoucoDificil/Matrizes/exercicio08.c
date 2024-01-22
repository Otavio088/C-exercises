/*
    8) Calcular e imprimir na tela uma matriz de tamanho 
    10 × 10, em que seus elementos são da forma:
    
    A[i][j] = 2i + 7j – 2 se i < j
    A[i][j] = 3i^2 – 1 se i = j
    A[i][j] = 4i^3 + 5j^2 + 1 se i > j
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A[10][10], i, j;

    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            if (i < j) {
                A[i][j] = 2*i + 7*j - 2;
            } else if (i == j) {
                A[i][j] = pow(3*i, 2) - 1;
            } else {
                A[i][j] = pow(4*i, 3) + pow(5*j, 2) + 1;
            }
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}