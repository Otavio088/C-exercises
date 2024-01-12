/*
    7) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
    imprima o valor correspondente em dólares.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float reais = 0, cotacao = 0, dolares = 0;

    printf("Digite uma quantidade em Real(R$): ");
    scanf("%f", &reais);
    printf("Cotacao do dolar(U$): ");
    scanf("%f", &cotacao);

    dolares = (reais/cotacao);

    printf("\nValor correspondente em dolares(U$): %0.2f", dolares);

    return 0 ;
}