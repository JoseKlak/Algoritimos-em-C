#include <stdio.h>

// selection sort
/*int main() {

    int i, j, menor, aux, vet[10] = {7, 10, -14, 0, -1, -1, -40, 48, -2, 1};

    for(i=0; i<10; i++) {
        menor = i;
            for(j=i+1; j<10; j++) {
                if(vet[j] < vet[menor]) {
                    menor = j;
                }
            }

            if(menor != i) {
                aux = vet[i];
                vet[i] = vet[menor];
                vet[menor] = aux;
            }
            printf("%d ", vet[i]);
    }
    return 0;
}*/

// booble sort
int main() {

    int i, j, vet[10] = {7, 10, -14, 0, -1, -1, -40, 48, -2, 1};

    for(i=0; i<10; i++) {
        for(j=i; j<10; j++) {
            if(vet[i]<vet[j])
        }
    }

    return 0;
}