/*
Escreva um programa que leia um número inteiro e calcule a soma de seus algarismos.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int quantidadeDigitos(int numero, int quantidade) {
    if (numero < 0) {
        return quantidade;
    }
    else if (numero == 0) {
        return quantidade;
    }
    else {
        numero = numero / 10;
        quantidade = quantidade + 1;
        quantidadeDigitos(numero, quantidade);
    }
}

int somar(int numero, int quantidade, int resto, int divisao, int total) {
    if (quantidade == 0) {
        return total;    
    }
    else {
        int valor = (numero % resto) / divisao;
        total = total + valor;
        somar(numero, quantidade - 1, resto * 10, divisao * 10, total);
    }
}

int main() {
    
    int numero, resto, divisao;
    int quantidade = 0;
    int total = 0;

    scanf("%d", &numero);

    quantidade = quantidadeDigitos(numero, quantidade);
    total = somar(numero, quantidade, 10, 1, total);

    printf("%d", total);

	return 0;

}