/*
    11) Escreva uma função que receba uma string e converta todos os seus caracteres
    em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e
    122.
*/

#include <stdio.h>
#include  <stdlib.h>
#include <string.h>

#define T 20

void maiusculo(char*);

int main() {
    char string[T];

    printf("Digite a string: ");
    fgets(string, T, stdin);

    maiusculo(string);

    printf("\nMaiusculo: %s", string);

    return 0;
} 

void maiusculo(char* s) {
    for (int i = 0; i < strlen(s) - 1; i++) {
        if (s[i] >= 97 && s[i] <= 122) {
            s[i] -= 32;
        }
    }
}