/*
    8) Faça um programa que preencha um vetor com 10 números reais. 
    Em seguida, calcule e mostre na tela a quantidade de números 
    negativos e a soma dos números positivos desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float v[10], sp = 0; 
    int i, nn = 0;

    for (i = 0; i <= 9; i++) {
        printf("Valor da posicao %d: ", i);
        scanf("%f", &v[i]);
        if (v[i] < 0) {
            nn++;
        } else {
            sp += v[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d", nn);
    printf("\nSoma dos numeros positivos: %0.2f", sp);

    return 0;
}