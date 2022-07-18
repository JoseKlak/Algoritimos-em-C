#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;

    printf("Insira o primeiro valor: ");
    scanf("%f", &x);
    printf("Insira o segundo valor: ");
    scanf("%f", &y);
    printf("Insira o terceiro valor: ");
    scanf("%f", &z);

    if(x < (y+z)){
        if(x == y && x == z)
            printf("Esses dados formam um triangulo equilatero!");
        else if(x == y || x == z || y == z)
            printf("Esses dados formam um triangulo isosceles!");
        else if(x != y && y != z && x!= z)
            printf("Esses dados formam um triangulo escaleno!");
    }
    else if(y < (x+z)){
        if(x == y && x == z)
            printf("Esses dados formam um triangulo equilatero!");
        else if(x == y || x == z || y == z)
            printf("Esses dados formam um triangulo isosceles!");
        else if(x != y && y != z && x!= z)
            printf("Esses dados formam um triangulo escaleno!");
    }
    else if(z < (x+y)){
        if(x == y && x == z)
            printf("Esses dados formam um triangulo equilatero!");
        else if(x == y || x == z || y == z)
            printf("Esses dados formam um triangulo isosceles!");
        else if(x != y && y != z && x != z)
            printf("Esses dados formam um triangulo escaleno!");
    }
    else printf("Os lados nao podem formar um triangulo!");

    return 0;
}
