#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n%5==0)
    printf("Number is divisible by 5");
    else
    printf("Number is not divisile by 5");

    return 0;
}

