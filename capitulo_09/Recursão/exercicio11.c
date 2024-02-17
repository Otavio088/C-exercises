/*
    11) Escreva uma função recursiva que receba um valor inteiro
    e o retorne invertido. Exemplo:
    
    Número lido = 123.
    Número retornado = 321.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int inversa(int);

int main() {
    int n = 0;

    printf("Valor Inteiro: ");
    scanf("%d", &n);

    n = inversa(n);

    printf("\nInvertido: %d", n);

    return 0;
}

int inversa(int n) {
    if(n < 10) {
        return n;
    } else {
        return (n % 10) * pow(10, (int)log10(n)) + inversa(n / 10);
    }
}