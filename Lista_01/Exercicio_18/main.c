#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horasNormais, horasExtras, salarioBruto, salarioLiquido;

    printf("Insira a quantidade de horas normais trabalhadas: ");
    scanf("%f", &horasNormais);
    printf("Insira a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horasExtras);

    salarioBruto = ((horasNormais * 10) + (horasExtras * 15));
    salarioLiquido = (salarioBruto * 0.9);

    printf("Seu salario bruto eh: %.2f\nDescontando os impostos seu salario vai ficar: %.2f", salarioBruto, salarioLiquido);

    return 0;
}
