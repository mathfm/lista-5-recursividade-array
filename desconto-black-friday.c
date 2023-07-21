#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/468?quizId=8316

void casos(int num, int contador)
{
    double pre1, pre2, pre3;
    if (num <= 0)
    {
        printf("%d", contador);
        return;
    }
    else
    {
        scanf("%lf%lf", &pre1, &pre2);
        pre3 = pre1 * 80 / 100;
        if (pre2 <= pre3)
        {
            contador++;
            return casos(num - 1, contador);
        }
        else
        {
            return casos(num - 1, contador);
        }

        return casos(num - 1, contador);
    }
}
int main()
{
    int n1 = 5;
    int contador = 0;
    casos(n1, contador);
    return 0;
}