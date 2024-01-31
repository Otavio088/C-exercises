/*
    2) Crie um programa que leia do teclado seis valores inteiros 
    e em seguida mostre na tela os valores lidos na ordem inversa
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j = 1, v[6];

    for (i = 0; i <= 5; i++) {
        printf("Digite o %d valor: ", j);
        scanf("%d", &v[i]);
        j++;
    }

    printf("\nValores lidos na ordem inversa: ");
    for (i = 5; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    return 0;
}