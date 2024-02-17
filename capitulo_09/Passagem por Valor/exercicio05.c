/*
    5) Escreva uma função para o cálculo do volume de uma esfera

    V = 4/3π * r^3,

    em que π = 3.1414592. O valor do raio r deve ser passado por parâmetro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1414592

float volume(float);

int main() {
    float r = 0;

    printf("Raio de uma esfera: ");
    scanf("%f", &r);

    float V = volume(r);

    printf("\nSeu Volume: %0.2f", V);

    return 0;
}

float volume(float r) {
    return (4/3 * PI * pow(r, 3));
}