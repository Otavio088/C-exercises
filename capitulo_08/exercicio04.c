/*
    4) Crie uma estrutura chamada Retângulo. Essa estrutura deverá 
    conter o ponto superior esquerdo e o ponto inferior direito do 
    retângulo. Cada ponto é definido por uma estrutura Ponto, a qual 
    contém as posições X e Y. Faça um programa que declare e leia 
    uma estrutura Retângulo e exiba a área e o comprimento da diagonal
    e o perímetro desse retângulo.
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

    float largura = retangulo.ponto_inf_direito.x - retangulo.ponto_sup_esquerdo.x;
    float comprimento = retangulo.ponto_inf_direito.y - retangulo.ponto_sup_esquerdo.y;

    a = largura * comprimento;
    cd = sqrt(pow(comprimento, 2) + pow(largura, 2));
    p = 2 * (comprimento + largura);

    printf("========================");
    printf("\nArea: %0.2f", a);
    printf("\nComprimento da Diagonal: %0.2f", cd);
    printf("\nPerimetro: %0.2f", p);

    return 0;
}