#include <stdio.h>

void ler(int vet[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        scanf("%d", &vet[i]);
    }
}

void printa(int vet[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("posicao %d: %d\n", i, vet[i]);
    }
}

void zera(int vet[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        vet[i] = 0;
    }
}

int maiorElemento(int vet[], int tam)
{
    int x=-99999;

    for(int i=0; i<tam; i++)
    {
        if(vet[i] >= x)
            x = vet[i];
    }

    return x;
}

int menorElemento(int vet[], int tam)
{
    int x=99999;

    for(int i=0; i<tam; i++)
    {
        if(vet[i] <= x)
            x = vet[i];
    }

    return x;
}

double mediaVetor(int vet[], int tam)
{
    int x=0, media;

    for(int i=0; i<tam; i++)
    {
        x += vet[i];
    }

    media = x/tam;

    return media;
}

int main()
{
    int vet[10];

    ler(vet, 10);
    printa(vet, 10);

    printf("\nMaior: %d", maiorElemento(vet, 10));
    printf("\nMenor: %d", menorElemento(vet, 10));
    printf("\nMedia: %lf", mediaVetor(vet, 10));

    return 0;
}