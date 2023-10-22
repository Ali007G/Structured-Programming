#include<stdio.h>
int main()
{
    int n,a,i;
    //printf("Enter number: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        scanf("%d", &a);
      if(a%2==0)
      printf("Even\n");
     else
      printf("Odd\n");
    }
    return 0;
}
