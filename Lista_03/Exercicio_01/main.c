#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escreva um algoritmo que exiba 20 vezes a mensagem informando qual vez est� sendo escrita:
�Esta � a mensagem 1�, �Esta � a mensagem 2� ... �Esta � a mensagem 20�
*/

int main()
{
    char mensagem[100];

    printf("Insira a mensagem desejada: ");
    fgets(mensagem, 100, stdin);
    mensagem[strcspn(mensagem, "\n")]=0;

    for(int i=0; i<20; i++){
        printf("%s: %d\n", mensagem, i+1);
    }

    return 0;
}
