#include<stdio.h>
int main()
{
    int i,n,a[20];
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter array element:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d", &a[i]);
    }
    for(i=n-1;i>=0;i--)
        printf("\nElement %d:%d",i+1,a[i]);

}

