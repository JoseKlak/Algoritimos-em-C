#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quantidadeReais, valorGasolina, quantidadeLitros;

    printf("Insira o valor que deseja colocar de gasolina: ");
    scanf("%f", &quantidadeReais);
    printf("Insira o valor da gasolina: ");
    scanf("%f", &valorGasolina);

    quantidadeLitros = quantidadeReais / valorGasolina;

    printf("Foram colocados %.2f litros de gasolina no tanque!", quantidadeLitros);

    return 0;
}
