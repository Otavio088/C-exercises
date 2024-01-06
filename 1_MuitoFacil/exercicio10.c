/*
    10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
    (inteiros). Em seguida, imprima os valores lidos separados por uma barra (\). 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia = 0, mes = 0, ano = 0;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    printf("%d\\%d\\%d", dia, mes, ano);

    return 0;
}