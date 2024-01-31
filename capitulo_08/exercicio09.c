/*
    9) Crie uma estrutura representando um atleta. Essa 
    estrutura deve conter o nome do atleta, seu esporte, 
    idade e altura. Agora, escreva um programa que leia 
    os dados de cinco atletas. Calcule e exiba os nomes 
    do atleta mais alto e do mais velho.
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
    int maiorIdade = 0;
    float maiorAltura = 0;

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
        if (atleta[i].idade > maiorIdade) {
            maiorIdade = atleta[i].idade;
        }
        if (atleta[i].altura > (maiorAltura - 0.0001)) {
            maiorAltura = atleta[i].altura;
        }
    }

    printf("--------------------------------\n");
    for (int i = 0; i <= 4; i++) {
        if (maiorIdade == atleta[i].idade) {
            printf("Nome do atleta mais velho: %s", atleta[i].nome);
        }
        if (maiorAltura == atleta[i].altura) {
            printf("Nome do atleta mais alto: %s", atleta[i].nome);
        }
    }    

    return 0;
}