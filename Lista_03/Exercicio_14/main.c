#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo escreva a diversas vezes a pergunta �Ol� tudo bem?� e leia a
a. resposta do usu�rio enquanto ele responde n�o. S� encerre a execu��o quando a resposta
for igual a �Sim�.*/

int main()
{
    char pa[4];
    int aux;

    do{
        printf("Ola tudo bem?\n");
        fgets(pa, 4, stdin);
        fflush(stdin);

    }while((pa[0]=='n')&&(pa[1]=='a')&&(pa[2]=='o'));
    return 0;
}
