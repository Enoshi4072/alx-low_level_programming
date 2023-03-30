#include "main.h"

/**
 * print_sign - The function prints the sign of a number
 * @n: refers to the interger to check
 * Return: 1 and prints + when n>zero
 * returns 0 and prints 0 if n is zero
 * returns -1 and prints - if n is < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
