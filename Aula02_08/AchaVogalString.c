#include <stdio.h>
#include <string.h>

int contaVogal(char str[], int tam){
    int contVogal=0;

    for(int i=0; i<tam; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            contVogal++;
        }

    return contVogal;
}

int contaConsoante(char str[], int tam){
    int contConsoante=0;

    for(int i=0; i<tam; i++){
        if(str[i]>='a' && str[i]<='z'){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
            contConsoante++;
             }
        }

    return contConsoante;
}

int main()
{
    char str[500];
    int contVogal=0, contConsoante=0, contEspaco=0, i, tam;

    printf("Insira sua string: ");
    gets(str);

    tam = strlen(str);

    printf("Vogais: %d\nConsoante: %d\n", contaVogal(str, tam), contaConsoante(str, tam));

    return 0;
}