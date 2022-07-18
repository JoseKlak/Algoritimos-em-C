#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, pesoIdeal;
    char sexo;

    printf("Insira seu sexo, m = masculino, f = feminino: ");
    scanf("%c", &sexo);
    printf("Insira sua altura em m: ");
    scanf("%f", &altura);

    if(sexo == 'm'){
        pesoIdeal = (72.7 * altura) - 58;
    }else if (sexo == 'f'){
        pesoIdeal = (62.1 * altura) - 44.7;
    }else
        pesoIdeal = 0;

        printf("Seu peso ideal eh: %.2f", pesoIdeal);

    return 0;
}
