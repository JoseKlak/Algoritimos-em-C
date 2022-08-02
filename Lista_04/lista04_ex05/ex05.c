#include <stdio.h>

int main()
{
    int vetA[10], i, soma=0, cont=0, somaMedia=0, media=0, contMaior=0;

    for(i=0; i<10; i++){
        printf("Insira o valor da pos %d: ", i);
        scanf("%d", &vetA[i]);
        if(vetA[i]<15)
            soma += vetA[i];
        else if(vetA[i]==15)
            cont++;
        else{
            somaMedia += vetA[i];
            contMaior++;
        }
    } 

    media = somaMedia/contMaior;

    printf("\nSoma dos menores que 15: %d\nQuantidade de elementos = 15: %d\nMedia dos elementos maiores de 15: %d\n", soma, cont, media);

    return 0;
}