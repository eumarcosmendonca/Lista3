/*
A sequência de Fibonacci é definida pela seguinte sequência: 0 1 1 2 3 5 8 13 21... Em que cada termo da sequência é obtido somando os dois termos anteriores.
Escreva um programa que imprima os n primeiros termos da sequência dos números Fibonacci.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fibonacci(int termo1, int termo2, int termo3, int numero, int contador) {
    if (contador > numero) {
        return;
    }
    else  if (contador == numero) {
        printf("%d", termo3);
        termo1 = termo2;
        termo2 = termo3;
        termo3 = termo1 + termo2;
        fibonacci(termo1, termo2, termo3, numero, contador + 1);
    }
    else {
        printf("%d ", termo3);
        termo1 = termo2;
        termo2 = termo3;
        termo3 = termo1 + termo2;
        fibonacci(termo1, termo2, termo3, numero, contador + 1);
    }
}

void execucao(int numero) {
    if (numero == 0) {
        return;
    }
    else {
        int termo1 = 0;
        int termo2 = 1;
        int termo3 = termo1 + termo2;

        if (numero == 1) {
            printf("%d", termo1);
            printf("\n");
        }
        else if (numero == 2) {
            printf("%d %d", termo1, termo2);
            printf("\n");
        }
        else if (numero > 2) {
            printf("%d %d ", termo1, termo2);
            fibonacci(termo1, termo2, termo3, numero, 3);
            printf("\n");
        }

        scanf("%d", &numero);

        execucao(numero);

    }
}

int main() {

    int numero;

    scanf("%d", &numero);

    execucao(numero);

    return 0;

}