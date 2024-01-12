/*
    1) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0;

    printf("Digite qualquer numero inteiro: ");
    scanf("%d", &x);

    printf("\nSeu antecessor: %d", x-1);
    printf("\nSeu sucessor: %d", x+1);

    return 0;
}