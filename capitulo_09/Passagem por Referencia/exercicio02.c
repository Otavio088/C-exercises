/*
    2) Escreva uma função para o cálculo do volume e área de uma esfera
       
        V = 4/3 π + r^3
        A = 4 π * r^2
    
    em que π = 3.1414592. O valor do raio r deve ser passado por parâmetro, e os
    valores calculados devem ser retornados por referência.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1414592

void esfera(float*, float*, float*);

int main() {
    float v = 0, a = 0, r;

    printf("Valor do raio: ");
    scanf("%f", &r);

    esfera(&r, &v, &a);

    printf("\nVolume: %0.2f", v);
    printf("\nArea: %0.2f", a);

    return 0;
}

void esfera(float *r, float *V, float *A) {
    *V = (((4/3) * PI) + (pow((*r), 3)));
    *A = ((4*PI) * (pow((*r), 2)));
}