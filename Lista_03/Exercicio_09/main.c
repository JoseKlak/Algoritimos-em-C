#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia 20 n�meros informados pelo usu�rio e exiba quantos n�meros s�o
maiores do que 8*/

int main()
{
    int cont=0;
    float num;

    for(int i=0; i<20; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%f", &num);
        if(num > 8){
            cont++;
        }
    }

    printf("%d numeros sao maiores do que 8", cont);

    return 0;
}
