/*
    13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
        h = √a^2+b^2
    Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
    através da fórmula dada. Imprima o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a = 0, b = 0, h = 0;

    printf("Digite o Primeiro Cateto do Triangulo: ");
    scanf("%f", &a);
    printf("Digite o Segundo Cateto do Triangulo: ");
    scanf("%f", &b);

    h = sqrt(pow(a,2) + pow(b,2));

    printf("\nValor da Hipotenusa: %f", h);

    return 0;
}