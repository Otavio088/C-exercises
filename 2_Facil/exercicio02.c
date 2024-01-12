/*
    2) Faça um programa que leia um número real e imprima a quinta parte desse número.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float x = 0;

    printf("Digite um numero real: ");
    scanf("%f", &x);

    printf("\nQuinta parte desse numero: %f", x/5);

    return 0;
}