/*
    15) Elabore uma função que receba como parâmetro um valor inteiro n e gere como
    saída n linhas com pontos de exclamação, conforme o exemplo a seguir, em que
    usamos n = 5:
    !
    !!
    !!!
    !!!!
    !!!!!
*/

#include <stdio.h>
#include <stdlib.h>

void exclamacao(int);

int main() {
    int n = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    exclamacao(n);

    return 0;
}

void exclamacao(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("! ");
        }
        printf("\n");
    }
}