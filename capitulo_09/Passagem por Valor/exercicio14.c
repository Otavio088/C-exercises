/*
    14) Escreva uma função que receba um número inteiro positivo n. 
    Calcule e retorne o seu fatorial n!: n! = n * (n – 1) * (n – 2) 
    * ... * 1.
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int);

int main() {
    int n = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    int f = fatorial(n);

    printf("\n%d! = %d", n, f);

    return 0;
}

int fatorial(int n) {
    if (n == 0) {
        return 1;
    }

    for (int i = n-1; i >= 1; i--) {
        n *= i;
    }

    return n;
}