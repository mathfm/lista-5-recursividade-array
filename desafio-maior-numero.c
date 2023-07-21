#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/224?quizId=8316
void maior_numero(int n1, int maior)
{
    if (n1 <= 0 && n1 <= 100)
    {
        printf("%d", maior);
        return;
    }
    else
    {
        if (n1 > maior)
        {
            maior = n1;
            return maior_numero(n1, maior);
        }

        scanf("%d", &n1);
        return maior_numero(n1, maior);
    }
}

int main()
{
    int n1, maior = 0;
    scanf("%d", &n1);
    maior_numero(n1, maior);

    return 0;
}