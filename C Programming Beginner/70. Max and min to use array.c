#include<stdio.h>
int main()
{
      int i,n,max,min,a[20];
      printf("Enter number: ");
      scanf("%d", &n);
      printf("Enter array elements:\n");

        for(i=0;i<n;i++)
    {
        printf("Enter element %d:", i+1);
        scanf("%d", &a[i]);
    }
       max=a[0];  /// initialize 1st array element
       min=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
                max=a[i];  /// max will be updated current array element
          if(a[i]<min)
                min=a[i];
        }
            printf("\nMin:%d", min);
            printf("\nMax:%d", max);
        //    for(i=0;i<n;i++)
        //    printf("\na[%d]=%d ", i,a[i+1]);
}
