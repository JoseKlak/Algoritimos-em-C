#include <stdio.h>
#include <stdlib.h>

/*Leia o nome do usuário e escreva o nome dele na tela 10 vezes*/

int main()
{
    char nome[100];

    printf("Insira seu nome: ");
    fgets(nome, 100, stdin);

    for(int i=0; i<10; i++){
        printf("%s", nome);
    }

    return 0;
}
