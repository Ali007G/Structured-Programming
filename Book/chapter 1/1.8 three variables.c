#include<stdio.h>
int main()
{

    float a,b,c,x;
    scanf("%f %f %f", &a,&b,&c);
    x=a/(b-c);
    printf("value of x is %f", x);

    return 0;
}

/*
a) a=250,b= ,c=85 25, here x= 4.17
b) a = 300, b = 70, c = 70, here x= infinity
*/
