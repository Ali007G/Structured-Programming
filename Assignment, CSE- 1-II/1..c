#include <stdio.h>
int functionpd(int x)
{
    int arr[100];
    int i=0;
    int j,r;
    while(x!=0)
    {
        r=x%10;
        arr[i]=r;
        i++;
        x=x/10;
    }
    for (j=i-1;j>-1;j--)
   {
        printf("%d ", arr[j]);
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    functionpd(x);
    return 0;
}
