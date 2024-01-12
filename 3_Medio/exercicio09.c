/*
    9) Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
    tabela a seguir, verifique e mostre qual a classificação dessa pessoa.

         Altura                           Peso
                        Até 60 | Entre 60-90 (inclusive) | Acima de 90
    Menor do que 1,20      A               D                    G
    1,20-1,70              B               E                    H
    Maior do que 1,70      C               F                    I
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float h = 0, p = 0;

    printf("Digite sua altura: ");
    scanf("%f", &h);
    printf("Digite seu peso: ");
    scanf("%f", &p);

    if (h < 1.20) {
        if (p < 60) {
            printf("\nClassificacao A");
        } else if (p >= 60 && p <= 90) {
            printf("\nClassicacao D");
        } else {
            printf("\nClassificacao G");
        } 
    } else if (h >= 1.20 && h <= 1.70) {
        if (p < 60) {
            printf("\nClassificacao B");
        } else if (p >= 60 && p <= 90) {
            printf("\nClassificacao E");
        } else {
            printf("\nClassificacao H");
        }
    } else {
        if (p < 60) {
            printf("\nClassificacao C");
        } else if (p >= 60 && p <= 90) {
            printf("\nClassificacao F");
        } else {
            printf("\nClassificacao I");
        }
    }

    return 0;
}