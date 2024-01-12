/*
    3) Escreva um programa que leia um número inteiro e depois imprima a mensagem
    “Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0;

    scanf("%d", &x);

    printf("Valor lido: %d", x);

    return 0;
}