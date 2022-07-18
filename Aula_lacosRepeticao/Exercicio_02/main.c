#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i=0, resultado = 1, aux;

    printf("Insira 'a': ");
    scanf("%d", &a);
    printf("Insira 'b': ");
    scanf("%d", &b);

    while(i < b){
        resultado *= a;
        i++;
    }

    printf("Resultado: %d", resultado);

    return 0;
}
