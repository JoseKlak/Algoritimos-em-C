#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero:  ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if((a <= b) && (a <= c))
    {
        printf("%d ", a);
        if(b < c)
        {
            printf("%d %d", b, c);
        }
        else
            printf("%d %d", c, b);
    }
    else if((b <= a) && (b <= c))
    {
        printf("%d ", b);
        if(a < c)
        {
            printf("%d %d", a, c);
        }
        else
            printf("%d %d", c, a);
    }
    else if((c <= b) && (c <= a))
    {
        printf("%d ", c);
        if(a < b)
        {
            printf("%d %d", a, b);
        }
        else
            printf("%d %d", b, a);
    }

    return 0;
}
