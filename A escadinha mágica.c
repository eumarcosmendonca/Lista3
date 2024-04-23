/*
Zelda e seus amigos tiveram uma brilhante ideia durante as aulas da monitoria da cadeira de introdução a programação: que tal fazer um programa que, dado um número n (1 <= n <= 40) printa na tela os numeros de 1 até o número da iteração atual, sendo que serão feitas n iterações, como demonstrado no exemplo a seguir:
Supondo para n = 5:
(primeira iteração): 1
(segunda iteração): 1 2
(terceira iteração): 1 2 3
(quarta iteração): 1 2 3 4
(quinta iteração): 1 2 3 4 5
*/

#include <stdio.h>

void linha(int numero, int parametro) {
    if (parametro > numero) {
        return;
    }
    if (parametro == numero) {
        printf("%d", parametro);
        linha(numero, parametro + 1);
    }
    else {
        printf("%d ", parametro);
        linha(numero, parametro + 1);
    }
}

void coluna(int numero, int parametro) {
    if (parametro > numero) {
        return;
    }
    else {
        linha(parametro, 1);
        printf("\n");
        coluna(numero, parametro + 1);
    }
}

int main() {

    int numero;

    scanf("%d", &numero);

    coluna(numero, 1);

    return 0;

}