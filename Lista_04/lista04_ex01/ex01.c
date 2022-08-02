#include <stdio.h>

int main()
{
    int vet1[10], vet2[10], vet3[10];

    for(int i=0; i<10; i++){
        printf("Insira o vetor 1 pos %d:", i);
        scanf("%d", &vet1[i]);
    }

    for(int i=0; i<10; i++){
        printf("Insira o vetor 2 pos %d:", i);
        scanf("%d", &vet2[i]);
    }

    for(int i=0; i<10; i++){
        vet3[i] = vet1[i] + vet2[i];
        printf("Vet3 pos %d: %d\n", i, vet3[i]);
    }

    return 0;
}