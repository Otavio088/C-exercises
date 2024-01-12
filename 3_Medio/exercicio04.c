/*
    4) Faça um programa que leia o salário de um trabalhador e o valor da prestação de
    um empréstimo. Se a prestação:
        • For maior que 20% do salário, imprima: “Empréstimo não concedido.”
        • Caso contrário, imprima: “Empréstimo concedido.”
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float sal = 0, emprestimo = 0;

    printf("Salario do Trabalhador: ");
    scanf("%f", &sal);
    printf("Valor de emprestimo: ");
    scanf("%f", &emprestimo);

    (emprestimo > (sal*20/100)) ? printf("\nEmprestimo nao concedido") : printf("\nEmprestimo concedido");

    return 0;
}