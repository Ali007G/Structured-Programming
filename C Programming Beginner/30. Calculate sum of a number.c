#include<stdio.h>
int main()
{
    int rem,n,sum=0;
    printf("enter number: ");
    scanf("%d", &n);

    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;;
     }
      printf("sum of digits: %d", sum);
}

// input: 123
// output: 6

