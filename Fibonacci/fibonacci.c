#include <stdio.h>

int fibonacci(int n) {
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    
    /*int i, f1=0, f2=1, f;

    for(i=3; i<=n; i++) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }*/
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {

    for(int i=1; i<=100; i++) {
        printf("%d = %d\n", i, fibonacci(i));
    }

}