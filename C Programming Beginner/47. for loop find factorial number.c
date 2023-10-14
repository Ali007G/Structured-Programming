#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
       fact=fact*i;         /// fact=fact*i--> (1)*1/(1)*2/(2)*3/(3)*4/(4)*5
       printf("\nFactorial is %d", fact);
}
