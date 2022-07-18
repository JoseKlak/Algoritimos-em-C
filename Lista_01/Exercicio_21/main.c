#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lata, garrafa, doisLitro, total;

    printf("Insira a quantidade de latas de 350ml compradas: ");
    scanf("%f", &lata);
    printf("Insira a quantidade de garrafas de 600ml compradas: ");
    scanf("%f", &garrafa);
    printf("Insira a quantidade de garrafas de 2l compradas: ");
    scanf("%f", &doisLitro);

    total = (lata * 0.350) + (garrafa * 0.600) + (doisLitro * 2);

    printf("A quantidade total de refrigerante comprada em litros foi: %.2f", total);

    return 0;
}
