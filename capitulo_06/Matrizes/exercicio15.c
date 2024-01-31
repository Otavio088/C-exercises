/*
    15) Faça um programa que leia uma matriz A de tamanho 5 × 5. 
    Em seguida, calcule e imprima a matriz B, sendo que B = A^2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A[5][5], l, c, B[5][5];

    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            printf("Valor da posicao A[%d][%d]: ", l, c);
            scanf("%d", &A[l][c]);
            B[l][c] = pow(A[l][c], 2);
        }
    }

    printf("\n-----MATRIZ A-----\n");
    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            printf("%d  ", A[l][c]);
        }
        printf("\n");
    }

    printf("\n-----MATRIZ B-----\n");
    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            printf("%d  ", B[l][c]);
        }
        printf("\n");
    }

    return 0;
}