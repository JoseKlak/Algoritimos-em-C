#include <stdio.h>
#include <stdlib.h>

/*Leia o nome de um usuário e um número N e escreva o nome dele na tela N vezes*/

int main()
{
    char nome[100];
    int n;

    printf("Insira seu nome: ");
    fgets(nome, 100, stdin);
    printf("Quantas vezes deseja mostrar seu nome: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%s", nome);
    }

    return 0;
}
