#include<stdio.h>
 int main()
{
   int a, B;
   printf("a= ");
   scanf("%d", &a);
   printf("B= ");
   scanf("%d", &B);
    a=a+B;
    B=a-B;
    a=a-B;
    printf("\na=%d \nB=%d",a,B);
return 0;
}
