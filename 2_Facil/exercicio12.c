/*
    12) Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
    O volume de um cilindro circular é calculado por meio da seguinte fórmula:
        V = π * raio^2 * altura
    em que π = 3.141592
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592

int main() {
    float altura = 0, raio = 0, V = 0;

    printf("Digite a altura do cilindro circular: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro circular: ");
    scanf("%f", &raio);

    V = (PI * pow(raio, 2) * altura);

    printf("\nVolume do cilindro: %f", V);

    return 0;
}