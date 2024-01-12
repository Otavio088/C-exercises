/*
    4) Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que acontece.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0;

    printf("Numero inteiro: ");
    scanf("%d", &x);

    printf("Aqui ele: %f", x);
    
    return 0;
}