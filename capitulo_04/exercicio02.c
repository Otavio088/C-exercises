/*
    2) Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
    dois números forem iguais, imprima a mensagem “Números iguais”.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1 = 0, n2 = 0;

    printf("Digite o Primeiro Numero: ");
    scanf("%d", &n1);
    printf("Digite o Segundo Numero: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("\n%d eh maior", n1);
    } else if (n2 > n1) {
        printf("\n%d eh maior", n2);
    } else {
        printf("\nNumeros iguais!");
    }

    return 0;
}