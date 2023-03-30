#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arguments;

va_start(arguments, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(arguments, int));
if (i != n - 1 && separator != NULL)
	printf("%s", separator);
}

va_end(arguments);

printf("\n");
}
