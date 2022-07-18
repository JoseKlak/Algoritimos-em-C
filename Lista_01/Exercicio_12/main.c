#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, salarioAumento, salarioDesconto;

    printf("Insira o salario inicial: ");
    scanf("%f", &salario);

    salarioAumento = salario * 1.15;
    salarioDesconto = salarioAumento * 0.92;

    printf("Salario inicial: %.2f\nSalario com o aumento: %.2f\nSalario com o desconto: %.2f", salario, salarioAumento, salarioDesconto);

    return 0;
}
