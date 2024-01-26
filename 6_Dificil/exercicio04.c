/*
    4) Faça um programa que leia uma string e a imprima de trás para a frente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 100

int main() {
    char string[T];

    printf("Digite uma string: ");
    fgets(string, T, stdin);

    for (int i = strlen(string); i >= 0; i--) {
        printf("%c", string[i]);
    }

    return 0;
}