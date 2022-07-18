#include <stdio.h>
#include <stdlib.h>

/*. O restaurante da questão 17 realiza reservas de mesas através de ligações telefônicas e possui 50
mesas disponíveis para reserva. Dessas mesas, 25 são na área de fumantes e 25 na área de não
fumantes. Para cada ligação recebida, o restaurante deve verificar se a reserva é para a mesa na
área de fumantes ou de não fumantes e contabilizar a quantidade de mesas restantes disponíveis
em cada área. Construa um algoritmo que realize a reserva das mesas e encerre a execução
quando não houver mais mesas disponíveis (nem na área de fumantes, nem na área de não
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
