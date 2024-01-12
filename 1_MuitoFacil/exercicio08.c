/*
    8) Faça um programa que leia dois números inteiros e depois os imprima na ordem
    inversa em que eles foram lidos. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0, y = 0;

    printf("Primeiro numero inteiro: ");
    scanf("%d", &x);
    printf("Segundo numero inteiro: ");
    scanf("%d", &y);

    printf("Ordem inversa: %d %d", y, x);

    return 0;
}