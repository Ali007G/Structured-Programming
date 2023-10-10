#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n>0)
    printf("%d is positive", n);
    else if(n<0)
    printf("%d is negative", n);
    else
    printf("%d is null", n);

    return 0;
}

