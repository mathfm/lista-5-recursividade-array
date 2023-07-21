#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/407?quizId=8316
void lerValores()
{
    int i, j;
    if (scanf("%d %d", &i, &j) == 2)
    {
        int tamanhoMaximo = calcularTamanhoMaximo(i, j);
        printf("%d %d %d\n", i, j, tamanhoMaximo);
        lerValores();
    }
}

int calcularTamanhoMaximo(int i, int j)
{
    if (i == j)
    {
        return calcularTamanho(i);
    }
    else if (i < j)
    {
        int tamanho1 = calcularTamanho(i);
        int tamanho2 = calcularTamanhoMaximo(i + 1, j);
        return tamanho1 > tamanho2 ? tamanho1 : tamanho2;
    }
    else
    {
        int tamanho1 = calcularTamanho(j);
        int tamanho2 = calcularTamanhoMaximo(i, j + 1);
        return tamanho1 > tamanho2 ? tamanho1 : tamanho2;
    }
}

int calcularTamanho(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return 1 + calcularTamanho(n / 2);
    }
    else
    {
        return 1 + calcularTamanho(n * 3 + 1);
    }
}

int main()
{
    lerValores();
    return 0;
}
