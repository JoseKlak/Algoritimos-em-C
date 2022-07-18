#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia 10 números informados pelo usuário e calcule a soma desses
números*/

int main()
{
    float num[10], soma=0;

    for(int i=0; i<10; i++){
        printf("Insira o %d valor: ", i+1);
        scanf("%f", &num[i]);
        soma += num[i];
    }

    printf("A soma total eh: %f", soma);

    return 0;
}
