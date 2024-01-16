/*
    8) Faça um programa que leia 10 inteiros e imprima sua média.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n = 0, m = 0;

    for (i = 1; i <= 10; i++) {
        printf("%do numero inteiro: ", i);
        scanf("%d", &n);
        m += n;
    }

    m = m/10;

    printf("\nMedia: %d", m);

    return 0;
}