/*
    1) Faça um programa que leia um número inteiro positivo N e imprima todos os
    números naturais de 0 até N em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N = 0, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    printf("\n");
    for (i = 0; i <= N; i++) {
        printf("%d ", i);
    }

    return 0;
}