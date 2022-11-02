#include <stdio.h>
#include "lista_arranjo_dinamica.c"

/*int main() {
    Lista teste;
    inicia_lista(&teste);
    Elemento aux;

    for(int i=0;i<50;i++) {
        aux.chave = i;
        inserirElemFinalLista(&teste,aux);
    }


    //printf("Quantiade de elementos: %d\n", consultar_tamanho(&teste));
    imprime_lista(&teste);


    return 0;
}*/

int main() {
    Lista rogerin;
    inicia_lista(&rogerin);
    Elemento meEmpresta;

    for(int i=0; i<200; i++) {
        meEmpresta.chave = i;
        inserirElemFinalLista(&rogerin, meEmpresta);
    }

    //imprime_lista(&rogerin);

    for(int i=0; i<190; i++) {
        removerElemPeloIndice(&rogerin, 0);
    }

    imprime_lista(&rogerin);

     for(int i=0; i<3; i++) {
        meEmpresta.chave = i;
        inserirElemFinalLista(&rogerin, meEmpresta);
    }

    imprime_lista(&rogerin);


    return 0;
}
