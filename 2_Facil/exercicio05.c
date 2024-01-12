/*
    5) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua
    idade e do ano atual.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 0, ano = 0;

    printf("Idade que voce vai fazer esse ano: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &ano);

    printf("\nVoce nasceu no ano de: %d ", (ano - idade));

    return 0;
}