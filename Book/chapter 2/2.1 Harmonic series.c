#include<stdio.h>
int main()
{
    int i,n, sum=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i==n)
            printf("1/%d", i);
        else
            printf("1/%d+", i);
        sum=sum+1/i;
    }
    return 0;
}
