/*
    13) Faça um programa para ler 10 números diferentes a serem armazenados 
    em um vetor. Os números deverão ser armazenados no vetor na ordem em 
    que  forem lidos, sendo que, caso o usuário digite um número que já foi 
    digitado anteriormente, o programa deverá pedir a ele para digitar outro 
    número. Note que cada valor digitado pelo usuário deve ser pesquisado no 
    vetor, verificando se ele existe entre os números que já foram fornecidos. 
    Exiba na tela o vetor final que foi digitado.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[10], i, j = 0, c = 0;

    for (i = 0; i <= 9; i++) {
        do {
            printf("Valor de v[%d] ", i);
            scanf("%d", &v[i]);
            for (j = i - 1; j >= 0; j--) {
                if (v[i] == v[j]) {
                    c++;
                } else {
                    c = 0;
                }
            }
        } while (c != 0);
    }

    printf("\nVetor: ");
    for (i = 0; i <= 9; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}