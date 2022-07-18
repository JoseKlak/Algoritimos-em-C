#include <stdio.h>
#include <stdlib.h>

/*Foi feita uma pesquisa de canal de TV em v�rias casas da cidade de Jo�o C�mara. Para cada
casa visitada, foi preenchida uma ficha contendo o n�mero do canal (3, 5, 8, 11 ou 13) e o n�mero
de pessoas que estavam assistindo o canal naquela casa. Fa�a um algoritmo que:
a. Leia a informa��o da quantidade de casas participantes da pesquisa.
b. Receba as informa��es coletadas em cada uma das casas participantes da
c. pesquisa: a informa��o do canal que estava sendo assistido e a quantidade de
d. pessoas que estava assistindo aquele canal na casa.
e. Contabilize quantas pessoas estava assistindo cada canal (leve em conta a
f. quantidade de pessoas que assistia cada canal em cada casa)
g. Ao finalizar a leitura de todas as fichas, escreva o n�mero do canal e sua
h. respectiva porcentagem de audi�ncia*/

int main()
{
    int i, qntCasa, canal, qntPessoa, canal3=0, canal5=0, canal8=0, canal11=0, porce3=0, porce5=0, porce8=0, porce11=0, totalPessoa=0;

    printf("Insira a quantidade de casas participantes na pesquisa: ");
    scanf("%d", &qntCasa);

    for(i=0; i<qntCasa; i++)
    {
        printf("Qual canal estava sendo assistido?(3, 5, 8, 11 ou 13): ");
        scanf("%d", &canal);
        printf("Quantas pessoas estavam assistindo?: ");
        scanf("%d", &qntPessoa);

        totalPessoa += qntPessoa;

        if(canal == 3)
        {
            canal3++;
            porce3 += qntPessoa;
        }
        if(canal == 5)
        {
            canal5++;
            porce5 += qntPessoa;
        }
        if(canal == 8)
        {
            canal8++;
            porce8 += qntPessoa;
        }
        if(canal == 11)
        {
            canal11++;
            porce11 += qntPessoa;
        }

    }
    
    printf("Total de pessoas na pesquisa: %d\n", totalPessoa);
    printf("Canal 3: %.2f %%\n", (((float)porce3 / totalPessoa) * 100.0));
    printf("Canal 5: %.2f %%\n", (((float)porce5 / totalPessoa) * 100.0));
    printf("Canal 8: %.2f %%\n", (((float)porce8 / totalPessoa) * 100.0));
    printf("Canal 11: %.2f %%\n", (((float)porce11 / totalPessoa) * 100.0));

    return 0;
}
