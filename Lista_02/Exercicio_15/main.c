#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, aumento, salarioNovo;
    int cargo;

    printf("Insira o codigo do cargo do funcionario: ");
    scanf("%d", &cargo);
    printf("Insira o salario desse funcionario: ");
    scanf("%f", &salario);

    if(cargo == 101){
        aumento = salario * 0.1;
    }else if(cargo == 102){
        aumento = salario * 0.2;
    }else if(cargo == 103){
        aumento = salario * 0.3;
    }else{
        aumento = salario * 0.4;
    }

    salarioNovo = salario + aumento;

    printf("Salario antigo: %.2f \nSalario novo: %.2f \nAumento: %.2f", salario, salarioNovo, aumento);

    return 0;
}
