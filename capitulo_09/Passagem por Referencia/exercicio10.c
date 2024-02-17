/*
    10) Escreva uma função que receba uma string e retorne se ela é um palíndromo (1)
    ou não (0). Um palíndromo é uma palavra que tem a propriedade de poder ser
    lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos:
    ovo, arara, rever, asa, osso etc.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 25

int palindromo(char*);

int main() {
    char string[T];

    printf("Digite a string: ");
    fgets(string, T, stdin);

    int x = palindromo(string);

    printf("\n%d", x);

    return 0;
}

int palindromo(char* s) {
    char sInversa[T], temp;
    int aux = 0;

    strcpy(sInversa, s);

    for (int i = strlen(sInversa) - 2; i >= (strlen(sInversa) - 2) / 2; i--) {
        temp = sInversa[i];
        sInversa[i] = sInversa[aux];
        sInversa[aux] = temp;
        aux++;
    }

    if (strcmp(s, sInversa) == 0) {
        return 1;
    } else {
        return 0;
    }

}