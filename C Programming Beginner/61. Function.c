#include<stdio.h>
#include<stdlib.h>

   fact(int x)          /// show warning cause i have no return type..(void)
{
    int fact=1,i;
    for(i=1;i<=x;i++)
        fact=fact*i;
    printf("Factorial is %d", fact);
}

  isprime(int x)
   {
       int i;
       for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
     {
    //   continue;
         printf("\nNot Prime\n");
         return 0;
      }
    }
        printf("\nPrime\n");
   }

    fibbo(int x)
    {
        int i,cur=1,pre=0,temp;
      //  printf("%d %d", pre,cur);
        for(i=1;i<=x;i++)
        {
            temp=cur;
            cur=pre+cur;
            pre=temp;
            printf("Fibonacci: %d\n",cur);
        }
    }
     int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    fact(n);           /// value of n stored in x (4,12,27 no line)
    isprime(n);
    fibbo(n);
}

/*
   Syntax

     myDataType Function_name(dataType Value1, dataType Value2) --->mydataType=int,float,void...
   {
       ...
       ...
       return expression_of_my_Datatype;
   }
*/
