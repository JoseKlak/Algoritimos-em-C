#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que simule o funcionamento de um caixa de supermercado. O
seu algoritmo deve receber a informa��o de quantos produtos o cliente comprou e, para
cada produto, dever� ler o seu pre�o. Ao final, dever� informar quanto o cliente deve pagar
pelas compras.*/

int main()
{
    int qntProduto;
    float preco;

    do{
        printf("Quantos produtos foram comprados?: ");
        scanf("%d", &qntProduto);
        printf("Qual o valor de cada produto desse?: ");
        scanf("%f", &preco);
    }

    return 0;
}

