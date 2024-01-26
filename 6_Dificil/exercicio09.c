/*
    9) Construa um programa que leia duas strings do teclado. 
    Imprima uma mensagem informando quantas vezes a segunda 
    string lida está contida dentro da primeira.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 100

int main() {
    char string1[T], string2[T];
    int cont = 0;

    printf("Primeira string: ");
    gets(string1);
    printf("Segunda string: ");
    gets(string2);

    for (int i = 0; i <= strlen(string1) - strlen(string2); i++) {
        if (strncmp(&string1[i], string2, strlen(string2)) == 0) {
            cont++;
        }
    }
    
    printf("\nQuantidade de vezes que a Segunda string esta contida na Primeira: %d", cont);

    return 0;
}