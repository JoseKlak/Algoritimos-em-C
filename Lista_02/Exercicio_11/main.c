#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qntHoras, salario;
    int nivel;

    printf("Insira o nivel do professor (1, 2 ou 3): ");
    scanf("%d", &nivel);
    printf("Quantas horas aula tem na semana?: ");
    scanf("%f", &qntHoras);

    if(nivel == 1){
        salario = 12 * qntHoras * 4.5;
    }else if(nivel == 2){
        salario = 17 * qntHoras * 4.5;
    }else if(nivel == 3){
        salario = 25 * qntHoras * 4.5;
    }

    printf("Salario: %.2f", salario);

    return 0;
}
