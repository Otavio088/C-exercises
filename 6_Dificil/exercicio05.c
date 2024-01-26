/*
    5) Faça um programa que leia uma string e a inverta. A 
    string invertida deve ser armazenada na mesma variável. 
    Em seguida, imprima a string invertida.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 100

int main() {
    char string[T], temp;
    int aux = 0;

    printf("Digite uma string: ");
    fgets(string, T, stdin);


    for (int i = strlen(string) - 1; i >= (strlen(string) - 1) / 2; i--) {
        temp = string[i];
        string[i] = string[aux];
        string[aux] = temp;
        aux++;
    }

    printf("%s", string);

    return 0;
}