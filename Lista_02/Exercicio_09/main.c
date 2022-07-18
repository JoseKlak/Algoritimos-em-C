#include <stdio.h>
#include <stdlib.h>

int main()
{
    int identificacao;
    float nota1, nota2, nota3, media;

    printf("Insira o numero de identificacao do aluno: ");
    scanf("%d", &identificacao);
    printf("Insira a nota 1 (0 a 100): ");
    scanf("%f", &nota1);
    printf("Insira a nota 2 (0 a 100): ");
    scanf("%f", &nota2);
    printf("Insira a nota 3 (0 a 100): ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 60){
        printf("Aprovado");
    }else if(media >= 40){
        printf("Ficou de recuperacao");
    }else
        printf("Reprovado");

    return 0;
}
