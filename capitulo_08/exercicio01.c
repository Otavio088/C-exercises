/*
    1) Implemente um programa que leia o nome, a idade e o endereço de uma 
    pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na 
    tela os dados da estrutura lida.
*/

#include <stdio.h>
#include <stdlib.h>

struct pessoa {
    char nome[20];
    int idade;
    char endereco[50];
};

int main() {
    struct pessoa pessoa;

    printf("Nome: ");
    fgets(pessoa.nome, 20, stdin);
    printf("Idade: ");
    scanf("%d", &pessoa.idade);
    getchar();
    printf("Endereco: ");
    fgets(pessoa.endereco, 50, stdin);

    printf("------------------------");
    printf("\nNome: %s", pessoa.nome);
    printf("Idade: %d", pessoa.idade);
    printf("\nEndereco: %s", pessoa.endereco);

    return 0;
}