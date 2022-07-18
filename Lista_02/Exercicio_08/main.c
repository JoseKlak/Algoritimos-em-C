#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoEtiqueta, precoFinal;
    char opcao;

    printf("Insira o valor do produto: ");
    scanf("%f", &precoEtiqueta);

    printf("FORMA DE PAGAMENTO: \n");
    printf("a) A vista em dinheiro ou cheque, recebe 10%% de desconto\n");
    printf("b) A vista no cartão de crédito, recebe 15%% de desconto\n");
    printf("c) Em duas vezes, preco normal de etiqueta sem juros\n");
    printf("d) Em duas vezes, preco normal de etiqueta mais juros de 10%%\n");
    printf("Insira uma opcao: ");
    fflush(stdin);
    scanf("%c", &opcao);

    if(opcao == 'a'){
        precoFinal = (precoEtiqueta * 0.9);
    }else if(opcao == 'b'){
        precoFinal = (precoEtiqueta * 0.85);
    }else if(opcao == 'c'){
        precoFinal = (precoEtiqueta);
    }else if(opcao == 'd'){
        precoFinal = (precoEtiqueta * 1.1);
    }

    printf("Preco final do produto: %.2f", precoFinal);

    return 0;
}
