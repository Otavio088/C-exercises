/*
    16) Em matemática, o número harmônico designado por Hn define-se 
    como o enésimo termo da série harmônica. Ou seja:
    
    Hn = 1 + 1/2 + 1/3 + 1/4 + ... +  1/n

    Apresente um programa que calcule o valor de qualquer Hn.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, i;
    float hn = 0;

    printf("Digite o valor do Hn: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        hn += 1.0/i;
    }

    printf("\nValor do Hn: %0.2f", hn);

    return 0;
}