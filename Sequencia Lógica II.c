/*
Escreva um programa que lê dois números X e Y (X <Y). A seguir mostra uma seqüência de 1 a Y, passando para a próxima linha a cada X números.
*/

#include <stdio.h>

void contador(int numero2, int n1, int n2, int parametro2) {
    if (parametro2 > n1) {
        return;
    }
    else if (parametro2 == n1) {
        printf("%d", numero2);
        return;
    }
    else {
        printf("%d ", numero2);
        contador(numero2 + 1, n1, n2, parametro2 + 1);
    }
}

void linha(int numero1, int n1, int n2, int parametro1) {
    if (parametro1 > n2) {
        return;
    }
    else {
        contador(numero1, n1, n2, 1);
        printf("\n");
        linha(numero1 + n1, n1, n2, parametro1 + n1);
    }
}

int main() {

    int n1, n2;

    scanf("%d %d", &n1, &n2);

    linha(1, n1, n2, 1);

    return 0;

}