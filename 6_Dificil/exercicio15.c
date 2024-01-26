/*
    15) Escreva um programa que leia duas strings e as imprima 
    em ordem alfabética, a ordem em que elas apareceriam em um 
    dicionário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 100

int main() {
    char string1[T], string2[T];

    printf("Primeira string: ");
    fgets(string1, T, stdin);
    printf("Segunda string: ");
    fgets(string2, T, stdin);

    if (strcmp(string1, string2) < 0) {
        printf("%s", string1);
        printf("%s", string2);
    } else if (strcmp(string1, string2) > 0) {
        printf("%s", string2);
        printf("%s", string1);
    } else {
        printf("\nElas sao iguais!");
    }

    return 0;
}