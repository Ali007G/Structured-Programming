#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,len=0;
    char s[50];    /// char *s;
    printf("Enter string: ");
    scanf("%s", s);
    for(i=0;s[i]!='\0';i++)
        len++;
    printf("The length of string is %d", len);
}
