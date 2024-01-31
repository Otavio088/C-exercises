/*
    11) Escreva um programa que contenha uma estrutura representando 
    uma data válida. Essa estrutura deve conter os campos dia, mês e 
    ano. Em seguida, leia duas datas e armazene nessa estrutura. 
    Calcule e exiba o número de dias que decorreram entre as duas datas.
*/

#include <stdio.h>
#include <stdlib.h>

struct data {
    int dia, mes, ano;
};
typedef struct data Data;

int main() {
    Data data[2];
    int dias = 0;

    for (int i = 0; i <= 1; i++) {
        printf("-----%da data-----\n", i+1);
        printf("Dia: ");
        scanf("%d", &data[i].dia);
        printf("Mes: ");
        scanf("%d", &data[i].mes);
        printf("Ano: ");
        scanf("%d", &data[i].ano);
    }

    if (data[0].ano > data[1].ano) {
        dias += ((data[0].ano - data[1].ano)*365);
        if (data[0].mes > data[1].mes) {
            dias += ((data[0].mes - data[1].mes)*30);
            if (data[0].dia > data[1].dia) {
                dias += (data[0].dia - data[1].dia);
            } else if (data[1].dia > data[0].dia) {
                dias += (data[1].dia - data[0].dia);
            }
        } else if (data[1].mes > data[0].mes) {
            dias += ((data[1].mes - data[0].mes)*30);   
        }
    } else if (data[1].ano > data[0].ano) {
        dias += ((data[1].ano - data[0].ano)*365);
        if (data[0].mes > data[1].mes) {
            dias += ((data[0].mes - data[1].mes)*30);
            if (data[0].dia > data[1].dia) {
                dias += (data[0].dia - data[1].dia);
            } else if (data[1].dia > data[0].dia) {
                dias += (data[1].dia - data[0].dia);
            }
        } else if (data[1].mes > data[0].mes) {
            dias += ((data[1].mes - data[0].mes)*30);   
        }
    }

    printf("\nNumero de dias que decorrem das duas datas: %d", dias);
    printf("\n-------------------------------------------------");
    printf("\nValores: \nAno = 365dias\nMes = 30dias\nDia = 1dia");

    return 0;
}