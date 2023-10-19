#include<stdio.h>
int main()
{
    float X,Y,Sum,Difference,Product,Division;
    scanf("%f %f", &X, &Y);

    Sum=X+Y;
    Difference=X-Y;
    Product=X*Y;
    Division=X/Y;
    printf("X= %f          Y= %f\n", X,Y);
    printf("Sum = %f       Difference = %f\n",Sum,Difference);
    printf("Product = %f   Division = %f\n", Product,Division);

    return 0;
}
