/*
Janaína, estudante de Engenharia de Materiais, precisa calcular o resultado de x ao quadrado menos quatro x mais cinco (x**2 - 4*x + 5). Só que ela precisa calcular o resultado dessa fórmula para vários valores de x.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculo(int comeco, int final) {
    if (comeco > final) {
        return;
    }
    else {
        int resultado = ((comeco * comeco) - (4 * comeco)) + 5;
        printf("%d\n", resultado);
        calculo(comeco + 1, final);
    }
}

int main() {
    
    int comeco, final;

    scanf("%d %d", &comeco, &final);

    calculo(comeco, final);

    return 0;
    
}