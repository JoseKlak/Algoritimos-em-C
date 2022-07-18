#include <stdio.h>
#include <stdlib.h>

/*. Em um restaurante Self-Service, o preço do quilo custa R$ 23,59. Crie um algoritmo
que, para cada cliente, leia o peso do prato e valor gasto com bebida e calcule o valor total
da conta que o cliente irá pagar [ valor da conta = bebida + (peso * 15) ]. Só encerre a
execução quando o peso do prato digitado for igual a 0 e o valor da bebida for também igual
a 0*/

int main()
{
    float peso = 0, bebida = 0, total = 0;

    do{
        printf("Insira o peso do prato: ");
        scanf("%f", &peso);
        printf("Insira o valor gasto com bebida: ");
        scanf("%f", &bebida);

        total = bebida + (peso * 23.59);

        printf("O valor total: %.2f\n", total);

    }while(peso != 0 || bebida != 0);

    return 0;
}
