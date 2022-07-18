#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, valorPrato;

    printf("Insira o peso do prato de comida em kg: ");
    scanf("%f", &peso);

    valorPrato = peso * 12;

    printf("Seu prato de comida custa %.2f reais!", valorPrato);

    return 0;
}
