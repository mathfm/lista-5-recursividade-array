#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/396?quizId=8316
void pagar(int multa_da_casa, double *valor_a_pagar, int *cont_casas) // multa dos 12.89
{

    if (multa_da_casa <= 2)
    {

        scanf("%d", &multa_da_casa);
        return pagar(multa_da_casa, valor_a_pagar, cont_casas);
    }
    else if (multa_da_casa >= 999)
    {

        return;
    }

    else if (multa_da_casa > 2)
    {

        *cont_casas += 1;
        *valor_a_pagar += 12.89 * (multa_da_casa - 2);
        scanf("%d", &multa_da_casa);
        return pagar(multa_da_casa, valor_a_pagar, cont_casas);
    }
}

int main()
{
    int casas;
    int conta_casas = 0;
    double casas_multadas = 0;
    scanf("%d", &casas);
    pagar(casas, &casas_multadas, &conta_casas);
    printf("%.2lf\n%d", casas_multadas, conta_casas);

    return 0;
}