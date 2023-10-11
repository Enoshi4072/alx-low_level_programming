#include "search_algos.h"
int b_search(int *array, size_t low, size_t high, int value);
/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if absent
 * or the array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
if (array == NULL || size == 0)
	return (-1);

if (array[0] == value)
	return (0);
while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}

printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);

if (bound >= size)
	bound = size - 1;
return (b_search(array, bound / 2, bound, value));
}

/**
 * b_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @low: the lower index to start the search
 * @high: the higher index to end the search
 * @value: the value to search for
 * Return: the index where value is located or -1 if absent
 * or the array is NULL
 */
int b_search(int *array, size_t low, size_t high, int value)
{
size_t i, mid;
if (array == NULL)
	return (-1);

while (low <= high)
{
mid = low + (high - low) / 2;
printf("Searching in array: %d", array[low]);
for (i = low + 1; i <= high; i++)
	printf(", %d", array[i]);
printf("\n");

if (array[mid] == value)
	return (mid);
else if (array[mid] < value)
	low = mid + 1;
else
	high = mid - 1;
}

return (-1);
}
