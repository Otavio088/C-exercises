/*
    13) Faça um programa que leia uma matriz de tamanho 5 × 5. 
    Calcule e imprima a soma dos elementos dessa matriz que não 
    pertencem à diagonal principal nem à diagonal secundária.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[5][5], l, c, s = 0;

    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            printf("Valor da posicao m[%d][%d]: ", l, c);
            scanf("%d", &m[l][c]);
        }
    }

    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            if (l != c && (l + c != 4)) {
                s += m[l][c];
            }
            printf("%d  ", m[l][c]);
        }
        printf("\n");
    }

     printf("\nSoma dos elementos que nao pertencem a diagonal principal nem a diagonal secundaria: %d", s);

    return 0;
}