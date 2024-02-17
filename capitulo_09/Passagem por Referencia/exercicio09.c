/*
    9) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
    deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
    Agora, escreva uma função que receba um vetor de tamanho N dessa estrutura.
    Essa função deve retornar o índice do aluno que possui a maior média geral entre
    todos os alunos.
*/

#include <stdio.h>
#include <stdlib.h>

#define T 20
#define N 5

struct aluno {
    int matricula;
    char nome[T];
    float n1, n2, n3;
};
typedef struct aluno Aluno;

int maiorMedia(Aluno*);

int main() {
    Aluno aluno[N];

    for (int i = 0; i < N; i++) {
        printf("Matricula do %do Aluno: ", i+1);
        scanf("%d", &aluno[i].matricula);
        printf("Nome do %do Aluno: ", i+1);
        setbuf(stdin, NULL);
        fgets(aluno[i].nome, T, stdin);
        printf("Primeira nota do %d Aluno: ", i+1);
        scanf("%f", &aluno[i].n1);
        printf("Segunda nota do %d Aluno: ", i+1);
        scanf("%f", &aluno[i].n2);
        printf("Terceira nota do %d Aluno: ", i+1);
        scanf("%f", &aluno[i].n3);
    }

    int maiorIndice = maiorMedia(aluno);

    printf("\n%d ", aluno[maiorIndice].matricula);

    return 0;
}

int maiorMedia(Aluno *a) {
    float maiorMed = -1;
    int indice = 0;
    for (int i = 0; i < N; i++) {
        if ( ((a[i].n1+a[i].n2+a[i].n3)/3) > maiorMed) {
            maiorMed = ((a[i].n1+a[i].n2+a[i].n3)/3);
            indice = i;
        }
    }

    return indice;
}