#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario = 1200, conta1 = 200, conta2 = 120, conta1Juros = (200*1.02), conta2Juros = (120*1.02), restoSalario;

    restoSalario = salario - conta1Juros - conta2Juros;

    printf("O resto do seu salario eh: %.2f", restoSalario);

    return 0;
}
