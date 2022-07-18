#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z, multiplicacao;

    printf("X: ");
    scanf("%f", &x);
    printf("Y: ");
    scanf("%f", &y);
    printf("Z: ");
    scanf("%f", &z);

    multiplicacao = x * y * z ;

    printf("A multiplicacao entre x * y * z: %.2f", multiplicacao);

    return 0;
}
