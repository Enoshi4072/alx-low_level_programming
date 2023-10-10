#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or
 * -1 if fthe value is absent or the array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t left, right, i;

	left = 0;
	right = step;
	if (array == NULL || size == 0)
		return (-1);
	while (right < size && array[right] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		left = right;
		right += step;
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	for (i = left; i < size && i <= right; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
