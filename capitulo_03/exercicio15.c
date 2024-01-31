/*
    15) Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule 
    e mostre o número formado pelos dígitos invertidos do número lido. Exemplo:
        Número lido = 123
        Número gerado = 321
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0, y = 0, invertido = 0;

    printf("Digite um numero inteiro de tres digitos: ");
    scanf("%d", &x);
    
    for (int i = 2; i >= 0; i--) {
        y = x % 10;
        x /= 10;
        invertido = invertido * 10 + y;
    }

    printf("\nO mesmo invertido: %d", invertido);

    return 0;
}
