#include <stdio.h>
#include <stdlib.h>

/*. Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um número inteiro informado
pelo usuário.
*/

int main()
{
    int fat, aux;

    printf("Insira o numero que deseja o fatorial: ");
    scanf("%d", &aux);

    fat = aux;

    for(int i=aux; i>1; i--){
        fat *= (i-1);
    }

    printf("O fatorial de %d eh: %d", aux, fat);

    return 0;
}
