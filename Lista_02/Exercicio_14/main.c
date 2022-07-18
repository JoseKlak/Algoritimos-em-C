#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    float valor, imposto;

    printf("Insira o valor do carro: ");
    scanf("%f", &valor);
    printf("Insira o ano do carro: ");
    scanf("%d", &ano);

    if(ano <= 1990){
        imposto = valor * 0.01;
    }else{
        imposto = valor * 0.015;
    }

    printf("O valor do imposto sera: %.2f", imposto);

    return 0;
}
