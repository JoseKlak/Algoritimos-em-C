#include <stdio.h>
#include <stdlib.h>

int main()
{
    float blusas, novelos, novelosPorBlusa;

    printf("Quantas blusas foram feitas?: ");
    scanf("%f", &blusas);
    printf("Quantas novelos foram utilizados?: ");
    scanf("%f", &novelos);

    novelosPorBlusa = (novelos / blusas);

    printf("Cada blusa precisa de %.2f novelos para ser feita!!", novelosPorBlusa);

    return 0;
}
