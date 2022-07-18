#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, resultado = 0;

    printf("Insira o valor de 'n': ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++){
        resultado = resultado + i;
    }

    printf("Resultado: %d", resultado);

    return 0;
}
