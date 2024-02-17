/*
    13) Crie uma função que receba um vetor de tamanho N e ordene os seus valores.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 20

void ordenacao(int*);

int main() {
    int vetor[N];

    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % 60;
        printf("%d ", vetor[i]);
    }

    ordenacao(vetor);

    printf("\n\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

void ordenacao(int* v) {
    int cont = 0;
    while (cont == 0) {
        cont = 1;
        for (int i = 0; i < N-1; i++) {
            if (v[i] > v[i+1]) {
                cont = 0;
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}