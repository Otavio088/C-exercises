/*
    10) Escreva uma função recursiva que receba um número inteiro, maior ou igual a
    zero, e retorne o enésimo termo da sequência de Fibonacci. Essa sequência começa 
    no  termo de ordem zero e, a partir do segundo termo, seu valor é dado pela soma
    dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 
    8, 13, 21, 34.
*/

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);

int main() {
    int n = 0;

    printf("Valor de n: ");
    scanf("%d", &n);

    int f = fibonacci(n);

    printf("\nN-esimo termo da sequencia Fibonacci: %d", f);

    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return n;
    } else if (n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}