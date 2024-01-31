/*
    12) Crie uma enumeração representando os dias da semana. 
    Agora, escreva um programa que leia um valor inteiro do 
    teclado e exiba o dia da semana correspondente.
*/

#include <stdio.h>
#include <stdlib.h>

enum semana { 
    Domingo = 1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado 
};

int main() {
    int n = 0;
     
    do {
        printf("Digite um numero: ");
        scanf("%d", &n);
    } while (n < Domingo || n > Sabado);

    switch (n) {
        case Domingo:
            printf("Domingo");
            break;
        case Segunda:
            printf("Segunda");
            break;
        case Terca:
            printf("Terca");
            break;
        case Quarta:
            printf("Quarta");
            break;
        case Quinta:
            printf("Quinta");
            break;
        case Sexta:
            printf("Sexta");
            break;
        case Sabado:
            printf("Sabado");
            break;
    }

    return 0;
}