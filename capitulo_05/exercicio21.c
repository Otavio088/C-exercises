/*
    21) Escreva um programa que leia certa quantidade de números, imprima o maior
    deles e quantas vezes o maior número foi lido. A quantidade de números a serem
    lidos deve ser fornecida pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0, i, n = 0, maior = 0, cont = 0;

    printf("Quantidade de numeros que o programa deve ler: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++) {
        printf("%do numero: ", i);
        scanf("%d", &n);

        if (maior < n) {
            maior = n;
            cont = 0;
        }

        if (maior == n) {
            cont++;
        }
    }

    printf("\nMaior numero lido: %d", maior);
    printf("\nQuantidade de vezes quer ele apareceu: %d", cont);

    return 0;
}