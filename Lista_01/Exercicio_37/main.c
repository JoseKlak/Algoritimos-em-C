#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, resultado;

    printf("Insira o valor que deseja ver a tabuada: ");
    scanf("%d", &x);

    for(int i = 0; i<10 ; i++){
        resultado = x * (i+1);
        printf("%d * %d = %d\n", x, (i+1), resultado);
    }

    return 0;
}
