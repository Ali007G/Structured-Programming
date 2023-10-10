#include<stdio.h>
int main()
{
    float area, r;
    printf("enter the radius: ");
    scanf("%f", &r);

    area=3.1416*r*r;
    printf("\narea is %5.3f", area);

    return 0;
}
