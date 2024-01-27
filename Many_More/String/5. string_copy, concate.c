
/*
/// copy

#include <stdio.h>

void str_cpy(char s1[], char s2[]);

int main()
{
    char s1[20]="bangla"; /// Make sure the arrays are large enough to hold the strings
    char s2[] = "desh";

    /// Call the str_cpy function to copy s2 to s1
    str_cpy(s1, s2);

    /// Print the copied string
    printf("Copied string: %s\n", s1);

    return 0;
}

void str_cpy(char s1[], char s2[])
{
    int i;
    /// Copy characters from s2 to s1 until null terminator is encountered
    for(i = 0; s2[i] != '\0'; i++)
        s1[i] = s2[i];
    /// Add null terminator to the end of s1
    s1[i] = '\0';
}
*/


/// concatenation

#include <stdio.h>

void str_cat(char s1[], char s2[]);

int main() {
    char s1[20] = "bangla"; // Make sure the arrays are large enough to hold the strings
    char s2[] = "desh";
    // Call the str_cat function to concatenate s2 to s1
    str_cat(s1, s2);
    // Print the concatenated string
    printf("Concatenated string: %s\n", s1);

    return 0;
}

void str_cat(char s1[], char s2[])
{
    int i, j;

    // Find the end of s1
    for(i = 0; s1[i] != '\0'; i++);

    // Concatenate characters from s2 to s1
    for(j = 0; s2[j] != '\0'; j++, i++) {
        s1[i] = s2[j];
    }

    // Add null terminator to the end of s1
    s1[i] = '\0';
}

madam
