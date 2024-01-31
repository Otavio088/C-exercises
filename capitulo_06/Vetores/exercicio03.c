/*
    3) Faça um programa que leia cinco valores e os armazene em um vetor. 
    Em seguida, mostre todos os valores lidos juntamente com a média dos 
    valores.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j = 1, v[5];
    float m = 0;

    for (i = 0; i <= 4; i++) {
        printf("Digite o %do valor: ", j);
        scanf("%d", &v[i]);
        m += v[i]; 
        j++;
    }

    printf("\nValores lidos: ");
    for (i = 0; i <= 4; i++) {
        printf("%d ", v[i]);
    }
    m = m/5;
    printf("\nMedia dos valores: %0.2f", m);

    return 0;
}