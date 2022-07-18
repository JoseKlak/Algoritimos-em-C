#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, raio, volume;

    printf("Insira a altura da caixa de agua: ");
    scanf("%f", &altura);
    printf("Insira a raio da base da caixa de agua: ");
    scanf("%f", &raio);

    volume = ((3.14*pow(raio,2))*altura);

    printf("O volume da caixa de agua eh: %.2f", volume);

    return 0;
}
