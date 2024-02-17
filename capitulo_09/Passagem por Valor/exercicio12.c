/*
    12) Escreva uma função que receba um número inteiro 
    positivo e retorne o maior fator primo desse número.
*/

#include <stdio.h>
#include <stdlib.h>

int fator(int);

int main() {
    int n = 0;

    printf("Numero Inteiro Positivo: ");
    scanf("%d", &n);

    int f = fator(n);
    printf("\nMaior Fator: %d", f);

    return 0;
}

int fator(int n) {
    int maiorFator = 0;
    for (int i = 2; i < n; i++) {
        int cont = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                cont++;
                break;
            }
        }
        if (cont == 0 && n % i == 0) {
            do {
                n = n/i;
                maiorFator = i;
            } while (n % i == 0);
        }
    }

    if (maiorFator == 0) {
        return n;
    }
    
    return maiorFator;
}