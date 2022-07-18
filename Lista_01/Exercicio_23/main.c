#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alturaHomem, alturaPredio, sombraHomem, sombraPredio, aux;

    printf("Insira sua altura em m: ");
    scanf("%f", &alturaHomem);
    printf("Insira o tamanho da sua sobra em m: ");
    scanf("%f", &sombraHomem);
    printf("Insira o tamanho da sombra do predio em m: ");
    scanf("%f", &sombraPredio);

    aux = alturaHomem / sombraHomem;
    alturaPredio = sombraPredio * aux;

    printf("A altura do predio em m eh: %.2f", alturaPredio);

    return 0;
}
