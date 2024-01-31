/*
    9) Faça um programa que receba do usuário dois arrays, A e B, 
    com 10 números inteiros cada. Crie um novo array C calculando 
    C = A − B. Mostre na tela os dados do array C.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[10], B[10], C[10], i;

    for (i = 0; i <= 10; i++) {
        printf("Valor de A[%d]: ", i);
        scanf("%d", &A[i]);
        printf("Valor de B[%d]: ", i);
        scanf("%d", &B[i]);
        C[i] = A[i] - B[i];
    }

    printf("Array C: ");
    for (i = 0; i <= 10; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}