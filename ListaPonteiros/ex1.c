#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[80];
    double preco;
    int quantidade;
};

void printStruct(struct Produto vet[], int n) {

    for(int i = 0; i < n; i++) {
        printf("Produto %d \n", i+1);
        printf("Nome: %s \n", vet[i].nome);
        printf("Preco: %.2lf \n", vet[i].preco);
        printf("Quant: %d \n\n", vet[i].quantidade);
    }
}

void ordenaPreco(struct Produto vet[], int n) {

    int i, j;
    struct Produto tmp;

    for(i = 1; i < n; i++)
    {
        tmp = vet[i];
            for(j = i-1; j >= 0 && tmp.preco < vet[j].preco; j--)
            {
                vet[j+1] = vet[j];
            }
        vet[j+1] = tmp;
    }
    printStruct(vet, n);
}


void ordenaQuant(struct Produto vet[], int n) {

    int i, j;
    struct Produto tmp;

    for(i = 1; i < n; i++)
    {
        tmp = vet[i];
            for(j = i-1; j >= 0 && tmp.quantidade < vet[j].quantidade; j--)
            {
                vet[j+1] = vet[j];
            }
        vet[j+1] = tmp;
    }
    printStruct(vet, n);
}

int main() 
{
    struct Produto vet[3];
    
    strcpy(vet[0].nome, "arroz");
    vet[0].preco = 10;
    vet[0].quantidade = 2;

    strcpy(vet[1].nome, "feijao");
    vet[1].preco = 12;
    vet[1].quantidade = 1;

    strcpy(vet[2].nome, "macarrao");
    vet[2].preco = 8;
    vet[2].quantidade = 9;

    printf("Ordenando por preço: ");
    ordenaPreco(vet, 3);
    printf("Ordenando por quantidade: ");
    ordenaQuant(vet, 3);

    return 0;
}