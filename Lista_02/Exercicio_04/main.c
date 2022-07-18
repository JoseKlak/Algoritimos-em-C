#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, resultado;

    printf("Insira um numero: ");
    scanf("%f", &a);

    if(a >= 0){
       resultado = a * 2;
    }else{
        resultado = a * 3;
    }

    printf("O resultado eh: %.2f", resultado);

    return 0;
}
