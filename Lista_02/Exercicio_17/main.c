#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, quantidade;
    float preco;

    printf("---CARDAPIO---\n");
    printf("CODIGO \t ITEM\n");
    printf("101 \t Cachorro quente\n");
    printf("102 \t Bauru\n");
    printf("103 \t Misto quente\n");
    printf("104 \t Hamburguer\n");
    printf("105 \t Chesseburguer\n");
    printf("106 \t Refrigerante\n\n");

    printf("Insira o codigo do item pedido: ");
    scanf("%d", &codigo);
    printf("Insira a quantidade desse produto: ");
    scanf("%d", &quantidade);

    if(codigo == 101){
        preco = quantidade * 11;
    }else if(codigo == 102){
        preco = quantidade * 8.5;
    }else if(codigo == 103){
        preco = quantidade * 8;
    }else if(codigo == 104){
        preco = quantidade * 9;
    }else if(codigo == 105){
        preco = quantidade * 10;
    }else if(codigo == 106){
        preco = quantidade * 4.5;
    }

    printf("O valor a ser pago eh: %.2f", preco);

    return 0;
}
