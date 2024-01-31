/*
    1) Faça um programa que leia dois números e mostre qual deles é o maior.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1 = 0, n2 = 0;

    printf("Digite o Primeiro Numero: ");
    scanf("%d", &n1);
    printf("Digite o Segundo Numero: ");
    scanf("%d", &n2);

    (n1 > n2) ? printf("\n%d eh maior", n1) : printf("\n%d é maior", n2);

    return 0;
}