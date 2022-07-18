#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int idade;

    printf("Insira seu nome: ");
    scanf("%s", nome);
    printf("Qual sua idade?: ");
    scanf("%d", &idade);

    printf("\n%s, voce ja viveu %d dias!\n", nome, idade * 365);

    return 0;
}
