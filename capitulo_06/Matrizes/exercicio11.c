/*
    11) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima 
    a soma dos elementos dessa matriz que estão acima da diagonal principal.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[5][5], l, c, s = 0;

    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            printf("Valor da posicao m[%d][%d]: ", l, c);
            scanf("%d", &m[l][c]);
            if (c > l) {
                s += m[l][c];
            }
        }
    }

    printf("\nSoma dos elementos acima da diagonal principal: %d", s);

    return 0;
}