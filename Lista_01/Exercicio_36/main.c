#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioMin, salario, aux;

    printf("Insira o salario minimo atualmente: ");
    scanf("%f", &salarioMin);
    printf("Insira o seu salario: ");
    scanf("%f", &salario);

    aux = (salario / salarioMin);

    printf("Voce recebeu %.2f salarios minimos!!!", aux);

    return 0;
}
