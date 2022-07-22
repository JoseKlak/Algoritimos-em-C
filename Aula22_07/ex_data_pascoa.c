#include <stdio.h>

int main()
{
    int y, g, c, x, z, e, d, n, dia, mes;

    printf("Insira o ano que deseja saber a data da pascoa!: ");
    scanf("%d", &y);

    g = (y % 19) + 1;
    c = (y / 100) + 1;
    x = ((3 * c) / 4) - 12;
    z = (((8 * c) + 5) / 25) - 5;
    e = ((11 * g + 20 + z - x) % 30);
    if((e == 25 && g > 11) || (e == 24))
        e = e + 1;
    n = 44 - e;
    if(n < 21)
        n = n + 30;
    d = (((5 * y) / 4) - (x + 10));
    n = (n + 7) - ((d + n) % 7);
    if(n > 31){
        dia = n - 31;
        mes = 4;
    }else{
        dia = n;
        mes = 3;
    }

    printf("Pascoa: %d de %d de %d", dia, mes, y);

    return 0;
}