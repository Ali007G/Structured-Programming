/*
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter a string: ");
    scanf("%s", s1);
    printf("Enter a string: ");
    scanf("%s", s2);

    if(strcmp(s1,s2)>0)
            printf("String 1 is greater");
    else if(strcmp(s1,s2)<0)
            printf("String 2 is greater");
    else
        printf("String is equal");
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char s1[10], s2[10];
    printf("Enter first string: ");
    scanf("%s", &s1);
    printf("Enter second string: ");
    scanf("%s", &s2);

    strcpy(s2,s1); ///s1 value copy to s2
    printf("Copies string is %s", (s2));

}

