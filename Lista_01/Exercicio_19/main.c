#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidadeFrango, custoTotal;

    printf("Insira a quantidade total de frangos: ");
    scanf("%d", &quantidadeFrango);

    custoTotal = (quantidadeFrango * (4 + 7));

    printf("Para marcar todos seus frangos, voce vai gastar: %d", custoTotal);

    return 0;
}
