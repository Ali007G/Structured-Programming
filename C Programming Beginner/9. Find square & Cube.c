#include<stdio.h>
int main()
{
    int n,square,cube;
    printf("Enter the number: ");
    scanf("%d", &n);

    square=n*n;
    cube=n*n*n;
    printf("Square value is %d\nCube value is %d", square, cube);

    return 0;
}
