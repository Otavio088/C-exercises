/*
    18) Elabore um programa que leia dois números inteiros e exiba o deslocamento, à
    esquerda e à direita, do primeiro número pelo segundo.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1 = 0, n2 = 0;

    printf("Primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("\nDeslocamento a esquerda do primeiro numero pelo segundo: %d", n1<<n2);
    printf("\nDeslocamento a direita do primeiro numero pelo segundo: %d", n1>>n2);

    return 0;
}