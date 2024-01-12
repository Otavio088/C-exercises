/*
    13) Faça um programa que mostre ao usuário um menu com quatro opções de operações 
    matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, 
    e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {    
    char op = 0; 
    float n1 = 0, n2 = 0, r = 0;

    printf("\n-------------------------");
    printf("\nOpcao\tSobre");
    printf("\n-------------------------");
    printf("\n+\tAdicao");
    printf("\n-\tSubtracao");
    printf("\n*\tMultiplicacao");
    printf("\n/\tDivisao");
    printf("\n-------------------------");

    printf("\nEscolha uma opcao: ");
    scanf("%c", &op);

    printf("Digite dois valores: ");
    scanf("%f %f", &n1, &n2);

    system("cls");

    switch (op) {
        case '+':
            r = (n1+n2);
            printf("%0.2f + %0.2f: %0.2f", n1, n2, r);
            break;
        case '-':
            r = (n1-n2);
            printf("%0.2f - %0.2f: %0.2f", n1, n2, r);
            break;
        case '*':
            r = (n1*n2);
            printf("%0.2f * %0.2f: %0.2f", n1, n2, r);
            break;
        case '/':
            r = (n1/n2);
            printf("%0.2f / %0.2f: %0.2f", n1, n2, r);
            break;
        default:
            printf("Opcao inexistente!");
    }

    return 0;
}