/*
    4) Crie uma função recursiva que receba um número inteiro N e 
    imprima todos os números naturais de 0 até N em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>

int decrescente(int);

int main() {
    int N = 0;

    printf("Valor de N: ");
    scanf("%d", &N);

    decrescente(N);

    return 0;
}

int decrescente(int N) {
    if (N == 0) {
        printf("%d ", N);
        return 0;
    } else {
        printf("%d ", N);
        decrescente(N-1);
        return 1;
    }
}