#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, diferenca;

    printf("Insira o ponto x1: ");
    scanf("%f", &x1);
    printf("Insira o ponto y1: ");
    scanf("%f", &y1);
    printf("Insira o ponto x2: ");
    scanf("%f", &x2);
    printf("Insira o ponto y2: ");
    scanf("%f", &y2);

    diferenca = sqrt (pow((x1 - x2),2) + pow((y1 - y2),2));

    printf("A diferenca dos dois numeros eh: %.2f", diferenca);

    return 0;
}
