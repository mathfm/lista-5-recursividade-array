#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// 300 + 60 + 40 + 20
// 20 funcionarios
// pre�o da arvore e tres tipos de enfeites
// deve receber o valor da arvore e o pre�o dos tres produtos unitarios
// https://thehuxley.com/problem/490?quizId=8316
void ler_valor(double valor, double quantidade, double *aux, int stop)
{
    if (stop <= 0)
    {
        return;
    }
    else
    {
        scanf("%lf%lf", &valor, &quantidade);
        *aux = *aux + (valor * quantidade);
        return ler_valor(valor, quantidade, aux, stop - 1);
    }
}

int main()
{
    double arvore;
    scanf("%lf", &arvore);
    double valor = 0;
    int quantidade = 0;
    double aux = 0;
    ler_valor(valor, quantidade, &aux, 3);
    aux = aux + arvore;
    double contas = aux / 21;
    printf("%.2lf\n%.2lf", aux, contas);
    return 0;
}