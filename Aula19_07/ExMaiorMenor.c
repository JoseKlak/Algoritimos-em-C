#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10], i, menor, maior;

    for(i=0; i<10; i++)
    {
        printf("Insira o valor %d: ", i+1);
        scanf("%d", &vet[i]);
        if(i == 0)
        {
            menor = vet[i];
            maior = vet[i];
        }
        if(vet[i] < menor)
            menor = vet[i];
        if(vet[i] > maior)
            maior = vet[i];
    }

    printf("\nO maior numero eh: %d\nO menor numero eh: %d", maior, menor);

    return 0;
}