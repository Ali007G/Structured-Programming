#include<stdio.h>

int digit(int n)
{
    int temp=1;
    while(n>10){
        n=n/10;
        temp=temp*10;
    }
    return temp;
}
  void main(){
    int num,temp,a;
    scanf("%d",&num);
    temp=digit(num);
    while(temp>0)
    {
        a=num/temp;
        a=a%10;
        printf("%d ",a);
        temp=temp/10;
    }
}
