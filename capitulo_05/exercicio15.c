/*
    15) Elabore um programa que faça a leitura de vários 
    números inteiros até que se digite um número negativo. 
    O programa tem de retornar o maior e o menor número
    lido.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, maior = 0, menor = 0;

    do {
        printf("Digite numeros Inteiros Positivos para continuar: ");
        scanf("%d", &n);

        if (n > maior) {
            maior = n;
            if (menor == 0) {
                menor = n;
            }
        }

        if (n < menor && n > 0) {
            menor = n;
        }

    } while (n >= 0);

    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
    printf("\n(O menor NAO NEGATIVO!)");

    return 0;
}