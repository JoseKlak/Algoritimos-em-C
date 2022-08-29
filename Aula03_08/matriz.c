#include <stdio.h>

float mediaMatriz(int x){
    int i, j;
    float soma=0, media, matriz[x][x];

    for(i=0; i<x; i++){
        for(j=0; j<x; j++){
            printf("Insira [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    media = soma/(x*x);

    return media;
}

void somarMatrizes(int x){
    int i, j;
    float matriz1[x][x], matriz2[x][x], matriz3[x][x];

    for(i=0; i<x; i++){
        for(j=0; j<x; j++){
            printf("Insira a matriz 1 [%d][%d]: ", i, j);
            scanf("%f", &matriz1[i][j]);
        }
    }
    for(i=0; i<x; i++){
        for(j=0; j<x; j++){
            printf("Insira a matriz 2 [%d][%d]: ", i, j);
            scanf("%f", &matriz2[i][j]);
            matriz3[i][j] = (matriz1[i][j] + matriz2[i][j]);
        }
    }
    for(i=0; i<x; i++){
        for(j=0; j<x; j++){
            printf("matriz soma [%d][%d]: %f.2\n", i, j, matriz3[i][j]);
        }
    }

}

int main()
{

    somarMatrizes(3);

    return 0;
}