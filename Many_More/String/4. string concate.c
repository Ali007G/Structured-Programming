#include <stdio.h>
#include <string.h>

/// merge, append, concate
int main()
{
    char str1[50] = "Hello, ";
    char str2[] = "World!";


    strcat(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}

