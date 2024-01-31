/*
    14) Faça um programa que leia uma matriz de tamanho 5 × 5. 
    Calcule a soma dos elementos dessa matriz que pertencem à 
    diagonal principal ou secundária. Calcule também a soma dos 
    elementos que não pertencem a nenhuma das duas diagonais.
    Imprima na tela a diferença entre os dois valores.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[5][5], l, c, somaDiagonal = 0, somaNenhum = 0;

    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            printf("Valor da posicao m[%d][%d]: ", l, c);
            scanf("%d", &m[l][c]);
            if (l == c) {
                somaDiagonal += m[l][c];
            }
        }
    }

    for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 4; c++) {
            printf("%d ", m[l][c]);
            if (l != c && (l + c != 4)) {
                somaNenhum += m[l][c];
            }
        }
        printf("\n");
    }

    printf("Soma da Diagonal Principal - Soma Nenhuma Diagonal = %d", (somaDiagonal - somaNenhum));

    return 0;
}