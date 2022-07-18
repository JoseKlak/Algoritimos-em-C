#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cateto1, cateto2, hip;

    printf("Insira o cateto 1: ");
    scanf("%f", &cateto1);
    printf("Insira o cateto 2: ");
    scanf("%f", &cateto2);

    hip = sqrt(pow(cateto1,2) + pow(cateto2,2));

    printf("A hipotenusa vale: %.2f", hip);

    return 0;
}
