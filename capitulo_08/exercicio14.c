/*
    14) Crie uma enumeração representando os itens de 
    uma lista de compras. Agora, escreva um programa 
    que leia um valor inteiro do teclado e exiba o nome 
    do item comprado e o seu preço.
*/

#include <stdio.h>
#include <stdlib.h>

enum compras {
    Banana = 1, Maca, Ovo, Abacate, Aveia, Arroz, Feijao
};

int main() {
    int n = 0;
     
    do {
        printf("Digite um numero: ");
        scanf("%d", &n);
    } while (n < Banana || n > Feijao);

     switch (n) {
        case Banana:
            printf("Banana - R$ 06.00\n");
            break;
        case Maca:
            printf("Maca  - R$ 02.50\n");
            break; 
        case Ovo:
            printf("Ovo - R$ 11.00 (Cartela com 12 ovos)\n");
            break;
        case Abacate:
            printf("Abacate - R$ 03.00\n");
            break;
        case Aveia:
            printf("Aveia - R$ 05.00\n");
            break;
        case Arroz:
            printf("Arroz - R$ 30.50\n");
            break;
        case Feijao:
            printf("Feijao - R$ 28.90.\n");
            break;
     }

    return 0;
}