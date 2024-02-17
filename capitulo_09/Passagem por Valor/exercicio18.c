/*
    18) Faça uma função que receba como parâmetro o valor de um ângulo em graus e
    calcule o valor do seno desse ângulo usando a sua respectiva série de Taylor:

            5
    sen x = Σ (((-1)^n / (2n + 1)!) * x^2n+1)  = x - x^3/3! + x^5/5! ...
           n=0

    em que x é o valor do ângulo em radianos. Considere π = 3.1414592 e n variando
    de 0 até 5.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1414592

float seno(float);
int fatorial(int);

int main() {
    int anguloGraus;

    printf("Valor de um angulo em graus: ");
    scanf("%d", &anguloGraus);

    float s = seno(anguloGraus);

    printf("\nseno: %0.2f", s);

    return 0;
}

int fatorial(int f) {
    int fatorial = 1;

    for(int i = 1; i <= f; i++) {
        fatorial *= i;
    }

    return fatorial;
}

float seno(float a) {
    float sen = 0, x = a * (PI / 180);
    
    for(int i = 0; i <= 5; i++) {
        sen += ((pow(-1, i)) / fatorial(2*i + 1)) * pow(x, (2*i + 1));
    }
                
    return sen;
}