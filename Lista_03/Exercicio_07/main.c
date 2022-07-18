#include <stdio.h>
#include <stdlib.h>

/*Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade*/

int main()
{
    float idade[20];
    int aux;

    for(int i=0; i<20; i++){
        printf("Insira o idade da %d pessoa: ", i+1);
        scanf("%f", &idade[i]);
        if(idade[i] >= 18){
            aux++;
        }
    }

    printf("%d sao maiores de idade!", aux);

    return 0;
}
