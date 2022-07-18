#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia 20 números informados pelo usuário e exiba quantos números são
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
