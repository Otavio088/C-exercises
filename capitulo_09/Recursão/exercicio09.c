/*
    9) Escreva uma função recursiva que receba um número inteiro positivo n. 
    Calcule e retorne o seu fatorial n!:

    n! = n * (n – 1) * (n – 2) * ... * 1
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int);

int main() {
    int n = 0;

    printf("Valor de n: ");
    scanf("%d", &n);

    int f = fatorial(n);

    printf("\n%d! = %d", n, f);

    return 0;
}

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}