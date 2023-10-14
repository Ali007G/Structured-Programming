#include<stdio.h>

   int square(int x)
   {
      return(x*x);
   }
   int cube(int x)
   {
      return(x*x*x);
   }
   int main()
{
     int n;
     printf("Enter the number: ");
     scanf("%d", &n);
     printf("square: %d\n", square(n));
     printf("cube: %d\n", cube(n));
}
