/*
    6) Crie uma função recursiva que retorne a média dos elementos de 
    um vetor de inteiros.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 5

float media(int*, int);

int main() {
    int const n = N;
    int vet[N];

    for (int i = 0; i < N; i++) {
        vet[i] = rand() % 10;
        printf("%d  ", vet[i]);
    }

    float M = media(vet, n-1);

    printf("\nMedia dos elementos do Vetor: %0.2f", M);

    return 0;
}

float media(int *v, int i) {
    if (i == 0) {
        return (float) v[i]/N;
    } else {
        float soma = (float) v[i]/N;
        return soma + media(v, i-1);
    }
}