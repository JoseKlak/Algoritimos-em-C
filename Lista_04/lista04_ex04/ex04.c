#include <stdio.h>

int main()
{
    int vetA[10], vetB[10], vetC[10], i;

    for(i=0; i<10; i++){
        printf("Insira vetA  pos %d: ", i);
        scanf("%d", &vetA[i]);
    }

    for(i=0; i<10; i++){
        printf("Insira vetB  pos %d: ", i);
        scanf("%d", &vetB[i]);
    }

    for(i=0; i<10; i++){
        vetC[i] = vetA[i] + vetB[i];
        printf("vetC pos %d: %d\n", i, vetC[i]);
    }

    return 0;
}