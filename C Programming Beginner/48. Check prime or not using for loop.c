#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,num;
   // printf("Enter number: ");
    scanf("%d", &num);

    for(i=2;i<=num/2;i++)
    {
        if(num%i==1)
     {
       // continue;
         printf("Prime\n");
         exit(0);
      }
    }
        printf("Not Prime\n");
}
