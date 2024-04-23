/*
Ambrósio é famoso por organizar as melhores festas, pois ele consegue juntar as melhores atrações com um preço acessível garantindo o maior lucro. Para fazer o cálculo  ele dispõe de algumas informações: o valor mínimo do ingresso, o valor máximo do ingresso, quantos ingressos a mais são vendidos a cada real de desconto e a quantidade de ingressos vendidos se o valor for máximo, o desconto sempre é de um real.
Dadas essas informações informe o maior lucro possível.
Por exemplo, se a entrada for: 5 10 20 100
A saída vai ser: 1120
Que vai acontecer quando o valor do ingresso for 8 e a quantidade de ingresso for 140, ou quando o valor do ingresso for 7 e a quantidade for 160.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculadora(int valorMinimo, int valorMaximo, int desconto, int quantidadeIngressos, int calculo, int maiorLucro) {
    if (valorMinimo > valorMaximo) {
        return maiorLucro;
    }
    else {
        calculo = quantidadeIngressos * valorMaximo;
        if (calculo > maiorLucro) {
            maiorLucro = calculo;
        }
        calculadora(valorMinimo, valorMaximo - 1, desconto, quantidadeIngressos + desconto, calculo, maiorLucro);
    }
}

int main() {

    int valorMinimo, valorMaximo, desconto, quantidadeIngressos;
    int maiorLucro = 0;
    int calculo = 0;

    scanf("%d %d %d %d", &valorMinimo, &valorMaximo, &desconto, &quantidadeIngressos);

    int resultado = calculadora(valorMinimo, valorMaximo, desconto, quantidadeIngressos, calculo, maiorLucro);

    printf("%d", resultado);

	return 0;

}