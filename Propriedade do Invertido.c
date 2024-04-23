/*
Faça um programa que imprima todos os números (inteiros e positivos) entre x e y que satisfaçam as duas condições abaixo:
- não terminem em 0;
- se o dígito da direita for removido, o número restante é divisor do original.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void verificador(int n1, int n2) {
    if (n1 > n2) {
        return;
    }
    else {

        int primeiroNumero = n1 / 10;
        int segundoNumero = n1 % 10;
        int resto = n1 % primeiroNumero;

        if (segundoNumero == 0) {
            verificador(n1 + 1, n2);
        }
        else if (resto == 0) {
            printf("%d\n", n1);
            verificador(n1 + 1, n2);
        }
        else {
            verificador(n1 + 1, n2);
        }

    }
}

int main() {
    
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    verificador(n1, n2);

    return 0;

}