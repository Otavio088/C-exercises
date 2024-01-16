/*
    20) Faça um programa que leia um valor inteiro e positivo N, 
    calcule o mostre o valor E, conforme a fórmula a seguir:

    E = 1/1! + 1/2! + 1/3! + ... + 1/N!
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N = 0, i;
    float E = 0, fat = 1.0;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        fat *= i;
        E += (1/fat);
    }

    printf("\nValor de E = %0.2f", E);

    return 0;
}