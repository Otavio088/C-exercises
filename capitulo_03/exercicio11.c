/*
    11) Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. 
    A área do círculo é A = π * raio^2, sendo π = 3.141592.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592

int main() {
    float raio = 0, A = 0;

    printf("Digite o valor do raio de um circulo: ");
    scanf("%f", &raio);

    A = PI * pow(raio, 2);

    printf("\nArea do circulo correspondente: %f", A);

    return 0;
}