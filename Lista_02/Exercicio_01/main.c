#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;

    printf("Insira o valor A: ");
    scanf("%f", &a);
    printf("Insira o valor B: ");
    scanf("%f", &b);

    if(a > b){
          printf("O maior numero eh o A: %.2f", a);
    }else if (b > a){
          printf("O maior numero eh o B: %.2f", b);
    }else if(b == a)
        printf("Os numeros sao iguais");

    return 0;
}
