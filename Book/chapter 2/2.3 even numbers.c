#include<stdio.h>
int main()
{
    int sn,en,sum=0,i;   // sn=starting number, en=ending number
    scanf("%d %d", &sn,&en);

    for(i=sn;i<=en;i++)
    {
       if(i%2==0)
    printf("%d\n", i);
    sum=sum+i;
    }
}
