#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,vowel=0;
    char s[20];
    printf("Enter a string: ");
    scanf("%s", s);

    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U')||
            (s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
            vowel++;
    }
    printf("Vowels %d", vowel);
}
