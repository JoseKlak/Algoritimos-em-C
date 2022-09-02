#include <stdio.h>

int main()
{
    FILE *arquivo = fopen("lei.txt","w");
    

    for(int i=0; i<200; i++){
        fprintf(arquivo, "GAYbriel 4 \n");
    }

    fclose(arquivo);

    return 0;
}