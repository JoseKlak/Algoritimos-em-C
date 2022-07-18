#include <stdio.h>
#include <stdlib.h>

int main()
{
    float um, cinco, dez, vinteCinco, cinquenta, real, total;

    printf("Insira a quantidade de moedas de 1 centavo: ");
    scanf("%f", &um);
    printf("Insira a quantidade de moedas de 5 centavos: ");
    scanf("%f", &cinco);
    printf("Insira a quantidade de moedas de 10 centavos: ");
    scanf("%f", &dez);
    printf("Insira a quantidade de moedas de 25 centavos: ");
    scanf("%f", &vinteCinco);
    printf("Insira a quantidade de moedas de 50 centavos: ");
    scanf("%f", &cinquenta);
    printf("Insira a quantidade de moedas de 1 real: ");
    scanf("%f", &real);

    total = ((um*0.01) + (cinco*0.05) + (dez*0.1) + (vinteCinco*0.25) + (cinquenta*0.5) + (real*1));

    printf("O valor total economizado: %.2f", total);

    return 0;
}
