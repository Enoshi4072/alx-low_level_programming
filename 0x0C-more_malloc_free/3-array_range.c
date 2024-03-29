#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *p;
int i = 0;
int length;

if (min > max)
	return (NULL);

length = max - min + 1;

p = malloc(sizeof(int) * length);

if (p == NULL)
	return (NULL);

while (min <= max)
{
p[i] = min;
min++;
i++;
}
return (p);
}
