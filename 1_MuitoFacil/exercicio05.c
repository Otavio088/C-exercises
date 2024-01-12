/*
    5) Faça um programa que leia um valor do tipo float e depois o imprima usando o
    operador “%d”. Veja o que aconteceu. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float x = 0;

    printf("Numero real: ");
    scanf("%f", &x);

    printf("Aqui ele: %d", x);

    return 0;
}