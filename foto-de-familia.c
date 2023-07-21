#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/50?quizId=8316
void bubble(double array[], int i, int n)
{
    if (i == n - 1)
    {
        return;
    }
    else
    {
        if (array[i] > array[i + 1])
        {
            double aux = array[i];
            array[i] = array[i + 1];
            array[i + 1] = aux;
        }

        bubble(array, i + 1, n);
    }
}

void bubble_sort(double array[], int n)
{
    if (n == 1)
    {
        return;
    }
    else
    {
        bubble(array, 0, n);

        bubble_sort(array, n - 1);
    }
}

void trocarArray(double array[], int i, int cont)
{

    double aux = array[1];
    double aux2 = array[2];
    double aux3 = array[3];
    array[2] = aux3;
    array[1] = aux2;
    array[3] = aux;
}

void printa_elementos_array(double array[], int i, int n)
{
    if (i == n)
    {
        return;
    }

    printf("%.2lf\n", array[i]);

    printa_elementos_array(array, i + 1, n);
}

void lerArray(double array[], int i, int n)
{
    if (i == n)
    {
        return;
    }
    scanf("%lf", &array[i]);
    lerArray(array, i + 1, n);
}

int main()
{
    double familia[4];
    lerArray(familia, 0, 4);
    bubble_sort(familia, 4);
    trocarArray(familia, 0, 4);
    printa_elementos_array(familia, 0, 4);

    return 0;
}