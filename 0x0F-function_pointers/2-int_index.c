#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array to search the integer in
 * @size: number of the elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which
 * the cmp function does not return 0, if no match is found
 * return -1
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
	return (i);
}
}
return (-1);
}
