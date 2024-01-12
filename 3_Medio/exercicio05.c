/*
    5) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
        • O número digitado ao quadrado.
        • A raiz quadrada do número digitado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float n = 0;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n >= 0) {
        printf("\n%0.2f ao quadrado: %0.2f", n, pow(n, 2));
        printf("\nRaiz quadrada de %0.2f: %0.2f", n, sqrt(n));
    }

    return 0;
}