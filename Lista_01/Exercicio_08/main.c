#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Insira a nota1 do aluno: ");
    scanf("%f", &nota1);
    printf("Insira a nota2 do aluno: ");
    scanf("%f", &nota2);
    printf("Insira a nota3 do aluno: ");
    scanf("%f", &nota3);

    media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3))/6;

    printf("A media ponderada do aluno eh: %.2f", media);

    return 0;
}
