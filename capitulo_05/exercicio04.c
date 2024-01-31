/*
    4) Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
    considerando números maiores que 0.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    printf("Cinco primeiros multiplos de 3: ");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i*3);
    }
    printf("\n");

    return 0;
}