/*
    14) Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. 
    Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de 
    ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos 
    anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, i, f = 0, ant = 0;

    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci: ");
    for (i = 0; i <= n; i++) {
        if (i == 0) {
            printf("%d ", i);
            ant = i;
        } else if (i == 1) {
            printf("%d ", i);
            f++;
        } else {
            f += ant;
            printf("%d ", f);
            ant = f - ant;
        }

    }

    return 0;
}