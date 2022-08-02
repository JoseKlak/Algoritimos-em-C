#include <stdio.h>

int main()
{
    int vet1[20], contPar=0, contImpar=0, contMaior=0, contMenor=0;

    for(int i=0; i<20; i++){
        printf("Insira o valor da pos %d:", i);
        scanf("%d", &vet1[i]);
        if(vet1[i] % 2 == 0)
            contPar++;
        if(vet1[i] % 2 != 0)
            contImpar++;
        if(vet1[i] > 50)
            contMaior++;
         if(vet1[i] < 7)
            contMenor++;
    }

    printf("Pares: %d\nImpares: %d\nMaiores que 50: %d\nMenores de 7: %d", contPar, contImpar, contMaior, contMenor);

    return 0;
}