#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int j = 0; j < 10; j++){
        for(int i = 0; i < 10; i++){
            if(j > i){
                printf("  ");
            }else printf("# ");
        }
        printf("\n");
    }

    return 0;
}
