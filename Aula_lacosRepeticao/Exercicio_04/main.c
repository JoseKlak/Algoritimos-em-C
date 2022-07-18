#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Insira 'n': ");
    scanf("%d", &n);

    if(n <= 2){
        printf("Nao existem valores entre 2 e 'n'!!!");
    }else{
        for(int i=2; i<=n; i++){
            if(n%i == 0){
                printf("%d ", i);
            }
        }
    }

    return 0;
}
