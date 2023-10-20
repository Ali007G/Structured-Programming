#include<stdio.h>
int main()
{
    float a,b,div;
    printf("Enter two number: ");
    scanf("%f %f", &a,&b);

    div=a/b;
    printf("\na=%f b=%f div=%.4f", a,b,div);
    return 0;

}
