/*
    9) Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
    conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π =
    3.141592.
*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592

int main() {
    float G = 0, R = 0;

    printf("Digite um Angulo em Graus: ");
    scanf("%f", &G);

    R = G* PI/180;

    printf("\nConvertido em Radianos: %f", R);

    return 0;
}