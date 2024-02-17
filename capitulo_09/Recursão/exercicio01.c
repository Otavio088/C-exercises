/*
    1) Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
    
    S = 1^3 + 2^3 + ... + n^3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somaCubos(int);

int main() {
    int n = 0;

    printf("Digite um numero qualquer inteiro: ");
    scanf("%d", &n);

    int S = somaCubos(n);

    printf("\nSoma dos primeiro n Cubos: %d", S);

    return 0;
}

int somaCubos(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (pow(n, 3) + somaCubos(n-1));
    }
}