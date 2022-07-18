#include <stdio.h>
#include <stdlib.h>

/*envolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar :
a. A menor altura do grupo;
b. A maior altura do grupo; */

int main()
{
    float altura[15], menor = 9999, maior = 0;

    for(int i=0; i<15; i++)
    {
        printf("Insira a altura da pessoa %d: ", i+1);
        scanf("%f", &altura[i]);
        if(altura[i] < menor)
        {
            menor = altura[i];
        }
        if(altura[i] > maior)
        {
            maior = altura[i];
        }

    }

    printf("O maior do grupo eh: %.2f\n", maior);
    printf("O menor do grupo eh: %.2f\n", menor);

    return 0;
}
