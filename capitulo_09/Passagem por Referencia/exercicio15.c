/*
    15) Elabore uma função que receba um vetor contendo N valores e 
    retorne por referência o maior e o menor elemento desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

void vetMaiorMenor(int*, int*, int*);

int main() {
    int vetor[N], maiorElemento = -1, menorElemento = 0;

    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % 10;
        printf("%d  ", vetor[i]);
    }

    vetMaiorMenor(vetor, &maiorElemento, &menorElemento);

    printf("\n\nMaior Elemento do Vetor: %d", maiorElemento);
    printf("\nMenor Elemento do Vetor: %d", menorElemento);

    return 0;
}

void vetMaiorMenor(int *v, int *maior, int *menor) {
    for (int i = 0; i < N; i++) {
        if (v[i] > *maior) {
            *maior = v[i];
            if (*menor == 0 && i == 0) {
                *menor = *maior;
            }
        }
        if (v[i] < *menor) {
            *menor = v[i];
        }
    }
}