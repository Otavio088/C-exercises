/*
    6) Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
    seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
        • Homens: (72,7 * h) – 58
        • Mulheres: (62,1 * h) – 44,7

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float h = 0;
    int s = 0;

    printf("Digite sua altura: ");
    scanf("%f", &h);
    printf("Digite seu sexo [1 = Masculino / 0 = Feminino]: ");
    scanf("%d", &s);

    if (s == 1) {
        printf("\nSeu peso ideal: %0.2f", ((72.7 * h) - 58));
    } else if (s == 0) {
        printf("\nSeu peso ideal: %0.2f", ((62.1 * h) - 44.7));
    } else {
        printf("\nPreencha os campos corretamente!");
    }

    return 0;
}