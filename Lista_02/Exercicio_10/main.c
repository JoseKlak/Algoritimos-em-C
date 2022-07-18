#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, diferenca;

    printf("Insira o primeiro valor: ");
    scanf("%f", &x);
    printf("Insira o segundo valor: ");
    scanf("%f", &y);

    if(x >= y){
        diferenca = x - y;
    }else
        diferenca = y - x;

    printf("A diferenca do maior para o menor eh: %.2f", diferenca);

    return 0;
}
