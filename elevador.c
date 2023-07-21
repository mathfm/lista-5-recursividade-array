#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/180?quizId=8316
void verificarCapacidade(int n, int capacidade, int ocupacaoAtual, int *excedeu)
{
    if (n == 0)
    {
        if (*excedeu == 0)
            printf("N\n");
        return;
    }
    else
    {

        int s, e;
        scanf("%d %d", &s, &e);
        ocupacaoAtual += e - s;

        if (ocupacaoAtual > capacidade)
        {
            printf("S\n");
            *excedeu = 1;
            return;
        }
        else if (ocupacaoAtual < 0)
        {
            printf("S\n");
            *excedeu = 1;
            return;
        }
        else
        {
            verificarCapacidade(n - 1, capacidade, ocupacaoAtual, excedeu);
        }
    }
}

int main()
{
    int n, c;
    scanf("%d %d", &n, &c);
    int ocupacaoAtual = 0;
    int excedeu = 0;
    verificarCapacidade(n, c, ocupacaoAtual, &excedeu);
    return 0;
}