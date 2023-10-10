#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: The index where the value is located at or
 * -1 when the value is absent or the array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right, i;

	left = 0;
	right = size - 1;
	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in the array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
			{
				printf("\n");
			}
		}
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			right = mid - 1;
		if (value > array[mid])
			left = mid + 1;
	}
	return (-1);
}
