/*
    10) Escreva um programa que leia uma string do teclado e converta 
    todos os seus caracteres em maiúscula. Dica: subtraia 32 dos 
    caracteres cujo código ASCII está entre 97 e 122.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 100

int main() {
    char string[T];

    printf("Digite a string: ");
    fgets(string, T, stdin);

    for (int i = 0; i < strlen(string) - 1; i++) {
        if (string[i] >= 97 && string[i] <= 122) {
            string[i] -= 32;
        }
    }

    printf("\nConvertido em maiuscula: %s", string);

    return 0;
}