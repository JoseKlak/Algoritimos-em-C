#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, area;

    printf("Insira o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A area do quadrado eh: %.2f", area);

    return 0;
}
