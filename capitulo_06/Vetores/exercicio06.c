/*
    6) Escreva um programa que leia do teclado um vetor de 10 posições. 
    Escreva na tela quantos valores pares foram armazenados nesse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[10], i, c = 0;

    for (i = 0; i <= 9; i++) {
        printf("Valor da posicao %d: ", i);
        scanf("%d", &v[i]);
        if (v[i]%2 == 0) {
            c++;
        }
    }
    printf("\nQuantidade de numeros pares no vetor: %d", c);

    return 0;
}