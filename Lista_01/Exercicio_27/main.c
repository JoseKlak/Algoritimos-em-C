#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, divisao;

    printf("X: ");
    scanf("%f", &x);
    printf("Y: ");
    scanf("%f", &y);

    divisao = x / y;

    printf("A divisao entre x / y: %.2f", divisao);

    return 0;
}
