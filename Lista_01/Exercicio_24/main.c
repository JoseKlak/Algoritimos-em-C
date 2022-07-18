#include <stdio.h>
#include <stdlib.h>

int main()
{
    float litros, agua, suco;

    printf("Quantos litros de refresco deseja fazer?: ");
    scanf("%f", &litros);

    agua = litros * 0.8;
    suco = litros * 0.2;

    printf("Voce vai precisar %.2f litros de agua, e %.2f litros de suco", agua, suco);

    return 0;
}
