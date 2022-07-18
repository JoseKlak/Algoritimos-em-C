#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero:  ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    if((a > b)&&(a > c) || ((b > a)&&(b > c) || (c > a)&&(c > b))){
        if((a > b)&&(a > c)){
            printf("o maior numero eh o primeiro!!!");
        }if((b > a)&&(b > c)){
            printf("o maior numero eh o segundo!!!");
        }if((c > a)&&(c > b)){
            printf("o maior numero eh o terceiro!!!");
        }
    }else
        printf("Nao tem apenas um maior numero!!!");

    return 0;
}
