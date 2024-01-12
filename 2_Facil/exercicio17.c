/*
    17) Escreva um programa que leia um número inteiro e mostre o seu complemento
    bit a bit.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    printf("Seu complemento bit a bit: %d", ~x);

    return 0;
}