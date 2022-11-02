#include <stdio.h>
#include "colors.h"
#include <locale.h>


int mostrarMenu(int poltronas[5][5]) {
    int opcao, cont=1;

    printf("\e[1;1H\e[2J");
    foreground(WHITE);
    printf("Livre     -  Branco\n");
    foreground(GREEN);
    printf("Ocupado   -  Verde\n");
    foreground(YELLOW);
    printf("Reservado -  Amarelo\n\n");
    style(RESETALL);
    printf("Poltronas: \n\n");
    printf("--------------------\n");
    printf("--------TELA--------\n");
    printf("--------------------\n");
    for(int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if((cont < 10) && (poltronas[i][j] == 0))
                printf("[0%d]", cont);
            else if((cont >= 10) && (poltronas[i][j] == 0))
                printf("[%d]", cont);
            else if(poltronas[i][j] == 1){
                foreground(GREEN);
                printf("[<>]");
                style(RESETALL);
            }
            else if(poltronas[i][j] == 2){
                foreground(YELLOW);
                printf("[><]");
                style(RESETALL);
            }
            cont++;
        }
        printf("\n");
    }
    cont = 1;

    printf("\n\n**************************************\n");
    printf("***  ____________MENU____________  ***\n");
    printf("***                                ***\n");
    printf("*** 1 - Comprar                    ***\n");
    printf("*** 2 - Reservar                   ***\n");
    printf("*** 3 - Cancelar reserva           ***\n");
    printf("*** 4 - Sair                       ***\n");
    printf("***                                ***\n");
    printf("**************************************\n\n");
    scanf("%d", &opcao);
    
    return opcao;
}

void zeraMatriz(int poltronas[5][5]) {

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            poltronas[i][j] = 0;  // 0 = vazia;    1 = comprada;       2 = reservada
        }
    }
}

void compra(int poltronas[5][5]) {

    int cont=1, escolha;

    printf("\e[1;1H\e[2J");
    foreground(WHITE);
    printf("Livre     -  Branco\n");
    foreground(GREEN);
    printf("Ocupado   -  Verde\n");
    foreground(YELLOW);
    printf("Reservado -  Amarelo\n\n");
    style(RESETALL);
    printf("Poltronas: \n\n");
    printf("--------------------\n");
    printf("--------TELA--------\n");
    printf("--------------------\n");
    for(int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if((cont < 10) && (poltronas[i][j] == 0))
                printf("[0%d]", cont);
            else if((cont >= 10) && (poltronas[i][j] == 0))
                printf("[%d]", cont);
            else if(poltronas[i][j] == 1){
                foreground(GREEN);
                printf("[<>]");
                style(RESETALL);
            }
            else if(poltronas[i][j] == 2){
                foreground(YELLOW);
                printf("[><]");
                style(RESETALL);
            }
            cont++;
        }
        printf("\n");
    }
    cont = 1;
    printf("\nQual poltrona voce quer comprar: ");
    scanf("%d", &escolha);
    for(int i=1; i<=25; i++){
        if((escolha - 1) == i)
            poltronas[i / 5][i % 5] = 1;
        else if(escolha == 1)
            poltronas[0][0] = 1;
    }
}

void reserva(int poltronas[5][5]) {
    
    int cont=1, escolha;

    printf("\e[1;1H\e[2J");
    foreground(WHITE);
    printf("Livre     -  Branco\n");
    foreground(GREEN);
    printf("Ocupado   -  Verde\n");
    foreground(YELLOW);
    printf("Reservado -  Amarelo\n\n");
    style(RESETALL);
    printf("Poltronas: \n\n");
    printf("--------------------\n");
    printf("--------TELA--------\n");
    printf("--------------------\n");
    for(int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if((cont < 10) && (poltronas[i][j] == 0))
                printf("[0%d]", cont);
            else if((cont >= 10) && (poltronas[i][j] == 0))
                printf("[%d]", cont);
            else if(poltronas[i][j] == 1){
                foreground(GREEN);
                printf("[<>]");
                style(RESETALL);
            }
            else if(poltronas[i][j] == 2){
                foreground(YELLOW);
                printf("[><]");
                style(RESETALL);
            }
            cont++;
        }
        printf("\n");
    }
    cont = 1;
    printf("\nQual poltrona voce quer reservar: ");
    scanf("%d", &escolha);
    for(int i=1; i<=25; i++){
        if((escolha - 1) == i)
            poltronas[i / 5][i % 5] = 2;
        else if(escolha == 1)
            poltronas[0][0] = 2;
    }
}

