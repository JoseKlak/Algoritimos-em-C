#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Leia o nome e a idade de 10 pessoas e exiba o nome da pessoa mais nova.*/

int main()
{
    float idade, auxIdade = 9999;
    char nome[50], auxNome[50];

    for(int i=0; i<10; i++){
        printf("Insira o %d nome: ", i+1);
        fgets(nome, 50, stdin);
        printf("Insira a idade: ");
        scanf("%f", &idade);
        fflush(stdin);

        if(idade < auxIdade){
                auxIdade = idade;
            for(int j=0; j<50; j++){
                auxNome[j] = nome[j];
            }
        }
    }

    auxNome[strcspn(auxNome, "\n")]=0;
    printf("\n%s eh a pessoa mais nova!!!", auxNome);

    return 0;
}
