#include <stdio.h>
#include <stdlib.h>

int main()
{
    int semAcidente, dia = 0, mes = 0, ano = 0;

    printf("Insira a quantidade de dias sem acidentes: ");
    scanf("%d", &semAcidente);

    ano = (semAcidente / 360); // 360 dias correspondentes a 12x30
    mes = (semAcidente % 360) / 30;
    dia = ((semAcidente % 360) % 30);

    printf("Estamos a %d anos %d meses e %d dias sem acidente!!!", ano, mes, dia);

    return 0;
}
