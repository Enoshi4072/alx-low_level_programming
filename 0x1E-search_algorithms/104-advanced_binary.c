#include "search_algos.h"
int binary_recursive_search(int *array, size_t low, size_t high, int value);
/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using an advanced Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the index where the first occurrence
 * of the value is located, or -1 if absent or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
	return (-1);

return (binary_recursive_search(array, 0, size - 1, value));
}

/**
 * binary_recursive_search - recursive binary search function
 * @array: a pointer to the first element of the array
 * @low: the lower index of the current search range
 * @high: the upper index of the current search range
 * @value: the value to search for
 * Return: the index where the first occurrence of
 * the value is located, or -1 if absent or the array is NULL
 */
int binary_recursive_search(int *array, size_t low, size_t high, int value)
{
size_t i, mid;

if (low > high)
	return (-1);

printf("Searching in array: %d", array[low]);
for (i = low + 1; i <= high; i++)
	printf(", %d", array[i]);
printf("\n");

mid = low + (high - low) / 2;

if (array[mid] == value)
{
if (mid == 0 || array[mid - 1] != value)
	return (mid);
else
	return (binary_recursive_search(array, low, mid, value));
}
else if (array[mid] < value)
	return (binary_recursive_search(array, mid + 1, high, value));
else
	return (binary_recursive_search(array, low, mid, value));
}
