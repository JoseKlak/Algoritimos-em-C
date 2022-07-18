#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Insira um numero: ");
    scanf("%d", &x);

    if(((x % 2 == 0) && (x > 10)) || (x % 2 != 0) && (x < 50)){
        printf("SIM");
    }else
        printf("NAO");

    return 0;
}
