#include <stdio.h>
#include <stdlib.h>

/*Leia a idade de 20 pessoas e exiba a média das idades*/

int main()
{
    float idade[20], soma=0, media;

    for(int i=0; i<20; i++){
        printf("Insira o idade da %d pessoa: ", i+1);
        scanf("%f", &idade[i]);
        soma += idade[i];
    }

    media = soma/20;

    printf("A media das idades eh: %f anos", media);

    return 0;
}
