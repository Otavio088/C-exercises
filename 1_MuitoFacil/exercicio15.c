/*
    15) Escreva um programa que leia três variáveis: char, int e float. Em seguida, 
    imprimaas de três maneiras diferentes: separadas por espaços, por uma tabulação 
    horizontal e uma em cada linha. Use um único comando printf() para cada operação 
    de escrita das três variáveis
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char a;
    int b;
    float c;

    printf("valor char: ");
    scanf("%c",&a);
    printf("valor int: ");
    scanf("%d", &b);
    printf("valor float: ");
    scanf("%f", &c);

    printf("%c %d %f\n%c\t%d\t%f\n%c\n%d\n%f", a, b, c, a, b, c, a, b, c);

    return 0;
}