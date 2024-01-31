/*
    10) Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. 
    Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na 
    prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos 
    cuja pior nota foi na prova 3.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float m[10][3], menor = 0;
    int l, c, pior1 = 0, pior2 = 0, pior3 = 0, cont;

    for (l = 0; l <= 9; l++) {
        for (c = 0; c <= 2; c++) {
            printf("nota da %da prova do %do aluno: ", (c+1), (l+1));
            scanf("%f", &m[l][c]);
        }
        printf("\n");
    }

    for (l = 0; l <= 9; l++) {
        menor = m[l][0];
        cont = 0;
        for (c = 0; c <= 2; c++) {
            if (m[l][c] < menor) {
                menor = m[l][c];
                cont = c;
            }
        }
        if (cont == 0) {
            pior1++;
        } else if (cont == 1) {
            pior2++;
        } else {
            pior3++;
        }
    }

        printf("\nNumeros de alunos cuja pior nota foi na prova 1: %d", pior1);
        printf("\nNumeros de alunos cuja pior nota foi na prova 2: %d", pior2);
        printf("\nNumeros de alunos cuja pior nota foi na prova 3: %d", pior3);

    return 0;
}