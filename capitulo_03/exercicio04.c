/*
    4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    float media = 0;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &n3);
    printf("Digite o quarto valor: ");
    scanf("%f", &n4);

    media = ((n1+n2+n3+n4)/4);

    printf("\nMedia aritmetica: %f", media);

    return 0;
}