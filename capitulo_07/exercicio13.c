/*
    13) Escreva um programa que recebe uma string S e dois valores 
    inteiros não negativos i e j. Em seguida, imprima os caracteres 
    contidos no segmento que vai de i a j da string S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 100

int main() {
    char S[T];
    int i = 0, j = 0;

    printf("Digite a S: ");
    fgets(S, T, stdin);
    printf("Primeiro valor inteiro nao negativo: ");
    scanf("%d", &i);
    printf("Segundo valor inteiro nao negativo: ");
    scanf("%d", &j);

    for (i -= 1; i <= j - 1; i++) {
        printf("%c", S[i]);
    }

    return 0;
}