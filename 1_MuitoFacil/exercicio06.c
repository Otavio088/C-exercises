/*
    6) Faça um programa que leia um valor do tipo double e depois o imprima na forma
    de notação científica. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    double x = 0;

    printf("Numero tipo double: ");
    scanf("%f", &x);

    printf("Aqui ele: %e", x);
}