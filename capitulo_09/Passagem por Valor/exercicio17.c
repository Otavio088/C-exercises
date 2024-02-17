/*
    17) Faça uma função que receba um inteiro N como parâmetro. 
    Calcule e retorne o resultado da seguinte série S:

    S = (2/4) + (5/5) + (10/6) + ... + ((N^2 + 1) / (N + 3))
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float conta(int);

int main() {
    int n = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    float s =  conta(n);

    printf("\nResultado da serie: %0.2f", s);

    return 0;
}

float conta(int N) {
    float S = 0;
    for (int i = 1; i <= N; i++) {
        S += ((pow(i, 2) + 1) / (i + 3));
    }   

    return S;
}