void cancela(int poltronas[5][5]) {

    int cont=1, escolha;

    printf("\e[1;1H\e[2J");
    foreground(WHITE);
    printf("Livre     -  Branco\n");
    foreground(GREEN);
    printf("Ocupado   -  Verde\n");
    foreground(YELLOW);
    printf("Reservado -  Amarelo\n\n");
    style(RESETALL);
    printf("Poltronas: \n\n");
    printf("--------------------\n");
    printf("--------TELA--------\n");
    printf("--------------------\n");
    for(int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if((cont < 10) && (poltronas[i][j] == 0))
                printf("[0%d]", cont);
            else if((cont >= 10) && (poltronas[i][j] == 0))
                printf("[%d]", cont);
            else if(poltronas[i][j] == 1){
                foreground(GREEN);
                printf("[<>]");
                style(RESETALL);
            }
            else if(poltronas[i][j] == 2){
                foreground(YELLOW);
                printf("[><]");
                style(RESETALL);
            }
            cont++;
        }
        printf("\n");
    }
    cont = 1;
    printf("\nQual poltrona voce quer cancelar: ");
    scanf("%d", &escolha);
    for(int i=1; i<=25; i++){
        if((escolha - 1) == i)
            poltronas[i / 5][i % 5] = 0;
        else if(escolha == 1)
            poltronas[0][0] = 0;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao, poltronas[5][5], cont=1, escolha;

    zeraMatriz(poltronas);

    /*printf("Escolha o filme: \n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
    printf("⣿⠟⠫⢻⣿⣿⣿⣿⢟⣩⡍⣙⠛⢛⣿⣿⣿⠛⠛⠛⠛⠻⣿⣿⣿⣿⣿⡿⢿⣿\n");
    printf("⣿⠤⠄⠄⠙⢿⣿⣿⣿⡿⠿⠛⠛⢛⣧⣿⠇⠄⠂⠄⠄⠄⠘⣿⣿⣿⣿⠁⠄⢻\n");
    printf("⣿⣿⣿⣿⣶⣄⣾⣿⢟⣼⠒⢲⡔⣺⣿⣧⠄⠄⣠⠤⢤⡀⠄⠟⠉⣠⣤⣤⣤⣾\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣀⣬⣵⣿⣿⣿⣶⡤⠙⠄⠘⠃⠄⣴⣾⣿⣿⣿⣿⣿\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢻⠿⢿⣿⣿⠿⠋⠁⠄⠂⠉⠒⢘⣿⣿⣿⣿⣿⣿⣿\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⣿⡿⣡⣷⣶⣤⣤⣀⡀⠄⠄⠄⠄⠄⠄⠄⣾⣿⣿⣿⣿⣿⣿\n");
    printf("⣿⣿⣿⣿⣿⣿⣿⡿⣸⣿⣿⣿⣿⣿⣿⣿⣷⣦⣰⠄⠄⠄⠄⢾⠿⢿⣿⣿⣿⣿\n");
    printf("⣿⡿⠋⣡⣾⣿⣿⣿⡟⠉⠉⠈⠉⠉⠉⠉⠉⠄⠄⠄⠑⠄⠄⠐⡇⠄⠈⠙⠛⠋\n");
    printf("⠋⠄⣾⣿⣿⣿⣿⡿⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢠⡇⠄⠄⠄⠄⠄\n");
    printf("⠄⢸⣿⣿⣿⣿⣿⣯⠄⢠⡀⠄⠄⠄⠄⠄⠄⠄⠄⣀⠄⠄⠄⠄⠁⠄⠄⠄⠄⠄\n");
    printf("⠁⢸⣿⣿⣿⣿⣿⣯⣧⣬⣿⣤⣐⣂⣄⣀⣠⡴⠖⠈⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄\n");
    printf("⠈⠈⣿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣽⣉⡉⠉⠈⠁⠄⠁⠄⠄⠄⠄⡂⠄⠄⠄⠄⠄\n");
    printf("⠄⠄⠙⣿⣿⠿⣿⣿⣿⣿⣷⡤⠈⠉⠉⠁⠄⠄⠄⠄⠄⠄⠄⠠⠔⠄⠄⠄⠄⠄\n");
    printf("⠄⠄⠄⡈⢿⣷⣿⣿⢿⣿⣿⣷⡦⢤⡀⠄⠄⠄⠄⠄⠄⢐⣠⡿⠁⠄⠄⠄⠄⠄\n");*/

    do {

        opcao = mostrarMenu(poltronas);

        switch (opcao)
        {
        case 1:
            compra(poltronas);
            break;
        case 2:
            reserva(poltronas);
            break;
        case 3:
            cancela(poltronas);
            break;
        case 4:
            printf("Saindo!!!\n");
            break;
        default:
            printf("Opção invalida!!!");
            break;
        }

    }while (opcao != 4);

    return 0;
}