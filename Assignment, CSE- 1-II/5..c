#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i, n, vowel;

       printf("write the string: ");
       fgets(str, sizeof str, stdin);

    vowel = 0;
    n = strlen(str);

    for(i=0; i<n; i++)
    {

        if(str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vowel++;
        }
    }
    printf("Number of total vowel in the string: %d\n", vowel);
    return 0;
}
