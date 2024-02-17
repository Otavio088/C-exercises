/*
    2) Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o
    mês e a sua quantidade de dias de acordo com o número digitado pelo usuário.
    Exemplo: Entrada = 4. Saída = abril.
*/

#include <stdio.h>
#include <stdlib.h>

void mes(int);

int main() {
    int n = 0;

    do {
        printf("Digite um numero inteiro de 1 a 12: ");
        scanf("%d", &n);
    } while (n < 1 || n > 12);

    mes(n);

    return 0;
}

void mes(int m) {
    switch (m) {
        case 1:
            printf("Janeiro - 31 dias");
            break;
        case 2:
            printf("Fevereiro - 28/29 dias.\n");
            break; 
        case 3:
            printf("Marco - 31 dias.\n");
            break;
        case 4:
            printf("Abril - 30 dias.\n");
            break;
        case 5:
            printf("Maio - 31 dias.\n");
            break;
        case 6:
            printf("Julho - 31 dias.\n");
            break;
        case 7:
            printf("Junho - 30 dias.\n");
            break;
        case 8:
            printf("Agosto - 31 dias.\n");
            break;
        case 9:
            printf("Setembro - 30 dias.\n");
            break;
        case 10:
            printf("Outubro - 31 dias.\n");
            break;
        case 11:
            printf("Novembro - 30 dias.\n");
            break;
        case 12:
            printf("Dezembro - 31 dias.\n");
            break;
    }
}