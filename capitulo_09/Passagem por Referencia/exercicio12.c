/*
    12) Escreva uma função que receba como parâmetro um vetor 
    contendo N valores inteiros. Essa função deve retornar, por 
    referência, dois valores: a soma dos números pares e ímpares.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

void soma(int*, int*, int*);

int main() {
    int vetor[N], somaPares = 0, somaImpares = 0;

    for (int i = 0; i < N; i++) {
        vetor[i] = rand() % 10;
        printf("%d  ", vetor[i]);
    }

    soma(vetor, &somaPares, &somaImpares);

    printf("\nSoma dos Numero Pares: %d", somaPares);
    printf("\nSoma dos Numero Impares: %d", somaImpares);
 
    return 0;
}

void soma(int *v, int *somaPar, int *somaImp) {
    for (int i = 0; i < N; i++) {
        if (v[i]%2 == 0) {
            *somaPar += v[i];
        } else {
            *somaImp += v[i];
        }
    }
}