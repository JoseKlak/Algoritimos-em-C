#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e
100, quantos estão entre 101 e 200 e quantos são maiores de 200.*/

int main()
{
    int cont1=0, cont2=0, cont3=0, num;

    for(int i=0; i<20; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num);
        if(num>=0 && num<=100){
            cont1++;
        }else if(num>100 && num<=200){
            cont2++;
        }else if(num>200){
            cont3++;
        }
    }

    printf("%d estao entre 0 e 100\n", cont1);
    printf("%d estao entre 101 e 200\n", cont2);
    printf("%d sao maiores de 200\n", cont3);

    return 0;
}
