/*
    15) Em matemática, o número harmônico designado por Hn define-se como o 
    enésimo termo da série harmônica. Ou seja:

    Hn = (1) + (1/2) + (1/3) + (1/4) + (...) + (1/n)
    
    Escreva uma função recursiva que calcule o valor de qualquer Hn
*/

#include <stdio.h>
#include <stdlib.h>

int valorHn(int);

int main() {
    int n = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    float hn = valorHn(n);

    printf("\nHn = %0.2f", hn);

    return 0;
}

int valorHn(int n) {

    if (n == 1) {
        return 1;
    } else {
        return (float) 1 / n + valorHn(n-1);
    }
}