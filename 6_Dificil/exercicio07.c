/*
    7) Faça um programa que leia uma string e imprima uma mensagem dizendo 
    se ela é um palíndromo ou não. Um palíndromo é uma palavra que tem a 
    propriedade de poder ser lida tanto da direita para a esquerda como da 
    esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 100

int main() {
    char string[T], stringInversa[T], temp;
    int aux = 0;

    printf("Digite uma string: ");
    gets(string);

    strcpy(stringInversa, string);

    for (int i = strlen(stringInversa) - 1; i >= (strlen(stringInversa) - 1) / 2; i--) {
        temp = stringInversa[i];
        stringInversa[i] = stringInversa[aux];
        stringInversa[aux] = temp;
        aux++;
    }

    if (strcmp(string, stringInversa) == 0) {
        printf("\nEla e um palindromo!");
    } else {
        printf("\nEla NAO e um palindromo!");
    }

    return 0;
}