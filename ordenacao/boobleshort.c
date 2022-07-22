#include <stdio.h>

int main()
{
    int i, j, aux, vet[] = {1, 40, -71, -8, 95, 100};
    int tam = sizeof(vet)/sizeof(int);

    for(j=tam; j>=0; j--)
    {
        for(i=0; i<tam; i++)
        {
            if(vet[i] > vet[i+1])
            {
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
    }

    for(i=0; i<tam; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}