#include <stdio.h>

int main()
{
    int vet[10], maior, menor, maiorPos, menorPos;

    for(int i=0; i<10; i++){
        printf("Insira a idade da pessoa %d: ", i);
        scanf("%d", &vet[i]);
        if(i == 0){
            maior = vet[i];
            menor = vet[i];
            maiorPos = i;
            menorPos = i;
        }else if(vet[i] > maior){
            maior = vet[i];
            maiorPos = i;
        }else if(vet[i] < menor){
            menor = vet[i];
            menorPos = i;
        }
    }

    printf("Menor: %d\tPosicao menor: %d\nMaior: %d\tPosicao maior: %d", menor, menorPos, maior, maiorPos);

    return 0;
}