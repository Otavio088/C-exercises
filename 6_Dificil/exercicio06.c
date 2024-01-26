/*
    6) Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) 
    ela possui. Entre com um caractere (vogal ou consoante) e substitua 
    todas as vogais da palavra dada por esse caractere. Ao final, imprima 
    a nova string e o número de vogais que ela possui.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 100

int main() {
    char string[T], caractere;
    int cont = 0;

    printf("Digite uma string: ");
    fgets(string, T, stdin);

    printf("Caractere de substituicao: ");
    scanf("%c", &caractere);

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
            string[i] = caractere;
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
                cont++;
            }
        }
        if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
            string[i] = caractere;
            if (caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
                cont++;
            }
        }
    }

    printf("\nNova string: %s", string);
    printf("Numero de vogais que ela possui: %d", cont);

    return 0;
}