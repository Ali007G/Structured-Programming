#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr1, *ptr2;
	int n=5, i;
	printf("Enter number of elements: %d\n", n);

	ptr1 = (int*)malloc(n * sizeof(int));

	ptr2 = (int*)calloc(n, sizeof(int));

	if (ptr1 == NULL || ptr2 == NULL)
    {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else
	{
		printf("Memory successfully allocated using malloc.\n");

		free(ptr1);
		printf("Malloc Memory successfully freed.\n");

		printf("\nMemory successfully allocated using calloc.\n");

		free(ptr2);
		printf("Calloc Memory successfully freed.\n");
	}

	return 0;
}

/// Dynamic memory allocation

