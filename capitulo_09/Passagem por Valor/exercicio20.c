/*
    20) Faça uma função que calcule e retorne o número neperiano e, e = 2,71828183,
    usando a série a seguir:

        N
    e = Σ 1/n! = 1/0! + 1/1! + 1/2! + 1/3! ...
       n=0

    A função deve ter como parâmetro o número de termos que serão somados, N. Note
    que quanto maior esse número, mais próxima do valor e estará a resposta.
*/

#include <stdio.h>
#include <stdlib.h>

float neperiano(int);
int fatorial(int);

int main() {
    int n = 0;

    printf("Numero de termos que serao somados: ");
    scanf("%d", &n);

    float e = neperiano(n);

    printf("\nNumero neperiano: %f", e);

    return 0;
}

int fatorial(int f) {
    int fatorial = 1;

    for (int i = 1; i <= f; i++) {
        fatorial *= i;
    }

    return fatorial;
}

float neperiano(int N) {
    float e = 0;

    for (int i = 0; i < N; i++) {
        e += (1.0/fatorial(i));
    }

    return e;
}