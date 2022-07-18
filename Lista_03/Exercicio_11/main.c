#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100.*/

int main()
{
    int cont=0, num;

    for(int i=0; i<20; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num);
        if(num>=0 && num<=100){
            cont++;
        }
    }

    printf("%d estao entre 0 e 100", cont);

    return 0;
}
