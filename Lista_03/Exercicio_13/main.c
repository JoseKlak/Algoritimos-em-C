#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia uma sequência de números do usuário e realize a soma desses
números. Encerre a execução quando um número negativo for digitado*/

int main()
{
    float num, soma=0;
    int i=0;
    do{
        printf("Insira o %d numero para a soma \nOu um numero negativo para sair:  ", i+1);
        scanf("%f", &num);
        if(num>0)
        soma += num;
        i++;
    }while(num > 0);

    printf("A soma dos numeros: %f", soma);

    return 0;
}
