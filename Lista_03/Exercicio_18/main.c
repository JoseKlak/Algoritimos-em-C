#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida,
a. para cada aluno, leia a informa��o de suas 2 notas, calcule a m�dia e informe se o
b. aluno est� aprovado ou reprovado. O aluno est� aprovado apenas se a sua m�dia for maior
ou igual a 6.*/

int main()
{
    int alunos;
    float nota1, nota2, media;

    printf("Quantos alunos tem na sala?: ");
    scanf("%d", &alunos);

    for(int i=0; i<alunos; i++){
        printf("Insira a nota 1 do aluno %d (0 a 100): ", i+1);
        scanf("%f", &nota1);
        printf("Insira a nota 2 do aluno %d (0 a 100): ", i+1);
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        if(media >= 60){
            printf("\nAPROVADO!!!\n\n");
        }else printf("\nREPROVADO!!!\n\n");
    }

    return 0;
}
