/*
    1) Faça um programa que leia uma string e a imprima na tela.
*/

#include <stdio.h>
#include <stdlib.h>

#define T 100

int main() {
    char string[T];

    printf("Digite uma string: ");
    fgets(string, T, stdin);

    printf("%s", string);

    return 0;
}