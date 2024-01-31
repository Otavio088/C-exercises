/*
    3) Crie uma estrutura para representar as coordenadas de 
    um ponto no plano (posições X e Y). Em seguida, declare 
    e leia do teclado dois pontos e exiba a distância entre eles.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordenadas {
    float x;
    float y;
};

int main() {
    struct coordenadas ponto1;
    struct coordenadas ponto2;
    float d;

    printf("Valor do ponto x1: ");
    scanf("%f", &ponto1.x);
    printf("Valor do ponto y1: ");
    scanf("%f", &ponto1.y);

    printf("Valor do ponto x2: ");
    scanf("%f", &ponto2.x);
    printf("Valor do ponto y2: ");
    scanf("%f", &ponto2.y);

    d = sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2));

    printf("Distancia entre esses dois pontos: %0.2f", d);

    return 0;
}