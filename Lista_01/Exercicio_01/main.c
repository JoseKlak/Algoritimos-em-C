#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2, area;

    printf("Insira o lado1 do terreno em m: ");
    scanf("%f", &lado1);
    printf("Insira o lado2 do terreno em m: ");
    scanf("%f", &lado2);

    area = lado1*lado2;

    printf("\nArea do terreno: %.2f\n", area);

    return 0;
}
