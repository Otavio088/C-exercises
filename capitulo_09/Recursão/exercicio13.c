/*
    13) Faça uma função recursiva que calcule o valor da série S descrita a seguir para um
    valor n maior do que zero a ser fornecido como parâmetro para a mesma:

    S = (2) + (5/2) + (10/3) + ... + (1 + n^2/n)
*/

#include <stdio.h>
#include <stdlib.h>

int serieS(int);

int main() {
    int n = 0;

    do {
        printf("Valor Inteiro Maior que 0: ");
        scanf("%d", &n);
    } while (n <= 0);
    
    float S = serieS(n);

    printf("\nS = %0.2f", S);

    return 0;
}

int serieS(int n) {
    if (n == 1) {
        return 2;
    } else {
        float soma = (1 + n*n) / n;
        return soma + serieS(n-1);
    }
}