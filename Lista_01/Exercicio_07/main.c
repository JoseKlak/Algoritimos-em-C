#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, quantidadeDias;

    printf("Insira o dia: ");
    scanf("%d", &dia);
    printf("Insira o mes: ");
    scanf("%d", &mes);

    quantidadeDias = ((--mes * 30) + dia);

    printf("Ja se passaram %d dias do ano!", quantidadeDias);

    return 0;
}
