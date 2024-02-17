/*
    13) Escreva uma função que receba um número inteiro positivo n. 
    Calcule e retorne o somatório de 1 até n: 1 + 2 + 3 + ... + n.
*/

#include <stdio.h>
#include <stdlib.h>

int somatorio(int);

int main() {
    int n = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    int s = somatorio(n);

    printf("\nSomatorio de 1 ate %d: %d", n, s);

    return 0;
}

int somatorio(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }

    return s;
}