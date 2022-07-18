#include <stdio.h>
#include <stdlib.h>
int main()
{
    double a, b;

    printf("Insira o primeiro numero: ");
    scanf("%lf", &a);
    printf("Insira o segundo numero: ");
    scanf("%lf", &b);

    printf("Soma: %.2lf \nDiferenca: %.2lf \nMultiplicacao: %.2lf \nDivisao: %.2lf\n", a+b, a-b, a*b, a/b);
    printf("Resto da divisao: %d\n", (int)a%(int)b);

    return 0;
}
