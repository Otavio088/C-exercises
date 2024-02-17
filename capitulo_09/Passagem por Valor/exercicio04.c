/*
    4) Escreva uma função que receba por parâmetro a altura e o raio de um cilindro
    circular e retorne o volume desse cilindro. O volume de um cilindro circular é
    calculado por meio da seguinte fórmula:
    
    V = π * raio^2 * altura,
    
    em que π = 3.1414592
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1414592

float volume(float, float);

int main() {
    float A = 0, R = 0;

    printf("Altura do Cilindro Circular: ");
    scanf("%f", &A);
    printf("Raio do Cilindro Circular: ");
    scanf("%f", &R);

    float V = volume(A, R);

    printf("\nVolume do Cilindro Circular: %0.2f", V);

    return 0;
}

float volume(float a, float r) {
    return PI * pow(r, 2) * a;
}