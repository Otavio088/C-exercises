/*
    19) Elabore um programa que leia dois números inteiros e exiba o resultado 
    das operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1 = 0, n2 = 0;

    printf("Primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("\nou exclusivo: %d", n1^n2);
    printf("\nou bit a bit: %d", n1|n2);
    printf("\ne bit a bit: %d", n1&n2);

    return 0;
}