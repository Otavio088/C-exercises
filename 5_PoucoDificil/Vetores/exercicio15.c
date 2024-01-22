/*
    15) Leia um vetor com 10 números de ponto flutuante. Em seguida, 
    ordene os elementos desse vetor e imprima o vetor na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float v[10];
    int i, c = 0;

    for (i = 0; i <= 9; i++) {
        printf("Valor de v[%d]: ", i);
        scanf("%f", &v[i]);
    }

    while (c == 0) {
        c = 1;
        for (i = 0; i <= 9; i++) {
            if(v[i] > v[i+1]) {
                c = 0;
                float aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }

    printf("\nVetor: ");
    for (i = 0; i <= 9; i++) {
        printf("%0.2f ", v[i]);
    }

    return 0;
}