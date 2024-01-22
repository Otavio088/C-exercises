/*
    9) Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 
    3 de números inteiros. Em seguida, calcule um vetor contendo três posições, em 
    que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
    Exiba na tela esse array. 
    Por exemplo, a matriz:  5  −8  10
                            1   2  15
                            25  10  7
    
    deverá gerar o vetor:   31  4  32
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[3][3],l, c, v[3] = {0, 0, 0};

    for (l = 0; l <= 2; l++) {
        for (c = 0; c <= 2; c++) {
            printf("Valor da posicao m[%d][%d]: ", l, c);
            scanf("%d", &m[l][c]);
            v[c] += m[l][c];
        }
    }

    for (l = 0; l <= 2; l++) {
        printf("%d ", v[l]);
    }

    return 0;
}