/*
    4) Escreva uma função que receba um array contendo a nota 
    de 10 alunos e retorne a média dos alunos
*/

#include <stdio.h>
#include <stdlib.h>

void media(float*, int, float*);

int main() {
    float v[10], med = 0;

    for (int i = 0; i < 10; i++) {
        v[i] = rand() % 10;
    }

    media(v, 10, &med);

    printf("Media dos alunos: %0.2f", med);

    return 0;
}

void media(float *v, int N, float *m) {
    for (int i = 0; i < N; i++) {
        *m += v[i];
    }

    *m /= N;
}