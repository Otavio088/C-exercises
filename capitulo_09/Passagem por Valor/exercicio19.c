/*
    19) Faça uma função que receba como parâmetro o valor de um ângulo em graus e
    calcule o valor do cosseno desse ângulo usando a sua respectiva série de Taylor:

            5
    cos x = Σ (((-1)^n / (2n)!)x^2n) = x - x^2/2! + x^4/4! ...
           n=0
    
    em que x é o valor do ângulo em radianos. Considerar π = 3.1414592 e n variando
    de 0 até 5.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1414592

float cosseno(float);
int fatorial(int f);

int main() {
    int anguloGraus;

    printf("Valor de um angulo em graus: ");
    scanf("%d", &anguloGraus);

    float c = cosseno(anguloGraus);

    printf("\ncosseno: %0.2f", c);

    return 0;
}

int fatorial(int f) {
    int fatorial = 1;

    for(int i = 1; i <= f; i++) {
        fatorial *= i;
    }

    return fatorial;
}

float cosseno(float a) {
    float cos = 0, x = a * (PI / 180);
    
    for(int i = 0; i <= 5; i++) {
        cos += ((pow(-1, i)) / fatorial(2*i)) * pow(x, (2*i));
    }
                
    return cos;
}