#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, cem = 0, cinquenta = 0, dez = 0, cinco = 0, um = 0, resto;

    printf("Insira um valor inteiro em reais: ");
    scanf("%d", &valor);

    resto = valor;

    if(valor >= 100){
        cem = valor / 100;
        resto = valor % 100;
    }if(resto >= 50){
        cinquenta = resto / 50;
        resto = resto % 50;
    }if(resto >= 10){
        dez = resto / 10;
        resto = resto % 10;
    }if(resto >= 5){
        cinco = resto / 5;
        resto = resto % 5;
    }if(resto >= 1){
        um = resto / 1;
    }

    printf("\nValor total: %d\n\n", valor);
    printf("Notas de 100: %d\n", cem);
    printf("Notas de 50: %d\n", cinquenta);
    printf("Notas de 10: %d\n", dez);
    printf("Notas de 5: %d\n", cinco);
    printf("Notas de 1: %d\n", um);

    return 0;
}
