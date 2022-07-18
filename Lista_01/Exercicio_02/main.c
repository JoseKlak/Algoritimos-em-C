#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidadeCavalos;

    printf("Insira a quantidade de cavalos existentes no haras: ");
    scanf("%d", &quantidadeCavalos);

    printf("Voce vai precisar de %d ferraduras para equipar todos os cavalos do haras", quantidadeCavalos * 4);

    return 0;
}
