#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);

    printf("Before swapping..\na=%d b=%d", a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n\nAfter swapping..\na=%d b=%d", a,b);

    return 0;
}
