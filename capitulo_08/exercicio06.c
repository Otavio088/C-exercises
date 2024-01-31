/*
    6) Crie uma estrutura representando um aluno de uma disciplina. 
    Essa estrutura deve conter o número de matrícula do aluno, seu 
    nome e as notas de três provas. Agora, escreva um programa que 
    leia os dados de cinco alunos e os armazena nessa estrutura. 
    Em seguida, exiba o nome e as notas do aluno que possui a maior 
    média geral dentre os cinco.
*/

#include <stdio.h>
#include <stdlib.h>

struct aluno {
    int matricula;
    char nome[20];
    float p1, p2, p3;
};
typedef struct aluno Aluno;

int main() {
    Aluno aluno[5];
    float M, maiorM = 0;

    for (int i = 0; i <= 4; i++) {
        printf("Nome do %d aluno: ", i+1);
        getchar();
        fgets(aluno[i].nome, 20, stdin);
        printf("Sua matricula: ");
        scanf("%d", &aluno[i].matricula);
        printf("Primeira nota: ");
        scanf("%f", &aluno[i].p1);
        printf("Segunda nota: ");
        scanf("%f", &aluno[i].p2);
        printf("Terceira nota: ");
        scanf("%f", &aluno[i].p3);
        printf("------------------------------\n");
        M = 0;
        M += ((aluno[i].p1+aluno[i].p2+aluno[i].p3)/3);
        if (M > maiorM) {
            maiorM = M;
        }
    }

    for (int i = 0; i <= 4; i++) {
        if (((aluno[i].p1+aluno[i].p2+aluno[i].p3)/3) >= (maiorM - 0.0001)) {
            printf("Nome: %s", aluno[i].nome);
            printf("Primeira nota: %0.2f\n", aluno[i].p1);
            printf("Segunda nota: %0.2f\n", aluno[i].p2);
            printf("Terceira nota: %0.2f\n", aluno[i].p3);
        } 
    }

    return 0;
}