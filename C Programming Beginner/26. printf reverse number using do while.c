#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter number: ");
    scanf("%d", &n);

    i=n;
    do
  {
      printf("%d\t", i);
      i--;
  }
   while(i>=1);
}

