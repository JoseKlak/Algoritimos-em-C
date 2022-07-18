#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, pesoGordo, pesoMagro;

    printf("Insira seu peso: ");
    scanf("%f", &peso);

    pesoGordo = peso * 1.15;
    pesoMagro = peso * 0.8;

    printf("Peso depois de engordar: %.2f\nPeso depois de emagrecer: %.2f", pesoGordo, pesoMagro);

    return 0;
}
