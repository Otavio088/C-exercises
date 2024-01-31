/*
    7) Elabore um programa que peça ao usuário para digitar 10 valores. Some esses
    valores e apresente o resultado na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n = 0, s = 0;

    printf("Digite 10 valores!\n");
    for (i = 1; i <= 10; i++) {
        printf("%do valor: ", i);
        scanf("%d", &n);
        
        s += n;
    }

    system("cls");

    printf("Soma de todos eles: %d", s);

    return 0;
}