/*
    3) Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit
    e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) *
    (5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include <stdio.h>
#include <stdlib.h>

float celcius(float);

int main() {
    float F = 0;

    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &F);

    float C = celcius(F);

    printf("\nConvertida em Celcius: %0.2f", C);

    return 0;
}

float celcius(float f) {
    return (f - 32.0)*(5.0/9.0);
}