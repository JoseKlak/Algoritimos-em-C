#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int contarPalavras(char texto[]);
int encontraPalavras(char texto[], char palavra[]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    // vari�veis locais a main
    int TAM = 200;
    char texto[TAM], palavra[30];

    printf("Digite um texto: ");
    gets(texto);

    printf("Digite a palavra que deseja buscar: ");
    gets(palavra);

    printf("A posicao da palavra eh: %d\n", encontraPalavras(texto, palavra));

    return 0;
}

int encontraPalavras(char texto[], char palavra[]){

    int posicao = -1, i, j=0, tam1, tam2, cont=0, flag;

    tam1 = strlen(texto);
    tam2 = strlen(palavra);

    for(i=0; i<tam1; i++){
        if(palavra[0] == texto[i]){
            flag = i;
            while(j<tam2){
                if(palavra[j] == texto[i]){
                    cont++;
                    j++;
                    i++;
                }
            }
        }
    }

    if(cont == tam2){
        posicao = flag;
    }

    return posicao;
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
