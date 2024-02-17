/*
    8) A multiplicação de dois números inteiros pode ser feita através de somas 
    sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma função recursiva que 
    calcule a multiplicação por somas sucessivas de dois inteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int, int);

int main() {
    int n1 = 0, n2 = 0;

    printf("Valor de n1: ");
    scanf("%d", &n1);
    printf("Valor de n2: ");
    scanf("%d", &n2);

    int m = multiplicacao(n1, n2);

    printf("\n(por soma)%d * %d = %d", n1, n2, m);

    return 0;
}

int multiplicacao(int x, int y) {
    if (y == 0) {
        return 0;
    } else {
        return x + multiplicacao(x, y-1);
    }
}