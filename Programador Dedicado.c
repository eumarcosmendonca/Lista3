/*
Não tem dia ruim pra Demóclistenes. Ele programa todo dia e estabeleceu uma meta de fazer pelo menos 5 programas e 100 linhas de código por dia.
Escreva um programa que receba como entrada a quantidade de programas e a quantidade de linhas de código feitas por ele em cada um dos sete dias da semana, e exiba em quantos dias ele cumpriu as duas metas e o dia em que ele mais produziu linhas de código.
ATENÇÃO:
Assuma que o primeiro dia da semana é DOMINGO.
Se a produção de programas for a mesma todos os dias, será exibido o último dia da semana.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int metaProgramas(int programas) {
    if (programas >= 5) {
        return 1;
    }
    else {
        return 0;
    }
}

int metaLinhas(int linhas) {
    if (linhas >= 100) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {

    int programas1, programas2, programas3, programas4, programas5, programas6, programas7;
    int linhas1, linhas2, linhas3, linhas4, linhas5, linhas6, linhas7;
    int somaProgramas, somaLinhas, maiorProducao, diaMaiorProducao;
    int domingo = 1;
    int segunda = 2;
    int terca = 3;
    int quarta = 4;
    int quinta = 5;
    int sexta = 6;
    int sabado = 7;

    scanf("%d %d", &programas1, &linhas1);
    scanf("%d %d", &programas2, &linhas2);
    scanf("%d %d", &programas3, &linhas3);
    scanf("%d %d", &programas4, &linhas4);
    scanf("%d %d", &programas5, &linhas5);
    scanf("%d %d", &programas6, &linhas6);
    scanf("%d %d", &programas7, &linhas7);

    int resultadoDomingoProg = metaProgramas(programas1);
    int resultadoDomingoLin = metaLinhas(linhas1);
    if (resultadoDomingoProg == 1) {
        somaProgramas = somaProgramas + 1;
    }
    else {
        somaProgramas = somaProgramas + 0;
    }
    if (resultadoDomingoLin == 1) {
        somaLinhas = somaLinhas + 1;
    }
    else {
        somaLinhas = somaLinhas + 0;
    }
    maiorProducao = linhas1;
    diaMaiorProducao = 1;

    int resultadoSegundaProg = metaProgramas(programas2);
    int resultadoSegundaLin = metaLinhas(linhas2);
    if (resultadoSegundaProg == 1) {
        somaProgramas = somaProgramas + 1;
    }
    else {
        somaProgramas = somaProgramas + 0;
    }
    if (resultadoSegundaLin == 1) {
        somaLinhas = somaLinhas + 1;
    }
    else {
        somaLinhas = somaLinhas + 0;
    }
    if (linhas2 > maiorProducao) {
        maiorProducao = linhas2;
        diaMaiorProducao = 2;
    }

    int resultadoTercaProg = metaProgramas(programas3);
    int resultadoTercaLin = metaLinhas(linhas3);
    if (resultadoTercaProg == 1) {
        somaProgramas = somaProgramas + 1;
    }
    else {
        somaProgramas = somaProgramas + 0;
    }
    if (resultadoTercaLin == 1) {
        somaLinhas = somaLinhas + 1;
    }
    else {
        somaLinhas = somaLinhas + 0;
    }
    if (linhas3 > maiorProducao) {
        maiorProducao = linhas3;
        diaMaiorProducao = 3;
    }

    int resultadoQuartaProg = metaProgramas(programas4);
    int resultadoQuartaLin = metaLinhas(linhas4);
    if (resultadoQuartaProg == 1) {
        somaProgramas = somaProgramas + 1;
    }
    else {
        somaProgramas = somaProgramas + 0;
    }
    if (resultadoQuartaLin == 1) {
        somaLinhas = somaLinhas + 1;
    }
    else {
        somaLinhas = somaLinhas + 0;
    }
    if (linhas4 > maiorProducao) {
        maiorProducao = linhas4;
        diaMaiorProducao = 4;
    }

    int resultadoQuintaProg = metaProgramas(programas5);
    int resultadoQuintaLin = metaLinhas(linhas5);
    if (resultadoQuintaProg == 1) {
        somaProgramas = somaProgramas + 1;
    }
    else {
        somaProgramas = somaProgramas + 0;
    }
    if (resultadoQuintaLin == 1) {
        somaLinhas = somaLinhas + 1;
    }
    else {
        somaLinhas = somaLinhas + 0;
    }
    if (linhas5 > maiorProducao) {
        maiorProducao = linhas5;
        diaMaiorProducao = 5;
    }

    int resultadoSextaProg = metaProgramas(programas6);
    int resultadoSextaLin = metaLinhas(linhas6);
    if (resultadoSextaProg == 1) {
        somaProgramas = somaProgramas + 1;
    }
    else {
        somaProgramas = somaProgramas + 0;
    }
    if (resultadoSextaLin == 1) {
        somaLinhas = somaLinhas + 1;
    }
    else {
        somaLinhas = somaLinhas + 0;
    }
    if (linhas6 > maiorProducao) {
        maiorProducao = linhas6;
        diaMaiorProducao = 6;
    }

    int resultadoSabadoProg = metaProgramas(programas7);
    int resultadoSabadoLin = metaLinhas(linhas7);
    if (resultadoSabadoProg == 1) {
        somaProgramas = somaProgramas + 1;
    }
    else {
        somaProgramas = somaProgramas + 0;
    }
    if (resultadoSabadoLin == 1) {
        somaLinhas = somaLinhas + 1;
    }
    else {
        somaLinhas = somaLinhas + 0;
    }
    if (linhas7 > maiorProducao) {
        maiorProducao = linhas7;
        diaMaiorProducao = 7;
    }

    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", somaProgramas);
    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", somaLinhas);

    if (diaMaiorProducao == 1) {
        printf("DIA QUE MAIS PRODUZIU: DOMINGO");
    }
    else if (diaMaiorProducao == 2) {
        printf("DIA QUE MAIS PRODUZIU: SEGUNDA");
    }
    else if (diaMaiorProducao == 3) {
        printf("DIA QUE MAIS PRODUZIU: TER�A");
    }
    else if (diaMaiorProducao == 4) {
        printf("DIA QUE MAIS PRODUZIU: QUARTA");
    }
    else if (diaMaiorProducao == 5) {
        printf("DIA QUE MAIS PRODUZIU: QUINTA");
    }
    else if (diaMaiorProducao == 6) {
        printf("DIA QUE MAIS PRODUZIU: SEXTA");
    }
    else if (diaMaiorProducao == 7) {
        printf("DIA QUE MAIS PRODUZIU: SABADO");
    }

	return 0;

}