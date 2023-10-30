#include <stdio.h>
#include <string.h>
//#define MAX_SIZE 100

void removeAll(char *, const char);
int main()
{
    char str[100],toRemove;
    //char toRemove;

    printf("Enter any string: ");
    gets(str);

    printf("character that you want remove from string: ");
    toRemove = getchar();

    removeAll(str, toRemove);
    printf("String after removing '%c': %s", toRemove, str);
    return 0;
}
void removeAll(char * str, const char toRemove)
{
    int i, j;
    int temp = strlen(str);

    for(i=0; i<temp; i++)
    {
        if(str[i] == toRemove)
        {
            for(j=i; j<temp; j++)
            {
                str[j] = str[j+1];
            }
            temp--;
            i--;
        }
    }
}
