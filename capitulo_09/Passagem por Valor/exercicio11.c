/*
    11) Escreva uma função que receba por parâmetros dois 
    valores inteiros x e y e calcule e retorne o resultado 
    de x^y para o programa principal. Não use nenhuma função
    pronta para isso.
*/

#include <stdio.h>
#include <stdlib.h>

int potencia(int, int);

int main() {
    int n1 = 0, n2 = 0;

    printf("1o Numero Inteiro: ");
    scanf("%d", &n1);
    printf("2o Numero Inteiro: ");
    scanf("%d", &n2);

    int r = potencia(n1, n2);

    printf("\n%d elevado a %d: %d", n1, n2, r);

    return 0;
}

int potencia(int x, int y) {
    int z = x;
    for (int i = 1; i < y; i++) {
        z *= x;
    }

    return z;
}