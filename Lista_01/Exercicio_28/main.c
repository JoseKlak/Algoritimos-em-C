#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media;

    printf("Insira a nota 1: ");
    scanf("%f", &nota1);
    printf("Insira a nota 2: ");
    scanf("%f", &nota2);

    media = ((nota1 * 2) + (nota2 * 3)) / 5;

    printf("A media ponderada das duas notas sao: %.2f", media);

    return 0;
}
