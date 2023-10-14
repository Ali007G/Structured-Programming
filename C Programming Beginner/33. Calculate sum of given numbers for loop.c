#include<stdio.h>
int main()
{
    int i,n,a,sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
   printf("Numbers entered..\n");

    for(i=1;i<=n;i++)
    {
        scanf("%d", &a);
        sum=sum+a;
    }
     printf("sum of these: %d", sum);
}
