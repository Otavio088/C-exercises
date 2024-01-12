/*
    12) Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7
    e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
    segunda-feira, se 2, e assim por diante.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int d = 0;

    printf("Digite um dia da semana: ");
    scanf("%d", &d);

    switch (d) {
        case 1:
            printf("\nDomingo");
            break;
        case 2:
            printf("\nSegunda-feira");
            break;
        case 3:
            printf("\nTerca-feira");
            break;
        case 4:
            printf("\nQuarta-feira");
            break;
        case 5:
            printf("\nQuinta-feira");
            break;
        case 6:
            printf("\nSexta-feira");
            break;
        case 7:
            printf("\nSabado");
            break;
        default:
            printf("\nDia da semana inexistente!");
    }

    return 0;
}