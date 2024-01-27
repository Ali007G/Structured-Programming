#include <stdio.h>

int main()
{
    int number = 10;
    int *ptr;

    ptr = &number; // Assigning address of number to ptr

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);
    printf("Value of ptr: %p\n", ptr);
    printf("Value stored at the address pointed by ptr: %d\n", *ptr);

    return 0;
}

