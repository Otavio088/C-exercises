/*
    15) Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
    seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
    calculadas como:
    
    x = (-b +- √Δ)/(2*a)

    em que "∆ = b^2 - 4 * a * c" e "ax^2 + bx + c = 0" representa uma equação do segundo grau. 
    A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não  é 
    equação de segundo grau”. Do contrário, imprima:
    
    • Se ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
    • Se ∆ = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
    • Se ∆ > 0, existem duas raízes reais. Imprima as raízes
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a = 0, b = 0, c = 0;
    float delta = 0, x1 = 0, x2 = 0;

    printf("\n---------------------------------\n");
    printf("     EQUACAO DO SEGUNDO GRAU     \n");
    printf("---------------------------------\n");
    printf("        ax^2 + bx + c = 0        \n");
    printf("---------------------------------\n");

    printf("Coeficiente a: ");
    scanf("%f", &a);
    printf("Coeficiente b: ");
    scanf("%f", &b);
    printf("Coeficiente c: ");
    scanf("%f", &c);

    system("cls");

    delta = pow(b, 2) - (4 * a * c);

    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    if (a == 0) {
        printf("Nao e equacao do segundo grau!");
    } else {
        if (delta < 0) {
            printf("Nao existe raiz!");
        } else if (delta == 0) {
            printf("Raiz unica!\n");
            printf("x = %0.2f", x1);
        } else {
            printf("Existem duas raizes reais!\n");
            printf("x1 = %0.2f\n", x1);
            printf("x2 = %0.2f", x2);
        }
    }

    return 0;
}