/*
    14) O código de César é uma das técnicas de criptografia mais simples e conhecidas.
    É um tipo de substituição no qual cada letra do texto é substituída por outra,
    que se apresenta n posições após ela no alfabeto. Por exemplo, com uma troca de
    três posições, a letra A seria substituída por D, B se tornaria E e assim por diante.
    Escreva um programa que faça uso desse código de César para três posições. Entre
    com uma string e imprima a string codificada. Exemplo:
    String: a ligeira raposa marrom saltou sobre o cachorro cansado
    Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

#define T 100

int main() {
    char S[T];

    printf("Digite a string: ");
    fgets(S, T, stdin);

    for (int i = 0; S[i] != '\0'; i++) {
        if ((S[i] >= 'A' && S[i] <= 'Z') || (S[i] >= 'a' && S[i] <= 'z')) {
            if (S[i] >= 'a' && S[i] <= 'z') {
                printf("%c", ((S[i] - 'a' + 3) % 26) + 'a');
            } else {
                printf("%c", ((S[i] - 'A' + 3) % 26) + 'A');
            }
        } else {
            printf("%c", S[i]);
        }
    }

    return 0;
}