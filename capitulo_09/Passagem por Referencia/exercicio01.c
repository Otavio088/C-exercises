/*
    1) Escreva uma função que, dado um número real passado como parâmetro, 
    retorne a parte inteira e a parte fracionária desse número por referência.
*/

#include <stdio.h>
#include <stdlib.h>

void numero(float*, float*, int*);

int main() {
    float n = 28.515151, nFracao = 0;
    int nInteiro = 0;
    
    numero(&n, &nFracao, &nInteiro);

    printf("\nParte inteira: %d", nInteiro);
    printf("\nParte fracionaria: %f", nFracao);

    return 0;
}

void numero(float *n, float *frac, int *inter) {
    *inter = *n;
    *frac = *n - *inter;
}