#include<stdio.h>
int main()
{
      int i,n,a[20];
      printf("Enter number: ");
      scanf("%d", &n);
      printf("Enter array elements:\n");

        for(i=0;i<n;i++)
    {
        printf("Enter element %d:", i+1);
        scanf("%d", &a[i]);
    }
      for(i=0;i<n;i++)
        if(a[i]<0)
        printf("Negative %d\n", a[i]);
        else
        printf("Positive %d\n", a[i]);
}
