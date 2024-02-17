/*
    14) Crie uma função recursiva que retorne o menor elemento em um vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int menor(int*, int);

int main() {
    int const N = 10;
    int vet[N];

    for (int i = 0; i < N; i++) {
        vet[i] = rand() % 10;
        printf("%d  ", vet[i]);
    }

    int m = menor(vet, N-1);

    printf("\nMenor elemento do vetor: %d", m);

    return 0;
}

int menor(int* v, int i) {
    if (i == 0) {
        return v[0];
    } 

    int min = menor(v, i-1);
        
    if (v[i] < min) {
        return v[i];
    } else
        return min;
}