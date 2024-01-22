/*
    12) Faça um programa que leia uma matriz de tamanho 6 × 6. 
    Calcule e imprima a soma dos elementos dessa matriz que 
    estão abaixo da diagonal principal.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[6][6], l, c, s = 0;

    for (l = 0; l <= 5; l++) {
        for (c = 0; c <= 5; c++) {
            printf("Valor da posicao m[%d][%d]: ", l, c);
            scanf("%d", &m[l][c]);
            if (l > c) {
                s += m[l][c];
            }
        } 
    }

    printf("\nSoma dos elementos abaixo da diagonal principal: %d", s);

    return 0;
}