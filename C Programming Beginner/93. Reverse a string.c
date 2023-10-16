#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,j,len=0;
    char s1[20];
    char s2[20];   /// char *s;
    printf("Enter string: ");
    scanf("%s", s1);
    for(i=0;s1[i]!='\0';i++)
        len++;
   j=0;
   for(i=len-1;i>=0;i--)
   {
    s2[j]=s1[i];
   j++;
   }
   s2[j]='\0';
   printf("Reverse String %s", s2);
}

