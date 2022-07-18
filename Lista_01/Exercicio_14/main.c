#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio, area;

    printf("Insira o raio da pizza: ");
    scanf("%f", &raio);

    area = 3.14 * pow(raio,2);

    printf("A area da sua pizza eh: %.2f", area);

    return 0;
}
