#include <stdio.h>
#include "main.h"

/**
 * print_array - the funxtion prints elements n
 * of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		if (array == 0)
			printf("%d", a[array]);
		else
			printf(", %d", a[array]);
	}
		printf("\n");
}
