#include <stdio.h>
#include <stdlib.h>

int main()
{
    float baseMenor, baseMaior, altura, area;

    printf("Insira a base menor do trapezio: ");
    scanf("%f", &baseMenor);
    printf("Insira a base maior do trapezio: ");
    scanf("%f", &baseMaior);
    printf("Insira a altura do trapezio: ");
    scanf("%f", &altura);

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("A area do trapezio eh: %.2f", area);

    return 0;
}
