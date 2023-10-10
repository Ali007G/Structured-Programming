#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);

    if(a>b)
        printf("largest value is %d", a);
    else
    printf("largest value is %d", b);

    return 0;
}
