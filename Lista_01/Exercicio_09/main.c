#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pequena, media, grande, valorFinal;

    printf("Quantas camisetas P foram vendidas: ");
    scanf("%d", &pequena);
    printf("Quantas camisetas M foram vendidas: ");
    scanf("%d", &media);
    printf("Quantas camisetas G foram vendidas: ");
    scanf("%d", &grande);

    valorFinal = (pequena * 10) + (media * 12) + (grande * 15);

    printf("O valor final das camisetas em reais sao: %d", valorFinal);

    return 0;
}
