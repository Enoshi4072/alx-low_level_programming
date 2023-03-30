#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int addition = 0;
	va_list argus;

	va_start(argus, n);

	for (i = 0; i < n; i++)
		addition += va_arg(argus, int);

	va_end(argus);

	return (addition);
}
