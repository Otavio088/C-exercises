/*
    1) Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
    menor valor contido nessa matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[3][3], l, c, menor = 0, cont = 0;

    for (l = 0; l <= 2; l++) {
        for (c = 0; c <= 2; c++) {
            printf("Valor de m[%d][%d]: ", l, c);
            scanf("%d", &m[l][c]);

            if (cont == 0) {
                menor = m[l][c];
                cont++;
            }
            if (menor > m[l][c]) {
                menor = m[l][c];
            }
        }
    }

    printf("\nMenor valor da matriz: %d", menor);

    return 0;
}