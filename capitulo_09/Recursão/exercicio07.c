/*
    7) Escreva uma função recursiva que receba por parâmetro dois valores inteiros x e y
    e calcule e retorne o resultado de x^y para o programa principal.
*/

#include <stdio.h>
#include <stdlib.h>

int potencia(int, int);

int main() {
    int x = 0, y = 0;

    printf("Valor de x: ");
    scanf("%d", &x);
    printf("Valor de y: ");
    scanf("%d", &y);

    int p = potencia(x, y);

    printf("\nx elevado a y = %d", p);

    return 0;
}

int potencia(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * potencia(x, y-1);
    }
}