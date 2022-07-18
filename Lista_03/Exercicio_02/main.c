#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que calcule o somatório dos números de um intervalo informado pelo
usuário.*/

int main()
{
    int n1, n2, soma=0;

    printf("Insira o comeco do intervalo para calculo: ");
    scanf("%d", &n1);
    printf("Insira o final do intervalo para calculo: ");
    scanf("%d", &n2);

    for(int i=n1; i<=n2; i++){
        soma += i;
    }

    printf("A soma dos valores nesse intervalo eh: %d", soma);

    return 0;
}
