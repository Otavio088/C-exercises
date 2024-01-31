/*
    9) Escreva um programa que leia 10 números e escreva o menor valor 
    lido e o maior valor lido.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n = 0, maior = 0, menor = 0;

    printf("Digite 10 numeros!\n");
    for (i = 1; i <= 10; i++) {
        printf("%do numero: ", i);
        scanf("%d", &n);

        if (maior < n) {
            maior = n;
            
            if (menor == 0) {
                menor = maior;
            }
        }
        
        if (menor > n) {
            menor = n;
        }
    }

    printf("\nMaior valor lido: %d", maior);
    printf("\nMenor valor lido: %d", menor);

    return 0;
}