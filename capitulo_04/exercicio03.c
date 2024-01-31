/*
    3) Faça um programa que leia um número inteiro e verifique se esse número é par
    ou ímpar.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    (n%2 == 0) ? printf("\nO numero %d eh par", n) : printf("\nO numero %d eh impar", n);

    return 0;
}