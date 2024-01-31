/*
    3) Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 
    a diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz 
    obtida na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main() { 
    int m[5][5], l, c;

    for (l = 0; l <= 4; l++) {
        printf("\n");
        for (c = 0; c <= 4; c++) {
            if (l == c) {
                m[l][c] = 1;
            } else {
                m[l][c] = 0;
            }
            printf("%d ", m[l][c]);
        }
    }
    printf("\n");

    return 0;
}