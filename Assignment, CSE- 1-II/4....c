#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "Structure Programming";

    int i, j, max, length = strlen(string);
    char maxChar = string[0];
    int freq[length];

    for(i = 0; i < length; i++) {
        freq[i] = 1;
        for(j = i+1; j < length; j++) {
            if(string[i] == string[j] && string[i] != ' ' && string[i] != '0') {
                freq[i]++;
                string[j] = '0';
            }
        }
    }
    max = freq[0];
    for(i = 0; i < length; i++) {
    if(max < freq[i]) {
            max = freq[i];
            maxChar = string[i];
        }
    }
    printf("Most occurrence character: %c", maxChar);

    return 0;
}
