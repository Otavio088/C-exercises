/*
    6) Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa.
    Calcule e retorne o IMC (índice de massa corporal) dessa pessoa:

    IMC = peso/(altura * altura)
*/

#include <stdio.h>
#include <stdlib.h>

float calculoIMC(float, float);

int main() {
    float peso = 0, altura = 0;

    printf("Seu Peso(kg): ");
    scanf("%f", &peso);
    printf("Sua altura(m): ");
    scanf("%f", &altura);

    float imc = calculoIMC(altura, peso);

    printf("\nSeu IMC: %0.2f", imc);

    return 0;
}

float calculoIMC(float a, float p) {
    return (p/(a*a));
}