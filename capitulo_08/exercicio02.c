/*
    2) Crie uma estrutura para representar as coordenadas de 
    um ponto no plano (posições X e Y). Em seguida, declare 
    e leia do teclado um ponto e exiba a distância dele até 
    a origem das coordenadas, isto é, a posição (0,0).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordenadas {
    float x;
    float y;
};

int main() {
    struct coordenadas ponto;
    float d = 0;

    printf("Ponto x: ");
    scanf("%f", &ponto.x);
    printf("Ponto y: ");
    scanf("%f", &ponto.y);

    d = sqrt(pow(ponto.x, 2) + pow(ponto.y, 2));

    printf("Distancia do ponto ate a origem das coordenadas: %0.2f", d);

    return 0;
}