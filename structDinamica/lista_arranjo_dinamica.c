#include <stdio.h>
#include <stdlib.h>
#include "lista_arranjo_dinamica.h"

int T = 10;

// inicializa uma lista
void inicia_lista(Lista *p_l) {
    p_l->tamAtual = T;
    p_l->qtdElem = 0;
    p_l->Arranjo = malloc(p_l->tamAtual * sizeof(Elemento));
}

// reinicia a lista
void reiniciar_lista(Lista *p_l) {
    free( p_l->Arranjo );
    inicia_lista(p_l);
}

// imprime os elementos da Lista
void imprime_lista(Lista *p_l) {
    int pos;
    for(pos=0; pos < p_l->qtdElem; pos++) {
        printf("\n%d ",p_l->Arranjo[pos].chave);
    }
}

// inserir elemento na lista a partir de uma posi��o
int inserirElemLista(Lista *p_l, Elemento ele, int pos_usu) {
    if( (pos_usu <0) || (pos_usu > p_l->qtdElem) )
        return 0; // falso, n�o foi poss�vel realizar a inser��o


    // tamanho n�o � suficiente
    if( p_l->qtdElem >= p_l->tamAtual ) {
        // 1) criar um arranjo com o dobro do tamanho
        Elemento *novo_arranjo = malloc( p_l->tamAtual*2 * sizeof(Elemento) );

        // 2) copiar o arranjo antigo para o novo
        for(int i=0;i< p_l->qtdElem ; i++) {
            novo_arranjo[i] = p_l->Arranjo[i];
        }

        // 3) liberar o arranjo antigo da mem�ria
        free(p_l->Arranjo);

        // 4) fazer o novo arranjo apontar para o arranjo antigo
        p_l->Arranjo = novo_arranjo;

        // 5) atuliza o tamanho atual
        p_l->tamAtual = p_l->tamAtual * 2; // p_l->tamAtual *= 2;

        printf("Log: aumentando o tamanho para %d\n", p_l->tamAtual);
    }

    int j;
    for(j=p_l->qtdElem; j > pos_usu; j--) {
        p_l->Arranjo[j] = p_l->Arranjo[j-1]; // desloca
    }

    p_l->Arranjo[j] =  ele;
    p_l->qtdElem++;

    return 1; // a inser��o ocorreu com sucesso
}


// inserir elemento ao final da lista
int inserirElemFinalLista(Lista *p_l, Elemento ele) {
    // tamanho n�o � suficiente
    if( p_l->qtdElem >= p_l->tamAtual ) {
        // 1) criar um arranjo com o dobro do tamanho
        Elemento *novo_arranjo = malloc( p_l->tamAtual*2 * sizeof(Elemento) );

        // 2) copiar o arranjo antigo para o novo
        for(int i=0;i< p_l->qtdElem ; i++) {
            novo_arranjo[i] = p_l->Arranjo[i];
        }

        // 3) liberar o arranjo antigo da mem�ria
        free(p_l->Arranjo);

        // 4) fazer o novo arranjo apontar para o arranjo antigo
        p_l->Arranjo = novo_arranjo;

        // 5) atuliza o tamanho atual
        p_l->tamAtual = p_l->tamAtual * 2; // p_l->tamAtual *= 2;

        printf("Log: aumentando o tamanho para %d\n", p_l->tamAtual);
    }

    if(p_l->qtdElem <= (0.2*p_l->tamAtual) && p_l->qtdElem > T) {

        Elemento *arranjo_menor = malloc( p_l->tamAtual*0.5 * sizeof(Elemento) );

        for(int i=0;i< p_l->qtdElem ; i++) {
            arranjo_menor[i] = p_l->Arranjo[i];
        }

        free(p_l->Arranjo);

        p_l->Arranjo = arranjo_menor;

        p_l->tamAtual = p_l->tamAtual * 0.5;

        printf("Log: DIMINUINDO o tamanho para %d\n", p_l->tamAtual);

    }

    p_l->Arranjo[p_l->qtdElem] = ele;
    p_l->qtdElem++;

    return 1; // sucesso na insercao
}

// retorna o tamanho utilizado da lista
int consultar_tamanho(Lista *p_l) {
    return p_l->qtdElem;
}

// remover um elemento de uma posi��o especificada pelo usu�rio
int removerElemPeloIndice(Lista *p_l, int pos_usu) {
    if( (pos_usu <0) || (pos_usu >= p_l->qtdElem) )
        return 0; // falso: posi��o invalida

    p_l->Arranjo[pos_usu] = p_l->Arranjo[p_l->qtdElem - 1];
    p_l->qtdElem--;

    return 1; // remocao concluida com sucesso
}

// retorna o indice do primeiro elemento encontrado
// caso n�o encontre retorna -1
int buscaSequencial(Lista *p_l, int chave) {
    int i;
    for(i=0; i< p_l->qtdElem; i++)
        if(p_l->Arranjo[i].chave == chave)
            return i; // retorna o indice do elemento encontrado

    return -1; // elemento n�o encontrado
}


// remove elemento baseado na chave
int removerElemPelaChave(Lista *p_l, int chave) {
    return removerElemPeloIndice(p_l, buscaSequencial(p_l, chave));
}
