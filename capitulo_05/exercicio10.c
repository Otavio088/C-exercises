/*
    10) Faça um programa que leia 10 inteiros positivos, ignorando 
    não positivos, e imprima sua média.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n = 0;
    float m = 0;

    printf("Digite 10 numeros Inteiros e Positivos!\n");
    for (i = 1; i <= 10; i++) {
        do {
            printf("%do numero: ", i);
            scanf("%d", &n);
        } while (n < 0);
        
        m += n;
    }

    m = m/10;

    printf("\nMedia: %0.2f", m);

    return 0;
}