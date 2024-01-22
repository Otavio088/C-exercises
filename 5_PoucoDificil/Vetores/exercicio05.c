/*
    5) Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois
    valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa
    deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[8], i, s = 0;
    int X = 0, Y = 0;

    for (i = 0; i <= 7; i++) {
        printf("Valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nDigite uma posicao X: ");
    scanf("%d", &X);
    printf("\nDigite uma posicao Y: ");
    scanf("%d", &Y);

    s = v[X] + v[Y];

    printf("\nv[X] + v[Y] = %d", s);

    return 0;
}