/*
    5) Usando a estrutura Retângulo do exercício anterior, faça 
    um programa que declare e leia uma estrutura Retângulo e um 
    Ponto, e informe se esse ponto está ou não dentro do retângulo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
    float x;
    float y;
};    
typedef struct ponto Ponto;

struct retangulo {
    Ponto ponto_sup_esquerdo;
    Ponto ponto_inf_direito;
};
typedef struct retangulo Retangulo;

int main() {
    Retangulo retangulo;
    float a = 0, cd = 0, p = 0;
    Ponto ponto;

    printf("\n========================");
    printf("\nInformacoes do Retangulo");
    printf("\n========================");
    printf("\nPonto superior esquerdo");
    printf("\nValor de x: ");
    scanf("%f", &retangulo.ponto_sup_esquerdo.x);
    printf("Valor de y: ");
    scanf("%f", &retangulo.ponto_sup_esquerdo.y);
    printf("------------------------");
    printf("\nPonto inferior direito");
    printf("\nValor de x: ");
    scanf("%f", &retangulo.ponto_inf_direito.x);
    printf("Valor de y: ");
    scanf("%f", &retangulo.ponto_inf_direito.y);
    printf("\n========================");
    printf("\nInformacoes do Retangulo");
    printf("\n========================");
    printf("\nValor de x: ");
    scanf("%f", &ponto.x);
    printf("Valor de y: ");
    scanf("%f", &ponto.y);

    if (ponto.x >= retangulo.ponto_sup_esquerdo.x && ponto.x <= retangulo.ponto_inf_direito.x &&
    ponto.y >= retangulo.ponto_sup_esquerdo.y && ponto.y <= retangulo.ponto_inf_direito.y) {
         printf("O ponto esta dentro do retangulo!");
    } else {
        printf("O ponto NAO esta dentro do retangulo!");
    }

    return 0;
}