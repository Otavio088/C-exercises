/*
    11) Faça um algoritmo que leia um número positivo e imprima seus divisores. 
    Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("\nDivisores de %d: ", n);
    for (i = 1; i <= n; i++) {
        if (n%i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}