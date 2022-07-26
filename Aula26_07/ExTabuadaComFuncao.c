#include <stdio.h>

int tabuada(int x)
{
    int resultado;

    for(int i=0; i<=10; i++)
    {
        resultado = i*x;
        printf("%d * %d = %d \n", x, i, resultado);
    }
}

void tabuada1ao10()
{
    for(int j=1; j<=10; j++)
    {
        tabuada(j);
    }
}

int main()
{
    tabuada1ao10();

    return 0;
}