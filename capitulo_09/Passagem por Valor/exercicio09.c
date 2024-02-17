/*
    9) Elabore uma função que receba três notas de um aluno como parâmetros e 
    uma letra. Se a letra for “A”, a função deverá calcular a média aritmética 
    das notas do aluno; se for “P”, deverá calcular a média ponderada, com pesos 
    5, 3 e 2. Retorne a média calculada para o programa principal.
*/

#include <stdio.h>
#include <stdlib.h>

float media(float, float, float, char);

int main() {
    float n1 = 0, n2 = 0, n3 = 0;
    char number;

    printf("Primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("Segunda nota do aluno: ");
    scanf("%f", &n2);
    printf("Terceira nota do aluno: ");
    scanf("%f", &n3);
    printf("'A' para Media Aritmetica\n'P' para media Ponderada\nEscolha: ");
    scanf(" %c", &number);

    float m = media(n1, n2, n3, number);

    printf("\nMedia calculada: %0.2f", m);

    return 0;
}

float media(float n1, float n2, float n3, char op) {
    if (op == 'A' || op == 'a') {
        return ((n1+n2+n3)/3);
    } else if (op == 'P' || op == 'p') {
        return ((n1*5 + n2*3 + n3*2)/(5+3+2));
    } else {
        printf("\nLetra invalida!");
        exit(0);
    }
}