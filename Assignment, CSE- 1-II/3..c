#include<stdio.h>
int factorial(int x);
int main()
{
    int num,x;
    scanf("%d",&num);
    x=factorial(num);
    printf("%d",x);
    return 0;
}
int factorial(int x)
{
    if(x==0 || x==1)
        return 1;
    else
        return (x*factorial(x-1));
}
