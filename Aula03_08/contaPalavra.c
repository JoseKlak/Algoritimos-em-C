#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int contarPalavras(char texto[]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    // vari�veis locais a main
    int TAM = 200;
    char texto[TAM];

    printf("Digite um texto: ");
    gets(texto);

    printf("O n�mero de palavras � de: %d\n", contarPalavras(texto)  );

    return 0;
}

int contarPalavras(char texto[]) {
    int posicao = 0; // posi��o que estou avaliando
    int numPalavras = 0; // n�m. de palavras encontradas.
    int tamUtil; // cont�m a posi��o do \0
    int encontrouLetra; // vari�vel indicadora para verificar se foi encontrado uma ou mais letras

    tamUtil = strlen(texto);

    while(posicao < tamUtil) {
        encontrouLetra = 0; // assume que n�o tem letras

        // ignora os espa�os em branco
        while(posicao < tamUtil && texto[posicao] == ' ') {
            posicao++;
        }

        // pular as letras at� o pr�ximo espa�o em branco ou fim
        while(posicao < tamUtil && toupper(texto[posicao]) >= 'A' && toupper(texto[posicao]) <= 'Z') {
            posicao++;
            encontrouLetra = 1;
        }

        // vari�vel indicadora para verificar se letras foram encontradas
        if(encontrouLetra == 1) {
            numPalavras++;
        }
   }

   return numPalavras;
}
