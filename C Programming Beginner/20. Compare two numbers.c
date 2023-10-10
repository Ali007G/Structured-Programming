#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);

    if(a>b)
    printf("%d is greater");
    else if(a<b)
    printf("%d is smaller");
    else
    printf("Both are equal");

    return 0;
}

