/*
    7) Elabore uma função que receba três números inteiros 
    como parâmetro, representando horas, minutos e segundos. 
    A função deve retornar esse horário convertido em segundos
*/

#include <stdio.h>
#include <stdlib.h>

int segundos(int, int, int);

int main() {
    int hora = 0, minuto = 0, segundo = 0;

    printf("Hora(s): ");
    scanf("%d", &hora);
    printf("Minuto(s): ");
    scanf("%d", &minuto);
    printf("Segundo(s): ");
    scanf("%d", &segundo);

    int totalSegundos = segundos(hora, minuto, segundo);

    printf("\nConvertido em segundos: %d", totalSegundos);

    return 0;
}

int segundos(int h, int m, int s) {
    return  (s + (h*3600) + (m*60));
}