#include <stdio.h>

int main()
{
    int vet[10], i, j, cont=0, aux;

    for(i=0; i<10; i++){
        printf("Insira o valor da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    for(i=0; i<10; i++){
        for(j=0; j<(10-cont); j++){
            if(vet[j]>vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
        cont++;
    }

    for(i=0; i<10; i++){
        printf("[%d] [%d]\n", i, vet[i]);
        
    }

    return 0;
}