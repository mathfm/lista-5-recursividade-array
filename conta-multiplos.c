#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/398?quizId=8316

int contarMultiplos(int n1, int n2, int cont, int i)
{
    if (i >= 50)
    {
        return cont;
    }
    if (i != 0 && i % n1 == 0 && i % n2 == 0)
    {
        cont++;
    }

    return contarMultiplos(n1, n2, cont, i + 1);
}

int main()
{
    int v1, v2;
    scanf("%d%d", &v1, &v2);
    printf("%d\n", contarMultiplos(v1, v2, 0, 1));

    return 0;
}