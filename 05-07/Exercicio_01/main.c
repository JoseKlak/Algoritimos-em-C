#include <stdio.h>
#include <stdlib.h>

int main()
{
    float comissao, transacao;

    printf("Qual foi o valor da transacao?: ");
    scanf("%f", &transacao);

    if(transacao <= 2500){
        comissao = (30 + (transacao * 0.017));
        if(comissao > 39)
            comissao = 39;
        }else if(transacao <= 6250){
            comissao = (56 + (transacao * 0.0066));
        }else if(transacao <= 20000){
            comissao = (76 + (transacao * 0.0034));
        }else if(transacao <= 50000){
            comissao = (100 + (transacao * 0.0022));
        }else if(transacao <= 500000){
            comissao = (155 + (transacao * 0.0011));
        }else if(transacao > 500000){
            comissao = (255 + (transacao * 0.0009));
        }else
            printf("Valor invalido!");

    printf("O valor da comissao foi de: %.2f", comissao);

    return 0;
}
