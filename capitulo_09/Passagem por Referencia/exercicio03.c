/*
    3) Escreva uma função que receba um array de 10 elementos e retorne a sua soma.
*/

#include <stdio.h>
#include <stdlib.h>

void soma(int*, int, int*);

int main() {
    int v[10], s = 0;

    for (int i = 0; i < 10; i++) {
        v[i] = rand() % 10; //preenche com valores aleatorios.
    }

    soma(v, 10, &s);

    printf("Soma: %d", s);

    return 0;
}

void soma(int *v, int N, int *s) {
    for (int i = 0; i < N; i++) {
        *s += v[i];
    }
}