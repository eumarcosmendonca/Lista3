/*
Escrever programa para exibir os múltiplos de N contidos entre os valores A e B, sendo N, A e B definidos pelo utilizador.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int verificarMultiplo(int n, int comecoIntervalo, int finalIntervalo, int verificador) {
    if (comecoIntervalo > finalIntervalo) {
        return verificador;
    }
    else if (comecoIntervalo % n == 0) {
        printf("%d\n", comecoIntervalo);
        verificarMultiplo(n, comecoIntervalo + 1, finalIntervalo, verificador + 1);
    }
    else {
        verificarMultiplo(n, comecoIntervalo + 1, finalIntervalo, verificador);
    }
}

int main() {

    int n, comecoIntervalo, finalIntervalo;

    scanf("%d %d %d", &n, &comecoIntervalo, &finalIntervalo);

    int resultado = verificarMultiplo(n, comecoIntervalo, finalIntervalo, 0);

    if (resultado == 0) {
        printf("INEXISTENTE");
    }

	return 0;

}