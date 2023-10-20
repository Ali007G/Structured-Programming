#include<stdio.h>
#define pi 3.1416
int main()
{
    int r;
    float V;
    printf("enter the number: ");
    scanf("%d", &r);

    V=(4*pi*r*r*r)/3;  // Volume
    printf("Volume is %.2f", V);
    return 0;

}
