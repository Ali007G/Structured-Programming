#include<stdio.h>
int main()
{
    typedef float measure;
    measure r,area;
    scanf("%f", &r);

    area= 3.1416*r*r;
    printf("area of radius %.2f, %.2f", r,area);

    return 0;
}
