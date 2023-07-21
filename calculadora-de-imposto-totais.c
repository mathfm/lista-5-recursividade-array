#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/574?quizId=8316

int main()
{

    double cotacao, aliquota, valorProduto, frete, total, taxaImportado, isento = 0, valorFinal, icms, imposto;
    scanf("%lf %lf %lf %lf", &cotacao, &aliquota, &valorProduto, &frete);

    if (valorProduto >= 2500)
    {
        isento = 1;
    }

    valorProduto *= cotacao;
    frete *= cotacao;
    total = valorProduto + frete;

    if (isento == 1)
    {
        taxaImportado = (total - frete) * 0.6;
        valorFinal = (total + taxaImportado - frete) / (1 - aliquota / 100.0);
    }
    else
    {
        taxaImportado = total * 0.6;
        valorFinal = (total + taxaImportado) / (1 - aliquota / 100.0);
    }

    icms = aliquota / 100.0 * valorFinal;
    imposto = icms + taxaImportado;

    printf("%.2lf\n", cotacao);
    printf("%.2lf\n", valorProduto);
    printf("%.2lf\n", frete);
    printf("%.2lf\n", total);
    printf("%.2lf\n", taxaImportado);
    printf("%.2lf\n", icms);
    printf("%.2lf\n", imposto);
    printf("%.2lf\n", total + imposto);

    if (isento == 1)
    {
        printf("Impostos calculados sem o frete\n");
    }
    else
    {
        printf("Impostos calculados com o frete\n");
    }

    return 0;
}
