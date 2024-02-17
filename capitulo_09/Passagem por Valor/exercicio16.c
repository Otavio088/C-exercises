/*
    16) Elabore uma função que receba como parâmetro um valor inteiro n e gere como
    saída um triângulo lateral formado por asteriscos conforme o exemplo a seguir,
    em que usamos n = 4:
    *
    **
    ***
    ****
    ***
    **
    *
*/

#include <stdio.h>
#include <stdlib.h>

void trianguloLat(int);

int main() {
    int n = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    trianguloLat(n);

    return 0;
}

void trianguloLat(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n-1; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }
}