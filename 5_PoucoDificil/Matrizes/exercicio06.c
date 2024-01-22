/*
    6) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
    contidos em sua diagonal principal.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[3][3], l, c, s;

    for (l = 0; l <= 2; l++) {
        for (c = 0; c <= 2; c++) {
            printf("Valor de m[%d][%d]: ", l, c);
            scanf("%d", &m[l][c]);
            if (l == c) {
                s += m[l][c];
            }
        }
    }

    printf("\nSoma da diagonal principal: %d", s);

    return 0;
}