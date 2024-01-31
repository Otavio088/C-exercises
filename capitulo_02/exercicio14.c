/*
    14) Faça um programa que leia três caracteres do tipo char e depois os imprima um
    em cada linha. Use um único comando printf() para isso.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char a;
    char b;
    char c;

    printf("Primeiro caractere: ");
    scanf("%c",&a);
    printf("Segundo caractere: ");
    scanf(" %c", &b);
    printf("Terceiro caractere: ");
    scanf(" %c", &c);
        
    printf("%c\n%c\n%c", a, b, c);

    return 0;
}