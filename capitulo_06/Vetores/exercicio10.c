/*
    10) Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
    números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[100], i, c = 0;

    for (i = 0; i <= 99; i++) {
        if (i%7 != 0) {
            v[c] = i;
            c++;
        }
    }

    printf("Vetor: ");
    for (i = 0; i <= 99; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}