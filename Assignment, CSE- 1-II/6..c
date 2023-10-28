#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[100];
    int n,i;
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
	   n=strlen(str);
	   //printf("\n");
	   printf("The characters of the string in reverse are : ");
       for(i=n;i>=0;i--)
        {
          printf("%c", str[i]);
        }

    return 0;
}
