/*
    8) Elabore uma função para verificar se um número é um quadrado perfeito. Um
    quadrado perfeito é um número inteiro não negativo que pode ser expresso como
    o quadrado de outro número inteiro. Exemplos: 1, 4, 9.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadradoPerfeito(int);

int main() {
    int n = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    quadradoPerfeito(n);

    return 0;
}

void quadradoPerfeito(int x) {
    if (x > 0 && x == pow((x/2), 2)) {
        printf("\nO numero Eh um Quadrado Perfeito");
    } else {
        printf("\nO numero NAO eh um Quadrado Perfeito");
    }
}