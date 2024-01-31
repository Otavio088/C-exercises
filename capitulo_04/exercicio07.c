/*
    7) Uma empresa vende o mesmo produto para quatro diferentes estados.
    Cada estado possui uma taxa diferente de imposto sobre o produto. 
    Faça um programa em que o usuário entre com o valor e o estado de 
    destino do produto e o programa retorne o preço final do produto 
    acrescido do imposto do estado em que ele será vendido. Se o estado 
    digitado não for válido, mostrará uma mensagem de erro.
        Estado:  MG SP  RJ  MS
        Imposto: 7% 12% 15% 8%
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float valor, valorFinal = 0;
    char estado[3];

    printf("---------------\n");
    printf("     Estados   \n");
    printf("---------------\n");
    printf("MG  SP  RJ  MS\n");
    printf("---------------\n");

    printf("Valor do produto: ");
    scanf("%f", &valor);
    printf("Estado de destino do produto: ");
    scanf("%s", &estado);

    if (strcmp(estado, "MG") == 0 || strcmp(estado, "mg") == 0) { //retornar 0 significa que as duas strings são iguais
        valorFinal = valor + (valor*7/100);
        printf("\nValor final do produto: %0.2f", valorFinal);
    } else if (strcmp(estado, "SP") == 0 || strcmp(estado, "sp") == 0) {
        valorFinal = valor + (valor*12/100);
        printf("\nValor final do produto: %0.2f", valorFinal);
    } else if (strcmp(estado, "RJ") == 0 || strcmp(estado, "rj") == 0) {
        valorFinal = valor + (valor*15/100);
        printf("\nValor final do produto: %0.2f", valorFinal);
    } else if (strcmp(estado, "MS") == 0 || strcmp(estado, "ms") == 0) {
        valorFinal = valor + (valor*8/100);
        printf("\nValor final do produto: %0.2f", valorFinal);
    } else {
        printf("\nEstado invalido! ");
    }

    return 0;
}