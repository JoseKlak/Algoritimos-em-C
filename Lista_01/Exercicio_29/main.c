#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, precoComDesconto;

    printf("Insira o preco do produto: ");
    scanf("%f", &preco);

    precoComDesconto = preco * 0.9;

    printf("O preco do produto com o desconto ficou: %.2f", precoComDesconto);

    return 0;
}
