/*
    3) Faça um programa que leia três valores inteiros e mostre sua soma.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0, y = 0, z = 0;

    printf("Primeiro valor inteiro: ");
    scanf("%d", &x);
    printf("Segundo valor inteiro: ");
    scanf("%d", &y);
    printf("Terceiro valor inteiro: ");
    scanf("%d", &z);

    printf("\nSoma dos valores: %d", x+y+z);

    return 0;
}