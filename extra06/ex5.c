#include <stdio.h>

int main()
{
    int x = 10, y=20;
    int* p1;
    int* p2;
    p1 = &x;
    p2 = &y;
    (*p1)++;

    printf("--%d--",&(*p2));

    return 0;
}