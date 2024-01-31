/*
    8) Crie uma estrutura capaz de armazenar o nome e a data 
    de nascimento de uma pessoa. Agora, escreva um programa 
    que leia os dados de seis pessoas. Calcule e exiba os 
    nomes da pessoa mais nova e da mais velha.
*/

#include <stdio.h>
#include <stdlib.h>

struct dataNasci {
    int ano, mes, dia;
};
typedef struct dataNasci Nascimento;

struct pessoa {
    char nome[20];
    Nascimento data;
};
typedef struct pessoa Pessoa;

int main() {
    Pessoa pessoa[6];
    int maiorAno = 0, maiorMes = 0, maiorDia = 0;
    int menorAno = 0, menorMes = 0, menorDia = 0;

    for (int i = 0; i <= 5; i++) {
        printf("-----Dados %da pessoa-----\n", i+1);
        printf("Nome: ");
        fgets(pessoa[i].nome, 20, stdin);
        printf("Ano de nascimento: ");
        scanf("%d", &pessoa[i].data.ano);
        printf("Mes de nascimento: ");
        scanf("%d", &pessoa[i].data.mes);
        printf("Dia de nascimento: ");
        scanf("%d", &pessoa[i].data.dia);
        getchar();

        if (pessoa[i].data.ano > maiorAno) {
            maiorAno = pessoa[i].data.ano;
            maiorMes = pessoa[i].data.mes;
            maiorDia = pessoa[i].data.dia;
            if (menorAno == 0) {
                menorAno = maiorAno;
                menorMes = maiorMes;
                menorDia = maiorDia;
            }
        } else if (pessoa[i].data.ano == maiorAno) {
            if (pessoa[i].data.mes > maiorMes) {
                maiorMes = pessoa[i].data.mes;
                maiorDia = pessoa[i].data.dia;
            } else if (pessoa[i].data.mes == maiorMes) {
                if (pessoa[i].data.dia > maiorDia) {
                    maiorDia = pessoa[i].data.dia;
                }
            }
        }

        if (pessoa[i].data.ano < menorAno) {
            menorAno = pessoa[i].data.ano;
            menorMes = pessoa[i].data.mes;
            menorDia = pessoa[i].data.dia;
        } else if (pessoa[i].data.ano == menorAno) {
            if (pessoa[i].data.mes < menorMes) {
                menorMes = pessoa[i].data.mes;
                menorDia = pessoa[i].data.dia;
            } else if (pessoa[i].data.mes == menorMes) {
                if (pessoa[i].data.dia < menorDia) {
                    menorDia = pessoa[i].data.dia;
                }
            }
        }
    
    }

    for (int i = 0; i <= 5; i++) {
        if (menorAno == pessoa[i].data.ano && menorMes == pessoa[i].data.mes && menorDia == pessoa[i].data.dia) {
            printf("Nome da pessoa mais velha: %s", pessoa[i].nome);
        } else if (maiorAno == pessoa[i].data.ano && maiorMes == pessoa[i].data.mes && maiorDia == pessoa[i].data.dia) {
            printf("Nome da pessoa mais nova: %s", pessoa[i].nome);
        }
    }

    return 0;
}