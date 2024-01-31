/*
    5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, s = 0;

    for (i = 0; i <= 100; i++) {
        if (i%2 == 0) {
            s += i;
        }
    }

    printf("Soma dos 50 primeiros numeros pares: %d", s);

    return 0;
}