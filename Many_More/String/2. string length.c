#include <stdio.h>
#include <string.h>

int main()
{
    char inputString[50];

    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = strlen(inputString);

    printf("Length of the string is: %d\n", length);

    return 0;
}

