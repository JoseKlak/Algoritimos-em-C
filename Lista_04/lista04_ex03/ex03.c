#include <stdio.h>

int main()
{
    int vetA[8], vetB[8], i;

    for(i=0; i<8; i++){
        printf("Insira a pos %d: ", i);
        scanf("%d", &vetA[i]);
    }

    for(i=0; i<8; i++){
        vetB[i] = vetA[i] * 2;
        printf("vetB pos %d: %d\n", i, vetB[i]);
    }

    return 0;
}