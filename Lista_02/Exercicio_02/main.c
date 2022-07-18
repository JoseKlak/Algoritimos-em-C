#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Insira um numero para verificacao: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O numero eh Par");
    }else
        printf("O numero eh Impar");

    return 0;
}
