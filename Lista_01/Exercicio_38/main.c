#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoNascimento, anoAtual, anos, mes, semanas, dias;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anos = anoAtual - anoNascimento;


    return 0;
}
