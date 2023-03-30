#include "main.h"

/**
 * print_last_digit - The function prints a number's last digit.
 * @n: the integer to get the last digit from
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
