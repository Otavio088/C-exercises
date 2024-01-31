/*
    7) Crie uma estrutura representando uma hora. Essa estrutura deve 
    conter os campos hora, minuto e segundo. Agora, escreva um programa 
    que leia um vetor de cinco posições dessa estrutura e imprima a maior 
    hora.
*/

#include <stdio.h>
#include <stdlib.h>

struct hora {
    int hora, minuto, segundo;
};
typedef struct hora Hora;

int main() {
    Hora hora[5];
    int maiorHora = 0, maiorMinuto = 0, maiorSegundo = 0;

    for (int i = 0; i <= 4; i++) {
        printf("------%da hora------\n", i+1);
        printf("Hora: ");
        scanf("%d", &hora[i].hora);
        printf("Mintuto: ");
        scanf("%d", &hora[i].minuto);
        printf("Segundo: ");
        scanf("%d", &hora[i].segundo);  
        if (hora[i].hora > maiorHora) {
            maiorHora = hora[i].hora;
            maiorMinuto = hora[i].minuto;
            maiorSegundo = hora[i].segundo;
        } else if (hora[i].hora == maiorHora) {
            if (hora[i].minuto > maiorMinuto) {
                maiorMinuto = hora[i].minuto;
                maiorSegundo = hora[i].segundo;
            } else if (hora[i].minuto == maiorMinuto) {
                if (hora[i].segundo > maiorSegundo) {
                    maiorSegundo = hora[i].segundo;
                }
            }
        }
    } 

    for (int i = 0; i <= 4; i++) {
        if (maiorHora == hora[i].hora && maiorMinuto == hora[i].minuto && maiorSegundo == hora[i].segundo) {
            printf("------Maior hora------");
            printf("\nHora: %d", hora[i].hora);
            printf("\nMinuto: %d", hora[i].minuto);
            printf("\nSegundo: %d", hora[i].segundo);
            printf("\n----------------------");
        }
    }

    return 0;
}