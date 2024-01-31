/*
    19) Faça um programa que calcule e escreva o valor de S:

     S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    float S = 0;

    for (i = 1; i <= 50; i++) {
        S += (2 * i - 1)/i;
        // printf("%d/%d + ", (2 * i - 1), i);
    }

    printf("S = %0.2f", S);

    return 0;
}