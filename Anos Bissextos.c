/*
Sabe-se que anos bissextos são os anos que possuem 366 dias no calendário, esse dia representa o acrescimo de 1 dia em Fevereiro, que deixa de ter 28 dias, e passa a ter 29.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int verificador(int anoComeco, int anoFinal, int contador) {
    if (anoComeco > anoFinal) {
        return contador;
    }
    else {
        int ultimoNumero = (anoComeco % 10) / 1;
        int penultimoNumero = (anoComeco % 100) / 10;
        if (anoComeco % 4 == 0) {
            if (ultimoNumero == 0 && penultimoNumero == 0 && anoComeco % 400 != 0) {
                verificador(anoComeco + 1, anoFinal, contador);
            }
            else {
                contador = contador + 1;
                printf("%d\n", anoComeco);
                verificador(anoComeco + 1, anoFinal, contador);
            }
        }
        else {
            verificador(anoComeco + 1, anoFinal, contador);
        }
    }
}

int main() {
    
    int anoComeco, anoFinal, quantidade;
    int contador = 0;

    scanf("%d %d", &anoComeco, &anoFinal);

    quantidade = verificador(anoComeco, anoFinal, contador);
    
    if (quantidade == 0) {
        printf("-1");
    }

    return 0;
    
}