#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diagonalMaior, diagonalMenor, area;

    printf("Insira a diagonal maior do losangulo: ");
    scanf("%f", &diagonalMaior);
    printf("Insira a diagonal menor do losangulo: ");
    scanf("%f", &diagonalMenor);

    area = (diagonalMaior * diagonalMenor) / 2;

    printf("A area do losangulo eh: %.2f", area);

    return 0;
}
