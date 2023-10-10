#include<stdio.h>
int main()
{
    float si,p,n,r;
    printf("Enter the values of p,n,r: ");
    scanf("%f%f%f", &p,&n,&r);

    si=p*n*r/100;
    printf("simple interest is %.2f", si);

    return 0;
}

// simple interest = (p*n*r)/100
