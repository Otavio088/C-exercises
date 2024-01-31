/*
    15) Crie uma união contendo dois tipos básicos diferentes. 
    Agora, escreva um programa que inicialize um dos tipos dessa 
    união e exiba em tela o valor do outro tipo.
*/

#include <stdio.h>
#include <stdlib.h>

union uniao {
    int inteiro;
    float real;
};

int main() {
    union uniao u;

    u.real = 5.8;

    printf("%d", u.inteiro);

    return 0;
}