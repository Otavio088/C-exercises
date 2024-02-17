/*
    16) Elabore uma função que receba um vetor contendo N valores 
    e retorne por referência o maior elemento do vetor e o número 
    de vezes que esse elemento ocorreu no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

void vetorMaior(int*, int*, int*);

int main() {
    int vetor[N], maiorElemento = -1, nVezes = 0;

    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % 10;
        printf("%d  ", vetor[i]);
    }

    vetorMaior(vetor, &maiorElemento, &nVezes);

    printf("\n\nMaior elemento do vetor: %d", maiorElemento);
    printf("\nNumero de vezes que ele aparece no vetor: %d", nVezes);

    return 0;
}

void vetorMaior(int *v, int *maior, int *n) {
    for (int i = 0; i < N; i++) {
        if (v[i] > *maior) {
            *maior = v[i];
        }
    }

    for (int i = 0; i < N; i++) {
        if (v[i] == *maior) {
            (*n)++;
        }
    }
}