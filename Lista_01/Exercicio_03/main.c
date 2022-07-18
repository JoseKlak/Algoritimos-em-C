#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidadePaes, quantidadeBroas;
    float resultadoPaes, resultadoBroas, total;

    printf("Insira a quantidade de paes vendidas no dia: ");
    scanf("%d", &quantidadePaes);
    printf("Insira a quantidade de broas vendidas no dia: ");
    scanf("%d", &quantidadeBroas);

    resultadoPaes = quantidadePaes * 0.12;
    resultadoBroas = quantidadeBroas * 1.5;
    total = resultadoPaes + resultadoBroas;

    printf("O valor arrecadado somando paes e broas em reais eh de: %.2f\n", total);
    printf("O valor para guardar na poupanca em reais eh de: %.2f\n", (total * 0.1));

    return 0;
}
