#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, resultado;

    printf("Insira o valor A: ");
    scanf("%f", &a);
    printf("Insira o valor B: ");
    scanf("%f", &b);

    if(a == b){
       resultado = a + b;
    }else{
        resultado = a * b;
    }

    printf("O resultado eh: %.2f", resultado);

    return 0;
}
