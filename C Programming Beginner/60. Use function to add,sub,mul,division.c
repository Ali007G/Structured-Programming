/*
   Syntax

     myDataType Function_name(dataType Value1, dataType Value2) --->mydataType=int,float,void...
   {
       ...
       ...
       return expression_of_my_Datatype;
   }
/*
/*
#include<stdio.h>

int add(int x,int y)
{
    return (x+y);           /// wheneven this func call & we pass 2 numbers &
}                           /// it will add these numbers  & return int value
int sub(int x,int y)
{
    return (x-y);
}
int mul(int x,int y)
{
    return (x*y);
}
int div(int x,int y)
{
    return (x/y);
}

int main()
{

      int a,b;
      printf("Enter the number of a and b: ");
      scanf("%d %d", &a, &b);

      printf("Addition: %d\n", add(a,b));             ///add(a,b)--> calling function, it'll go int add mean line 3,4,5,6..
      printf("Subtraction: %d\n", sub(a,b));          ///where x=a,y=b....a,b local func of main function, x,y local func of add func..
      printf("Multiplication: %d\n", mul(a,b));
      printf("Division: %d", div(a,b));

} */

#include<stdio.h>

int add(int a, int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int x=add(10,20);
    printf("Addition is: %d", x);
}
