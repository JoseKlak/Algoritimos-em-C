#include <stdio.h>

int main()
{
    int r[5], s[10], x[5], cont=0, i, j;

    for(i=0; i<5; i++){
        printf("Insira a pos %d do vetor R: ", i);
        scanf("%d", &r[i]);
    }

    for(i=0; i<10; i++){
        printf("Insira a pos %d do vetor S: ", i);
        scanf("%d", &s[i]);
    }

    for(i=0; i<5; i++){
        for(j=0; j<10; j++){
            if(r[i] == s[j]){
                x[cont] = r[i];
                cont++;
                i++;
            }
        }
    }

    for(i=0; i<cont; i++){
        printf("[X][%d]\n", x[i]);
    }

    return 0;
}