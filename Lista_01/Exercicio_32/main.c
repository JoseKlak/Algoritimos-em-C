#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;

    printf("Insira seu peso em kg: ");
    scanf("%f", &peso);

    printf("Peso em gramas: %.2f", peso * 1000);

    return 0;
}
