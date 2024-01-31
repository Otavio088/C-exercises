/*
    14) Faça um programa para verificar se determinado número inteiro lido é divisível
    por 3 ou 5, mas não simultaneamente pelos dois.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n%3 == 0 && n%5 != 0) {
        printf("\nO numero e divisivel somente por 3");
    } else if (n%5 == 0 && n%3 != 0) {
        printf("\nO numero e divisivel somente por 5");
    }

    return 0;
}