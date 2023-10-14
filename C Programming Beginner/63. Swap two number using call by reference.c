#include<stdio.h>

    swap(int *x,int *y)            ///  int *x=&a ---> *&a(value of address of a)
    {                              ///  int *y=&b ---> *&b(value of address of b)
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    //  return temp; [not mandatory]
    }

    int main()
{
       int a,b;
       printf("Enter two number to swap: ");
       scanf("%d %d", &a, &b);
       printf("\nBefore swaping: a=%d, b=%d\n", a,b);
       swap(&a,&b);
       printf("\nAfter swaping: a=%d, b=%d\n", a,b);
}
