/*
    18) Faça um programa que receba um número inteiro maior do que 1 e verifique se o
    número fornecido é primo ou não.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, i, c = 0;

    do {
        printf("Digite um numero inteiro maior que 1: ");
        scanf("%d", &n);
    } while (n <= 1);

    for (i = 1; i <= n; i++) {
        if (n%i == 0)
            c++;
    }

    if (c == 2) {
        printf("\nO numero %d e primo!", n);
    } else {
        printf("\nO numero %d nao e primo!", n);
    }

    return 0;
}