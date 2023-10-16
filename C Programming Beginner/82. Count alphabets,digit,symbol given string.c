/*
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char s[]="Co#$de@!Gem452";
    int i,alphabets=0,digit=0,symbol=0;
   // printf("Enter a string: ");
   // scanf("%s", s);

    for(i=0;s[i]!='\0';i++)
        if(isalpha(s[i]))
           alphabets++;
        else if(isdigit(s[i]))
           digit++;
        else
           symbol++;

    printf("\nAlphabets %d", alphabets);
    printf("\nDigit %d", digit);
    printf("\nsymbol %d", symbol);

} */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char s[20];
    int i,alphabets=0,digit=0,symbol=0;
    printf("Enter a string: ");
    scanf("%s", s);

    for(i=0;s[i]!='\0';i++)
        if(isalpha(s[i]))
           alphabets++;
        else if(isdigit(s[i]))
           digit++;
        else
           symbol++;

    printf("\nAlphabets: %d", alphabets);
    printf("\nDigit: %d", digit);
    printf("\nsymbol: %d", symbol);

}
