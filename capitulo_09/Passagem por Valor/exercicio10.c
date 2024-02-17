/*
    10) Escreva uma função que receba dois valores numéricos 
    e um símbolo. Esse símbolo representará a operação que se 
    deseja efetuar com os números. Assim, se o símbolo for “+”, 
    deverá ser realizada uma adição, se for “−”, uma subtração, 
    se for “/”, uma divisão, e, se for “*”, será efetuada uma 
    multiplicação. Retorne o resultado da operação para o programa 
    principal.
*/

#include <stdio.h>
#include <stdlib.h>

float operacao(float, float, char);

int main() {
    float n1 = 0, n2 = 0;
    char s;

    printf("Adicao: +\nSubtracao: -\nMultiplicacao: *\nDivisao: /");
    printf("\n----------------------");
    printf("\nPrimeiro Numero: ");
    scanf("%f", &n1);
    printf("Segundo Numero: ");
    scanf("%f", &n2);
    printf("Opcao: ");
    scanf(" %c", &s);

    float r = operacao(n1, n2, s);

    printf("----------------------");
    printf("\n%0.2f %c %0.2f =  %0.2f", n1, s, n2, r);

    return 0;
}

float operacao(float x, float y, char op) {
    switch (op) {
        case '+':
            return x+y;
            break;
        case '-':
            return x-y;
            break;
        case '/':
            return x/y;
            break;
        case '*':
            return x*y;
            break;
        default:
            printf("\nOpcao invalida!");
            exit(0);
    }
}