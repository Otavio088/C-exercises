/*
    13) Faça um programa que exiba a soma de todos os números naturais abaixo de
    1.000 que são múltiplos de 3 ou 5.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, s = 0;

    printf("\nSoma de todos os numeros naturais abaixo de 1000 multiplos de 3 ou 5: ");
    for (i = 1; i < 1000; i++) {
        if (i%3 == 0 || i%5 == 0) {
            s += i;
        }
    }
    printf("%d\n", s);

    return 0;
}