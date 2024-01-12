/*
    10) A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
        i. O primeiro ganhador receberá 46% do total.
        ii. O segundo receberá 32% do total.
        iii. O terceiro receberá o restante.
    Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float premio = 780000.00;
    float ganhador1 = 0, ganhador2 = 0, ganhador3 = 0;

    printf("Quantia Total: %0.2f\n", premio);

    ganhador1 = 0.46*premio;
    ganhador2 = 0.32*premio;
    ganhador3 = premio - (ganhador1 + ganhador2);

    printf("\nQuantia do Primeiro Ganhador: %0.2f", ganhador1);
    printf("\nQuantia do Segundo Ganhador: %0.2f", ganhador2);
    printf("\nQuantia do Terceiro Ganhador: %0.2f", ganhador3);

    return 0;
}