#include <stdio.h>

int main()
{
    int *p;
    int q = 10;

    p = &q; /// 1000
    //p++;
    //printf("%d\n", p);

    //*p++; // wrong
    //printf("Value: %d\n", q);
    (*p)++; /// 1000- location actual/real - 10++ = 11
    printf("Value of q: %d\n", q);///11

    return 0;
}
