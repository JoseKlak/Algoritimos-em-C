#include <stdio.h>

struct livros
{
    int idLivro;
    char nome[50];
    char editora[50];
};

int main(){

    int i;
    struct livros livro[5];

    for(i=0; i<5; i++){
        printf("Insira o ID do livro %d: ", i+1);
        scanf("%d", &livro[i].idLivro);
        fflush(stdin);
        printf("Insira o nome do livro %d: ", i+1);
        gets(livro[i].nome);
        printf("Insira a editora do livro %d: ", i+1);
        gets(livro[i].editora);
    }

    for(i=0; i<5; i++){
        printf("\nLivro %d\n", i+1);
        printf("Id: \t\t%d\nNome: \t\t%s\nEditora: \t%s\n", livro[i].idLivro, livro[i].nome, livro[i].editora);
    }

    return 0;
}