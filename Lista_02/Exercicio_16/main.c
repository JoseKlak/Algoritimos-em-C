#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldoMedio, credito;

    printf("Insira o saldo medio do cliente: ");
    scanf("%f", &saldoMedio);

    if((saldoMedio >= 0)&&(saldoMedio <= 200)){
        credito = 0;
    }else if((saldoMedio >= 201)&&(saldoMedio <= 400)){
        credito = saldoMedio * 0.2;
    }else if((saldoMedio >= 401)&&(saldoMedio <= 600)){
        credito = saldoMedio * 0.3;
    }else if(saldoMedio > 600){
        credito = saldoMedio * 0.4;
    }else{
        printf("Saldo invalido");
    }

    printf("Saldo medio: %.2f\nValor de credito: %.2f", saldoMedio, credito);

    return 0;
}
