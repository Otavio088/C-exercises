/*
    1) Escreva uma função que receba por parâmetro dois 
    números e retorne o maior deles.
*/

#include <stdio.h>
#include <stdlib.h>

int maiorNumero(int, int);

int main() {
    int n1 = 0, n2 = 0;

    printf("Primeiro numero: ");
    scanf("%d", &n1);
    printf("Segundo numero: ");
    scanf("%d", &n2);

    int m = maiorNumero(n1, n2);

    printf("\nMaior entre os dois: %d", m);

    return 0;
}

int maiorNumero(int x, int y) {
    if (x > y) {
        return x;
    } else if (y > x) {
        return y;
    } else {
        printf("\nNumeros Iguais!");
        exit(0);
    }
}