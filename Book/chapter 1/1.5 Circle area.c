#include<stdio.h>
#define pi 3.1416

int main()
{
    float r, area;
    printf("enter the area: ");
    scanf("%f", &r);

    area= pi*r*r;
    printf("%.2f", area);

    return 0;

}
