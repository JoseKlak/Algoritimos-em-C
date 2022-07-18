#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, centena, dezena, unidade;

    printf("Insira um numero: ");
    scanf("%d", &num);

    centena = (num / 100);
    dezena = (num % 100) / 10;
    unidade = ((num % 100) % 10);

    printf("Centena = %d\nDezena = %d\nUnidade = %d\n", centena, dezena, unidade);

    return 0;
}
