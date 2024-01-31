/*
    12) Escreva um programa que leia o nome e o valor de determinada 
    mercadoria de uma loja. Sabendo que o desconto para pagamento à 
    vista é de 10% sobre o valor total, calcule o valor a ser pago à 
    vista. Escreva o nome da mercadoria, o valor total, o valor do 
    desconto e o valor a ser pago à vista.
*/

#include <stdio.h>
#include <stdlib.h>

#define T 100

int main() {
    char nome[T];
    float valor = 0, valorVista = 0;

    printf("Nome da mercadoria: ");
    fgets(nome, T, stdin);
    printf("Valor da mercadoria: ");
    scanf("%f", &valor);

    valorVista = valor - 0.1*valor;

    printf("\nNome da mercadoria: %s", nome);
    printf("Valor total: %0.2f", valor);
    printf("\nValor do desconto: 10%%");
    printf("\nValor a vista: %0.2f", valorVista);

    return 0;
}