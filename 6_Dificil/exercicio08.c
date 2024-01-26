/*
    8) Construa um programa que leia duas strings do teclado. 
    Imprima uma mensagem informando se a segunda string lida 
    está contida dentro da primeira.
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

    if (strstr(string1, string2)) {
        printf("A segunda esta contida na primeira");
    } else
        printf("A segunda NAO esta contida na primeira");

    return 0;
}