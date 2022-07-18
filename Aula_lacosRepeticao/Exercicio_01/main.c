#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, cachorro = 0, bauru = 0, sorvete = 0, hamburguer = 0;

    do{
        printf("---MENU---\n");
        printf("1- Adicionar cachorro Quente\n");
        printf("2- Adicionar bauru\n");
        printf("3- Adicionar sorvete\n");
        printf("4- Adicionar hamburguer\n");
        printf("5- Sair\n\n");
        printf("Insira sua opcao: ");
        scanf("%d", &opcao);
        system("cls");

        switch(opcao){
            case 1:
                cachorro++;
                break;
            case 2:
                bauru++;
                break;
            case 3:
                sorvete++;
                break;
            case 4:
                hamburguer++;
                break;
            case 5:
                break;
            default:
                printf("Opcao invalida!!!\n\n");
        }

    }while(opcao != 5);

    printf("Voce comeu: \nCachorro quente: %d\nBauru: %d\nSorvete: %d\nHamburguer: %d\n", cachorro, bauru, sorvete, hamburguer);

    return 0;
}
