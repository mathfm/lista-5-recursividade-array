#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/341?quizId=8316

double mudarValores(int dificuldade, double precoJogo, int tempoPassado)
{

    if (tempoPassado <= 0)
        return precoJogo;

    if (dificuldade == 0 && precoJogo > 45)
    {
        if (precoJogo > 100)
            precoJogo -= precoJogo * 0.25;
        else if (precoJogo <= 100)
        {
            if (precoJogo > 45)
            {
                precoJogo -= precoJogo * 0.125;
                if (precoJogo < 45)
                    precoJogo = 45;
            }
        }
    }

    if (dificuldade == 1 && precoJogo > 45)
    {
        if (precoJogo > 100)
            precoJogo -= precoJogo * 0.20;
        else if (precoJogo <= 100)
        {
            if (precoJogo > 45)
            {
                precoJogo -= precoJogo * 0.10;
                if (precoJogo < 45)
                    precoJogo = 45;
            }
        }
    }

    if (dificuldade == 2 && precoJogo > 45)
    {
        if (precoJogo > 100)
            precoJogo -= precoJogo * 0.18;
        else if (precoJogo <= 100)
        {
            if (precoJogo > 45)
            {
                precoJogo -= precoJogo * 0.09;
                if (precoJogo < 45)
                    precoJogo = 45;
            }
        }
    }

    if (dificuldade == 3 && precoJogo > 45)
    {
        if (precoJogo > 100)
            precoJogo -= precoJogo * 0.15;
        else if (precoJogo <= 100)
        {
            if (precoJogo > 45)
            {
                precoJogo -= precoJogo * 0.075;
                if (precoJogo < 45)
                    precoJogo = 45;
            }
        }
    }

    if (dificuldade == 4)
    {
        if (precoJogo > 100)
            precoJogo -= precoJogo * 0.12;
        else if (precoJogo <= 100)
        {
            if (precoJogo > 45)
            {
                precoJogo -= precoJogo * 0.06;
                if (precoJogo < 45)
                    precoJogo = 45;
            }
        }
    }

    if (dificuldade == 5 && precoJogo > 45)
    {
        if (precoJogo > 100)
            precoJogo -= precoJogo * 0.10;
        else if (precoJogo <= 100)
        {
            if (precoJogo > 45)
            {
                precoJogo -= precoJogo * 0.05;
                if (precoJogo < 45)
                    precoJogo = 45;
            }
        }
    }

    mudarValores(dificuldade, precoJogo, tempoPassado - 1);
}

void tempoDeDesconto(int rodadas, int i, double array[])
{

    if (i >= rodadas)
        return;

    int dificuldade;
    double preco;

    scanf("%d%lf", &dificuldade, &preco);

    array[i] = mudarValores(dificuldade, preco, 3);

    tempoDeDesconto(rodadas, i + 1, array);
}

void imprimirArray(int i, int cont, double array[])
{

    if (i >= cont)
        return;

    printf("Jogo[%d] = R$%.2lf\n", i, array[i]);

    imprimirArray(i + 1, cont, array);
}

int main()
{

    int rodadas;
    scanf("%d", &rodadas);
    double array[rodadas];
    tempoDeDesconto(rodadas, 0, array);
    imprimirArray(0, rodadas, array);

    return 0;
}