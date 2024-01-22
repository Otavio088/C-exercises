/*
    11) Leia um conjunto de números reais, armazenando-o em vetor. 
    Em seguida, calcule o quadrado de cada elemento desse vetor 
    armazenando esse resultado em outro vetor. Os conjuntos têm, 
    no máximo, 20 elementos. Imprima os dois conjuntos de números.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float v[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, q[20];
    int i;

    printf("\nVetor normal: ");
    for (i = 0; i <= 19; i++) {
        q[i] = pow(v[i], 2);
        printf("%0.2f ", v[i]);
    }

    printf("\nVetor ao quadrado: ");
    for (i = 0; i <= 19; i++) {
        printf("%0.2f ", q[i]);
    }

    return 0;
}