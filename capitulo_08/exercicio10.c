/*
    10) Usando a estrutura “atleta” do exercício anterior, 
    escreva um programa que leia os dados de cinco atletas 
    e os exiba por ordem de idade, do mais velho para o mais
    novo.
*/

#include <stdio.h>
#include <stdlib.h>

struct atleta {
    char nome[20];
    char esporte[20];
    int idade;
    float altura;
};
typedef struct atleta Atleta;

int main() {
    Atleta atleta[5];

    for (int i = 0; i <= 4; i++) {
        printf("-----Informacoes %do atleta-----\n", i+1);
        printf("Nome: ");
        fgets(atleta[i].nome, 20, stdin);
        printf("Esporte: ");
        fgets(atleta[i].esporte, 20, stdin);
        printf("Idade: ");
        scanf("%d", &atleta[i].idade);
        printf("Altura: ");
        scanf("%f", &atleta[i].altura);
        getchar();
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (atleta[j].idade < atleta[j+1].idade) {
                Atleta aux = atleta[j];
                atleta[j] = atleta[j+1];
                atleta[j+1] = aux;
            }
        }
    }

    printf("-----Do mais velho para o mais novo-----\n");
    for (int i = 0; i <= 4; i++) {
        printf("%s ", atleta[i].nome);
    }

    return 0;
}