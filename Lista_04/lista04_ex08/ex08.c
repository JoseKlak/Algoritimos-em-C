#include <stdio.h>

int main()
{
    int r[5], a[10], cont=0, i, j;

    for(i=0; i<5; i++){
        printf("Insira a pos %d do vetor RESPOSTA: ", i);
        scanf("%d", &r[i]);
    }

    for(i=0; i<10; i++){
        printf("Insira a pos %d do vetor APOSTA: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++){
        for(j=0; j<10; j++){
            if(r[i] == a[j]){
                cont++;
                i++;
            }
        }
    }

        printf("Acertou %d numeros", cont);

    return 0;
}