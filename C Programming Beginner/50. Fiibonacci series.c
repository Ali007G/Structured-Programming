#include<stdio.h>
int main()
{
    int i,n,pre=0,cur=1,temp;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i=2;i<=n;i++)
    {
        temp=cur;
        cur=pre+cur;
        pre=temp;
        printf("%d ", cur);
    }
}

