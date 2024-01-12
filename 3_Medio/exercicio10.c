/*
    10) Faça um programa que leia três números inteiros positivos e efetue 
    o cálculo de uma das seguintes médias de acordo com um valor numérico 
    digitado pelo usuário e mostrado na tabela a seguir:
        
    Número digitado           Média \\
          1                 Geométrica: x * y * z
          2                 Ponderada: (x + 2*y + 3*z)/6
          3                 Harmônica: (1)/(1/x + 1/y + 1/z)
          4                 Aritmética: (x + y + z)/3
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0, y = 0, z = 0;
    int op = 0;

    printf("Primeiro numero inteiro positivo: ");
    scanf("%d", &x);
    printf("Segundo numero inteiro positivo: ");
    scanf("%d", &y);
    printf("Terceiro numero inteiro positivo: ");
    scanf("%d", &z);

    system("cls");

    printf("\n-------------------------------");
    printf("\nOpcoes\t\tMedia");
    printf("\n-------------------------------");
    printf("\n1\t\tGeometrica");
    printf("\n2\t\tPonderada");
    printf("\n3\t\tHarmonica");
    printf("\n4\t\tAritmetica");
    printf("\n-------------------------------");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("\nMedia Geometrica: %d", x*y*z);
            break;
        case 2:
            printf("\nMedia Ponderada: %d", (x + 2*y + 3*z)/6);
            break;
        case 3:
            printf("\nMedia Harmonica: %d", (1)/(1/x + 1/y + 1/z));
            break;
        case 4:
            printf("Media Aritmetica: %d", (x + y + z)/3);
            break;
        default:
            printf("\nOpcao invalida!");
    }

    return 0;
}