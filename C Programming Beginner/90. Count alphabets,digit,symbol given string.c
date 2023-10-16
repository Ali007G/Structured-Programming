///without using inbuilt function
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char s[100];
    int i,alphabets=0,digit=0,symbol=0;
    printf("Enter a string: ");
    scanf("%s", s);

    for(i=0;s[i]!='\0';i++)
       {
         if(((s[i]>='A') && (s[i]<='Z'))||((s[i]>='a') && (s[i]<='z')))
            alphabets++;
         else if((s[i]>='0' && s[i]<='9'))
            digit++;
         else
           symbol++;
       }
       printf("Alphabets: %d\n", alphabets);
       printf("Digit: %d\n", digit);
       printf("Symbol: %d", symbol);
}
