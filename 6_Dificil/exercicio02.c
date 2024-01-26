/*
    2) Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
*/

#include <stdio.h>
#include <stdlib.h>

#define T 100

int main() {
    char string[T];

    printf("Digite uma string: ");
    fgets(string, T, stdin);

    for (int i = 0; i <= 3; i++) {
        printf("%c", string[i]);
    }

    return 0;
}