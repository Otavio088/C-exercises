/*
    2) Crie uma função recursiva que receba um número inteiro N 
    e retorne o somatório dos números de 1 a N.
*/

#include <stdio.h>
#include <stdlib.h>

int somatorio(int);

int main() {
    int N = 0;

    printf("Valor de N: ");
    scanf("%d", &N);

    int S = somatorio(N);

    printf("\nSomatorio de 1 ate %d: %d", N, S);

    return 0;
}

int somatorio(int N) {
    if(N == 0) {
        return 0;
    } else {
        return (N + somatorio(N-1));
    }
}