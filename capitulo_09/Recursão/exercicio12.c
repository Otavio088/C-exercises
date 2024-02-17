/*
    12) Escreva uma função recursiva que receba um valor inteiro em base 
    decimal e o imprima em base binária.
*/

#include <stdio.h>
#include <stdlib.h>

int binaria(int);

int main() {
    int n = 0;

    printf("Valor Inteiro em Base Decimal: ");
    scanf("%d", &n);

    printf("\nEm Base Binaria: ");

    binaria(n);

    return 0;
}

int binaria(int n) {
    if(n == 1) {
        printf("%d", n%2);
        return 0;
    } else {
        binaria(n/2);
        printf("%d", n % 2);
        return 0;
    }
}