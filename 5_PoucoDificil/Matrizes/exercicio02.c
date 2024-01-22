/*
    2) Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela 
    o maior valor contido nessa matriz e a sua localização (linha e coluna).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[4][4], l, c, maior = 0;

    for (l = 0; l <= 3; l++) {
        for (c = 0; c <= 3; c++) {
            printf("Valor de m[%d][%d]: ", l, c);
            scanf("%d", &m[l][c]);

            if (maior < m[l][c]) {
                maior = m[l][c];
            }
        }
    }

    printf("\nMaior valor da matriz: %d", maior);
    for (l = 0; l <= 3; l++) {
        for (c = 0; c <= 3; c++) {
            if (maior == m[l][c]) {
                printf("\n\nLinha: %d\nColuna: %d", l, c);
            }
        }
    }

    return 0;
}