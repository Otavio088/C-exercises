/*
    5) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e 
    escreva na tela quantos valores negativos ela possui.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
     int m[4][4], l, c, cont = 0;

    for (l = 0; l <= 3; l++) {
        for (c = 0; c <= 3; c++) {
            printf("Valor de m[%d][%d]: ", l, c);
            scanf("%d", &m[l][c]);
            if (m[l][c] < 0) {
                cont++;
            }
        }
    }

    printf("\nQuantidade de valores negativos da matriz: %d", cont);

    return 0;
}