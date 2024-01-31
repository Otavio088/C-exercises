/*
    12) Faça um programa que leia um vetor de 10 posições. Verifique 
    se existem valores iguais e os escreva na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[10], i, j = 0;

    for (i = 0; i <= 9; i++) {
        printf("Valor de v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("Valores iguais: ");
    for (i = 0; i <= 8; i++) {
        for (j = i+1; j <= 9; j++) {
            if (v[i] == v[j] ) {
                 printf("%d ", v[i]);
                 break;
            }
        }
    }

    return 0;
}