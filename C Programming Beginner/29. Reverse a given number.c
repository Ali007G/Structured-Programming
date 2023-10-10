#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("enter number: ");
    scanf("%d", &num);

    while(num>0)
    {
        i=num%10;
        printf("%d ", i);
    //  sum=sum+i;
        num=num/10;
     }
     // printf("sum of digits: %d", sum);
}
