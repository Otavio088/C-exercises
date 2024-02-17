/*
    14) Elabore uma função que receba por parâmetros os coeficientes de uma equação do
    segundo grau. Em seguida, calcule e mostre as raízes dessa equação. Lembre-se de
    que as raízes são calculadas como

    x = (-b +- sqrt(∆)) / (2*a)

    em que (∆ = b^2 – 4 * a * c) e (ax^2 + bx + c = 0) representa uma equação do segundo grau. 
    A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é 
    equação de segundo grau” e retorne o valor −1. Do contrário, retorne o número de raízes 
    e as raízes (por referência) se elas existirem:

    • Se ∆ < 0, não existe real. Número de raízes: 0.
    • Se ∆ = 0, existe uma raiz real. Número de raízes: 1.
    • Se ∆ > 0, existem duas raízes reais. Número de raízes: 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int segundoGrau(float*, float*, float*, float*, float*);

int main() {
    float a = 0, b = 0, c = 0;
    float x1 = 0, x2 = 0;

    printf("\n------------------------");
    printf("\nEquacao do Segundo Grau");
    printf("\n------------------------");
    printf("\nax^2 + bx + c = 0");
    printf("\n------------------------");
    printf("\nCoeficiente a: ");
    scanf("%f", &a);
    printf("Coeficiente b: ");
    scanf("%f", &b);
    printf("Coeficiente c: ");
    scanf("%f", &c);

    int n = segundoGrau(&a, &b, &c, &x1, &x2);

    if (n >= 0) {
        printf("\nNumero de raizes: %d", n);
        printf("\nx1 = %0.2f", x1);
        printf("\nx2 = %0.2f", x2);
    }

    return 0;
}

int segundoGrau(float *a, float *b, float *c, float *x1, float *x2) {   
    if (*a == 0) {
        printf("\nNao e equacao de segundo grau!");
        return -1;
    }

    float delta = 0;
    delta = (pow(*b, 2) - 4 * (*a) * (*c));

    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *x1 = (-1*(*b) + sqrt(delta)) / (2*(*a));
        *x2 = (-1*(*b) - sqrt(delta)) / (2*(*a));
        return 1;
    } else {
        *x1 = (-1*(*b) + sqrt(delta)) / (2*(*a));
        *x2 = (-1*(*b) - sqrt(delta)) / (2*(*a));
        return 2;
    }
}