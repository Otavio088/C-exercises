/*
    3) Faça um programa que leia um número inteiro N e depois imprima os 
    N primeiros números naturais ímpares.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N = 0, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    printf("\nPrimeiros numero naturais impares: ");
    for (i = 0; i < N; i++) {
        if(i%2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}