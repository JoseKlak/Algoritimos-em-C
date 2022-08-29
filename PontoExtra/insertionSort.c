#include <stdio.h>

int main() 
{
    int vet[10] = {4, 18, 6, 3, 8, 1, -4, 48, 0, -14}, i, j, aux;

    for(i = 1; i < 10; i++) {
        aux = vet[i];
        for(j = i-1; j >= 0 && aux < vet[j]; j--) {
            vet[j+1] = vet[j];
        }
            vet[j+1] = aux;
    }

    printf("\nVetor ordenado: ");

    for (i = 0; i < 10; i++) {
        printf(" %d", vet[i]);
    }

    return 0;
}