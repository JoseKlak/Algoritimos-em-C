#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, resultado;

    printf("Insira um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        resultado = num + 5;
    }else
        resultado = num + 8;

        printf("O resultado eh: %d", resultado);

    return 0;
}
