#include <stdio.h>

int main()
{
    int d[10], i, j, cont=0, x;

    for(i=0; i<10; i++){
        printf("Insira a posicao %d do vetor D: ", i);
        scanf("%d", &d[i]);
    }

    for(i=0; i<10; i++){
        if(d[i] <= 0){
            for(j=i; j<10; j++){
                d[j] = d[j+1];
            }
            i--;
            cont++;
        }
    }

    x = 10-cont;

    for(i=0; i<x; i++){
        printf("[D][%d]\n", d[i]);
    }

    return 0;
}