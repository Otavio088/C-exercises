/*
    7) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima 
    a soma dos valores contidos em sua diagonal secundária.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 3

int main() {
    int m[3][3], l, c, s = 0;

    for (l = 0; l <= N-1; l++) {
        for (c = 0; c <= N-1; c++) {
            printf("Valor da posicao m[%d][%d]: ", l, c);
            scanf("%d", &m[l][c]);
            if (l+c == N-1) {
                s += m[l][c];
            }
        } 
    }

    printf("\nSoma diagonal segundaria: %d", s);

    return 0;
}