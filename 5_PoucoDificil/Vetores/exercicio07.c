/*
    7) Faça um programa que receba do usuário um vetor X com 10 posições. 
    Em seguida deverão ser impressos o maior e o menor elemento desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int X[10], i, maior = 0, menor = 0;

    for (i = 0; i <= 9; i++) {
        printf("Valor da posicao %d: ", i);
        scanf("%d", &X[i]);

        if (maior < X[i])  {
            maior = X[i];
            if (menor == 0) {
                menor = maior;
            }
        }
        if (menor > X[i]) {
            menor = X[i];
        }
    }

    printf("\nMaior valor do array: %d", maior);
    printf("\nMenor valor do array: %d", menor);

    return 0;
}