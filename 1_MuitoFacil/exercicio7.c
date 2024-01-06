/*
    7) Elabore um programa que leia um caractere e depois o imprima como um valor
    inteiro. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char n;

    printf("Digite um caractere: ");
    scanf("%c", &n);

    printf("Correspondente inteiro: %d", n);

    return 0;
}