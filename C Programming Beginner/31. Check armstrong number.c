#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,temp,sum=0;
    printf("Enter number: ");
    scanf("%d", &n);

    temp=n;
    while(n>0)
    {                                      /// N=153=temp;
        i=n%10;                           ///  ARMSTRONG ==> 1^3+5^3+3^3=1+125+27=153
        sum=sum+pow(i,3);                 ///  sum=sum+i*i*i
        n=n/10;                           ///  at the end, sum also come 153 that mean temp equal sum..
    }
      if(temp==sum)
        printf("Armstrong number");
      else
        printf("Not an Armstrong number");
}
