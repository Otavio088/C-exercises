/*
    5) Escreva uma função que calcule o desvio-padrão d de um 
    vetor V contendo n números
                  
                  n-1
    d = sqrt(1/n-1 Σ (V[i] - m)^2)
                  i=10  

    em que m é a média desse vetor
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void desvioPadrao(float*, int*, int);
void media(int*, int, float*);

int main() {
    float d = 0;
    int v[10];

    for (int i = 0; i < 10; i++) {
        v[i] = rand() % 10;
    }

    desvioPadrao(&d, v, 10);

    printf("Desvio Padrao: %0.2f", d);

    return 0;
}

void media(int *v, int N, float *m) {
    for (int i = 0; i < N; i++) {
        *m += v[i];
    }

    *m /= N;
}

void desvioPadrao(float *d, int *v, int N) {
    float m = 0, somaQuadrados = 0;

    media(v, N, &m);
    
    for (int i = 0; i < N; i++) {
        somaQuadrados += pow(v[i] - m, 2);
    }

    *d = sqrt((1.0/(N-1)) * somaQuadrados);
}