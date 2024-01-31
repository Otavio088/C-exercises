/*
    17) Escreva um programa que leia um número inteiro positivo N 
    e em seguida imprima N linhas do chamado triângulo de Floyd:
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    16 17 18 19 20 21
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, i, j, f = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j <= i) {
                printf("%d ", f);
                f++;
            }
            if (f == (n+1)) {
                return 0;
            }
        }
        printf("\n");
    }

    return 0;
}