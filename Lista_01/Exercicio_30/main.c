#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, vendas, salarioFinal, comissao;

    printf("Insira o salario fixo: ");
    scanf("%f", &salario);
    printf("Insira o valor de suas vendas: ");
    scanf("%f", &vendas);

    comissao = vendas * 0.04;
    salarioFinal = salario + comissao;

    printf("O valor a receber de comissao eh: %.2f, e seu salario final: %.2f", comissao, salarioFinal);

    return 0;
}
