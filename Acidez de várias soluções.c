/*
Carla é uma profissional muito dedicada! Ela é responsável por analisar o pH de várias substâncias e determinar se elas são ácidas, básicas ou neutras. Ela não para enquanto não tiver terminado de analisar todas as soluções pendentes.
Escreva um programa para ajudar a nossa querida Carla no seu trabalho. O programa vai receber como entrada uma sequência de números, cada um em uma linha, representando o pH de cada solução. A última entrada vai ser o número -1, indicando que não há mais soluções para serem analisadas e o programa pode encerrar sua execução.
Para cada solução, o programa vai determinar a sua acidez: ACIDA (pH menor que 7), BASICA (pH maior que 7), ou NEUTRA (pH igual a 7).
E aí, você vai ajudar a Carla? Bom trabalho!
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void verificador(double substancia) {
    
    scanf("%lf", &substancia);

    if (substancia == -1) {
        return;
    }
    else {
        if (substancia < 7) {
            printf("ACIDA\n");
            verificador(substancia);
        }
        else if (substancia == 7) {
            printf("NEUTRA\n");
            verificador(substancia);
        }
        else if (substancia > 7) {
            printf("BASICA\n");
            verificador(substancia);
        }
    }

}

int main() {
    
    double substancia;

    verificador(substancia);

    return 0;

}