#include <stdio.h>
#include <stdlib.h>

int main()
{
    float queijo, presunto, carne;
    int quantidade;

    printf("Quantos sanduiches vai querer fazer?: ");
    scanf("%d", &quantidade);

    queijo = 0.10 * quantidade;
    presunto = 0.05 * quantidade;
    carne = 0.10 * quantidade;

    printf("Vai precisar comprar %.2f kg de queijo, %.2f kg de presunto, %.2f kg de carne!!!", queijo, presunto, carne);

    return 0;
}
