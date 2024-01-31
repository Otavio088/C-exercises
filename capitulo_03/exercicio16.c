/*
    16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a
    divisão desse número por dois (utilize os operadores de deslocamento de bits).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    printf("\nMultiplicacao por 2 usando deslocamento de bits: %d", x<<1);
    printf("\nDivisao por 2 usando deslocamento de bits: %d", x>>1);

    return 0;
}