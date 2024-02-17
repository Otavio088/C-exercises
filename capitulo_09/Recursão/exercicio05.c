/*
    5) Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int*, int);

int main() {
    int const N = 5;
    int vet[N];

    for (int i = 0; i < N; i++) {
        vet[i] = rand() % 10;
        printf("%d  ", vet[i]);
    }

    int S = soma(vet, N);

    printf("\nSoma dos elementos do vetor: %d", S);

    return 0;
}

int soma(int* v, int i) {
    if (i == 0) {
        return 0;
    } else {
        return v[i-1] + soma(v, i-1);
    }
}