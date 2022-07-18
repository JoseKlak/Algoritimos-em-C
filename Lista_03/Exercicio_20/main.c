#include <stdio.h>
#include <stdlib.h>

/*Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
animais da loja e, para cada animal, leia a informa��o da esp�cie do animal (se � gato ou
cachorro). Ao final, exiba a quantidade de animais que s�o gatos e a quantidade de animais que
s�o cachorros existentes na loja*/

int main()
{
    int gatos = 0, cachorro = 0, animais, aux;

    printf("Quantos animais tem na loja?: ");
    scanf("%d", &animais);

    for(int i=0; i<animais; i++){
        printf("O %d animal eh gato(1) ou cachorro(2)?: ", i+1);
        scanf("%d", &aux);

        if(aux == 1){
            gatos++;
        }else if(aux == 2){
            cachorro++;
        }
    }

    printf("Na loja tem %d gatos\nE %d cachorros", gatos, cachorro);

    return 0;
}
