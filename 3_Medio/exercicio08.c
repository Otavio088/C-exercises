/*
    8) Escreva um programa que, dada a idade de um nadador, o classifique em uma das
    seguintes categorias:
        Categoria      Idade
        Infantil A     5-7
        Infantil B     8-10
        Juvenil A      11-13
        Juvenil B      14-17
        Sênior         maiores de 18 anos
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 0;

    printf("Idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("\nCategoria Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        printf("\nCategoria Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        printf("\nCategoria Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        printf("\nCategoria Juvenil B");
    } else if (idade >= 18) {
        printf("\nCategoria Senior");
    }

    return 0;
}