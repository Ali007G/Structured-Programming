#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s1[10];
    printf("Enter string: ");
    scanf("%s", s1);
    printf("String in uppercase %s\n", strupr(s1));
    printf("\nString in lowercase %s\n", strlwr(s1));
    printf("\nReverse string: %s\n", strrev(s1));
    printf("\nLength is %d\n", strlen(s1));
 //   printf("\nString in uppercase %s\n", strupr(s1));
 //   printf("\nLength in lowercase %s\n", strlwr(s1));
   // strcpy(s2,s1);
   // printf("Copies string is %s", (s2));
}
