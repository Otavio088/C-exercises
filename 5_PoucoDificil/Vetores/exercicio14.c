/*
    14) Faça um programa que calcule o desvio-padrão "d" de um vetor V contendo "N" números:

          √√√√√√√√√√√√√√√√√√√√√√√√
    d =  √        N-1 
       √           Σ (V[i] - m)
     √            i=0
          ------------------------
                  N-1

    em que m é a média desse vetor. Considere N = 10. O vetor v deve ser lido do teclado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10

int main() {
    int V[N], i, S = 0;
    float d = 0, m = 0;

    for (i = 0; i <= N-1; i++) {
        printf("valor de V[%d]: ", i);
        scanf("%d", &V[i]);
        m += V[i];
    }
    m = m/N;

    for (i = 0; i <= N-1; i++) {
        S += pow((V[i] - m), 2);
    }
    d = sqrt(S/(N-1)); 

    printf("\nDesvio padrao: %0.2f", d);

    return 0;
}