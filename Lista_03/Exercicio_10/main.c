#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia 20 n�meros informados pelo usu�rio e exiba quantos n�meros s�o
pares*/

int main()
{
    int cont=0, num;

    for(int i=0; i<20; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num);
        if(num % 2 == 0){
            cont++;
        }
    }

    printf("%d numeros sao pares", cont);

    return 0;
}
