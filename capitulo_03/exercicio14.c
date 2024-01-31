/*
    14) Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
    tabela ASCII para isso.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char x;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &x);

    x = x + 32; 

    printf("\nConvertida em minuscula: %c", x);

    return 0;
}