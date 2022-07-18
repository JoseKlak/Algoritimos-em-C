#include <stdio.h>
#include <stdlib.h>

/*. O restaurante da quest�o 17 realiza reservas de mesas atrav�s de liga��es telef�nicas e possui 50
mesas dispon�veis para reserva. Dessas mesas, 25 s�o na �rea de fumantes e 25 na �rea de n�o
fumantes. Para cada liga��o recebida, o restaurante deve verificar se a reserva � para a mesa na
�rea de fumantes ou de n�o fumantes e contabilizar a quantidade de mesas restantes dispon�veis
em cada �rea. Construa um algoritmo que realize a reserva das mesas e encerre a execu��o
quando n�o houver mais mesas dispon�veis (nem na �rea de fumantes, nem na �rea de n�o
fumantes)*/

int main()
{
    int fumantes = 25, naoFumantes = 25, aux;

    do{
        printf("O lugar a ser reservado eh na area de fumante (digite 1) ou nao fumante (digite 2): ");
        scanf("%d", &aux);
        if(aux == 1){
            fumantes--;
        }else if(aux == 2){
            naoFumantes--;
        }
        printf("Ainda temos %d mesas para fumantes, e %d mesas para nao fumantes!\n", fumantes, naoFumantes);

    }while((fumantes != 0) || (naoFumantes != 0));

    return 0;
}
