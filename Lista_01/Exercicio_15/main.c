#include <stdio.h>
#include <stdlib.h>

int main()
{
    float conta, felipe;
    int carlos, andre;

    printf("Insira o valor final da conta: ");
    scanf("%f", &conta);

    carlos = (conta / 3);
    andre = carlos;
    felipe = conta - carlos - andre;

    printf("Carlos vai pagar: %.2f\nAndre vai pagar: %.2f\nFelipe vai pagar: %.2f", (float)carlos, (float)andre, felipe);

    return 0;
}
