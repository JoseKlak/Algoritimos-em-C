#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo escreva a diversas vezes a pergunta “Olá tudo bem?” e leia a
a. resposta do usuário enquanto ele responde não. Só encerre a execução quando a resposta
for igual a “Sim”.*/

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
