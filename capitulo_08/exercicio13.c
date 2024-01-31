/*
    13) Crie uma enumeração representando os meses do ano. Agora, 
    escreva um programa que leia um valor inteiro do teclado e 
    exiba o nome do mês correspondente e quantos dias ele possui.
*/

#include <stdio.h>
#include <stdlib.h>

enum meses {
    Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro
};

int main() {
    int n = 0;
     
    do {
        printf("Digite um numero: ");
        scanf("%d", &n);
    } while (n < Janeiro || n > Dezembro);

     switch (n) {
        case Janeiro:
            printf("Janeiro - 31 dias.\n");
            break;
        case Fevereiro:
            printf("Fevereiro - 28/29 dias.\n");
            break; 
        case Marco:
            printf("Marco - 31 dias.\n");
            break;
        case Abril:
            printf("Abril - 30 dias.\n");
            break;
        case Maio:
            printf("Maio - 31 dias.\n");
            break;
        case Julho:
            printf("Julho - 31 dias.\n");
            break;
        case Junho:
            printf("Junho - 30 dias.\n");
            break;
        case Agosto:
            printf("Agosto - 31 dias.\n");
            break;
        case Setembro:
            printf("Setembro - 30 dias.\n");
            break;
        case Outubro:
            printf("Outubro - 31 dias.\n");
            break;
        case Novembro:
            printf("Novembro - 30 dias.\n");
            break;
        case Dezembro:
            printf("Dezembro - 31 dias.\n");
            break;
     }

    return 0;
}