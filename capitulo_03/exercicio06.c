/*
    6) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
    m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade 
    em km/h e M em m/s.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float K = 0, M = 0;

    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &K);

    M = K/36;

    printf("Velocidade convertida em m/s: %f", M);

    return 0;
}