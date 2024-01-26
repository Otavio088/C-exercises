/*
    3) Sem usar a função strlen(), faça um programa que leia uma 
    string e imprima quantos caracteres ela possui.
*/

#include <stdio.h>
#include <stdlib.h>

#define T 100

int main() {
    char string[T];
    int cont = 0;

    printf("Digite uma string: ");
    fgets(string, T, stdin);

    for (int i = 0; string[i] != '\n'; i++) {
        cont++;
    }

    printf("A string possui %d caracteres!\n", cont);

    return 0;
}