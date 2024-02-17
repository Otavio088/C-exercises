/*
    3) Crie uma função recursiva que receba um número inteiro
    N e imprima todos os números naturais de 0 até N em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int crescente(int);

int main() {
    int N = 0;

    printf("Valor de N: ");
    scanf("%d", &N);

    crescente(N);

    return 0;
}

int crescente(int N) {
    if (N == 0) {
        printf("%d ", N);
        return 0;
    } else {
        crescente(N-1);
        printf("%d ", N);
        return 1;
    }
}